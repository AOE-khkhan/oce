// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_StringParameter_HeaderFile
#define _Dynamic_StringParameter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dynamic_StringParameter_HeaderFile
#include <Handle_Dynamic_StringParameter.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Dynamic_Parameter_HeaderFile
#include <Dynamic_Parameter.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TCollection_HAsciiString;
class TCollection_AsciiString;


//! This inherited class  from Parameter describes all <br>
//!          the  parameters,  which   are  characterized by  a <br>
//!          string value. <br>
class Dynamic_StringParameter : public Dynamic_Parameter {

public:

  //! Creates a StringParameter with <aparameter> as name. <br>
  Standard_EXPORT   Dynamic_StringParameter(const Standard_CString aparameter);
  //! With  the name of  the  Parameter <aparameter> and the <br>
//!          string    <astring>,   creates    an    instance    of <br>
//!          StringParameter. <br>
  Standard_EXPORT   Dynamic_StringParameter(const Standard_CString aparameter,const Standard_CString astring);
  //! Returns the value    of  the parameter which     is an <br>
//!          AsciiString. <br>
  Standard_EXPORT     TCollection_AsciiString Value() const;
  //! Sets the string <avalue> in <me>. <br>
  Standard_EXPORT     void Value(const Standard_CString avalue) ;
  //! Useful for debugging. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& astream) const;




  DEFINE_STANDARD_RTTI(Dynamic_StringParameter)

protected:




private: 


Handle_TCollection_HAsciiString thestring;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif