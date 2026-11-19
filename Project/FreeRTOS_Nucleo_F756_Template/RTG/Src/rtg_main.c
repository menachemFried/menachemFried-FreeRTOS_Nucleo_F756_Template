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
#include "gpio.h"


// SystemView example-code:
// Include for using SEGGER_SYSVIEW_PrintfHost()
//#include "../../Middlewares/Third_Party/SystemView/SEGGER/SEGGER_SYSVIEW.h"

// FreeRTOS example-code:
void Task1(void *argument);
void Task2(void *argument);



void rtg_main(void)
{

	// FreeRTOS example-code:
	const static uint32_t stackSize = 128;



	// SystemView example-code:
	// Initialize SEGGER SystemView
	//SEGGER_SYSVIEW_Conf();

	// FreeRTOS example-code:
	// Create Task1 and Task2, and start the FreeRTOS scheduler
	// Task1 has higher priority than Task2.
	if ( xTaskCreate(Task1, "task1", stackSize, NULL, tskIDLE_PRIORITY + 3, NULL)
			== pdPASS ) {
		if ( xTaskCreate(Task2, "task2", stackSize, NULL, tskIDLE_PRIORITY + 2,
				NULL) == pdPASS ) {
			// The scheduler shouldn't return unless there's a problem
			vTaskStartScheduler();
		}
	}




	while (1)
	{

	}
}




// FreeRTOS example-code:
// FreeRTOS task:
// * Turns on the blue LED, to indicate the FreeRTOS scheduler has started.
// * If the code that uses SystemView is un-commented:
//   * When the task is started, it spins until the SystemView app is started, in Record-mode
// * The task flashes the green LED
void Task1(void *argument) {

    uint32_t iterationCount = 0;

    // Turn on the blue LED, to indicate the FreeRTOS scheduler has started.
    // * LD1 and LD2 are specified in the dev-board's "User Manual"
    HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);

    // SystemView example-code:
    // The SystemView app's Record-mode must be started after the FreeRTOS scheduler is started.
    // To get all of the SEGGER_SYSVIEW_PrintfHost() messages, spin until Record mode is started.
    //while(SEGGER_SYSVIEW_IsStarted()==0);
    //SEGGER_SYSVIEW_PrintfHost("Task1: loop starting...\n");

    for (;;) {
        // Toggle the green LED
        HAL_GPIO_TogglePin(LD1_GPIO_Port, LD1_Pin);

        iterationCount++;

        // SystemView example-code:
        // Generate SystemView message
        //SEGGER_SYSVIEW_PrintfHost("Task1: LED toggled. Iteration: %u\n", iterationCount);

        // Delay 500ms
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}

// FreeRTOS example-code:
// FreeRTOS task:
// * In Task1, if its code that uses SystemView is un-commented:
//   * Task2 will not run until Task1 detects the SystemView app is started in Record mode.
// * Task2 flashes the red LED
void Task2(void *argument) {

    uint32_t iterationCount = 0;

    for (;;) {
        // Toggle the red LED
        HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);

        // Generate SystemView message
        iterationCount++;

        // SystemView example-code:
        //SEGGER_SYSVIEW_PrintfHost("Task2: LED toggled. Iteration: %u\n", iterationCount);

        // Delay 500ms
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}
