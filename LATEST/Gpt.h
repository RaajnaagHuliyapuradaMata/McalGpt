#pragma once

#include "Std_Types.h"

class class_Gpt{
   public:
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

extern class_Gpt Gpt;

