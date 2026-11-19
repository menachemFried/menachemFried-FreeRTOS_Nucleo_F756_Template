/*
 * rtg_main.c
 *
 * Create your tasks here, then start the scheduler.
 */
#include <stdio.h>
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"
#include "rtg_main.h"

static void hello_world(void *pv);

TaskHandle_t hello_task;

void rtg_main(void)
{
	printf("\r\nFreeRTOS %s has started\r\n", tskKERNEL_VERSION_NUMBER);

	BaseType_t status = xTaskCreate(hello_world, "hello task", configMINIMAL_STACK_SIZE, NULL, 3, &hello_task);
	if(status != pdPASS)
	{
		printf("Error allocating memory for hello task\r\n");
		while(1);
	}

	vTaskStartScheduler();

	/* Only reached if there was not enough heap for the idle/timer tasks. */
	printf("Scheduler failed to start\r\n");
	while(1);
}

static void hello_world(void *pv)
{
	while(1)
	{
		printf("Hello, world!\r\n");
		HAL_GPIO_TogglePin(LD1_GPIO_Port, LD1_Pin);
		vTaskDelay(pdMS_TO_TICKS(1000));
	}
	vTaskDelete(NULL);
}
