/****************************************************************
 *
 *        Copyright 2013-2015,2017, Big Switch Networks, Inc.
 *
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *        http://www.eclipse.org/legal/epl-v10.html
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 *
 ****************************************************************/

/******************************************************************************
 *
 *  /module/inc/ofconnectionmanager_config.h
 *
 *  OFConnectionManager Config Header
 *
 *****************************************************************************/
#ifndef __OFCONNECTIONMANAGER_CONFIG_H__
#define __OFCONNECTIONMANAGER_CONFIG_H__

#ifdef GLOBAL_INCLUDE_CUSTOM_CONFIG
#include <global_custom_config.h>
#endif

#ifdef OFCONNECTIONMANAGER_INCLUDE_CUSTOM_CONFIG
#include <ofconnectionmanager_custom_config.h>
#endif



/* <auto.start.cdefs(OFCONNECTIONMANAGER_CONFIG_HEADER).header> */
#include <AIM/aim.h>
/**
 * OFCONNECTIONMANAGER_CONFIG_INCLUDE_LOGGING
 *
 * Include or exclude logging. */


#ifndef OFCONNECTIONMANAGER_CONFIG_INCLUDE_LOGGING
#define OFCONNECTIONMANAGER_CONFIG_INCLUDE_LOGGING 1
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_LOG_OPTIONS_DEFAULT
 *
 * Default enabled log options. */


#ifndef OFCONNECTIONMANAGER_CONFIG_LOG_OPTIONS_DEFAULT
#define OFCONNECTIONMANAGER_CONFIG_LOG_OPTIONS_DEFAULT AIM_LOG_OPTIONS_DEFAULT
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_LOG_BITS_DEFAULT
 *
 * Default enabled log bits. */


#ifndef OFCONNECTIONMANAGER_CONFIG_LOG_BITS_DEFAULT
#define OFCONNECTIONMANAGER_CONFIG_LOG_BITS_DEFAULT AIM_LOG_BITS_DEFAULT
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_LOG_CUSTOM_BITS_DEFAULT
 *
 * Default enabled custom log bits. */


#ifndef OFCONNECTIONMANAGER_CONFIG_LOG_CUSTOM_BITS_DEFAULT
#define OFCONNECTIONMANAGER_CONFIG_LOG_CUSTOM_BITS_DEFAULT 0
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_PORTING_STDLIB
 *
 * Default all porting macros to use the C standard libraries. */


#ifndef OFCONNECTIONMANAGER_CONFIG_PORTING_STDLIB
#define OFCONNECTIONMANAGER_CONFIG_PORTING_STDLIB 1
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
 *
 * Include standard library headers for stdlib porting macros. */


#ifndef OFCONNECTIONMANAGER_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
#define OFCONNECTIONMANAGER_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS OFCONNECTIONMANAGER_CONFIG_PORTING_STDLIB
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_INCLUDE_UCLI
 *
 * Include generic uCli support. */


#ifndef OFCONNECTIONMANAGER_CONFIG_INCLUDE_UCLI
#define OFCONNECTIONMANAGER_CONFIG_INCLUDE_UCLI 0
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_ECHO_OPTIMIZATION
 *
 * Optimize echo requests based on controller activity. Otherwise echo requests are sent periodically regardless of other activity. */


#ifndef OFCONNECTIONMANAGER_CONFIG_ECHO_OPTIMIZATION
#define OFCONNECTIONMANAGER_CONFIG_ECHO_OPTIMIZATION 0
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_OF_VERSION
 *
 * OpenFlow version to be advertised in HELLO message */


#ifndef OFCONNECTIONMANAGER_CONFIG_OF_VERSION
#define OFCONNECTIONMANAGER_CONFIG_OF_VERSION OF_VERSION_1_0
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_MAX_MSGS_PER_TICK
 *
 * Maximum number of OpenFlow messages to process per socket in one tick of the event loop. */


#ifndef OFCONNECTIONMANAGER_CONFIG_MAX_MSGS_PER_TICK
#define OFCONNECTIONMANAGER_CONFIG_MAX_MSGS_PER_TICK 10
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_ASYNC_MSG_OF_VERSION
 *
 * OpenFlow version to use for asynchronous message when no controller is connected. */


#ifndef OFCONNECTIONMANAGER_CONFIG_ASYNC_MSG_OF_VERSION
#define OFCONNECTIONMANAGER_CONFIG_ASYNC_MSG_OF_VERSION OF_VERSION_1_3
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_MAX_BUNDLE_MSGS
 *
 * Maximum number of OpenFlow messages to allow in a bundle */


#ifndef OFCONNECTIONMANAGER_CONFIG_MAX_BUNDLE_MSGS
#define OFCONNECTIONMANAGER_CONFIG_MAX_BUNDLE_MSGS 256*1024
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_MAX_BUNDLE_BYTES
 *
 * Maximum cumulative size of OpenFlow messages to allow in a bundle */


#ifndef OFCONNECTIONMANAGER_CONFIG_MAX_BUNDLE_BYTES
#define OFCONNECTIONMANAGER_CONFIG_MAX_BUNDLE_BYTES 50*1024*1024
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_MAX_SUBBUNDLES
 *
 * Maximum number of subbundles in a bundle */


#ifndef OFCONNECTIONMANAGER_CONFIG_MAX_SUBBUNDLES
#define OFCONNECTIONMANAGER_CONFIG_MAX_SUBBUNDLES 1023
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_FIPS
 *
 * Override TLS cipher list config file setting with FIPS cipher list */


#ifndef OFCONNECTIONMANAGER_CONFIG_FIPS
#define OFCONNECTIONMANAGER_CONFIG_FIPS 0
#endif

/**
 * OFCONNECTIONMANAGER_CONFIG_FIPS_CIPHER_LIST
 *
 * TLS cipher list for FIPS */


#ifndef OFCONNECTIONMANAGER_CONFIG_FIPS_CIPHER_LIST
#define OFCONNECTIONMANAGER_CONFIG_FIPS_CIPHER_LIST "TLSv1.2:kRSA:!eNULL:!aNULL"
#endif



/**
 * All compile time options can be queried or displayed
 */

/** Configuration settings structure. */
typedef struct ofconnectionmanager_config_settings_s {
    /** name */
    const char* name;
    /** value */
    const char* value;
} ofconnectionmanager_config_settings_t;

/** Configuration settings table. */
/** ofconnectionmanager_config_settings table. */
extern ofconnectionmanager_config_settings_t ofconnectionmanager_config_settings[];

/**
 * @brief Lookup a configuration setting.
 * @param setting The name of the configuration option to lookup.
 */
const char* ofconnectionmanager_config_lookup(const char* setting);

/**
 * @brief Show the compile-time configuration.
 * @param pvs The output stream.
 */
int ofconnectionmanager_config_show(struct aim_pvs_s* pvs);

/* <auto.end.cdefs(OFCONNECTIONMANAGER_CONFIG_HEADER).header> */

/**
 * @brief Commit connection manager staged configuration.
 */
void ofconnectionmanager_config_commit(void);

#endif /* __OFCONNECTIONMANAGER_CONFIG_H__ */
