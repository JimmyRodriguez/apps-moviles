// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.35.8/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Android{struct AppRoot;}}}
namespace g{namespace Fuse{namespace Android{struct AppRoot__AppRootParent;}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct View;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Android{

// internal static extern class AppRoot :712
// {
uClassType* AppRoot_typeof();
void AppRoot__Clear_fn(::g::Fuse::Controls::Native::Android::View* view);
void AppRoot__ClearRootView_fn(::g::Java::Object* handle);
void AppRoot__CreateRootView_fn(::g::Java::Object** __retval);
void AppRoot__OnTouchEvent___fn(::g::Java::Object* motionEvent);
void AppRoot__Set_fn(::g::Fuse::Controls::Native::Android::View* view);
void AppRoot__SetAppRoot_fn(::g::Java::Object* rootView);
void AppRoot__SetChildSize_fn(::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size);
void AppRoot__SetChildSize1_fn(::g::Java::Object* handle, int* w, int* h);
void AppRoot__SetRootView_fn(::g::Java::Object* handle, ::g::Java::Object* rootHandle);

struct AppRoot : uObject
{
    static uSStrong< ::g::Java::Object*> _root_;
    static uSStrong< ::g::Java::Object*>& _root() { return AppRoot_typeof()->Init(), _root_; }
    static uSStrong< ::g::Java::Object*> _rootContainer_;
    static uSStrong< ::g::Java::Object*>& _rootContainer() { return AppRoot_typeof()->Init(), _rootContainer_; }
    static uSStrong<AppRoot__AppRootParent*> _rootParent_;
    static uSStrong<AppRoot__AppRootParent*>& _rootParent() { return AppRoot_typeof()->Init(), _rootParent_; }

    static void Clear(::g::Fuse::Controls::Native::Android::View* view);
    static void ClearRootView(::g::Java::Object* handle);
    static ::g::Java::Object* CreateRootView();
    static void OnTouchEvent__(::g::Java::Object* motionEvent);
    static void Set(::g::Fuse::Controls::Native::Android::View* view);
    static void SetAppRoot(::g::Java::Object* rootView);
    static void SetChildSize(::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2 size);
    static void SetChildSize1(::g::Java::Object* handle, int w, int h);
    static void SetRootView(::g::Java::Object* handle, ::g::Java::Object* rootHandle);
};
// }

}}} // ::g::Fuse::Android
