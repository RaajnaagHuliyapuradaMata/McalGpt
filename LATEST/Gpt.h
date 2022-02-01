#pragma once
/*****************************************************/
/* File   : Gpt.h                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_Gpt.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_Gpt{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, GPT_CODE) GetVersionInfo      (void);
      FUNC(void, GPT_CODE) InitFunction        (void);
      FUNC(void, GPT_CODE) DeInitFunction      (void);
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

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern class_Gpt Gpt;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

