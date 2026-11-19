/*
 * FreeRTOS Kernel V11.1.0
 * Copyright (C) 2021 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * https://www.FreeRTOS.org
 * https://github.com/FreeRTOS
 *
 */

/*******************************************************************************
 * This file provides an example FreeRTOSConfig.h header file, inclusive of an
 * abbreviated explanation of each configuration item.  Online and reference
 * documentation provides more information.
 * https://www.freertos.org/a00110.html
 *
 * Constant values enclosed in square brackets ('[' and ']') must be completed
 * before this file will build.
 *
 * Use the FreeRTOSConfig.h supplied with the RTOS port in use rather than this
 * generic file, if one is available.
 ******************************************************************************/

#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H


/* clang-format off */
//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------


/******************************************************************************/
/* Hardware description related definitions. **********************************/
/******************************************************************************/

/* In most cases, configCPU_CLOCK_HZ must be set to the frequency of the clock
 * that drives the peripheral used to generate the kernels periodic tick
 * interrupt. The default value is set to 20MHz and matches the QEMU demo
 * settings.  Your application will certainly need a different value so set this
 * correctly. This is very often, but not always, equal to the main system clock
 * frequency. */

// <h>Hardware description related definitions

//  <o>configCPU_CLOCK_HZ <0-0xFFFFFFFF>
//  <i> In most cases, configCPU_CLOCK_HZ must be set to the frequency of the clock
//  <i> that drives the peripheral used to generate the kernels periodic tick
//  <i> interrupt. The default value is set to 20MHz and matches the QEMU demo
//  <i> settings.  Your application will certainly need a different value so set this
//  <i> correctly. This is very often, but not always, equal to the main system clock
//  <i> frequency. 
#define configCPU_CLOCK_HZ    ( ( unsigned long ) 20000000 )

/* configSYSTICK_CLOCK_HZ is an optional parameter for ARM Cortex-M ports only.
 *
 * By default ARM Cortex-M ports generate the RTOS tick interrupt from the
 * Cortex-M SysTick timer. Most Cortex-M MCUs run the SysTick timer at the same
 * frequency as the MCU itself - when that is the case configSYSTICK_CLOCK_HZ is
 * not needed and should be left undefined. If the SysTick timer is clocked at a
 * different frequency to the MCU core then set configCPU_CLOCK_HZ to the MCU
 * clock frequency, as normal, and configSYSTICK_CLOCK_HZ to the SysTick clock
 * frequency.  Not used if left undefined.
 * The default value is undefined (commented out).  If you need this value bring
 * it back and set it to a suitable value. */

/*
 #define configSYSTICK_CLOCK_HZ                  [Platform specific]
 */

// </h>

/******************************************************************************/
/* Scheduling behaviour related definitions. **********************************/
/******************************************************************************/

// <h>Scheduling behaviour related definitions

/* configTICK_RATE_HZ sets frequency of the tick interrupt in Hz, normally
 * calculated from the configCPU_CLOCK_HZ value. */

//  <o>configTICK_RATE_HZ <1-0xFFFFFFFF>
//  <i> configTICK_RATE_HZ sets frequency of the tick interrupt in Hz, normally
//  <i> calculated from the configCPU_CLOCK_HZ value.
#define configTICK_RATE_HZ                         100

/* Set configUSE_PREEMPTION to 1 to use pre-emptive scheduling.  Set
 * configUSE_PREEMPTION to 0 to use co-operative scheduling.
 * See https://www.freertos.org/single-core-amp-smp-rtos-scheduling.html. */

//  <o>configUSE_PREEMPTION
//    <0=>0 (Co-operative scheduling)
//    <1=>1 (Pre-emptive scheduling)
//  <i> Set configUSE_PREEMPTION to 1 to use pre-emptive scheduling.  Set
//  <i> configUSE_PREEMPTION to 0 to use co-operative scheduling.
//  <i> See https://www.freertos.org/single-core-amp-smp-rtos-scheduling.html.
#define configUSE_PREEMPTION                       1

/* Set configUSE_TIME_SLICING to 1 to have the scheduler switch between Ready
 * state tasks of equal priority on every tick interrupt.  Set
 * configUSE_TIME_SLICING to 0 to prevent the scheduler switching between Ready
 * state tasks just because there was a tick interrupt.  See
 * https://freertos.org/single-core-amp-smp-rtos-scheduling.html. */

//  <q>configUSE_TIME_SLICING
//  <i> Set configUSE_TIME_SLICING to 1 to have the scheduler switch between Ready
//  <i> state tasks of equal priority on every tick interrupt.  Set
//  <i> configUSE_TIME_SLICING to 0 to prevent the scheduler switching between Ready
//  <i> state tasks just because there was a tick interrupt.  See
//  <i> https://freertos.org/single-core-amp-smp-rtos-scheduling.html.
#define configUSE_TIME_SLICING                     0

/* Set configUSE_PORT_OPTIMISED_TASK_SELECTION to 1 to select the next task to
 * run using an algorithm optimised to the instruction set of the target
 * hardware - normally using a count leading zeros assembly instruction.  Set to
 * 0 to select the next task to run using a generic C algorithm that works for
 * all FreeRTOS ports.  Not all FreeRTOS ports have this option.  Defaults to 0
 * if left undefined. */

//  <q>configUSE_PORT_OPTIMISED_TASK_SELECTION
//  <i> Set configUSE_PORT_OPTIMISED_TASK_SELECTION to 1 to select the next task to
//  <i> run using an algorithm optimised to the instruction set of the target
//  <i> hardware - normally using a count leading zeros assembly instruction.  Set to
//  <i> 0 to select the next task to run using a generic C algorithm that works for
//  <i> all FreeRTOS ports.  Not all FreeRTOS ports have this option.  Defaults to 0
//  <i> if left undefined.
#define configUSE_PORT_OPTIMISED_TASK_SELECTION    0

/* Set configUSE_TICKLESS_IDLE to 1 to use the low power tickless mode.  Set to
 * 0 to keep the tick interrupt running at all times.  Not all FreeRTOS ports
 * support tickless mode. See
 * https://www.freertos.org/low-power-tickless-rtos.html Defaults to 0 if left
 * undefined. */

//  <q>configUSE_TICKLESS_IDLE
//  <i> Set configUSE_TICKLESS_IDLE to 1 to use the low power tickless mode.  Set to
//  <i> 0 to keep the tick interrupt running at all times.  Not all FreeRTOS ports
//  <i> support tickless mode. See
//  <i> https://www.freertos.org/low-power-tickless-rtos.html Defaults to 0 if left
//  <i> undefined.
#define configUSE_TICKLESS_IDLE                    0

/* configMAX_PRIORITIES Sets the number of available task priorities.  Tasks can
 * be assigned priorities of 0 to (configMAX_PRIORITIES - 1).  Zero is the
 * lowest priority. */

//  <o>configMAX_PRIORITIES <1-256>
//  <i> configMAX_PRIORITIES Sets the number of available task priorities.  Tasks can
//  <i> be assigned priorities of 0 to (configMAX_PRIORITIES - 1).  Zero is the
//  <i> lowest priority.
#define configMAX_PRIORITIES                       5

/* configMINIMAL_STACK_SIZE defines the size of the stack used by the Idle task
 * (in words, not in bytes!).  The kernel does not use this constant for any
 * other purpose.  Demo applications use the constant to make the demos somewhat
 * portable across hardware architectures. */

//  <o>configMINIMAL_STACK_SIZE <0-65535>
//  <i> configMINIMAL_STACK_SIZE defines the size of the stack used by the Idle task
//  <i> (in words, not in bytes!).  The kernel does not use this constant for any
//  <i> other purpose.  Demo applications use the constant to make the demos somewhat
//  <i> portable across hardware architectures.
#define configMINIMAL_STACK_SIZE                   128

/* configMAX_TASK_NAME_LEN sets the maximum length (in characters) of a task's
 * human readable name.  Includes the NULL terminator. */

//  <o>configMAX_TASK_NAME_LEN <1-256>
//  <i> configMAX_TASK_NAME_LEN sets the maximum length (in characters) of a task's
//  <i> human readable name.  Includes the NULL terminator.
#define configMAX_TASK_NAME_LEN                    16

/* Time is measured in 'ticks' - which is the number of times the tick interrupt
 * has executed since the RTOS kernel was started.
 * The tick count is held in a variable of type TickType_t.
 *
 * configTICK_TYPE_WIDTH_IN_BITS controls the type (and therefore bit-width) of
 * TickType_t:
 *
 * Defining configTICK_TYPE_WIDTH_IN_BITS as TICK_TYPE_WIDTH_16_BITS causes
 * TickType_t to be defined (typedef'ed) as an unsigned 16-bit type.
 *
 * Defining configTICK_TYPE_WIDTH_IN_BITS as TICK_TYPE_WIDTH_32_BITS causes
 * TickType_t to be defined (typedef'ed) as an unsigned 32-bit type.
 *
 * Defining configTICK_TYPE_WIDTH_IN_BITS as TICK_TYPE_WIDTH_64_BITS causes
 * TickType_t to be defined (typedef'ed) as an unsigned 64-bit type. */


//  <o>configTICK_TYPE_WIDTH_IN_BITS
//    <0=>TICK_TYPE_WIDTH_16_BITS (16-bit)
//    <1=>TICK_TYPE_WIDTH_32_BITS (32-bit)
//    <2=>TICK_TYPE_WIDTH_64_BITS (64-bit)
//  <i> Time is measured in 'ticks' - which is the number of times the tick interrupt
//  <i> has executed since the RTOS kernel was started.
//  <i> The tick count is held in a variable of type TickType_t.
//  <i>
//  <i> configTICK_TYPE_WIDTH_IN_BITS controls the type (and therefore bit-width) of
//  <i> TickType_t:
//  <i>
//  <i> Defining configTICK_TYPE_WIDTH_IN_BITS as TICK_TYPE_WIDTH_16_BITS causes
//  <i> TickType_t to be defined (typedef'ed) as an unsigned 16-bit type.
//  <i>
//  <i> Defining configTICK_TYPE_WIDTH_IN_BITS as TICK_TYPE_WIDTH_32_BITS causes
//  <i> TickType_t to be defined (typedef'ed) as an unsigned 32-bit type.
//  <i>
//  <i> Defining configTICK_TYPE_WIDTH_IN_BITS as TICK_TYPE_WIDTH_64_BITS causes
//  <i> TickType_t to be defined (typedef'ed) as an unsigned 64-bit type.
#define configTICK_TYPE_WIDTH_IN_BITS_SELECT 1
#if (configTICK_TYPE_WIDTH_IN_BITS_SELECT == 0)
  #define configTICK_TYPE_WIDTH_IN_BITS              TICK_TYPE_WIDTH_16_BITS
#elif (configTICK_TYPE_WIDTH_IN_BITS_SELECT == 1)
  #define configTICK_TYPE_WIDTH_IN_BITS              TICK_TYPE_WIDTH_32_BITS
#elif (configTICK_TYPE_WIDTH_IN_BITS_SELECT == 2)
  #define configTICK_TYPE_WIDTH_IN_BITS              TICK_TYPE_WIDTH_64_BITS
#endif

/* Set configIDLE_SHOULD_YIELD to 1 to have the Idle task yield to an
 * application task if there is an Idle priority (priority 0) application task
 * that can run.  Set to 0 to have the Idle task use all of its timeslice.
 * Default to 1 if left undefined. */

//  <q>configIDLE_SHOULD_YIELD
//  <i> Set configIDLE_SHOULD_YIELD to 1 to have the Idle task yield to an
//  <i> application task if there is an Idle priority (priority 0) application task
//  <i> that can run.  Set to 0 to have the Idle task use all of its timeslice.
//  <i> Default to 1 if left undefined.
#define configIDLE_SHOULD_YIELD                    1

/* Each task has an array of task notifications.
 * configTASK_NOTIFICATION_ARRAY_ENTRIES sets the number of indexes in the
 * array. See https://www.freertos.org/RTOS-task-notifications.html  Defaults to
 * 1 if left undefined. */

//  <o>configTASK_NOTIFICATION_ARRAY_ENTRIES <1-256>
//  <i> Each task has an array of task notifications.
//  <i> configTASK_NOTIFICATION_ARRAY_ENTRIES sets the number of indexes in the
//  <i> array. See https://www.freertos.org/RTOS-task-notifications.html  Defaults to
//  <i> 1 if left undefined.
#define configTASK_NOTIFICATION_ARRAY_ENTRIES      1

/* configQUEUE_REGISTRY_SIZE sets the maximum number of queues and semaphores
 * that can be referenced from the queue registry.  Only required when using a
 * kernel aware debugger.  Defaults to 0 if left undefined. */

//  <o>configQUEUE_REGISTRY_SIZE <0-256>
//  <i> configQUEUE_REGISTRY_SIZE sets the maximum number of queues and semaphores
//  <i> that can be referenced from the queue registry.  Only required when using a
//  <i> kernel aware debugger.  Defaults to 0 if left undefined.
#define configQUEUE_REGISTRY_SIZE                  0

/* Set configENABLE_BACKWARD_COMPATIBILITY to 1 to map function names and
 * datatypes from old version of FreeRTOS to their latest equivalent.  Defaults
 * to 1 if left undefined. */

//  <q>configENABLE_BACKWARD_COMPATIBILITY
//  <i> Set configENABLE_BACKWARD_COMPATIBILITY to 1 to map function names and
//  <i> datatypes from old version of FreeRTOS to their latest equivalent.  Defaults
//  <i> to 1 if left undefined.
#define configENABLE_BACKWARD_COMPATIBILITY        0

/* Each task has its own array of pointers that can be used as thread local
 * storage.  configNUM_THREAD_LOCAL_STORAGE_POINTERS set the number of indexes
 * in the array.  See
 * https://www.freertos.org/thread-local-storage-pointers.html Defaults to 0 if
 * left undefined. */

//  <o>configNUM_THREAD_LOCAL_STORAGE_POINTERS <0-256>
//  <i> Each task has its own array of pointers that can be used as thread local
//  <i> storage.  configNUM_THREAD_LOCAL_STORAGE_POINTERS set the number of indexes
//  <i> in the array.  See
//  <i> https://www.freertos.org/thread-local-storage-pointers.html Defaults to 0 if
//  <i> left undefined.
#define configNUM_THREAD_LOCAL_STORAGE_POINTERS    0

/* When configUSE_MINI_LIST_ITEM is set to 0, MiniListItem_t and ListItem_t are
 * both the same. When configUSE_MINI_LIST_ITEM is set to 1, MiniListItem_t
 * contains 3 fewer fields than ListItem_t which saves some RAM at the cost of
 * violating strict aliasing rules which some compilers depend on for
 * optimization. Defaults to 1 if left undefined. */

//  <q>configUSE_MINI_LIST_ITEM
//  <i> When configUSE_MINI_LIST_ITEM is set to 0, MiniListItem_t and ListItem_t are
//  <i> both the same. When configUSE_MINI_LIST_ITEM is set to 1, MiniListItem_t
//  <i> contains 3 fewer fields than ListItem_t which saves some RAM at the cost of
//  <i> violating strict aliasing rules which some compilers depend on for
//  <i> optimization. Defaults to 1 if left undefined.
#define configUSE_MINI_LIST_ITEM                   1

/* Sets the type used by the parameter to xTaskCreate() that specifies the stack
 * size of the task being created.  The same type is used to return information
 * about stack usage in various other API calls.  Defaults to size_t if left
 * undefined. */

//  <o>configSTACK_DEPTH_TYPE
//    <0=>size_t
//    <1=>uint8_t
//    <2=>uint16_t
//    <3=>uint32_t
//    <4=>uint64_t
//  <i> Sets the type used by the parameter to xTaskCreate() that specifies the stack
//  <i> size of the task being created.  The same type is used to return information
//  <i> about stack usage in various other API calls.  Defaults to size_t if left
//  <i> undefined.
#define configSTACK_DEPTH_TYPE_SELECT 0
#if (configSTACK_DEPTH_TYPE_SELECT == 0)
  #define configSTACK_DEPTH_TYPE                     size_t
#elif (configSTACK_DEPTH_TYPE_SELECT == 1)
  #define configSTACK_DEPTH_TYPE                     uint8_t
#elif (configSTACK_DEPTH_TYPE_SELECT == 2)
  #define configSTACK_DEPTH_TYPE                     uint16_t
#elif (configSTACK_DEPTH_TYPE_SELECT == 3)
  #define configSTACK_DEPTH_TYPE                     uint32_t
#elif (configSTACK_DEPTH_TYPE_SELECT == 4)
  #define configSTACK_DEPTH_TYPE                     uint64_t
#endif


/* configMESSAGE_BUFFER_LENGTH_TYPE sets the type used to store the length of
 * each message written to a FreeRTOS message buffer (the length is also written
 * to the message buffer.  Defaults to size_t if left undefined - but that may
 * waste space if messages never go above a length that could be held in a
 * uint8_t. */

//  <o>configMESSAGE_BUFFER_LENGTH_TYPE
//    <0=>size_t
//    <1=>uint8_t
//    <2=>uint16_t
//    <3=>uint32_t
//    <4=>uint64_t
//  <i> configMESSAGE_BUFFER_LENGTH_TYPE sets the type used to store the length of
//  <i> each message written to a FreeRTOS message buffer (the length is also written
//  <i> to the message buffer.  Defaults to size_t if left undefined - but that may
//  <i> waste space if messages never go above a length that could be held in a
//  <i> uint8_t.
#define configMESSAGE_BUFFER_LENGTH_TYPE_SELECT 0
#if (configMESSAGE_BUFFER_LENGTH_TYPE_SELECT == 0)
  #define configMESSAGE_BUFFER_LENGTH_TYPE           size_t
#elif (configMESSAGE_BUFFER_LENGTH_TYPE_SELECT == 1)
  #define configMESSAGE_BUFFER_LENGTH_TYPE           uint8_t
#elif (configMESSAGE_BUFFER_LENGTH_TYPE_SELECT == 2)
  #define configMESSAGE_BUFFER_LENGTH_TYPE           uint16_t
#elif (configMESSAGE_BUFFER_LENGTH_TYPE_SELECT == 3)
  #define configMESSAGE_BUFFER_LENGTH_TYPE           uint32_t
#elif (configMESSAGE_BUFFER_LENGTH_TYPE_SELECT == 4)
  #define configMESSAGE_BUFFER_LENGTH_TYPE           uint64_t
#endif


/* If configHEAP_CLEAR_MEMORY_ON_FREE is set to 1, then blocks of memory
 * allocated using pvPortMalloc() will be cleared (i.e. set to zero) when freed
 * using vPortFree(). Defaults to 0 if left undefined. */

//  <q>configHEAP_CLEAR_MEMORY_ON_FREE
//  <i> If configHEAP_CLEAR_MEMORY_ON_FREE is set to 1, then blocks of memory
//  <i> allocated using pvPortMalloc() will be cleared (i.e. set to zero) when freed
//  <i> using vPortFree(). Defaults to 0 if left undefined.
#define configHEAP_CLEAR_MEMORY_ON_FREE            1

/* vTaskList and vTaskGetRunTimeStats APIs take a buffer as a parameter and
 * assume that the length of the buffer is configSTATS_BUFFER_MAX_LENGTH.
 * Defaults to 0xFFFF if left undefined. New applications are recommended to use
 * vTaskListTasks and vTaskGetRunTimeStatistics APIs instead and supply the
 * length of the buffer explicitly to avoid memory corruption. */

//  <o>configSTATS_BUFFER_MAX_LENGTH <0-0xFFFFFFFF>
//  <i> vTaskList and vTaskGetRunTimeStats APIs take a buffer as a parameter and
//  <i> assume that the length of the buffer is configSTATS_BUFFER_MAX_LENGTH.
//  <i> Defaults to 0xFFFF if left undefined. New applications are recommended to use
//  <i> vTaskListTasks and vTaskGetRunTimeStatistics APIs instead and supply the
//  <i> length of the buffer explicitly to avoid memory corruption.
#define configSTATS_BUFFER_MAX_LENGTH              0xFFFF

/* Set configUSE_NEWLIB_REENTRANT to 1 to have a newlib reent structure
 * allocated for each task.  Set to 0 to not support newlib reent structures.
 * Default to 0 if left undefined.
 *
 * Note Newlib support has been included by popular demand, but is not used or
 * tested by the FreeRTOS maintainers themselves. FreeRTOS is not responsible
 * for resulting newlib operation. User must be familiar with newlib and must
 * provide system-wide implementations of the necessary stubs. Note that (at the
 * time of writing) the current newlib design implements a system-wide malloc()
 * that must be provided with locks. */

//  <q>configUSE_NEWLIB_REENTRANT
//  <i> Set configUSE_NEWLIB_REENTRANT to 1 to have a newlib reent structure
//  <i> allocated for each task.  Set to 0 to not support newlib reent structures.
//  <i> Default to 0 if left undefined.
//  <i>
//  <i> Note Newlib support has been included by popular demand, but is not used or
//  <i> tested by the FreeRTOS maintainers themselves. FreeRTOS is not responsible
//  <i> for resulting newlib operation. User must be familiar with newlib and must
//  <i> provide system-wide implementations of the necessary stubs. Note that (at the
//  <i> time of writing) the current newlib design implements a system-wide malloc()
//  <i> that must be provided with locks.
#define configUSE_NEWLIB_REENTRANT                 0

// </h>

/******************************************************************************/
/* Software timer related definitions. ****************************************/
/******************************************************************************/

/* Set configUSE_TIMERS to 1 to include software timer functionality in the
 * build.  Set to 0 to exclude software timer functionality from the build.  The
 * FreeRTOS/source/timers.c source file must be included in the build if
 * configUSE_TIMERS is set to 1.  Default to 0 if left undefined.  See
 * https://www.freertos.org/RTOS-software-timer.html. */

// <h>Software timer related definitions

//  <e>configUSE_TIMERS
//  <i> Set configUSE_TIMERS to 1 to include software timer functionality in the
//  <i> build.  Set to 0 to exclude software timer functionality from the build.  The
//  <i> FreeRTOS/source/timers.c source file must be included in the build if
//  <i> configUSE_TIMERS is set to 1.  Default to 0 if left undefined.  See
//  <i> https://www.freertos.org/RTOS-software-timer.html.
#define configUSE_TIMERS                1

/* configTIMER_TASK_PRIORITY sets the priority used by the timer task.  Only
 * used if configUSE_TIMERS is set to 1.  The timer task is a standard FreeRTOS
 * task, so its priority is set like any other task.  See
 * https://www.freertos.org/RTOS-software-timer-service-daemon-task.html  Only
 * used if configUSE_TIMERS is set to 1. */


//   <o>configTIMER_TASK_PRIORITY mode
//     <0=>Default ((configMAX_PRIORITIES - 1))
//     <1=>Custom value
//   <i> configTIMER_TASK_PRIORITY sets the priority used by the timer task.  Only
//   <i> used if configUSE_TIMERS is set to 1.  The timer task is a standard FreeRTOS
//   <i> task, so its priority is set like any other task.  See
//   <i> https://www.freertos.org/RTOS-software-timer-service-daemon-task.html  Only
//   <i> used if configUSE_TIMERS is set to 1.
#define configTIMER_TASK_PRIORITY_MODE 0

//   <o>configTIMER_TASK_PRIORITY custom value <0-255>
//   <i> Custom priority value used when configTIMER_TASK_PRIORITY mode is set to Custom value.
#define configTIMER_TASK_PRIORITY_VAL 4
#if (configTIMER_TASK_PRIORITY_MODE == 0)
  #define configTIMER_TASK_PRIORITY       ( configMAX_PRIORITIES - 1 )
#else
  #define configTIMER_TASK_PRIORITY       configTIMER_TASK_PRIORITY_VAL
#endif


/* configTIMER_TASK_STACK_DEPTH sets the size of the stack allocated to the
 * timer task (in words, not in bytes!).  The timer task is a standard FreeRTOS
 * task.  See
 * https://www.freertos.org/RTOS-software-timer-service-daemon-task.html Only
 * used if configUSE_TIMERS is set to 1. */

//   <o>configTIMER_TASK_STACK_DEPTH mode
//     <0=>Default (configMINIMAL_STACK_SIZE)
//     <1=>Custom value
//   <i> configTIMER_TASK_STACK_DEPTH sets the size of the stack allocated to the
//   <i> timer task (in words, not in bytes!).  The timer task is a standard FreeRTOS
//   <i> task.  See
//   <i> https://www.freertos.org/RTOS-software-timer-service-daemon-task.html Only
//   <i> used if configUSE_TIMERS is set to 1.
#define configTIMER_TASK_STACK_DEPTH_MODE 0

//   <o>configTIMER_TASK_STACK_DEPTH custom value <0-65535>
//   <i> Custom stack depth (in words) used when configTIMER_TASK_STACK_DEPTH mode is set to Custom value.
#define configTIMER_TASK_STACK_DEPTH_VAL 128
#if (configTIMER_TASK_STACK_DEPTH_MODE == 0)
  #define configTIMER_TASK_STACK_DEPTH    configMINIMAL_STACK_SIZE
#else
  #define configTIMER_TASK_STACK_DEPTH    configTIMER_TASK_STACK_DEPTH_VAL
#endif

/* configTIMER_QUEUE_LENGTH sets the length of the queue (the number of discrete
 * items the queue can hold) used to send commands to the timer task.  See
 * https://www.freertos.org/RTOS-software-timer-service-daemon-task.html  Only
 * used if configUSE_TIMERS is set to 1. */

//   <o>configTIMER_QUEUE_LENGTH <1-1024>
//   <i> configTIMER_QUEUE_LENGTH sets the length of the queue (the number of discrete
//   <i> items the queue can hold) used to send commands to the timer task.  See
//   <i> https://www.freertos.org/RTOS-software-timer-service-daemon-task.html  Only
//   <i> used if configUSE_TIMERS is set to 1.
#define configTIMER_QUEUE_LENGTH        10


//  </e>
// </h>


/******************************************************************************/
/* Event Group related definitions. *******************************************/
/******************************************************************************/
// <h>Event Group related definitions

/* Set configUSE_EVENT_GROUPS to 1 to include event group functionality in the
 * build. Set to 0 to exclude event group functionality from the build. The
 * FreeRTOS/source/event_groups.c source file must be included in the build if
 * configUSE_EVENT_GROUPS is set to 1. Defaults to 1 if left undefined. */

//  <q>configUSE_EVENT_GROUPS
//  <i> Set configUSE_EVENT_GROUPS to 1 to include event group functionality in the
//  <i> build. Set to 0 to exclude event group functionality from the build. The
//  <i> FreeRTOS/source/event_groups.c source file must be included in the build if
//  <i> configUSE_EVENT_GROUPS is set to 1. Defaults to 1 if left undefined.
#define configUSE_EVENT_GROUPS    1

// </h>

/******************************************************************************/
/* Stream Buffer related definitions. *****************************************/
/******************************************************************************/
// <h>Stream Buffer related definitions

/* Set configUSE_STREAM_BUFFERS to 1 to include stream buffer functionality in
 * the build. Set to 0 to exclude event group functionality from the build. The
 * FreeRTOS/source/stream_buffer.c source file must be included in the build if
 * configUSE_STREAM_BUFFERS is set to 1. Defaults to 1 if left undefined. */

//  <q>configUSE_STREAM_BUFFERS
//  <i> Set configUSE_STREAM_BUFFERS to 1 to include stream buffer functionality in
//  <i> the build. Set to 0 to exclude event group functionality from the build. The
//  <i> FreeRTOS/source/stream_buffer.c source file must be included in the build if
//  <i> configUSE_STREAM_BUFFERS is set to 1. Defaults to 1 if left undefined.
#define configUSE_STREAM_BUFFERS 1

// </h>

/******************************************************************************/
/* Memory allocation related definitions. *************************************/
/******************************************************************************/
// <h>Memory allocation related definitions

/* Set configSUPPORT_STATIC_ALLOCATION to 1 to include FreeRTOS API functions
 * that create FreeRTOS objects (tasks, queues, etc.) using statically allocated
 * memory in the build.  Set to 0 to exclude the ability to create statically
 * allocated objects from the build.  Defaults to 0 if left undefined.  See
 * https://www.freertos.org/Static_Vs_Dynamic_Memory_Allocation.html. */

//  <q>configSUPPORT_STATIC_ALLOCATION
//  <i> Set configSUPPORT_STATIC_ALLOCATION to 1 to include FreeRTOS API functions
//  <i> that create FreeRTOS objects (tasks, queues, etc.) using statically allocated
//  <i> memory in the build.  Set to 0 to exclude the ability to create statically
//  <i> allocated objects from the build.  Defaults to 0 if left undefined.  See
//  <i> https://www.freertos.org/Static_Vs_Dynamic_Memory_Allocation.html.
#define configSUPPORT_STATIC_ALLOCATION 1

/* Set configSUPPORT_DYNAMIC_ALLOCATION to 1 to include FreeRTOS API functions
 * that create FreeRTOS objects (tasks, queues, etc.) using dynamically
 * allocated memory in the build.  Set to 0 to exclude the ability to create
 * dynamically allocated objects from the build.  Defaults to 1 if left
 * undefined.  See
 * https://www.freertos.org/Static_Vs_Dynamic_Memory_Allocation.html. */

//  <q>configSUPPORT_DYNAMIC_ALLOCATION
//  <i> Set configSUPPORT_DYNAMIC_ALLOCATION to 1 to include FreeRTOS API functions
//  <i> that create FreeRTOS objects (tasks, queues, etc.) using dynamically
//  <i> allocated memory in the build.  Set to 0 to exclude the ability to create
//  <i> dynamically allocated objects from the build.  Defaults to 1 if left
//  <i> undefined.  See
//  <i> https://www.freertos.org/Static_Vs_Dynamic_Memory_Allocation.html.
#define configSUPPORT_DYNAMIC_ALLOCATION 1

/* Sets the total size of the FreeRTOS heap, in bytes, when heap_1.c, heap_2.c
 * or heap_4.c are included in the build.  This value is defaulted to 4096 bytes
 * but it must be tailored to each application.  Note the heap will appear in
 * the .bss section.  See https://www.freertos.org/a00111.html. */

//  <o>configTOTAL_HEAP_SIZE <0-0xFFFFFFFF>
//  <i> Sets the total size of the FreeRTOS heap, in bytes, when heap_1.c, heap_2.c
//  <i> or heap_4.c are included in the build.  This value is defaulted to 4096 bytes
//  <i> but it must be tailored to each application.  Note the heap will appear in
//  <i> the .bss section.  See https://www.freertos.org/a00111.html.
#define configTOTAL_HEAP_SIZE 4096

/* Set configAPPLICATION_ALLOCATED_HEAP to 1 to have the application allocate
 * the array used as the FreeRTOS heap.  Set to 0 to have the linker allocate
 * the array used as the FreeRTOS heap.  Defaults to 0 if left undefined. */

//  <q>configAPPLICATION_ALLOCATED_HEAP
//  <i> Set configAPPLICATION_ALLOCATED_HEAP to 1 to have the application allocate
//  <i> the array used as the FreeRTOS heap.  Set to 0 to have the linker allocate
//  <i> the array used as the FreeRTOS heap.  Defaults to 0 if left undefined.
#define configAPPLICATION_ALLOCATED_HEAP 0

/* Set configSTACK_ALLOCATION_FROM_SEPARATE_HEAP to 1 to have task stacks
 * allocated from somewhere other than the FreeRTOS heap.  This is useful if you
 * want to ensure stacks are held in fast memory.  Set to 0 to have task stacks
 * come from the standard FreeRTOS heap.  The application writer must provide
 * implementations for pvPortMallocStack() and vPortFreeStack() if set to 1.
 * Defaults to 0 if left undefined. */

//  <q>configSTACK_ALLOCATION_FROM_SEPARATE_HEAP
//  <i> Set configSTACK_ALLOCATION_FROM_SEPARATE_HEAP to 1 to have task stacks
//  <i> allocated from somewhere other than the FreeRTOS heap.  This is useful if you
//  <i> want to ensure stacks are held in fast memory.  Set to 0 to have task stacks
//  <i> come from the standard FreeRTOS heap.  The application writer must provide
//  <i> implementations for pvPortMallocStack() and vPortFreeStack() if set to 1.
//  <i> Defaults to 0 if left undefined.
#define configSTACK_ALLOCATION_FROM_SEPARATE_HEAP 0

/* Set configENABLE_HEAP_PROTECTOR to 1 to enable bounds checking and
 * obfuscation to internal heap block pointers in heap_4.c and heap_5.c to help
 * catch pointer corruptions. Defaults to 0 if left undefined. */

//  <q>configENABLE_HEAP_PROTECTOR
//  <i> Set configENABLE_HEAP_PROTECTOR to 1 to enable bounds checking and
//  <i> obfuscation to internal heap block pointers in heap_4.c and heap_5.c to help
//  <i> catch pointer corruptions. Defaults to 0 if left undefined.
#define configENABLE_HEAP_PROTECTOR 0

// </h>

/******************************************************************************/
/* Interrupt nesting behaviour configuration. *********************************/
/******************************************************************************/
// <h>Interrupt nesting behaviour configuration

/* configKERNEL_INTERRUPT_PRIORITY sets the priority of the tick and context
 * switch performing interrupts.  Not supported by all FreeRTOS ports.  See
 * https://www.freertos.org/RTOS-Cortex-M3-M4.html for information specific to
 * ARM Cortex-M devices. */

//  <o>configKERNEL_INTERRUPT_PRIORITY <0-255>
//  <i> configKERNEL_INTERRUPT_PRIORITY sets the priority of the tick and context
//  <i> switch performing interrupts.  Not supported by all FreeRTOS ports.  See
//  <i> https://www.freertos.org/RTOS-Cortex-M3-M4.html for information specific to
//  <i> ARM Cortex-M devices.
#define configKERNEL_INTERRUPT_PRIORITY 0

/* configMAX_SYSCALL_INTERRUPT_PRIORITY sets the interrupt priority above which
 * FreeRTOS API calls must not be made.  Interrupts above this priority are
 * never disabled, so never delayed by RTOS activity.  The default value is set
 * to the highest interrupt priority (0).  Not supported by all FreeRTOS ports.
 * See https://www.freertos.org/RTOS-Cortex-M3-M4.html for information specific
 * to ARM Cortex-M devices. */

//  <o>configMAX_SYSCALL_INTERRUPT_PRIORITY <0-255>
//  <i> configMAX_SYSCALL_INTERRUPT_PRIORITY sets the interrupt priority above which
//  <i> FreeRTOS API calls must not be made.  Interrupts above this priority are
//  <i> never disabled, so never delayed by RTOS activity.  The default value is set
//  <i> to the highest interrupt priority (0).  Not supported by all FreeRTOS ports.
//  <i> See https://www.freertos.org/RTOS-Cortex-M3-M4.html for information specific
//  <i> to ARM Cortex-M devices.
#define configMAX_SYSCALL_INTERRUPT_PRIORITY 0

/* Another name for configMAX_SYSCALL_INTERRUPT_PRIORITY - the name used depends
 * on the FreeRTOS port. */

//  <o>configMAX_API_CALL_INTERRUPT_PRIORITY <0-255>
//  <i> Another name for configMAX_SYSCALL_INTERRUPT_PRIORITY - the name used depends
//  <i> on the FreeRTOS port.
#define configMAX_API_CALL_INTERRUPT_PRIORITY 0

// </h>

/******************************************************************************/
/* Hook and callback function related definitions. ****************************/
/******************************************************************************/

// <h>Hook and callback function related definitions

/* Set the following configUSE_* constants to 1 to include the named hook
 * functionality in the build.  Set to 0 to exclude the hook functionality from
 * the build.  The application writer is responsible for providing the hook
 * function for any set to 1.  See https://www.freertos.org/a00016.html. */

//  <q>configUSE_IDLE_HOOK
//  <i> Set the following configUSE_* constants to 1 to include the named hook
//  <i> functionality in the build.  Set to 0 to exclude the hook functionality from
//  <i> the build.  The application writer is responsible for providing the hook
//  <i> function for any set to 1.  See https://www.freertos.org/a00016.html.
#define configUSE_IDLE_HOOK 0

//  <q>configUSE_TICK_HOOK
//  <i> Set the following configUSE_* constants to 1 to include the named hook
//  <i> functionality in the build.  Set to 0 to exclude the hook functionality from
//  <i> the build.  The application writer is responsible for providing the hook
//  <i> function for any set to 1.  See https://www.freertos.org/a00016.html.
#define configUSE_TICK_HOOK 0

//  <q>configUSE_MALLOC_FAILED_HOOK
//  <i> Set the following configUSE_* constants to 1 to include the named hook
//  <i> functionality in the build.  Set to 0 to exclude the hook functionality from
//  <i> the build.  The application writer is responsible for providing the hook
//  <i> function for any set to 1.  See https://www.freertos.org/a00016.html.
#define configUSE_MALLOC_FAILED_HOOK 0

//  <q>configUSE_DAEMON_TASK_STARTUP_HOOK
//  <i> Set the following configUSE_* constants to 1 to include the named hook
//  <i> functionality in the build.  Set to 0 to exclude the hook functionality from
//  <i> the build.  The application writer is responsible for providing the hook
//  <i> function for any set to 1.  See https://www.freertos.org/a00016.html.
#define configUSE_DAEMON_TASK_STARTUP_HOOK 0

/* Set configUSE_SB_COMPLETED_CALLBACK to 1 to have send and receive completed
 * callbacks for each instance of a stream buffer or message buffer. When the
 * option is set to 1, APIs xStreamBufferCreateWithCallback() and
 * xStreamBufferCreateStaticWithCallback() (and likewise APIs for message
 * buffer) can be used to create a stream buffer or message buffer instance
 * with application provided callbacks. Defaults to 0 if left undefined. */

//  <q>configUSE_SB_COMPLETED_CALLBACK
//  <i> Set configUSE_SB_COMPLETED_CALLBACK to 1 to have send and receive completed
//  <i> callbacks for each instance of a stream buffer or message buffer. When the
//  <i> option is set to 1, APIs xStreamBufferCreateWithCallback() and
//  <i> xStreamBufferCreateStaticWithCallback() (and likewise APIs for message
//  <i> buffer) can be used to create a stream buffer or message buffer instance
//  <i> with application provided callbacks. Defaults to 0 if left undefined.
#define configUSE_SB_COMPLETED_CALLBACK 0

/* Set configCHECK_FOR_STACK_OVERFLOW to 1 or 2 for FreeRTOS to check for a
 * stack overflow at the time of a context switch.  Set to 0 to not look for a
 * stack overflow.  If configCHECK_FOR_STACK_OVERFLOW is 1 then the check only
 * looks for the stack pointer being out of bounds when a task's context is
 * saved to its stack - this is fast but somewhat ineffective.  If
 * configCHECK_FOR_STACK_OVERFLOW is 2 then the check looks for a pattern
 * written to the end of a task's stack having been overwritten.  This is
 * slower, but will catch most (but not all) stack overflows.  The application
 * writer must provide the stack overflow callback when
 * configCHECK_FOR_STACK_OVERFLOW is set to 1. See
 * https://www.freertos.org/Stacks-and-stack-overflow-checking.html  Defaults to
 * 0 if left undefined. */

//  <o>configCHECK_FOR_STACK_OVERFLOW
//    <0=>0 (Disabled)
//    <1=>1 (Method 1 - Fast stack pointer check)
//    <2=>2 (Method 2 - Stack pattern check)
//  <i> Set configCHECK_FOR_STACK_OVERFLOW to 1 or 2 for FreeRTOS to check for a
//  <i> stack overflow at the time of a context switch.  Set to 0 to not look for a
//  <i> stack overflow.  If configCHECK_FOR_STACK_OVERFLOW is 1 then the check only
//  <i> looks for the stack pointer being out of bounds when a task's context is
//  <i> saved to its stack - this is fast but somewhat ineffective.  If
//  <i> configCHECK_FOR_STACK_OVERFLOW is 2 then the check looks for a pattern
//  <i> written to the end of a task's stack having been overwritten.  This is
//  <i> slower, but will catch most (but not all) stack overflows.  The application
//  <i> writer must provide the stack overflow callback when
//  <i> configCHECK_FOR_STACK_OVERFLOW is set to 1. See
//  <i> https://www.freertos.org/Stacks-and-stack-overflow-checking.html  Defaults to
//  <i> 0 if left undefined.
#define configCHECK_FOR_STACK_OVERFLOW 2

// </h>

/******************************************************************************/
/* Run time and task stats gathering related definitions. *********************/
/******************************************************************************/
// <h>Run time and task stats gathering related definitions

/* Set configGENERATE_RUN_TIME_STATS to 1 to have FreeRTOS collect data on the
 * processing time used by each task.  Set to 0 to not collect the data.  The
 * application writer needs to provide a clock source if set to 1.  Defaults to
 * 0 if left undefined.  See https://www.freertos.org/rtos-run-time-stats.html.
 */


//  <q>configGENERATE_RUN_TIME_STATS
//  <i> Set configGENERATE_RUN_TIME_STATS to 1 to have FreeRTOS collect data on the
//  <i> processing time used by each task.  Set to 0 to not collect the data.  The
//  <i> application writer needs to provide a clock source if set to 1.  Defaults to
//  <i> 0 if left undefined.  See https://www.freertos.org/rtos-run-time-stats.html.
#define configGENERATE_RUN_TIME_STATS 0

/* Set configUSE_TRACE_FACILITY to include additional task structure members
 * are used by trace and visualisation functions and tools.  Set to 0 to exclude
 * the additional information from the structures. Defaults to 0 if left
 * undefined. */

//  <q>configUSE_TRACE_FACILITY
//  <i> Set configUSE_TRACE_FACILITY to include additional task structure members
//  <i> are used by trace and visualisation functions and tools.  Set to 0 to exclude
//  <i> the additional information from the structures. Defaults to 0 if left
//  <i> undefined.
#define configUSE_TRACE_FACILITY 0

/* Set to 1 to include the vTaskList() and vTaskGetRunTimeStats() functions in
 * the build.  Set to 0 to exclude these functions from the build.  These two
 * functions introduce a dependency on string formatting functions that would
 * otherwise not exist - hence they are kept separate.  Defaults to 0 if left
 * undefined. */

//  <q>configUSE_STATS_FORMATTING_FUNCTIONS
//  <i> Set to 1 to include the vTaskList() and vTaskGetRunTimeStats() functions in
//  <i> the build.  Set to 0 to exclude these functions from the build.  These two
//  <i> functions introduce a dependency on string formatting functions that would
//  <i> otherwise not exist - hence they are kept separate.  Defaults to 0 if left
//  <i> undefined.
#define configUSE_STATS_FORMATTING_FUNCTIONS 0

// </h>

/******************************************************************************/
/* Co-routine related definitions. ********************************************/
/******************************************************************************/
// <h>Co-routine related definitions

/* Set configUSE_CO_ROUTINES to 1 to include co-routine functionality in the
 * build, or 0 to omit co-routine functionality from the build. To include
 * co-routines, croutine.c must be included in the project. Defaults to 0 if
 * left undefined. */


//  <q>configUSE_CO_ROUTINES
//  <i> Set configUSE_CO_ROUTINES to 1 to include co-routine functionality in the
//  <i> build, or 0 to omit co-routine functionality from the build. To include
//  <i> co-routines, croutine.c must be included in the project. Defaults to 0 if
//  <i> left undefined.
#define configUSE_CO_ROUTINES 0

/* configMAX_CO_ROUTINE_PRIORITIES defines the number of priorities available
 * to the application co-routines. Any number of co-routines can share the same
 * priority. Defaults to 0 if left undefined. */


//  <o>configMAX_CO_ROUTINE_PRIORITIES <1-256>
//  <i> configMAX_CO_ROUTINE_PRIORITIES defines the number of priorities available
//  <i> to the application co-routines. Any number of co-routines can share the same
//  <i> priority. Defaults to 0 if left undefined.
#define configMAX_CO_ROUTINE_PRIORITIES 1

// </h>

/******************************************************************************/
/* Debugging assistance. ******************************************************/
/******************************************************************************/
// <h>Debugging assistance

/* configASSERT() has the same semantics as the standard C assert().  It can
 * either be defined to take an action when the assertion fails, or not defined
 * at all (i.e. comment out or delete the definitions) to completely remove
 * assertions.  configASSERT() can be defined to anything you want, for example
 * you can call a function if an assert fails that passes the filename and line
 * number of the failing assert (for example, "vAssertCalled( __FILE__, __LINE__
 * )" or it can simple disable interrupts and sit in a loop to halt all
 * execution on the failing line for viewing in a debugger. */


//  <q>Enable configASSERT
//  <i> configASSERT() has the same semantics as the standard C assert().  It can
//  <i> either be defined to take an action when the assertion fails, or not defined
//  <i> at all (i.e. comment out or delete the definitions) to completely remove
//  <i> assertions.  configASSERT() can be defined to anything you want, for example
//  <i> you can call a function if an assert fails that passes the filename and line
//  <i> number of the failing assert (for example, "vAssertCalled( __FILE__, __LINE__
//  <i> )" or it can simple disable interrupts and sit in a loop to halt all
//  <i> execution on the failing line for viewing in a debugger.
#define configUSE_ASSERT 1
#if (configUSE_ASSERT == 1)
/* *INDENT-OFF* */
#define configASSERT( x )         \
    if( ( x ) == 0 )              \
    {                             \
        taskDISABLE_INTERRUPTS(); \
        for( ; ; )                \
        ;                         \
    }
/* *INDENT-ON* */
#endif

// </h>

/******************************************************************************/
/* FreeRTOS MPU specific definitions. *****************************************/
/******************************************************************************/

/* If configINCLUDE_APPLICATION_DEFINED_PRIVILEGED_FUNCTIONS is set to 1 then
 * the application writer can provide functions that execute in privileged mode.
 * See:
 * https://www.freertos.org/a00110.html#configINCLUDE_APPLICATION_DEFINED_PRIVILEGED_FUNCTIONS
 * Defaults to 0 if left undefined.  Only used by the FreeRTOS Cortex-M MPU
 * ports, not the standard ARMv7-M Cortex-M port. */


// <h>FreeRTOS MPU specific definitions

//  <q>configINCLUDE_APPLICATION_DEFINED_PRIVILEGED_FUNCTIONS
//  <i> If configINCLUDE_APPLICATION_DEFINED_PRIVILEGED_FUNCTIONS is set to 1 then
//  <i> the application writer can provide functions that execute in privileged mode.
//  <i> See:
//  <i> https://www.freertos.org/a00110.html#configINCLUDE_APPLICATION_DEFINED_PRIVILEGED_FUNCTIONS
//  <i> Defaults to 0 if left undefined.  Only used by the FreeRTOS Cortex-M MPU
//  <i> ports, not the standard ARMv7-M Cortex-M port.
#define configINCLUDE_APPLICATION_DEFINED_PRIVILEGED_FUNCTIONS 0


/* Set configTOTAL_MPU_REGIONS to the number of MPU regions implemented on your
 * target hardware.  Normally 8 or 16.  Only used by the FreeRTOS Cortex-M MPU
 * ports, not the standard ARMv7-M Cortex-M port.  Defaults to 8 if left
 * undefined. */


//  <o>configTOTAL_MPU_REGIONS
//    <8=>8
//    <16=>16
//  <i> Set configTOTAL_MPU_REGIONS to the number of MPU regions implemented on your
//  <i> target hardware.  Normally 8 or 16.  Only used by the FreeRTOS Cortex-M MPU
//  <i> ports, not the standard ARMv7-M Cortex-M port.  Defaults to 8 if left
//  <i> undefined.
#define configTOTAL_MPU_REGIONS 8


/* configTEX_S_C_B_FLASH allows application writers to override the default
 * values for the for TEX, Shareable (S), Cacheable (C) and Bufferable (B) bits
 * for the MPU region covering Flash.  Defaults to 0x07UL (which means TEX=000,
 * S=1, C=1, B=1) if left undefined.  Only used by the FreeRTOS Cortex-M MPU
 * ports, not the standard ARMv7-M Cortex-M port. */
 
 
//  <o>configTEX_S_C_B_FLASH <0x00-0xFF>
//  <i> configTEX_S_C_B_FLASH allows application writers to override the default
//  <i> values for the for TEX, Shareable (S), Cacheable (C) and Bufferable (B) bits
//  <i> for the MPU region covering Flash.  Defaults to 0x07UL (which means TEX=000,
//  <i> S=1, C=1, B=1) if left undefined.  Only used by the FreeRTOS Cortex-M MPU
//  <i> ports, not the standard ARMv7-M Cortex-M port.
#define configTEX_S_C_B_FLASH 0x07UL


/* configTEX_S_C_B_SRAM allows application writers to override the default
 * values for the for TEX, Shareable (S), Cacheable (C) and Bufferable (B) bits
 * for the MPU region covering RAM. Defaults to 0x07UL (which means TEX=000,
 * S=1, C=1, B=1) if left undefined.  Only used by the FreeRTOS Cortex-M MPU
 * ports, not the standard ARMv7-M Cortex-M port. */

//  <o>configTEX_S_C_B_SRAM <0x00-0xFF>
//  <i> configTEX_S_C_B_SRAM allows application writers to override the default
//  <i> values for the for TEX, Shareable (S), Cacheable (C) and Bufferable (B) bits
//  <i> for the MPU region covering RAM. Defaults to 0x07UL (which means TEX=000,
//  <i> S=1, C=1, B=1) if left undefined.  Only used by the FreeRTOS Cortex-M MPU
//  <i> ports, not the standard ARMv7-M Cortex-M port.
#define configTEX_S_C_B_SRAM 0x07UL



/* Set configENFORCE_SYSTEM_CALLS_FROM_KERNEL_ONLY to 0 to prevent any privilege
 * escalations originating from outside of the kernel code itself.  Set to 1 to
 * allow application tasks to raise privilege.  Defaults to 1 if left undefined.
 * Only used by the FreeRTOS Cortex-M MPU ports, not the standard ARMv7-M
 * Cortex-M port. */
 
//  <q>configENFORCE_SYSTEM_CALLS_FROM_KERNEL_ONLY
//  <i> Set configENFORCE_SYSTEM_CALLS_FROM_KERNEL_ONLY to 0 to prevent any privilege
//  <i> escalations originating from outside of the kernel code itself.  Set to 1 to
//  <i> allow application tasks to raise privilege.  Defaults to 1 if left undefined.
//  <i> Only used by the FreeRTOS Cortex-M MPU ports, not the standard ARMv7-M
//  <i> Cortex-M port.
#define configENFORCE_SYSTEM_CALLS_FROM_KERNEL_ONLY 1

/* Set configALLOW_UNPRIVILEGED_CRITICAL_SECTIONS to 1 to allow unprivileged
 * tasks enter critical sections (effectively mask interrupts). Set to 0 to
 * prevent unprivileged tasks entering critical sections.  Defaults to 1 if left
 * undefined.  Only used by the FreeRTOS Cortex-M MPU ports, not the standard
 * ARMv7-M Cortex-M port. */


//  <q>configALLOW_UNPRIVILEGED_CRITICAL_SECTIONS
//  <i> Set configALLOW_UNPRIVILEGED_CRITICAL_SECTIONS to 1 to allow unprivileged
//  <i> tasks enter critical sections (effectively mask interrupts). Set to 0 to
//  <i> prevent unprivileged tasks entering critical sections.  Defaults to 1 if left
//  <i> undefined.  Only used by the FreeRTOS Cortex-M MPU ports, not the standard
//  <i> ARMv7-M Cortex-M port.
#define configALLOW_UNPRIVILEGED_CRITICAL_SECTIONS 0


/* FreeRTOS Kernel version 10.6.0 introduced a new v2 MPU wrapper, namely
 * mpu_wrappers_v2.c. Set configUSE_MPU_WRAPPERS_V1 to 0 to use the new v2 MPU
 * wrapper. Set configUSE_MPU_WRAPPERS_V1 to 1 to use the old v1 MPU wrapper
 * (mpu_wrappers.c). Defaults to 0 if left undefined. */


//  <o>configUSE_MPU_WRAPPERS_V1
//    <0=>0 (v2 MPU wrapper - mpu_wrappers_v2.c)
//    <1=>1 (v1 MPU wrapper - mpu_wrappers.c)
//  <i> FreeRTOS Kernel version 10.6.0 introduced a new v2 MPU wrapper, namely
//  <i> mpu_wrappers_v2.c. Set configUSE_MPU_WRAPPERS_V1 to 0 to use the new v2 MPU
//  <i> wrapper. Set configUSE_MPU_WRAPPERS_V1 to 1 to use the old v1 MPU wrapper
//  <i> (mpu_wrappers.c). Defaults to 0 if left undefined.
#define configUSE_MPU_WRAPPERS_V1 0


/* When using the v2 MPU wrapper, set configPROTECTED_KERNEL_OBJECT_POOL_SIZE to
 * the total number of kernel objects, which includes tasks, queues, semaphores,
 * mutexes, event groups, timers, stream buffers and message buffers, in your
 * application. The application will not be able to have more than
 * configPROTECTED_KERNEL_OBJECT_POOL_SIZE kernel objects at any point of
 * time. */


//  <o>configPROTECTED_KERNEL_OBJECT_POOL_SIZE <1-0xFFFFFFFF>
//  <i> When using the v2 MPU wrapper, set configPROTECTED_KERNEL_OBJECT_POOL_SIZE to
//  <i> the total number of kernel objects, which includes tasks, queues, semaphores,
//  <i> mutexes, event groups, timers, stream buffers and message buffers, in your
//  <i> application. The application will not be able to have more than
//  <i> configPROTECTED_KERNEL_OBJECT_POOL_SIZE kernel objects at any point of
//  <i> time.
#define configPROTECTED_KERNEL_OBJECT_POOL_SIZE 10

/* When using the v2 MPU wrapper, set configSYSTEM_CALL_STACK_SIZE to the size
 * of the system call stack in words. Each task has a statically allocated
 * memory buffer of this size which is used as the stack to execute system
 * calls. For example, if configSYSTEM_CALL_STACK_SIZE is defined as 128 and
 * there are 10 tasks in the application, the total amount of memory used for
 * system call stacks is 128 * 10 = 1280 words. */


//  <o>configSYSTEM_CALL_STACK_SIZE <1-65535>
//  <i> When using the v2 MPU wrapper, set configSYSTEM_CALL_STACK_SIZE to the size
//  <i> of the system call stack in words. Each task has a statically allocated
//  <i> memory buffer of this size which is used as the stack to execute system
//  <i> calls. For example, if configSYSTEM_CALL_STACK_SIZE is defined as 128 and
//  <i> there are 10 tasks in the application, the total amount of memory used for
//  <i> system call stacks is 128 * 10 = 1280 words.
#define configSYSTEM_CALL_STACK_SIZE 128

/* When using the v2 MPU wrapper, set configENABLE_ACCESS_CONTROL_LIST to 1 to
 * enable Access Control List (ACL) feature. When ACL is enabled, an
 * unprivileged task by default does not have access to any kernel object other
 * than itself. The application writer needs to explicitly grant the
 * unprivileged task access to the kernel objects it needs using the APIs
 * provided for the same. Defaults to 0 if left undefined. */


//  <q>configENABLE_ACCESS_CONTROL_LIST
//  <i> When using the v2 MPU wrapper, set configENABLE_ACCESS_CONTROL_LIST to 1 to
//  <i> enable Access Control List (ACL) feature. When ACL is enabled, an
//  <i> unprivileged task by default does not have access to any kernel object other
//  <i> than itself. The application writer needs to explicitly grant the
//  <i> unprivileged task access to the kernel objects it needs using the APIs
//  <i> provided for the same. Defaults to 0 if left undefined.
#define configENABLE_ACCESS_CONTROL_LIST 1

// </h>

/******************************************************************************/
/* SMP( Symmetric MultiProcessing ) Specific Configuration definitions. *******/
/******************************************************************************/

// <h>SMP (Symmetric MultiProcessing) Specific Configuration definitions



/* Set configNUMBER_OF_CORES to the number of available processor cores.
 * Defaults to 1 if left undefined. */

/*
 #define configNUMBER_OF_CORES                     [Num of available cores]
 */


/* When using SMP (i.e. configNUMBER_OF_CORES is greater than one), set
 * configRUN_MULTIPLE_PRIORITIES to 0 to allow multiple tasks to run
 * simultaneously only if they do not have equal priority, thereby maintaining
 * the paradigm of a lower priority task never running if a higher priority task
 * is able to run. If configRUN_MULTIPLE_PRIORITIES is set to 1, multiple tasks
 * with different priorities may run simultaneously - so a higher and lower
 * priority task may run on different cores at the same time. */


//   <o>configNUMBER_OF_CORES <1-64>
//   <i> Number of available processor cores.
#define configNUMBER_OF_CORES_VAL 1
#if (configUSE_NUMBER_OF_CORES == 1)
  #define configNUMBER_OF_CORES configNUMBER_OF_CORES_VAL
#endif

/* When using SMP (i.e. configNUMBER_OF_CORES is greater than one), set
 * configUSE_CORE_AFFINITY to 1 to enable core affinity feature. When core
 * affinity feature is enabled, the vTaskCoreAffinitySet and
 * vTaskCoreAffinityGet APIs can be used to set and retrieve which cores a task
 * can run on. If configUSE_CORE_AFFINITY is set to 0 then the FreeRTOS
 * scheduler is free to run any task on any available core. */


//  <q>configRUN_MULTIPLE_PRIORITIES
//  <i> When using SMP (i.e. configNUMBER_OF_CORES is greater than one), set
//  <i> configRUN_MULTIPLE_PRIORITIES to 0 to allow multiple tasks to run
//  <i> simultaneously only if they do not have equal priority, thereby maintaining
//  <i> the paradigm of a lower priority task never running if a higher priority task
//  <i> is able to run. If configRUN_MULTIPLE_PRIORITIES is set to 1, multiple tasks
//  <i> with different priorities may run simultaneously - so a higher and lower
//  <i> priority task may run on different cores at the same time.
#define configRUN_MULTIPLE_PRIORITIES 0

//  <q>configUSE_CORE_AFFINITY
//  <i> When using SMP (i.e. configNUMBER_OF_CORES is greater than one), set
//  <i> configUSE_CORE_AFFINITY to 1 to enable core affinity feature. When core
//  <i> affinity feature is enabled, the vTaskCoreAffinitySet and
//  <i> vTaskCoreAffinityGet APIs can be used to set and retrieve which cores a task
//  <i> can run on. If configUSE_CORE_AFFINITY is set to 0 then the FreeRTOS
//  <i> scheduler is free to run any task on any available core.
#define configUSE_CORE_AFFINITY 0

/* When using SMP with core affinity feature enabled, set
 * configTASK_DEFAULT_CORE_AFFINITY to change the default core affinity mask for
 * tasks created without an affinity mask specified. Setting the define to 1
 * would make such tasks run on core 0 and setting it to (1 <<
 * portGET_CORE_ID()) would make such tasks run on the current core. This config
 * value is useful, if swapping tasks between cores is not supported (e.g.
 * Tricore) or if legacy code should be controlled. Defaults to tskNO_AFFINITY
 * if left undefined. */


//  <o>configTASK_DEFAULT_CORE_AFFINITY mode
//    <0=>tskNO_AFFINITY
//    <1=>Core 0 (1)
//    <2=>Current core (1 shl portGET_CORE_ID())
//    <3=>Custom affinity mask
//  <i> When using SMP with core affinity feature enabled, set
//  <i> configTASK_DEFAULT_CORE_AFFINITY to change the default core affinity mask for
//  <i> tasks created without an affinity mask specified. Setting the define to 1
//  <i> would make such tasks run on core 0 and setting it to (1 shl
//  <i> portGET_CORE_ID()) would make such tasks run on the current core. This config
//  <i> value is useful, if swapping tasks between cores is not supported (e.g.
//  <i> Tricore) or if legacy code should be controlled. Defaults to tskNO_AFFINITY
//  <i> if left undefined.
#define configTASK_DEFAULT_CORE_AFFINITY_SELECT 0

//  <o>configTASK_DEFAULT_CORE_AFFINITY custom mask <0x0-0xFFFFFFFF>
//  <i> Custom core affinity bitmask when configTASK_DEFAULT_CORE_AFFINITY mode is set to Custom affinity mask.
#define configTASK_DEFAULT_CORE_AFFINITY_VAL 0x01
#if (configTASK_DEFAULT_CORE_AFFINITY_SELECT == 0)
  #define configTASK_DEFAULT_CORE_AFFINITY tskNO_AFFINITY
#elif (configTASK_DEFAULT_CORE_AFFINITY_SELECT == 1)
  #define configTASK_DEFAULT_CORE_AFFINITY 1
#elif (configTASK_DEFAULT_CORE_AFFINITY_SELECT == 2)
  #define configTASK_DEFAULT_CORE_AFFINITY (1 << portGET_CORE_ID())
#elif (configTASK_DEFAULT_CORE_AFFINITY_SELECT == 3)
  #define configTASK_DEFAULT_CORE_AFFINITY configTASK_DEFAULT_CORE_AFFINITY_VAL
#endif


/* When using SMP (i.e. configNUMBER_OF_CORES is greater than one), if
 * configUSE_TASK_PREEMPTION_DISABLE is set to 1, individual tasks can be set to
 * either pre-emptive or co-operative mode using the vTaskPreemptionDisable and
 * vTaskPreemptionEnable APIs. */


//  <q>configUSE_TASK_PREEMPTION_DISABLE
//  <i> When using SMP (i.e. configNUMBER_OF_CORES is greater than one), if
//  <i> configUSE_TASK_PREEMPTION_DISABLE is set to 1, individual tasks can be set to
//  <i> either pre-emptive or co-operative mode using the vTaskPreemptionDisable and
//  <i> vTaskPreemptionEnable APIs.
#define configUSE_TASK_PREEMPTION_DISABLE 0


/* When using SMP (i.e. configNUMBER_OF_CORES is greater than one),
 * configTIMER_SERVICE_TASK_CORE_AFFINITY allows the application writer to set
 * the core affinity of the RTOS Daemon/Timer Service task. Defaults to
 * tskNO_AFFINITY if left undefined. */

//  <q>configUSE_PASSIVE_IDLE_HOOK
//  <i> When using SMP (i.e. configNUMBER_OF_CORES is greater than one), set
//  <i> configUSE_PASSIVE_IDLE_HOOK to 1 to allow the application writer to use
//  <i> the passive idle task hook to add background functionality without the
//  <i> overhead of a separate task. Defaults to 0 if left undefined.
#define configUSE_PASSIVE_IDLE_HOOK 0


/* When using SMP (i.e. configNUMBER_OF_CORES is greater than one),
 * configTIMER_SERVICE_TASK_CORE_AFFINITY allows the application writer to set
 * the core affinity of the RTOS Daemon/Timer Service task. Defaults to
 * tskNO_AFFINITY if left undefined. */


//  <o>configTIMER_SERVICE_TASK_CORE_AFFINITY mode
//    <0=>tskNO_AFFINITY
//    <1=>Core 0 (1)
//    <2=>Current core (1 shl portGET_CORE_ID())
//    <3=>Custom affinity mask
//  <i> When using SMP (i.e. configNUMBER_OF_CORES is greater than one),
//  <i> configTIMER_SERVICE_TASK_CORE_AFFINITY allows the application writer to set
//  <i> the core affinity of the RTOS Daemon/Timer Service task. Defaults to
//  <i> tskNO_AFFINITY if left undefined.
#define configTIMER_SERVICE_TASK_CORE_AFFINITY_SELECT 0

//  <o>configTIMER_SERVICE_TASK_CORE_AFFINITY custom mask <0x0-0xFFFFFFFF>
//  <i> Custom core affinity bitmask when configTIMER_SERVICE_TASK_CORE_AFFINITY mode is set to Custom affinity mask.
#define configTIMER_SERVICE_TASK_CORE_AFFINITY_VAL 0x01
#if (configTIMER_SERVICE_TASK_CORE_AFFINITY_SELECT == 0)
  #define configTIMER_SERVICE_TASK_CORE_AFFINITY tskNO_AFFINITY
#elif (configTIMER_SERVICE_TASK_CORE_AFFINITY_SELECT == 1)
  #define configTIMER_SERVICE_TASK_CORE_AFFINITY 1
#elif (configTIMER_SERVICE_TASK_CORE_AFFINITY_SELECT == 2)
  #define configTIMER_SERVICE_TASK_CORE_AFFINITY (1 << portGET_CORE_ID())
#elif (configTIMER_SERVICE_TASK_CORE_AFFINITY_SELECT == 3)
  #define configTIMER_SERVICE_TASK_CORE_AFFINITY configTIMER_SERVICE_TASK_CORE_AFFINITY_VAL
#endif

// </h>

/******************************************************************************/
/* ARMv8-M secure side port related definitions. ******************************/
/******************************************************************************/

/* secureconfigMAX_SECURE_CONTEXTS define the maximum number of tasks that can
 *  call into the secure side of an ARMv8-M chip.  Not used by any other ports.
 */


// <h>ARMv8-M secure side port related definitions

//  <o>secureconfigMAX_SECURE_CONTEXTS <0-256>
//  <i> secureconfigMAX_SECURE_CONTEXTS define the maximum number of tasks that can
//  <i> call into the secure side of an ARMv8-M chip.  Not used by any other ports.
#define secureconfigMAX_SECURE_CONTEXTS 5

/* Defines the kernel provided implementation of
 * vApplicationGetIdleTaskMemory() and vApplicationGetTimerTaskMemory()
 * to provide the memory that is used by the Idle task and Timer task
 * respectively. The application can provide it's own implementation of
 * vApplicationGetIdleTaskMemory() and vApplicationGetTimerTaskMemory() by
 * setting configKERNEL_PROVIDED_STATIC_MEMORY to 0 or leaving it undefined. */

//  <q>configKERNEL_PROVIDED_STATIC_MEMORY
//  <i> Defines the kernel provided implementation of
//  <i> vApplicationGetIdleTaskMemory() and vApplicationGetTimerTaskMemory()
//  <i> to provide the memory that is used by the Idle task and Timer task
//  <i> respectively. The application can provide it's own implementation of
//  <i> vApplicationGetIdleTaskMemory() and vApplicationGetTimerTaskMemory() by
//  <i> setting configKERNEL_PROVIDED_STATIC_MEMORY to 0 or leaving it undefined.
#define configKERNEL_PROVIDED_STATIC_MEMORY 1

// </h>

/******************************************************************************/
/* ARMv8-M port Specific Configuration definitions. ***************************/
/******************************************************************************/
// <h>ARMv8-M port Specific Configuration definitions


/* Set configENABLE_TRUSTZONE to 1 when running FreeRTOS on the non-secure side
 * to enable the TrustZone support in FreeRTOS ARMv8-M ports which allows the
 * non-secure FreeRTOS tasks to call the (non-secure callable) functions
 * exported from secure side. */


//  <q>configENABLE_TRUSTZONE
//  <i> Set configENABLE_TRUSTZONE to 1 when running FreeRTOS on the non-secure side
//  <i> to enable the TrustZone support in FreeRTOS ARMv8-M ports which allows the
//  <i> non-secure FreeRTOS tasks to call the (non-secure callable) functions
//  <i> exported from secure side.
#define configENABLE_TRUSTZONE 1


/* If the application writer does not want to use TrustZone, but the hardware
 * does not support disabling TrustZone then the entire application (including
 * the FreeRTOS scheduler) can run on the secure side without ever branching to
 * the non-secure side. To do that, in addition to setting
 * configENABLE_TRUSTZONE to 0, also set configRUN_FREERTOS_SECURE_ONLY to 1. */


//  <q>configRUN_FREERTOS_SECURE_ONLY
//  <i> If the application writer does not want to use TrustZone, but the hardware
//  <i> does not support disabling TrustZone then the entire application (including
//  <i> the FreeRTOS scheduler) can run on the secure side without ever branching to
//  <i> the non-secure side. To do that, in addition to setting
//  <i> configENABLE_TRUSTZONE to 0, also set configRUN_FREERTOS_SECURE_ONLY to 1.
#define configRUN_FREERTOS_SECURE_ONLY 1

/* Set configENABLE_MPU to 1 to enable the Memory Protection Unit (MPU), or 0
 * to leave the Memory Protection Unit disabled. */

//  <q>configENABLE_MPU
//  <i> Set configENABLE_MPU to 1 to enable the Memory Protection Unit (MPU), or 0
//  <i> to leave the Memory Protection Unit disabled.
#define configENABLE_MPU 1


/* Set configENABLE_FPU to 1 to enable the Floating Point Unit (FPU), or 0
 * to leave the Floating Point Unit disabled. */


//  <q>configENABLE_FPU
//  <i> Set configENABLE_FPU to 1 to enable the Floating Point Unit (FPU), or 0
//  <i> to leave the Floating Point Unit disabled.
#define configENABLE_FPU 1


/* Set configENABLE_MVE to 1 to enable the M-Profile Vector Extension (MVE)
 * support, or 0 to leave the MVE support disabled. This option is only
 * applicable to Cortex-M52, Cortex-M55, Cortex-M85 and STAR-MC3 ports as
 * M-Profile Vector Extension (MVE) is available only on these architectures.
 * configENABLE_MVE must be left undefined, or defined to 0 for the
 * Cortex-M23,Cortex-M33 and Cortex-M35P ports. */

//  <q>configENABLE_MVE
//  <i> Set configENABLE_MVE to 1 to enable the M-Profile Vector Extension (MVE)
//  <i> support, or 0 to leave the MVE support disabled. This option is only
//  <i> applicable to Cortex-M55 and Cortex-M85 ports as M-Profile Vector Extension
//  <i> (MVE) is available only on these architectures. configENABLE_MVE must be left
//  <i> undefined, or defined to 0 for the Cortex-M23,Cortex-M33 and Cortex-M35P
//  <i> ports.
#define configENABLE_MVE 1

// </h>

/******************************************************************************/
/* ARMv7-M and ARMv8-M port Specific Configuration definitions. ***************/
/******************************************************************************/

/* Set configCHECK_HANDLER_INSTALLATION to 1 to enable additional asserts to
 * verify that the application has correctly installed FreeRTOS interrupt
 * handlers.
 *
 * An application can install FreeRTOS interrupt handlers in one of the
 * following ways:
 *   1. Direct Routing  -  Install the functions vPortSVCHandler and
 * xPortPendSVHandler for SVC call and PendSV interrupts respectively.
 *   2. Indirect Routing - Install separate handlers for SVC call and PendSV
 *                         interrupts and route program control from those
 * handlers to vPortSVCHandler and xPortPendSVHandler functions. The
 * applications that use Indirect Routing must set
 * configCHECK_HANDLER_INSTALLATION to 0.
 *
 * Defaults to 1 if left undefined. */


// <h>ARMv7-M and ARMv8-M port Specific Configuration definitions

//  <o>configCHECK_HANDLER_INSTALLATION
//    <0=>0 (Indirect Routing / Disabled)
//    <1=>1 (Direct Routing / Enabled)
//  <i> Set configCHECK_HANDLER_INSTALLATION to 1 to enable additional asserts to
//  <i> verify that the application has correctly installed FreeRTOS interrupt
//  <i> handlers.
//  <i>
//  <i> An application can install FreeRTOS interrupt handlers in one of the
//  <i> following ways:
//  <i>   1. Direct Routing  -  Install the functions vPortSVCHandler and
//  <i> xPortPendSVHandler for SVC call and PendSV interrupts respectively.
//  <i>   2. Indirect Routing - Install separate handlers for SVC call and PendSV
//  <i>                         interrupts and route program control from those
//  <i> handlers to vPortSVCHandler and xPortPendSVHandler functions. The
//  <i> applications that use Indirect Routing must set
//  <i> configCHECK_HANDLER_INSTALLATION to 0.
//  <i>
//  <i> Defaults to 1 if left undefined.
#define configCHECK_HANDLER_INSTALLATION 1

// </h>

/******************************************************************************/
/* Definitions that include or exclude functionality. *************************/
/******************************************************************************/

/* Set the following configUSE_* constants to 1 to include the named feature in
 * the build, or 0 to exclude the named feature from the build. */


// <h>Definitions that include or exclude functionality

//  <q>configUSE_TASK_NOTIFICATIONS
//  <i> Set the following configUSE_* constants to 1 to include the named feature in
//  <i> the build, or 0 to exclude the named feature from the build.
#define configUSE_TASK_NOTIFICATIONS 1

//  <q>configUSE_MUTEXES
//  <i> Set the following configUSE_* constants to 1 to include the named feature in
//  <i> the build, or 0 to exclude the named feature from the build.
#define configUSE_MUTEXES 1

//  <q>configUSE_RECURSIVE_MUTEXES
//  <i> Set the following configUSE_* constants to 1 to include the named feature in
//  <i> the build, or 0 to exclude the named feature from the build.
#define configUSE_RECURSIVE_MUTEXES 1

//  <q>configUSE_COUNTING_SEMAPHORES
//  <i> Set the following configUSE_* constants to 1 to include the named feature in
//  <i> the build, or 0 to exclude the named feature from the build.
#define configUSE_COUNTING_SEMAPHORES 1

//  <q>configUSE_QUEUE_SETS
//  <i> Set the following configUSE_* constants to 1 to include the named feature in
//  <i> the build, or 0 to exclude the named feature from the build.
#define configUSE_QUEUE_SETS 0

//  <q>configUSE_APPLICATION_TASK_TAG
//  <i> Set the following configUSE_* constants to 1 to include the named feature in
//  <i> the build, or 0 to exclude the named feature from the build.
#define configUSE_APPLICATION_TASK_TAG 0


/* USE_POSIX_ERRNO enables the task global FreeRTOS_errno variable which will
 * contain the most recent error for that task. */

//  <q>configUSE_POSIX_ERRNO
//  <i> USE_POSIX_ERRNO enables the task global FreeRTOS_errno variable which will
//  <i> contain the most recent error for that task.
#define configUSE_POSIX_ERRNO 0


/* Set the following INCLUDE_* constants to 1 to include the named API function,
 * or 0 to exclude the named API function.  Most linkers will remove unused
 * functions even when the constant is 1. */
 
//  <h>INCLUDE_* API functions

//   <q>INCLUDE_vTaskPrioritySet
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_vTaskPrioritySet 1

//   <q>INCLUDE_uxTaskPriorityGet
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_uxTaskPriorityGet 1

//   <q>INCLUDE_vTaskDelete
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_vTaskDelete 1

//   <q>INCLUDE_vTaskSuspend
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_vTaskSuspend 1

//   <q>INCLUDE_vTaskDelayUntil
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_vTaskDelayUntil 1

//   <q>INCLUDE_vTaskDelay
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_vTaskDelay 1

//   <q>INCLUDE_xTaskGetSchedulerState
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_xTaskGetSchedulerState 1

//   <q>INCLUDE_xTaskGetCurrentTaskHandle
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_xTaskGetCurrentTaskHandle 1

//   <q>INCLUDE_uxTaskGetStackHighWaterMark
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_uxTaskGetStackHighWaterMark 0

//   <q>INCLUDE_xTaskGetIdleTaskHandle
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_xTaskGetIdleTaskHandle 0

//   <q>INCLUDE_eTaskGetState
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_eTaskGetState 0

//   <q>INCLUDE_xTimerPendFunctionCall
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_xTimerPendFunctionCall 0

//   <q>INCLUDE_xTaskAbortDelay
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_xTaskAbortDelay 0

//   <q>INCLUDE_xTaskGetHandle
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_xTaskGetHandle 0

//   <q>INCLUDE_xTaskResumeFromISR
//   <i> Set the following INCLUDE_* constants to 1 to include the named API function,
//   <i> or 0 to exclude the named API function.  Most linkers will remove unused
//   <i> functions even when the constant is 1.
#define INCLUDE_xTaskResumeFromISR 1

//  </h>
// </h>



//------------- <<< end of configuration section >>> ---------------------------
/* clang-format on */

#endif /* FREERTOS_CONFIG_H */

