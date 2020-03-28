/************************************************/
/* Auther      : Hammad                         */
/* Version     : 1.0 V                          */
/* Date        : 26/3/2020                      */
/* Description : BIT_MATH_LIB                   */
/************************************************/


/********************************************/
/* guardof file  will call one time in .C   */                    
/********************************************/
#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

#define SET_BIT(REG,BIT_NO)  REG|=(1<<BIT_NO)
#define CLR_BIT(REG,BIT_NO)  REG&=~(1<<BIT_NO)
#define TOG-BIT(REG,BIT_NO)  REG^=(1<<BIT_NO)
#define GET_BIT(REG,BIT_NO)  ((REG>>BIT_NO)&1)
#define ASN_BIT(REG,BIT_NO,val)  REG=((REG&(~(1<<BIT_NO)))|(val<<BIT_NO))

#endif