// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draft_FaceInfo_HeaderFile
#define _Draft_FaceInfo_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Handle_Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <Handle_Geom_Curve.hxx>
class Geom_Surface;
class Geom_Curve;
class Standard_DomainError;
class TopoDS_Face;



class Draft_FaceInfo 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Draft_FaceInfo();
  
  Standard_EXPORT Draft_FaceInfo(const Handle(Geom_Surface)& S, const Standard_Boolean HasNewGeometry);
  
  Standard_EXPORT   void RootFace (const TopoDS_Face& F) ;
  
  Standard_EXPORT   Standard_Boolean NewGeometry()  const;
  
  Standard_EXPORT   void Add (const TopoDS_Face& F) ;
  
  Standard_EXPORT  const  TopoDS_Face& FirstFace()  const;
  
  Standard_EXPORT  const  TopoDS_Face& SecondFace()  const;
  
  Standard_EXPORT  const  Handle(Geom_Surface)& Geometry()  const;
  
  Standard_EXPORT   Handle(Geom_Surface)& ChangeGeometry() ;
  
  Standard_EXPORT  const  TopoDS_Face& RootFace()  const;
  
  Standard_EXPORT   Handle(Geom_Curve)& ChangeCurve() ;
  
  Standard_EXPORT  const  Handle(Geom_Curve)& Curve()  const;




protected:





private:



  Standard_Boolean myNewGeom;
  Handle(Geom_Surface) myGeom;
  TopoDS_Face myRootFace;
  TopoDS_Face myF1;
  TopoDS_Face myF2;
  Handle(Geom_Curve) myCurv;


};







#endif // _Draft_FaceInfo_HeaderFile
