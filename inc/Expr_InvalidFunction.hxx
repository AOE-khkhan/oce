// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_InvalidFunction_HeaderFile
#define _Expr_InvalidFunction_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Expr_ExprFailure.hxx>
#include <Handle_Expr_InvalidFunction.hxx>

#if !defined No_Exception && !defined No_Expr_InvalidFunction
  #define Expr_InvalidFunction_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Expr_InvalidFunction::Raise(MESSAGE);
#else
  #define Expr_InvalidFunction_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Expr_InvalidFunction, Expr_ExprFailure)

#endif // _Expr_InvalidFunction_HeaderFile
