// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\Android\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct LeafView;}}}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public abstract extern class LeafView :813
// {
struct LeafView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::ILeafView interface2;
};

LeafView_type* LeafView_typeof();
void LeafView__ctor_1_fn(LeafView* __this, ::g::Java::Object* handle);
void LeafView__GetMeasuredHeight_fn(::g::Java::Object* handle, int* __retval);
void LeafView__GetMeasuredWidth_fn(::g::Java::Object* handle, int* __retval);
void LeafView__Measure_fn(LeafView* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval);
void LeafView__Measure1_fn(::g::Java::Object* handle, int* w, int* h, bool* hasX, bool* hasY);

struct LeafView : ::g::Fuse::Controls::Native::Android::View
{
    void ctor_1(::g::Java::Object* handle);
    ::g::Uno::Float2 Measure(::g::Fuse::LayoutParams lp, float density);
    static int GetMeasuredHeight(::g::Java::Object* handle);
    static int GetMeasuredWidth(::g::Java::Object* handle);
    static void Measure1(::g::Java::Object* handle, int w, int h, bool hasX, bool hasY);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
