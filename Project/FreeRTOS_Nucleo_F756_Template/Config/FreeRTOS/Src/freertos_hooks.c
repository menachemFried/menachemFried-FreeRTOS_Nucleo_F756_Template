/*
 * freertos_hooks.c
 *
 * Application hooks called by the kernel.
 * Enabled in FreeRTOSConfig.h:
 *   configUSE_IDLE_HOOK            1 -> vApplicationIdleHook()
 *   configCHECK_FOR_STACK_OVERFLOW 2 -> vApplicationStackOverflowHook()
 *   configUSE_MALLOC_FAILED_HOOK   1 -> vApplicationMallocFailedHook()
 *   configASSERT()                   -> vAssertCalled()
 *   configGENERATE_RUN_TIME_STATS  1 -> configureTimerForRunTimeStats(),
 *                                       getRunTimeCounterValue()
 *
 * The error hooks print a message and halt so you can inspect the system
 * in the debugger (Pause -> look at the call stack).
 */
#include <stdio.h>
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"

/* Runs in the idle task whenever no other task is ready.
 * Must never block (no vTaskDelay, no waiting on queues/semaphores). */
void vApplicationIdleHook(void)
{
}

void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName)
{
	(void)xTask;
	taskDISABLE_INTERRUPTS();
	printf("\r\n*** STACK OVERFLOW in task \"%s\" ***\r\n", pcTaskName);
	for(;;);
}

void vApplicationMallocFailedHook(void)
{
	taskDISABLE_INTERRUPTS();
	printf("\r\n*** MALLOC FAILED - increase configTOTAL_HEAP_SIZE ***\r\n");
	for(;;);
}

void vAssertCalled(const char *file, int line)
{
	taskDISABLE_INTERRUPTS();
	printf("\r\n*** configASSERT failed: %s:%d ***\r\n", file, line);
	for(;;);
}

/* Run-time stats time base: DWT cycle counter (counts CPU clock cycles).
 * Called once by vTaskStartScheduler(). */
void configureTimerForRunTimeStats(void)
{
    CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
    DWT->LAR = 0xC5ACCE55; /* Cortex-M7 only, remove if it fails to compile */
    DWT->CYCCNT = 0;
    DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;
}

unsigned long getRunTimeCounterValue(void)
{
    return DWT->CYCCNT;
}
