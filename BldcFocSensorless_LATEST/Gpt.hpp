#pragma once
/******************************************************************************/
/* File   : Gpt.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstGpt.hpp"
#include "CfgGpt.hpp"
#include "Gpt_core.hpp"
#include "infGpt_Exp.hpp"

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
      INTERFACES_EXPORTED_GPT
      public abstract_module
   ,  public class_Gpt_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstGpt_Type* lptrConst = (ConstGpt_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, GPT_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, GPT_CONST,       GPT_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   GPT_CONFIG_DATA, GPT_APPL_CONST) lptrCfgModule
      );
      FUNC(void, GPT_CODE) DeInitFunction (void);
      FUNC(void, GPT_CODE) MainFunction   (void);
      GPT_CORE_FUNCTIONALITIES
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
extern VAR(module_Gpt, GPT_VAR) Gpt;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

