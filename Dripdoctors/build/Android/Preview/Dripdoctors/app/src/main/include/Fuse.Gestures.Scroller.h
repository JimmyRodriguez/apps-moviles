// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Controls.ScrollView\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Gestures{struct Scroller;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGestureHelper;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct PointerVelocity;}}}}
namespace g{namespace Fuse{struct RequestBringIntoViewArgs;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public class Scroller :77
// {
struct Scroller_type : ::g::Fuse::Node_type
{
    ::g::Uno::UX::IPropertyListener interface4;
};

Scroller_type* Scroller_typeof();
void Scroller__ctor_3_fn(Scroller* __this);
void Scroller__CheckLimits_fn(Scroller* __this);
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off);
void Scroller__get_DelayStart_fn(Scroller* __this, bool* __retval);
void Scroller__set_DelayStart_fn(Scroller* __this, bool* value);
void Scroller__EndInteraction_fn(Scroller* __this);
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position);
void Scroller__HardCapture_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval);
void Scroller__MoveUser_fn(Scroller* __this, int* flags, double* time);
void Scroller__New2_fn(Scroller** __retval);
void Scroller__OnLostCapture_fn(Scroller* __this);
void Scroller__OnPointerMoved_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void Scroller__OnPointerPressed_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void Scroller__OnPointerReleased_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args);
void Scroller__OnRooted_fn(Scroller* __this);
void Scroller__OnUnrooted_fn(Scroller* __this);
void Scroller__OnUpdated_fn(Scroller* __this);
void Scroller__get_OverflowExtent_fn(Scroller* __this, ::g::Uno::Float2* __retval);
void Scroller__PerformBringIntoView_fn(Scroller* __this);
void Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn(Scroller* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop);
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff);
void Scroller__UpdateScrollMax_fn(Scroller* __this);
void Scroller__get_UserScroll_fn(Scroller* __this, bool* __retval);
void Scroller__set_UserScroll_fn(Scroller* __this, bool* value);

struct Scroller : ::g::Fuse::Behavior
{
    bool _delayStart;
    int _down;
    bool _hasUpdated;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _horizontalGesture_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _horizontalGesture() { return Scroller_typeof()->Init(), _horizontalGesture_; }
    bool _isHardCapture;
    uStrong< ::g::Fuse::Visual*> _pendingBringIntoView;
    bool _pointerListening;
    ::g::Uno::Float2 _pointerPos;
    ::g::Uno::Float2 _prevPos;
    double _prevTime;
    uStrong<uObject*> _region;
    uStrong< ::g::Fuse::Controls::ScrollView*> _scrollable;
    static ::g::Uno::UX::Selector _scrollPositionName_;
    static ::g::Uno::UX::Selector& _scrollPositionName() { return Scroller_typeof()->Init(), _scrollPositionName_; }
    ::g::Uno::Float2 _softCaptureCurrent;
    ::g::Uno::Float2 _softCaptureStart;
    ::g::Uno::Float2 _startPos;
    bool _updateFirstFrame;
    bool _userScroll;
    uStrong< ::g::Fuse::Motion::Simulation::PointerVelocity*> _velocity;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _verticalGesture_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _verticalGesture() { return Scroller_typeof()->Init(), _verticalGesture_; }

    void ctor_3();
    void CheckLimits();
    void CheckNeedUpdated(bool off);
    bool DelayStart();
    void DelayStart(bool value);
    void EndInteraction();
    ::g::Uno::Float2 FromWindow(::g::Uno::Float2 p);
    void Goto(::g::Uno::Float2 position);
    bool HardCapture(::g::Fuse::Input::PointerEventArgs* args);
    void MoveUser(int flags, double time);
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    void OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args);
    void OnUpdated();
    ::g::Uno::Float2 OverflowExtent();
    void PerformBringIntoView();
    void UpdatePointerEvents(bool forceOff);
    void UpdateScrollMax();
    bool UserScroll();
    void UserScroll(bool value);
    static Scroller* New2();
};
// }

}}} // ::g::Fuse::Gestures
