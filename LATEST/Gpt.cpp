/******************************************************************************/
/* File   : Gpt.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infGpt_EcuM.hpp"
#include "infGpt_Dcm.hpp"
#include "infGpt_SchM.hpp"

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
{
   public:
      module_Gpt(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, GPT_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, GPT_CONFIG_DATA, GPT_APPL_CONST) lptrCfgModule
      );
      FUNC(void, GPT_CODE) DeInitFunction (void);
      FUNC(void, GPT_CODE) MainFunction   (void);
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
#include "CfgGpt.hpp"

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
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Gpt_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_Gpt as back-up configuration
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
      );
#endif
   }
   else{
#endif
#if(STD_ON == Gpt_InitCheck)
   }
#endif
}

class class_Gpt_Unused{
   public:
      FUNC(void, GPT_CODE) GetTimeElapsed      (void);
      FUNC(void, GPT_CODE) GetTimeRemaining    (void);
      FUNC(void, GPT_CODE) StartTimer          (void);
      FUNC(void, GPT_CODE) StopTimer           (void);
      FUNC(void, GPT_CODE) DisableNotification (void);
      FUNC(void, GPT_CODE) EnableNotification  (void);
      FUNC(void, GPT_CODE) SetMode             (void);
      FUNC(void, GPT_CODE) CheckWakeup         (void);
      FUNC(void, GPT_CODE) DisableWakeup       (void);
      FUNC(void, GPT_CODE) EnableWakeup        (void);
      FUNC(void, GPT_CODE) GetPredefTimerValue (void);
};

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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

