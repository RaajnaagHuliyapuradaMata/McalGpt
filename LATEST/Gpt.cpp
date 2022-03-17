/******************************************************************************/
/* File   : Gpt.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infGpt_Version.h"

#include "module.h"
#include "infGpt_EcuM.h"
#include "infGpt_Dcm.h"
#include "infGpt_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Gpt:
      public abstract_module
{
   public:
      FUNC(void, GPT_CODE) InitFunction   (void);
      FUNC(void, GPT_CODE) DeInitFunction (void);
      FUNC(void, GPT_CODE) GetVersionInfo (void);
      FUNC(void, GPT_CODE) MainFunction   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
VAR(module_Gpt, GPT_VAR) Gpt;
CONSTP2VAR(infEcuMClient, GPT_VAR, GPT_CONST) gptrinfEcuMClient_Gpt = &Gpt;
CONSTP2VAR(infDcmClient,  GPT_VAR, GPT_CONST) gptrinfDcmClient_Gpt  = &Gpt;
CONSTP2VAR(infSchMClient, GPT_VAR, GPT_CONST) gptrinfSchMClient_Gpt = &Gpt;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, GPT_CODE) module_Gpt::InitFunction(void){
}

FUNC(void, GPT_CODE) module_Gpt::DeInitFunction(void){
}

FUNC(void, GPT_CODE) module_Gpt::GetVersionInfo(void){
}

FUNC(void, GPT_CODE) module_Gpt::MainFunction(void){
}

#include "Gpt_Unused.h"

FUNC(void, GPT_CODE) class_Gpt_Unused::GetTimeElapsed(void){
}

FUNC(void, GPT_CODE) class_Gpt_Unused::GetTimeRemaining(void){
}

FUNC(void, GPT_CODE) class_Gpt_Unused::StartTimer(void){
}

FUNC(void, GPT_CODE) class_Gpt_Unused::StopTimer(void){
}

FUNC(void, GPT_CODE) class_Gpt_Unused::DisableNotification(void){
}

FUNC(void, GPT_CODE) class_Gpt_Unused::EnableNotification(void){
}

FUNC(void, GPT_CODE) class_Gpt_Unused::SetMode(void){
}

FUNC(void, GPT_CODE) class_Gpt_Unused::CheckWakeup(void){
}

FUNC(void, GPT_CODE) class_Gpt_Unused::DisableWakeup(void){
}

FUNC(void, GPT_CODE) class_Gpt_Unused::EnableWakeup(void){
}

FUNC(void, GPT_CODE) class_Gpt_Unused::GetPredefTimerValue(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

