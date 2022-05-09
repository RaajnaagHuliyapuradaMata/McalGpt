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
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

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
   if(E_OK != IsInitDone){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgGpt;
         }
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

FUNC(void, GPT_CODE) module_Gpt::DeInitFunction(void){
#if(STD_ON == Gpt_InitCheck)
   if(E_OK == IsInitDone){
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

FUNC(void, GPT_CODE) module_Gpt::MainFunction(void){
#if(STD_ON == Gpt_InitCheck)
   if(E_OK == IsInitDone){
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

FUNC(void, GPT_CODE) module_Gpt::GetTimeElapsed(void){
}

FUNC(void, GPT_CODE) module_Gpt::GetTimeRemaining(void){
}

FUNC(void, GPT_CODE) module_Gpt::StartTimer(void){
}

FUNC(void, GPT_CODE) module_Gpt::StopTimer(void){
}

FUNC(void, GPT_CODE) module_Gpt::DisableNotification(void){
}

FUNC(void, GPT_CODE) module_Gpt::EnableNotification(void){
}

FUNC(void, GPT_CODE) module_Gpt::SetMode(void){
}

FUNC(void, GPT_CODE) module_Gpt::CheckWakeup(void){
}

FUNC(void, GPT_CODE) module_Gpt::DisableWakeup(void){
}

FUNC(void, GPT_CODE) module_Gpt::EnableWakeup(void){
}

FUNC(void, GPT_CODE) module_Gpt::GetPredefTimerValue(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

