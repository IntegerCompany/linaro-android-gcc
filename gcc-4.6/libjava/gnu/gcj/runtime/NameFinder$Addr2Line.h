
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_runtime_NameFinder$Addr2Line__
#define __gnu_gcj_runtime_NameFinder$Addr2Line__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace runtime
      {
          class NameFinder;
          class NameFinder$Addr2Line;
      }
    }
  }
}

class gnu::gcj::runtime::NameFinder$Addr2Line : public ::java::lang::Object
{

public: // actually package-private
  NameFinder$Addr2Line(::gnu::gcj::runtime::NameFinder *, ::java::lang::String *);
  virtual void close();
  ::java::lang::Process * __attribute__((aligned(__alignof__( ::java::lang::Object)))) proc;
  ::java::io::BufferedWriter * out;
  ::java::io::BufferedReader * in;
  ::gnu::gcj::runtime::NameFinder * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_runtime_NameFinder$Addr2Line__
