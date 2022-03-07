/*****************************************************/
/* File   : Gpt.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Gpt_EcuM.h"
#include "Gpt_SchM.h"
#include "Gpt_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Gpt:
      public abstract_module
{
   public:
      FUNC(void, GPT_CODE) InitFunction   (void);
      FUNC(void, GPT_CODE) DeInitFunction (void);
      FUNC(void, GPT_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Gpt     Gpt;
infEcuMClient* gptrinfEcuMClient_Gpt = &Gpt;
infSchMClient* gptrinfSchMClient_Gpt = &Gpt;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, GPT_CODE) module_Gpt::InitFunction(void){
}

FUNC(void, GPT_CODE) module_Gpt::DeInitFunction(void){
}

FUNC(void, GPT_CODE) module_Gpt::MainFunction(void){
}

FUNC(void, GPT_CODE) class_Gpt_Unused::GetVersionInfo(void){
}

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

