/******************************************************************************/
/* File   : Gpt.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgGpt.hpp"
#include "Gpt_core.hpp"
#include "infGpt.hpp"

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
class module_Gpt:
      public abstract_module
   ,  public class_Gpt_Functionality
{
   public:
      module_Gpt(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, GPT_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, GPT_CONFIG_DATA, GPT_APPL_CONST) lptrCfgModule
      );
      FUNC(void, GPT_CODE) DeInitFunction (void);
      FUNC(void, GPT_CODE) MainFunction   (void);
      GPT_CORE_FUNCTIONALITIES
};

extern VAR(module_Gpt, GPT_VAR) Gpt;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, GPT_VAR, GPT_CONST) gptrinfEcuMClient_Gpt = &Gpt;
CONSTP2VAR(infDcmClient,  GPT_VAR, GPT_CONST) gptrinfDcmClient_Gpt  = &Gpt;
CONSTP2VAR(infSchMClient, GPT_VAR, GPT_CONST) gptrinfSchMClient_Gpt = &Gpt;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Gpt, GPT_VAR) Gpt(
   {
         GPT_AR_RELEASE_VERSION_MAJOR
      ,  GPT_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, GPT_CODE) module_Gpt::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, GPT_CONFIG_DATA, GPT_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Gpt_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Gpt_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Gpt_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgGpt;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == Gpt_InitCheck)
   }
#endif
}

FUNC(void, GPT_CODE) module_Gpt::DeInitFunction(void){
#if(STD_ON == Gpt_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Gpt_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Gpt_InitCheck)
   }
#endif
}

FUNC(void, GPT_CODE) module_Gpt::MainFunction(void){
#if(STD_ON == Gpt_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Gpt_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == Gpt_InitCheck)
   }
#endif
}

FUNC(void, GPT_CODE) class_Gpt_Functionality::GetTimeElapsed(void){
}

FUNC(void, GPT_CODE) class_Gpt_Functionality::GetTimeRemaining(void){
}

FUNC(void, GPT_CODE) class_Gpt_Functionality::StartTimer(void){
}

FUNC(void, GPT_CODE) class_Gpt_Functionality::StopTimer(void){
}

FUNC(void, GPT_CODE) class_Gpt_Functionality::DisableNotification(void){
}

FUNC(void, GPT_CODE) class_Gpt_Functionality::EnableNotification(void){
}

FUNC(void, GPT_CODE) class_Gpt_Functionality::SetMode(void){
}

FUNC(void, GPT_CODE) class_Gpt_Functionality::CheckWakeup(void){
}

FUNC(void, GPT_CODE) class_Gpt_Functionality::DisableWakeup(void){
}

FUNC(void, GPT_CODE) class_Gpt_Functionality::EnableWakeup(void){
}

FUNC(void, GPT_CODE) class_Gpt_Functionality::GetPredefTimerValue(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

