// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.LeafView.h>
#include <Fuse.Controls.Native.ILabelView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Button;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class Button :11
// {
struct Button_type : ::g::Fuse::Controls::Native::Android::LeafView_type
{
    ::g::Fuse::Controls::Native::ILabelView interface3;
};

Button_type* Button_typeof();
void Button__ctor_2_fn(Button* __this);
void Button__Create_fn(::g::Java::Object** __retval);
void Button__New1_fn(Button** __retval);
void Button__SetText_fn(::g::Java::Object* handle, uString* text);
void Button__set_Text_fn(Button* __this, uString* value);

struct Button : ::g::Fuse::Controls::Native::Android::LeafView
{
    void ctor_2();
    void Text(uString* value);
    static ::g::Java::Object* Create();
    static Button* New1();
    static void SetText(::g::Java::Object* handle, uString* text);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
