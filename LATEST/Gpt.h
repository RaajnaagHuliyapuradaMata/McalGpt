#pragma once

class class_Gpt{
   public:
      void GetVersionInfo      (void);
      void InitFunction        (void);
      void DeInitFunction      (void);
      void GetTimeElapsed      (void);
      void GetTimeRemaining    (void);
      void StartTimer          (void);
      void StopTimer           (void);
      void DisableNotification (void);
      void EnableNotification  (void);
      void SetMode             (void);
      void CheckWakeup         (void);
      void DisableWakeup       (void);
      void EnableWakeup        (void);
      void GetPredefTimerValue (void);
};

extern class_Gpt Gpt;

