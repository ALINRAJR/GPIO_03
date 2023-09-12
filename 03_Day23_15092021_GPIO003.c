

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
/* Private includes ----------------------------------------------------------*/
#include "gpio.h"
/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/* Crude Delay Implementation */
void vAppDelay(uint32_t count)
{
	int i,j;
	for(i=0;i<count;i++)
		for(j=0;j<0xA00;j++);
}


/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* MCU Configuration--------------------------------------------------------*/

  /* Initialize all configured peripherals */
	vGpioSetDir(PORT1,PIN19,OUTPUT);
	vGpioSetDir(PORT1,PIN20,OUTPUT);
	vGpioSetDir(PORT1,PIN21,OUTPUT);
	vGpioSetDir(PORT1,PIN22,OUTPUT);
	vGpioSetDir(PORT1,PIN23,OUTPUT);
	vGpioSetDir(PORT1,PIN24,OUTPUT);
	vGpioSetDir(PORT1,PIN25,OUTPUT);
	vGpioSetDir(PORT1,PIN26,OUTPUT);

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)  // for(;;)
  {

	  vGpioSetPin(PORT1,PIN19);
	  vGpioSetPin(PORT1,PIN20);
	  vGpioSetPin(PORT1,PIN21);
	  vGpioSetPin(PORT1,PIN22);
	  vGpioSetPin(PORT1,PIN23);
	  vGpioSetPin(PORT1,PIN24);
	  vGpioSetPin(PORT1,PIN25);
	  vGpioSetPin(PORT1,PIN26);

	  vAppDelay(1000);
	  vGpioClrPin(PORT1,PIN19);
	  vGpioClrPin(PORT1,PIN20);
	  vGpioClrPin(PORT1,PIN21);
	  vGpioClrPin(PORT1,PIN22);
	  vGpioClrPin(PORT1,PIN23);
	  vGpioClrPin(PORT1,PIN24);
	  vGpioClrPin(PORT1,PIN25);
	  vGpioClrPin(PORT1,PIN26);

	  vAppDelay(1000);



  }
  /* End of Application entry point */
}




