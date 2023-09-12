

#ifndef GPIO_H_
#define GPIO_H_


/* Private includes ----------------------------------------------------------*/

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/
enum {INPUT=0,OUTPUT};
enum {PORT0=0,PORT1,PORT2,PORT3,PORT4};
enum {PIN0=0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7,PIN8,PIN9,PIN10,
	  PIN11,PIN12,PIN13,PIN14,PIN15,PIN16,PIN17,PIN18,PIN19,PIN20,
	  PIN21,PIN22,PIN23,PIN24,PIN25,PIN26,PIN27,PIN28,PIN29,PIN30,PIN31};

/* Private macro -------------------------------------------------------------*/




/**
  * @brief Setting direction for GPIO Controller
  * @param[in] ucPortnum specify the Port number
  * @param[in] ucPinnum specify the Pin number
  * @param[in] ucDirection specify the Direction
  * @return None
  **/
void vGpioSetDir(uint8_t ucPortnum, uint8_t ucPinnum,uint8_t ucDirection);

/**
 * @brief Setting Pin as HIGH for GPIO Controller
 * @param[in] ucPortnum specify the Port number
 * @param[in] ucPinnum specify the Pin number
 * @return None
 **/
void vGpioSetPin(uint8_t ucPortnum, uint8_t ucPinnum);

/**
 * @brief Setting Pin as LOW for GPIO Controller
 * @param[in] ucPortnum specify the Port number
 * @param[in] ucPinnum specify the Pin number
 * @return None
 **/
void vGpioClrPin(uint8_t ucPortnum, uint8_t ucPinnum);






#endif /* GPIO_H_ */
