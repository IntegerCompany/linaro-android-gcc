
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicTextUI$FocusHandler__
#define __javax_swing_plaf_basic_BasicTextUI$FocusHandler__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class FocusEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicTextUI$FocusHandler;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicTextUI$FocusHandler : public ::java::lang::Object
{

  BasicTextUI$FocusHandler();
public:
  virtual void focusGained(::java::awt::event::FocusEvent *);
  virtual void focusLost(::java::awt::event::FocusEvent *);
public: // actually package-private
  BasicTextUI$FocusHandler(::javax::swing::plaf::basic::BasicTextUI$FocusHandler *);
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicTextUI$FocusHandler__
