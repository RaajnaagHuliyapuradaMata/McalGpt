/*****************************************************/
/* File   : Gpt.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Gpt.h"

#include "Gpt_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_Gpt_EcuM Gpt_EcuM;
class_EcuM_Client *EcuM_Client_ptr_Gpt = &Gpt_EcuM;
class_Gpt Gpt;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, GPT_CODE) class_Gpt_EcuM::InitFunction(void){
}

FUNC(void, GPT_CODE) class_Gpt_EcuM::DeInitFunction(void){
}

FUNC(void, GPT_CODE) class_Gpt::GetVersionInfo(void){
}

FUNC(void, GPT_CODE) class_Gpt::GetTimeElapsed(void){
}

FUNC(void, GPT_CODE) class_Gpt::GetTimeRemaining(void){
}

FUNC(void, GPT_CODE) class_Gpt::StartTimer(void){
}

FUNC(void, GPT_CODE) class_Gpt::StopTimer(void){
}

FUNC(void, GPT_CODE) class_Gpt::DisableNotification(void){
}

FUNC(void, GPT_CODE) class_Gpt::EnableNotification(void){
}

FUNC(void, GPT_CODE) class_Gpt::SetMode(void){
}

FUNC(void, GPT_CODE) class_Gpt::CheckWakeup(void){
}

FUNC(void, GPT_CODE) class_Gpt::DisableWakeup(void){
}

FUNC(void, GPT_CODE) class_Gpt::EnableWakeup(void){
}

FUNC(void, GPT_CODE) class_Gpt::GetPredefTimerValue(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

