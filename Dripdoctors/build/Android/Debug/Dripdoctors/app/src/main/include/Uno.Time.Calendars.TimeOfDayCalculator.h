// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Time\Calendars\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct TimeOfDayCalculator;}}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

// internal static class TimeOfDayCalculator :265
// {
uClassType* TimeOfDayCalculator_typeof();
void TimeOfDayCalculator__GetHourOfDay_fn(::g::Uno::Time::Instant* instant, int* __retval);
void TimeOfDayCalculator__GetHourOfDayFromTickOfDay_fn(int64_t* tickOfDay, int* __retval);
void TimeOfDayCalculator__GetMinuteOfHour_fn(::g::Uno::Time::Instant* instant, int* __retval);
void TimeOfDayCalculator__GetMinuteOfHourFromTickOfDay_fn(int64_t* tickOfDay, int* __retval);
void TimeOfDayCalculator__GetSecondOfMinute_fn(::g::Uno::Time::Instant* instant, int* __retval);
void TimeOfDayCalculator__GetSecondOfMinuteFromTickOfDay_fn(int64_t* tickOfDay, int* __retval);
void TimeOfDayCalculator__GetTickOfDay_fn(::g::Uno::Time::Instant* instant, int64_t* __retval);

struct TimeOfDayCalculator : uObject
{
    static int GetHourOfDay(::g::Uno::Time::Instant instant);
    static int GetHourOfDayFromTickOfDay(int64_t tickOfDay);
    static int GetMinuteOfHour(::g::Uno::Time::Instant instant);
    static int GetMinuteOfHourFromTickOfDay(int64_t tickOfDay);
    static int GetSecondOfMinute(::g::Uno::Time::Instant instant);
    static int GetSecondOfMinuteFromTickOfDay(int64_t tickOfDay);
    static int64_t GetTickOfDay(::g::Uno::Time::Instant instant);
};
// }

}}}} // ::g::Uno::Time::Calendars
