/******************************************************************************/
/* File   : Gpt.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Gpt.hpp"
#include "infGpt_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define GPT_AR_RELEASE_VERSION_MAJOR                                           4
#define GPT_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(GPT_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible GPT_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(GPT_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible GPT_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Gpt, GPT_VAR) Gpt;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, GPT_CODE) module_Gpt::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, GPT_CONST,       GPT_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   GPT_CONFIG_DATA, GPT_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Gpt_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstGpt_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == Gpt_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Gpt_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Gpt_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  GPT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, GPT_CODE) module_Gpt::DeInitFunction(
   void
){
#if(STD_ON == Gpt_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Gpt_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Gpt_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  GPT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, GPT_CODE) module_Gpt::MainFunction(
   void
){
#if(STD_ON == Gpt_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Gpt_InitCheck)
   }
   else{
#if(STD_ON == Gpt_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  GPT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, GPT_CODE) module_Gpt::GetTimeElapsed(
   void
){
}

FUNC(void, GPT_CODE) module_Gpt::GetTimeRemaining(
   void
){
}

FUNC(void, GPT_CODE) module_Gpt::StartTimer(
   void
){
}

FUNC(void, GPT_CODE) module_Gpt::StopTimer(
   void
){
}

FUNC(void, GPT_CODE) module_Gpt::DisableNotification(
   void
){
}

FUNC(void, GPT_CODE) module_Gpt::EnableNotification(
   void
){
}

FUNC(void, GPT_CODE) module_Gpt::SetMode(
   void
){
}

FUNC(void, GPT_CODE) module_Gpt::CheckWakeup(
   void
){
}

FUNC(void, GPT_CODE) module_Gpt::DisableWakeup(
   void
){
}

FUNC(void, GPT_CODE) module_Gpt::EnableWakeup(
   void
){
}

FUNC(void, GPT_CODE) module_Gpt::GetPredefTimerValue(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

