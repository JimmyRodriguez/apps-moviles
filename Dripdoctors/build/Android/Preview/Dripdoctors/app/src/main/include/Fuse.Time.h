// This file was generated based on C:\ProgramData\Uno\Packages\FuseCore\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Time;}}

namespace g{
namespace Fuse{

// public static class Time :8531
// {
uClassType* Time_typeof();
void Time__get_FrameInterval_fn(double* __retval);
void Time__get_FrameIntervalFloat_fn(float* __retval);
void Time__get_FrameTime_fn(double* __retval);
void Time__get_FrameTimeBase_fn(double* __retval);
void Time__Init_fn(double* start);
void Time__Set_fn(double* current);

struct Time : uObject
{
    static double _base_;
    static double& _base() { return _base_; }
    static double _current_;
    static double& _current() { return _current_; }
    static double _delta_;
    static double& _delta() { return _delta_; }
    static bool _init_;
    static bool& _init() { return _init_; }
    static double _prev_;
    static double& _prev() { return _prev_; }

    static void Init(double start);
    static void Set(double current);
    static double FrameInterval();
    static float FrameIntervalFloat();
    static double FrameTime();
    static double FrameTimeBase();
};
// }

}} // ::g::Fuse
