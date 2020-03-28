/************************************************/
/* Auther      : MOHAMED HAMMAD                 */
/* Version     : 1.0 V                          */
/* Date        : 26/3/2020                      */
/* Description : DIO_REG_LIB                    */
/************************************************/


/************************************************/
/*    guardof file  will call one time in .C    */                    
/************************************************/
#ifndef _DIO_REG_H_
#define _DIO_REG_H_
/***************PORT  A   Register*************************/
#define DIO_Pu8_DDRA  *((volatile u8 *)0X3A)
#define DIO_Pu8_PORTA *((volatile u8 *)0X3B) 
#define DIO_Pu8_PINA  *((volatile u8 *)0X39)
/***************PORT  B   Register*************************/
#define DIO_Pu8_DDRB  *((volatile u8 *)0X37)
#define DIO_Pu8_PORTB *((volatile u8 *)0X38)
#define DIO_Pu8_PINB  *((volatile u8 *)0X36)
/***************PORT  C   Register*************************/
#define DIO_Pu8_DDRC  *((volatile u8 *)0X34)
#define DIO_Pu8_PORTC *((volatile u8 *)0X35)
#define DIO_Pu8_PINC  *((volatile u8 *)0X33)
/***************PORT  D   Register*************************/
#define DIO_Pu8_DDRD  *((volatile u8 *)0X31)
#define DIO_Pu8_PORTD *((volatile u8 *)0X32)
#define DIO_Pu8_PIND  *((volatile u8 *)0X30)



#endif