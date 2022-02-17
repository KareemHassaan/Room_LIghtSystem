/**************************************************************************************************************************************
* LOG:                                                                   							   								  *
* VERSION					AUTHOR           					DATE 						DESCRIPTION 		   					  *
* 1.0.0 					Kareem Hassaan						20 DEC,2021					- Initial Creation						  *
**************************************************************************************************************************************/
/**************************************************************************************************************************************
* ! Title      	: Transistor Switch Driver                                                        							          *                     
* ! File Name	: TRANS_SWITCH_intrface.h                                                     							              *
* ! Description : This file has the Definitions needed		         		        							                      *
* ! Compiler  	: GNU AVR cross Compiler                                            							                      *
* ! Target 	  	: Atmega32 Micro-Controller                                         							                      *
* ! Layer 	  	: HAL                  						                                         							      *
**************************************************************************************************************************************/
#ifndef TRANS_SWITCH_INTERFACE_H
#define TRANS_SWITCH_INTERFACE_H
/*************************************************************************************************************************************/
/***************************************************** Functions Prototypes **********************************************************/
/*************************************************************************************************************************************/
/**************************************************************************************************************************************
* Function Name		: H_TRANS_SWITCH_VoidInit																	                      *
* Parameters (in)	: None							                      															  *
* Parameters (out)	: None																						                      *
* Return value		: None																						                      *
* Description		: Function to initialize the pin of the switch to output									                      *
**************************************************************************************************************************************/
void H_TRANS_SWITCH_VoidInit();
/**************************************************************************************************************************************
* Function Name		: H_TRANS_SWITCH_VoidSetSwitch_ON															                      *
* Parameters (in)	: None							                      															  *
* Parameters (out)	: None																						                      *
* Return value		: None																						                      *
* Description		: Function to Set the Switch ON									                        					      *
**************************************************************************************************************************************/
void H_TRANS_SWITCH_VoidSetSwitch_ON();
/**************************************************************************************************************************************
* Function Name		: H_TRANS_SWITCH_VoidSetSwitch_OFF															                      *
* Parameters (in)	: None							                      															  *
* Parameters (out)	: None																						                      *
* Return value		: None																						                      *
* Description		: Function to Set the Switch OFF									                        					  *
**************************************************************************************************************************************/
void H_TRANS_SWITCH_VoidSetSwitch_OFF(); 

#endif /*TRANS_SWITCH_INTERFACE_H*/