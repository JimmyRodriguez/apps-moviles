// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Controls.Primitives\0.32.14\RangeControls\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct RangeControl;}}}
namespace g{namespace Fuse{namespace Gestures{struct LinearRangeBehavior;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGestureHelper;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class LinearRangeBehavior :366
// {
::g::Fuse::Node_type* LinearRangeBehavior_typeof();
void LinearRangeBehavior__ctor_3_fn(LinearRangeBehavior* __this);
void LinearRangeBehavior__FindRangeControl_fn(LinearRangeBehavior* __this, ::g::Fuse::Controls::RangeControl** __retval);
void LinearRangeBehavior__New2_fn(LinearRangeBehavior** __retval);
void LinearRangeBehavior__OnLostCapture_fn(LinearRangeBehavior* __this);
void LinearRangeBehavior__OnPointerMoved_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c);
void LinearRangeBehavior__OnPointerPressed_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c);
void LinearRangeBehavior__OnPointerReleased_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c);
void LinearRangeBehavior__OnRooted_fn(LinearRangeBehavior* __this);
void LinearRangeBehavior__OnUnrooted_fn(LinearRangeBehavior* __this);
void LinearRangeBehavior__PositionToValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos, double* __retval);
void LinearRangeBehavior__UpdateValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos);

struct LinearRangeBehavior : ::g::Fuse::Behavior
{
    int _down;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _horizontalGesture_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _horizontalGesture() { return LinearRangeBehavior_typeof()->Init(), _horizontalGesture_; }
    double _initialValue;
    ::g::Uno::Float2 _startCoord;
    uStrong< ::g::Fuse::Controls::RangeControl*> Control;

    void ctor_3();
    ::g::Fuse::Controls::RangeControl* FindRangeControl();
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c);
    double PositionToValue(::g::Uno::Float2 pos);
    void UpdateValue(::g::Uno::Float2 pos);
    static LinearRangeBehavior* New2();
};
// }

}}} // ::g::Fuse::Gestures
