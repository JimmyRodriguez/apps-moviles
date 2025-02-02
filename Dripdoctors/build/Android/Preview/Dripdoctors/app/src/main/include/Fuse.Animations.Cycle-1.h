// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Animations\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.OpenAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Cycle;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Cycle<T> :800
// {
::g::Fuse::Animations::Animator_type* Cycle_typeof();
void Cycle__ctor_3_fn(Cycle* __this, ::g::Uno::UX::Property1* Target1);
void Cycle__get_Base_fn(Cycle* __this, uTRef __retval);
void Cycle__set_Base_fn(Cycle* __this, void* value);
void Cycle__CreateState_fn(Cycle* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void Cycle__get_Easing_fn(Cycle* __this, int* __retval);
void Cycle__set_Easing_fn(Cycle* __this, int* value);
void Cycle__get_Frequency_fn(Cycle* __this, double* __retval);
void Cycle__set_Frequency_fn(Cycle* __this, double* value);
void Cycle__get_High_fn(Cycle* __this, float* __retval);
void Cycle__set_High_fn(Cycle* __this, float* value);
void Cycle__get_IsOneCrossing_fn(Cycle* __this, bool* __retval);
void Cycle__get_IsZeroCrossing_fn(Cycle* __this, bool* __retval);
void Cycle__get_Low_fn(Cycle* __this, float* __retval);
void Cycle__set_Low_fn(Cycle* __this, float* value);
void Cycle__New2_fn(uType* __type, ::g::Uno::UX::Property1* Target1, Cycle** __retval);
void Cycle__get_ProgressOffset_fn(Cycle* __this, float* __retval);
void Cycle__set_ProgressOffset_fn(Cycle* __this, float* value);
void Cycle__get_RestProgress_fn(Cycle* __this, double* __retval);
void Cycle__get_Target_fn(Cycle* __this, ::g::Uno::UX::Property1** __retval);
void Cycle__set_Target_fn(Cycle* __this, ::g::Uno::UX::Property1* value);
void Cycle__get_Waveform_fn(Cycle* __this, int* __retval);
void Cycle__set_Waveform_fn(Cycle* __this, int* value);
void Cycle__WaveformFunc_fn(Cycle* __this, double* i, double* offset, double* __retval);

struct Cycle : ::g::Fuse::Animations::OpenAnimator
{
    int _easing;
    uStrong<uDelegate*> _easingFunction;
    bool _hasProgressOffset;
    double _hertz;
    float _progressOffset;
    int _waveform;
    uTField _Base() { return __type->Field(this, 12); }
    float _High;
    float _Low;
    uStrong< ::g::Uno::UX::Property1*> _Target;

    void ctor_3(::g::Uno::UX::Property1* Target1);
    template<class T>
    T Base() { T __retval; return Cycle__get_Base_fn(this, &__retval), __retval; }
    template<class T>
    void Base(T value) { Cycle__set_Base_fn(this, uConstrain(__type->T(0), value)); }
    int Easing();
    void Easing(int value);
    double Frequency();
    void Frequency(double value);
    float High();
    void High(float value);
    bool IsOneCrossing();
    bool IsZeroCrossing();
    float Low();
    void Low(float value);
    float ProgressOffset();
    void ProgressOffset(float value);
    double RestProgress();
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
    int Waveform();
    void Waveform(int value);
    double WaveformFunc(double i, double offset);
    static Cycle* New2(uType* __type, ::g::Uno::UX::Property1* Target1);
};
// }

}}} // ::g::Fuse::Animations
