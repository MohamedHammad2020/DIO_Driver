/************************************************/
/* Auther      : MOHAMED HAMMAD                 */
/* Version     : 1.0 V                          */
/* Date        : 26/3/2020                      */
/* Description : Function_Interface                  */
/************************************************/


/********************************************/
/* guardof file  will call one time in .C   */                    
/********************************************/
#ifndef _DIO_INT_H_
#define _DIO_INT_H_
/*PORT ID       */
#define Copy_u8_PORTA  0
#define Copy_u8_PORTb  1
#define Copy_u8_PORTc  2
#define Copy_u8_PORTd  3
/*          PIN ID         */
#define Copy_u8_PIN0 0
#define Copy_u8_PIN1 1
#define Copy_u8_PIN2 2
#define Copy_u8_PIN3 3
#define Copy_u8_PIN4 4
#define Copy_u8_PIN5 5
#define Copy_u8_PIN6 6
#define Copy_u8_PIN7 7
/*      DIRECTION ID        */
#define Copy_u8_OUTPUT 1
#define Copy_u8_INPUT  0
/*         VALUE            */
#define Copy_u8_HIGH 1
#define Copy_u8_LOW  0
/********************************FUNCTIONS PROTOTYPES*****************************/
ERROR_enuSTATUS DIO_enuSetPinDirection(u8 Copy_u8_PORTID ,u8 Copy_u8_PINID ,u8 Copy_u8_Direction); 
ERROR_enuSTATUS DIO_enuSetPinValue(u8 Copy_u8_PORTID ,u8 Copy_u8_PINID ,u8 Copy_u8_Value);
u8              DIO_u8GetPinValue( u8 Copy_u8_PORTID ,u8 Copy_u8_PINID ); 
ERROR_enuSTATUS DIO_enuSetPortDirection(u8 Copy_u8_PORTID u8 Copy_u8_Direction);
ERROR_enuSTATUS DIO_enuSetPortValue(u8 Copy_u8_PORTID ,u8 Copy_u8_Value);






#endif