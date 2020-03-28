/************************************************/
/* Auther      : Hammad                         */
/* Version     : 1.0 V                          */
/* Date        : 26/3/2020                      */
/* Description : ERROR_STATUS_LIB               */
/************************************************/


/********************************************/
/* guardof file  will call one time in .C   */                    
/********************************************/
#ifndef _ERROR_STATUS_H_
#define _ERROR_STATUS_H_

typedef enum ERROR_enuSTATU
{
		ES_OK,
        ES_NOK,
		ES_OUT_OF_RANGE,
	    ES_NULL_POINTER	
}ERROR_enuSTATUS;

#endif