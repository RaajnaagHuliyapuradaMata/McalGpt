/******************************************************************************/
/* File   : Gpt.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "CfgGpt.hpp"
#include "infGpt_EcuM.hpp"
#include "infGpt_Dcm.hpp"
#include "infGpt_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define GPT_AR_RELEASE_MAJOR_VERSION                                           4
#define GPT_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(GPT_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible GPT_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(GPT_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible GPT_AR_RELEASE_MINOR_VERSION!"
#endif

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

   private:
      CONST(Std_TypeVersionInfo, GPT_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
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
VAR(module_Gpt, GPT_VAR) Gpt;
CONSTP2VAR(infEcuMClient, GPT_VAR, GPT_CONST) gptrinfEcuMClient_Gpt = &Gpt;
CONSTP2VAR(infDcmClient,  GPT_VAR, GPT_CONST) gptrinfDcmClient_Gpt  = &Gpt;
CONSTP2VAR(infSchMClient, GPT_VAR, GPT_CONST) gptrinfSchMClient_Gpt = &Gpt;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, GPT_CODE) module_Gpt::InitFunction(void){
   Gpt.IsInitDone = E_OK;
}

FUNC(void, GPT_CODE) module_Gpt::DeInitFunction(void){
   Gpt.IsInitDone = E_NOT_OK;
}

FUNC(void, GPT_CODE) module_Gpt::GetVersionInfo(void){
#if(STD_ON == Gpt_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, GPT_CODE) module_Gpt::MainFunction(void){
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

