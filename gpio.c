

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#include <LPC17xx.h>
/* Private includes ----------------------------------------------------------*/
#include "gpio.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

 /**
  * @brief Setting direction for GPIO Controller
  * @param[in] ucPortnum specify the Port number
  * @param[in] ucPinnum specify the Pin number
  * @param[in] ucDirection specify the Direction
  * @return None
  **/
void vGpioSetDir(uint8_t ucPortnum, uint8_t ucPinnum,uint8_t ucDirection)
{
	switch(ucPortnum)
	{
	case PORT0:
		if(ucDirection==OUTPUT)
			LPC_GPIO0->FIODIR |= 1<<ucPinnum;
		else if(ucDirection==INPUT)
			LPC_GPIO0->FIODIR &= ~(1<<ucPinnum);
		break;
	case PORT1:
		if (ucDirection == OUTPUT)
			LPC_GPIO1->FIODIR |= 1 << ucPinnum;
		else if (ucDirection == INPUT)
			LPC_GPIO1->FIODIR &= ~(1 << ucPinnum);
		break;
	case PORT2:
		if (ucDirection == OUTPUT)
			LPC_GPIO2->FIODIR |= 1 << ucPinnum;
		else if (ucDirection == INPUT)
			LPC_GPIO2->FIODIR &= ~(1 << ucPinnum);
		break;
	case PORT3:
		if (ucDirection == OUTPUT)
			LPC_GPIO3->FIODIR |= 1 << ucPinnum;
		else if (ucDirection == INPUT)
			LPC_GPIO3->FIODIR &= ~(1 << ucPinnum);
		break;
	case PORT4:
		if (ucDirection == OUTPUT)
			LPC_GPIO4->FIODIR |= 1 << ucPinnum;
		else if (ucDirection == INPUT)
			LPC_GPIO4->FIODIR &= ~(1 << ucPinnum);
		break;
	default:
		/* DO NOTHING */
		break;
	}
}

/**
 * @brief Setting Pin as HIGH for GPIO Controller
 * @param[in] ucPortnum specify the Port number
 * @param[in] ucPinnum specify the Pin number
 * @return None
 **/
void vGpioSetPin(uint8_t ucPortnum, uint8_t ucPinnum)
{
	switch(ucPortnum)
	{
	case PORT0:
			LPC_GPIO0->FIOSET = 1<<ucPinnum;
		break;
	case PORT1:
			LPC_GPIO1->FIOSET = 1 << ucPinnum;
		break;
	case PORT2:
			LPC_GPIO2->FIOSET = 1 << ucPinnum;
		break;
	case PORT3:
			LPC_GPIO3->FIOSET = 1 << ucPinnum;
		break;
	case PORT4:
			LPC_GPIO4->FIOSET = 1 << ucPinnum;
		break;
	default:
		/* DO NOTHING */
		break;
	}
}

/**
 * @brief Setting Pin as LOW for GPIO Controller
 * @param[in] ucPortnum specify the Port number
 * @param[in] ucPinnum specify the Pin number
 * @return None
 **/
void vGpioClrPin(uint8_t ucPortnum, uint8_t ucPinnum)
{
	switch(ucPortnum)
		{
		case PORT0:
				LPC_GPIO0->FIOCLR = 1<<ucPinnum;
			break;
		case PORT1:
				LPC_GPIO1->FIOCLR = 1 << ucPinnum;
			break;
		case PORT2:
				LPC_GPIO2->FIOCLR = 1 << ucPinnum;
			break;
		case PORT3:
				LPC_GPIO3->FIOCLR = 1 << ucPinnum;
			break;
		case PORT4:
				LPC_GPIO4->FIOCLR = 1 << ucPinnum;
			break;
		default:
			/* DO NOTHING */
			break;
		}
}
















