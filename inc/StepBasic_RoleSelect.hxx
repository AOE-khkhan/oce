// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_RoleSelect_HeaderFile
#define _StepBasic_RoleSelect_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepBasic_ActionAssignment.hxx>
#include <Handle_StepBasic_ActionRequestAssignment.hxx>
#include <Handle_StepBasic_ApprovalAssignment.hxx>
#include <Handle_StepBasic_ApprovalDateTime.hxx>
#include <Handle_StepBasic_CertificationAssignment.hxx>
#include <Handle_StepBasic_ContractAssignment.hxx>
#include <Handle_StepBasic_DocumentReference.hxx>
#include <Handle_StepBasic_EffectivityAssignment.hxx>
#include <Handle_StepBasic_GroupAssignment.hxx>
#include <Handle_StepBasic_NameAssignment.hxx>
#include <Handle_StepBasic_SecurityClassificationAssignment.hxx>
class Standard_Transient;
class StepBasic_ActionAssignment;
class StepBasic_ActionRequestAssignment;
class StepBasic_ApprovalAssignment;
class StepBasic_ApprovalDateTime;
class StepBasic_CertificationAssignment;
class StepBasic_ContractAssignment;
class StepBasic_DocumentReference;
class StepBasic_EffectivityAssignment;
class StepBasic_GroupAssignment;
class StepBasic_NameAssignment;
class StepBasic_SecurityClassificationAssignment;


//! Representation of STEP SELECT type RoleSelect
class StepBasic_RoleSelect  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepBasic_RoleSelect();
  
  //! Recognizes a kind of RoleSelect select type
  //! 1 -> ActionAssignment from StepBasic
  //! 2 -> ActionRequestAssignment from StepBasic
  //! 3 -> ApprovalAssignment from StepBasic
  //! 4 -> ApprovalDateTime from StepBasic
  //! 5 -> CertificationAssignment from StepBasic
  //! 6 -> ContractAssignment from StepBasic
  //! 7 -> DocumentReference from StepBasic
  //! 8 -> EffectivityAssignment from StepBasic
  //! 9 -> GroupAssignment from StepBasic
  //! 10 -> NameAssignment from StepBasic
  //! 11 -> SecurityClassificationAssignment from StepBasic
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as ActionAssignment (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ActionAssignment) ActionAssignment()  const;
  
  //! Returns Value as ActionRequestAssignment (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ActionRequestAssignment) ActionRequestAssignment()  const;
  
  //! Returns Value as ApprovalAssignment (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ApprovalAssignment) ApprovalAssignment()  const;
  
  //! Returns Value as ApprovalDateTime (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ApprovalDateTime) ApprovalDateTime()  const;
  
  //! Returns Value as CertificationAssignment (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_CertificationAssignment) CertificationAssignment()  const;
  
  //! Returns Value as ContractAssignment (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ContractAssignment) ContractAssignment()  const;
  
  //! Returns Value as DocumentReference (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_DocumentReference) DocumentReference()  const;
  
  //! Returns Value as EffectivityAssignment (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_EffectivityAssignment) EffectivityAssignment()  const;
  
  //! Returns Value as GroupAssignment (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_GroupAssignment) GroupAssignment()  const;
  
  //! Returns Value as NameAssignment (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_NameAssignment) NameAssignment()  const;
  
  //! Returns Value as SecurityClassificationAssignment (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_SecurityClassificationAssignment) SecurityClassificationAssignment()  const;




protected:





private:





};







#endif // _StepBasic_RoleSelect_HeaderFile
