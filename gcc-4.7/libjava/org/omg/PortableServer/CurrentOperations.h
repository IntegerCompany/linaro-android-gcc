
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableServer_CurrentOperations__
#define __org_omg_PortableServer_CurrentOperations__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace PortableServer
      {
          class CurrentOperations;
          class POA;
      }
    }
  }
}

class org::omg::PortableServer::CurrentOperations : public ::java::lang::Object
{

public:
  virtual JArray< jbyte > * get_object_id() = 0;
  virtual ::org::omg::PortableServer::POA * get_POA() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_omg_PortableServer_CurrentOperations__
