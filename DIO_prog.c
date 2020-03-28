/************************************************/
/* Auther      : MOHAMED HAMMAD                 */
/* Version     : 1.0 V                          */
/* Date        : 26/3/2020                      */
/* Description : Function_Imp                   */
/************************************************/


/***************************************************************************/
/************************  STD LIB DIRECTIVES  *****************************/
/***************************************************************************/
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"ERROR_STATUS.h"
/***************************************************************************/
/************************  COMPONENT DIRECTIVES  ***************************/
/***************************************************************************/
#include"DIO_int.h"
#include"DIO_reg.h"


/***************************************************************************/
/***********************Function_Implementation*****************************/
/***************************************************************************/


/***********************SetPinDirection*****************************/

ERROR_enuSTATUS DIO_enuSetPinDirection(u8 Copy_u8_PORTID ,u8 Copy_u8_PINID ,u8 Copy_u8_Direction)
{
	ERROR_enuSTATUS Local_u8_enuError=ES_NOK;
	if((Copy_u8_PORTID<4)&&(Copy_u8_PINID<8))
	{
		if(Copy_u8_Direction==Copy_u8_OUTPUT)
		{
			switch(Copy_u8_PORTID)
			{
			case Copy_u8_PORTA :SET_BIT(DIO_Pu8_DDRA,Copy_u8_PINID);break;
			case Copy_u8_PORTB :SET_BIT(DIO_Pu8_DDRB,Copy_u8_PINID);break;
			case Copy_u8_PORTC :SET_BIT(DIO_Pu8_DDRC,Copy_u8_PINID);break;
			case Copy_u8_PORTD :SET_BIT(DIO_Pu8_DDRD,Copy_u8_PINID);break;
			}
			Local_u8_enuError=ES_OK;
		}
		else if(Copy_u8_Direction==Copy_u8_INPUT)
		{
			switch(Copy_u8_PORTID)
			{
			case Copy_u8_PORTA :CLR_BIT(DIO_Pu8_DDRA,Copy_u8_PINID);break;
			case Copy_u8_PORTB :CLR_BIT(DIO_Pu8_DDRB,Copy_u8_PINID);break;
			case Copy_u8_PORTC :CLR_BIT(DIO_Pu8_DDRC,Copy_u8_PINID);break;
			case Copy_u8_PORTD :CLR_BIT(DIO_Pu8_DDRD,Copy_u8_PINID);break;
			}
		}
		else
		{

			Local_u8_enuError=ES_OUT_OF_RANGE;
		}
	}


	else
	{
		Local_u8_enuError=ES_OUT_OF_RANGE;
	}
	return Local_u8_enuError;
}

/***********************SetPinValue*****************************/
ERROR_enuSTATUS DIO_enuSetPinValue(u8 Copy_u8_PORTID ,u8 Copy_u8_PINID ,u8 Copy_u8_Value)
{
	ERROR_enuSTATUS Local_u8_enuError=ES_NOK;
	if((Copy_u8_PORTID<4)&&(Copy_u8_PINID<8))
	{
		if(Copy_u8_Value==Copy_u8_HIGH)
		{
			switch(Copy_u8_PORTID)
			{
			case Copy_u8_PORTA :SET_BIT(DIO_Pu8_PORTA,Copy_u8_PINID);break;
			case Copy_u8_PORTB :SET_BIT(DIO_Pu8_PORTB,Copy_u8_PINID);break;
			case Copy_u8_PORTC :SET_BIT(DIO_Pu8_PORTC,Copy_u8_PINID);break;
			case Copy_u8_PORTD :SET_BIT(DIO_Pu8_PORTD,Copy_u8_PINID);break;
			}

			Local_u8_enuError=ES_OK;
		}
		else if(Copy_u8_Value==Copy_u8_LOW)
		{
			switch(Copy_u8_PORTID)
			{
			case Copy_u8_PORTA :CLR_BIT(DIO_Pu8_PORTA,Copy_u8_PINID);break;
			case Copy_u8_PORTB :CLR_BIT(DIO_Pu8_PORTB,Copy_u8_PINID);break;
			case Copy_u8_PORTC :CLR_BIT(DIO_Pu8_PORTC,Copy_u8_PINID);break;
			case Copy_u8_PORTD :CLR_BIT(DIO_Pu8_PORTD,Copy_u8_PINID);break;
			}
			Local_u8_enuError=ES_OK;
		}
		else
		{
			Local_u8_enuError=ES_OUT_OF_RANGE;
		}
	}


	else
		Local_u8_enuError=ES_OUT_OF_RANGE;

	return Local_u8_enuError;
}
/***********************GetPinValue*****************************/
u8   DIO_u8GetPinValue( u8 Copy_u8_PORTID ,u8 Copy_u8_PINID )
{
	u8 Local_u8Value=0;

	if((Copy_u8_PORTID<4)&&(Copy_u8_PINID<8))
	{

		switch(Copy_u8_PORTID)
		{
		case Copy_u8_PORTA :Local_u8Value=GET_BIT(DIO_Pu8_PINA,Copy_u8_PINID);break;
		case Copy_u8_PORTB :Local_u8Value=GET_BIT(DIO_Pu8_PINB,Copy_u8_PINID);break;
		case Copy_u8_PORTC :Local_u8Value=GET_BIT(DIO_Pu8_PINC,Copy_u8_PINID);break;
		case Copy_u8_PORTD :Local_u8Value=GET_BIT(DIO_Pu8_PIND,Copy_u8_PINID);break;
		}
	}
	else
	{
	}

	return Local_u8Value;

}
/***********************SetPortDirection*****************************/
ERROR_enuSTATUS DIO_enuSetPortDirection(u8 Copy_u8_PORTID ,u8 Copy_u8_Direction)
{
	ERROR_enuSTATUS Local_u8_enuError=ES_NOK;
	if (Copy_u8_PORTID<4)
	{
		switch(Copy_u8_PORTID)
		{
		case Copy_u8_PORTA :DIO_Pu8_DDRA=Copy_u8_Direction;break;
		case Copy_u8_PORTB :DIO_Pu8_DDRB=Copy_u8_Direction;break;
		case Copy_u8_PORTC :DIO_Pu8_DDRC=Copy_u8_Direction;break;
		case Copy_u8_PORTD :DIO_Pu8_DDRD=Copy_u8_Direction;break;
		}
		Local_u8_enuError=ES_OK;
	}

	else{

		Local_u8_enuError=ES_OUT_OF_RANGE;


	}
	return Local_u8_enuError;
}
/***********************SetPortValue*****************************/
ERROR_enuSTATUS DIO_enuSetPortValue(u8 Copy_u8_PORTID ,u8 Copy_u8_Value)
{
	ERROR_enuSTATUS Local_u8_enuError=ES_NOK;
	if (Copy_u8_PORTID<4)
	{
		switch(Copy_u8_PORTID)
		{
		case Copy_u8_PORTA :DIO_Pu8_PORTA=Copy_u8_Value;break;
		case Copy_u8_PORTB :DIO_Pu8_PORTB=Copy_u8_Value;break;
		case Copy_u8_PORTC :DIO_Pu8_PORTC=Copy_u8_Value;break;
		case Copy_u8_PORTD :DIO_Pu8_PORTD=Copy_u8_Value;break;
		}
		Local_u8_enuError=ES_OK;
	}

	else{
		Local_u8_enuError=ES_OUT_OF_RANGE;
	}
	return Local_u8_enuError;
}
