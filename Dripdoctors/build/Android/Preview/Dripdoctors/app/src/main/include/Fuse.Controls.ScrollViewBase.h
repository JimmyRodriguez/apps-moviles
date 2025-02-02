// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Controls.ScrollView\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct Scroller;}}}
namespace g{namespace Fuse{namespace Motion{struct MotionConfig;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class ScrollViewBase :485
// {
struct ScrollViewBase_type : ::g::Fuse::Controls::ContentControl_type
{
    ::g::Fuse::Controls::Native::IScrollViewHost interface13;
};

ScrollViewBase_type* ScrollViewBase_typeof();
void ScrollViewBase__ctor_6_fn(ScrollViewBase* __this);
void ScrollViewBase__get_AllowedScrollDirections_fn(ScrollViewBase* __this, int* __retval);
void ScrollViewBase__set_AllowedScrollDirections_fn(ScrollViewBase* __this, int* value);
void ScrollViewBase__ArrangeContent_fn(ScrollViewBase* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void ScrollViewBase__ArrangePaddingBox_fn(ScrollViewBase* __this, ::g::Fuse::LayoutParams* lp);
void ScrollViewBase__CompensateForScrollView_fn(ScrollViewBase* __this, ::g::Uno::Float4x4* t);
void ScrollViewBase__Constrain_fn(ScrollViewBase* __this, ::g::Uno::Float2* t, ::g::Uno::Float2* __retval);
void ScrollViewBase__ConstrainDown_fn(ScrollViewBase* __this, ::g::Uno::Float2* t, ::g::Uno::Float2* __retval);
void ScrollViewBase__ConstrainExtents_fn(ScrollViewBase* __this, ::g::Uno::Float2* t, ::g::Uno::Float2* __retval);
void ScrollViewBase__ConstrainUp_fn(ScrollViewBase* __this, ::g::Uno::Float2* t, ::g::Uno::Float2* __retval);
void ScrollViewBase__CreateNativeViewGroup_fn(ScrollViewBase* __this, uObject** __retval);
void ScrollViewBase__get_Element_fn(ScrollViewBase* __this, ::g::Fuse::Elements::Element** __retval);
void ScrollViewBase__FromScalarPosition_fn(ScrollViewBase* __this, float* value, ::g::Uno::Float2* __retval);
void ScrollViewBase__FuseControlsNativeIScrollViewHostOnScrollPositionChanged_fn(ScrollViewBase* __this, ::g::Uno::Float2* newScrollPosition);
void ScrollViewBase__FuseControlsNativeIScrollViewHostget_PixelsPerPoint_fn(ScrollViewBase* __this, float* __retval);
void ScrollViewBase__GetContentSize_fn(ScrollViewBase* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void ScrollViewBase__getParams_fn(ScrollViewBase* s, uArray* args, uString* func, ::g::Uno::Float2* pos, bool* __retval);
void ScrollViewBase__GetVisualScrollPosition_fn(ScrollViewBase* __this, ::g::Fuse::Visual* n, ::g::Uno::Float2* __retval);
void ScrollViewBase__Goto_fn(ScrollViewBase* __this, ::g::Uno::Float2* position);
void ScrollViewBase__goto__fn(ScrollViewBase* s, uArray* args);
void ScrollViewBase__gotoRelative_fn(ScrollViewBase* s, uArray* args);
void ScrollViewBase__GotoRelative_fn(ScrollViewBase* __this, ::g::Uno::Float2* position);
void ScrollViewBase__IsMarginBoxDependent_fn(ScrollViewBase* __this, ::g::Fuse::Visual* child, int* __retval);
void ScrollViewBase__get_KeepFocusInView_fn(ScrollViewBase* __this, bool* __retval);
void ScrollViewBase__set_KeepFocusInView_fn(ScrollViewBase* __this, bool* value);
void ScrollViewBase__get_MaxOverflow_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__get_MaxScroll_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__get_MinOverflow_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__get_MinScroll_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__get_Motion_fn(ScrollViewBase* __this, ::g::Fuse::Motion::MotionConfig** __retval);
void ScrollViewBase__set_Motion_fn(ScrollViewBase* __this, ::g::Fuse::Motion::MotionConfig* value);
void ScrollViewBase__get_NativeScrollView_fn(ScrollViewBase* __this, uObject** __retval);
void ScrollViewBase__New3_fn(ScrollViewBase** __retval);
void ScrollViewBase__OnChildAdded_fn(ScrollViewBase* __this, ::g::Fuse::Node* b);
void ScrollViewBase__OnChildRemoved_fn(ScrollViewBase* __this, ::g::Fuse::Node* b);
void ScrollViewBase__OnContentChanged_fn(ScrollViewBase* __this);
void ScrollViewBase__OnScrollPositionChanged_fn(ScrollViewBase* __this, uObject* origin);
void ScrollViewBase__OnScrollPropertyChanged_fn(ScrollViewBase* __this, uObject* origin);
void ScrollViewBase__get_RelativeScrollPosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__set_RelativeScrollPosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* value);
void ScrollViewBase__get_Scroller_fn(ScrollViewBase* __this, ::g::Fuse::Gestures::Scroller** __retval);
void ScrollViewBase__get_ScrollPosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* __retval);
void ScrollViewBase__set_ScrollPosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* value);
void ScrollViewBase__add_ScrollPositionChanged_fn(ScrollViewBase* __this, uDelegate* value);
void ScrollViewBase__remove_ScrollPositionChanged_fn(ScrollViewBase* __this, uDelegate* value);
void ScrollViewBase__add_ScrollPropertyChanged_fn(ScrollViewBase* __this, uDelegate* value);
void ScrollViewBase__remove_ScrollPropertyChanged_fn(ScrollViewBase* __this, uDelegate* value);
void ScrollViewBase__seekTo_fn(ScrollViewBase* s, uArray* args);
void ScrollViewBase__seekToRelative_fn(ScrollViewBase* s, uArray* args);
void ScrollViewBase__SetScrollPosition_fn(ScrollViewBase* __this, ::g::Uno::Float2* position, uObject* origin);
void ScrollViewBase__get_SnapMaxTransform_fn(ScrollViewBase* __this, bool* __retval);
void ScrollViewBase__set_SnapMaxTransform_fn(ScrollViewBase* __this, bool* value);
void ScrollViewBase__get_SnapMinTransform_fn(ScrollViewBase* __this, bool* __retval);
void ScrollViewBase__set_SnapMinTransform_fn(ScrollViewBase* __this, bool* value);
void ScrollViewBase__UpdateScrollPosition_fn(ScrollViewBase* __this);
void ScrollViewBase__get_UserScroll_fn(ScrollViewBase* __this, bool* __retval);
void ScrollViewBase__set_UserScroll_fn(ScrollViewBase* __this, bool* value);

struct ScrollViewBase : ::g::Fuse::Controls::ContentControl
{
    int _allowedScrollDirections;
    ::g::Uno::Float2 _cacheContentMarginSize;
    uStrong< ::g::Fuse::Visual*> _currentContent;
    bool _keepFocusInView;
    uStrong< ::g::Fuse::Motion::MotionConfig*> _motion;
    ::g::Uno::Float2 _previousRelative;
    uStrong< ::g::Fuse::Gestures::Scroller*> _scroller;
    ::g::Uno::Float2 _scrollPosition;
    static ::g::Uno::UX::Selector _scrollPositionName_;
    static ::g::Uno::UX::Selector& _scrollPositionName() { return ScrollViewBase_typeof()->Init(), _scrollPositionName_; }
    uStrong< ::g::Fuse::Translation*> _scrollTranslation;
    bool _snapMaxTransform;
    bool _snapMinTransform;
    bool _userScroll;
    uStrong<uDelegate*> ScrollPositionChanged1;
    uStrong<uDelegate*> ScrollPropertyChanged1;

    void ctor_6();
    int AllowedScrollDirections();
    void AllowedScrollDirections(int value);
    ::g::Uno::Float2 ArrangeContent(::g::Fuse::LayoutParams lp);
    ::g::Uno::Float2 Constrain(::g::Uno::Float2 t);
    ::g::Uno::Float2 ConstrainDown(::g::Uno::Float2 t);
    ::g::Uno::Float2 ConstrainExtents(::g::Uno::Float2 t);
    ::g::Uno::Float2 ConstrainUp(::g::Uno::Float2 t);
    ::g::Fuse::Elements::Element* Element();
    ::g::Uno::Float2 FromScalarPosition(float value);
    ::g::Uno::Float2 GetVisualScrollPosition(::g::Fuse::Visual* n);
    void Goto(::g::Uno::Float2 position);
    void GotoRelative(::g::Uno::Float2 position);
    bool KeepFocusInView();
    void KeepFocusInView(bool value);
    ::g::Uno::Float2 MaxOverflow();
    ::g::Uno::Float2 MaxScroll();
    ::g::Uno::Float2 MinOverflow();
    ::g::Uno::Float2 MinScroll();
    ::g::Fuse::Motion::MotionConfig* Motion();
    void Motion(::g::Fuse::Motion::MotionConfig* value);
    uObject* NativeScrollView();
    void OnScrollPositionChanged(uObject* origin);
    void OnScrollPropertyChanged(uObject* origin);
    ::g::Uno::Float2 RelativeScrollPosition();
    void RelativeScrollPosition(::g::Uno::Float2 value);
    ::g::Fuse::Gestures::Scroller* Scroller();
    ::g::Uno::Float2 ScrollPosition();
    void ScrollPosition(::g::Uno::Float2 value);
    void add_ScrollPositionChanged(uDelegate* value);
    void remove_ScrollPositionChanged(uDelegate* value);
    void add_ScrollPropertyChanged(uDelegate* value);
    void remove_ScrollPropertyChanged(uDelegate* value);
    void SetScrollPosition(::g::Uno::Float2 position, uObject* origin);
    bool SnapMaxTransform();
    void SnapMaxTransform(bool value);
    bool SnapMinTransform();
    void SnapMinTransform(bool value);
    void UpdateScrollPosition();
    bool UserScroll();
    void UserScroll(bool value);
    static bool getParams(ScrollViewBase* s, uArray* args, uString* func, ::g::Uno::Float2* pos);
    static void goto_(ScrollViewBase* s, uArray* args);
    static void gotoRelative(ScrollViewBase* s, uArray* args);
    static ScrollViewBase* New3();
    static void seekTo(ScrollViewBase* s, uArray* args);
    static void seekToRelative(ScrollViewBase* s, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
