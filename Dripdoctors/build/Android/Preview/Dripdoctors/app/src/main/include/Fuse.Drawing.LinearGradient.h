// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\Brushes\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.DynamicBrush.h>
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Drawing{struct GradientStop;}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class LinearGradient :96
// {
struct LinearGradient_type : ::g::Fuse::Drawing::Brush_type
{
    ::g::Uno::UX::IPropertyListener interface0;
};

LinearGradient_type* LinearGradient_typeof();
void LinearGradient__ctor_3_fn(LinearGradient* __this);
void LinearGradient__ctor_4_fn(LinearGradient* __this, uArray* stops);
void LinearGradient__get_Angle_fn(LinearGradient* __this, float* __retval);
void LinearGradient__set_Angle_fn(LinearGradient* __this, float* value);
void LinearGradient__get_AngleDegrees_fn(LinearGradient* __this, float* __retval);
void LinearGradient__set_AngleDegrees_fn(LinearGradient* __this, float* value);
void LinearGradient__get_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval);
void LinearGradient__set_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value);
void LinearGradient__get_HasAngle_fn(LinearGradient* __this, bool* __retval);
void LinearGradient__InitList_fn(LinearGradient* __this);
void LinearGradient__New2_fn(LinearGradient** __retval);
void LinearGradient__New3_fn(uArray* stops, LinearGradient** __retval);
void LinearGradient__OnAdded_fn(LinearGradient* __this, ::g::Fuse::Drawing::GradientStop* gs);
void LinearGradient__OnPrepare_fn(LinearGradient* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void LinearGradient__OnRemoved_fn(LinearGradient* __this, ::g::Fuse::Drawing::GradientStop* gs);
void LinearGradient__OnUnpinned_fn(LinearGradient* __this);
void LinearGradient__SelectOffset_fn(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b, int* __retval);
void LinearGradient__get_SortedStops_fn(LinearGradient* __this, uArray** __retval);
void LinearGradient__SortStops_fn(LinearGradient* __this);
void LinearGradient__get_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval);
void LinearGradient__set_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value);
void LinearGradient__get_Stops_fn(LinearGradient* __this, uObject** __retval);
void LinearGradient__UnoUXIPropertyListenerOnPropertyChanged_fn(LinearGradient* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property);

struct LinearGradient : ::g::Fuse::Drawing::DynamicBrush
{
    float _angle;
    static ::g::Uno::UX::Selector _angleName_;
    static ::g::Uno::UX::Selector& _angleName() { return LinearGradient_typeof()->Init(), _angleName_; }
    ::g::Uno::Float2 _endPoint;
    static ::g::Uno::UX::Selector _endPointName_;
    static ::g::Uno::UX::Selector& _endPointName() { return LinearGradient_typeof()->Init(), _endPointName_; }
    uStrong< ::g::Uno::Graphics::Framebuffer*> _gradientBuffer;
    static int _gradientSize_;
    static int& _gradientSize() { return LinearGradient_typeof()->Init(), _gradientSize_; }
    ::g::Uno::Float2 _gradientStart;
    bool _hasAngle;
    bool _invalid;
    uStrong<uArray*> _sortedStops;
    ::g::Uno::Float2 _startPoint;
    static ::g::Uno::UX::Selector _startPointName_;
    static ::g::Uno::UX::Selector& _startPointName() { return LinearGradient_typeof()->Init(), _startPointName_; }
    static ::g::Uno::UX::Selector _stopColorName_;
    static ::g::Uno::UX::Selector& _stopColorName() { return LinearGradient_typeof()->Init(), _stopColorName_; }
    static ::g::Uno::UX::Selector _stopOffsetName_;
    static ::g::Uno::UX::Selector& _stopOffsetName() { return LinearGradient_typeof()->Init(), _stopOffsetName_; }
    uStrong< ::g::Uno::Collections::ObservableList*> _stops;
    static ::g::Uno::UX::Selector _stopsName_;
    static ::g::Uno::UX::Selector& _stopsName() { return LinearGradient_typeof()->Init(), _stopsName_; }

    void ctor_3();
    void ctor_4(uArray* stops);
    float Angle();
    void Angle(float value);
    float AngleDegrees();
    void AngleDegrees(float value);
    ::g::Uno::Float2 EndPoint();
    void EndPoint(::g::Uno::Float2 value);
    bool HasAngle();
    void InitList();
    void OnAdded(::g::Fuse::Drawing::GradientStop* gs);
    void OnRemoved(::g::Fuse::Drawing::GradientStop* gs);
    uArray* SortedStops();
    void SortStops();
    ::g::Uno::Float2 StartPoint();
    void StartPoint(::g::Uno::Float2 value);
    uObject* Stops();
    static LinearGradient* New2();
    static LinearGradient* New3(uArray* stops);
    static int SelectOffset(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b);
};
// }

}}} // ::g::Fuse::Drawing
