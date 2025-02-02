// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Time\Calendars\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct Era;}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator;}}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

// internal abstract class YearMonthDayCalculator :510
// {
struct YearMonthDayCalculator_type : uType
{
    void(*fp_CalculateStartOfYearDays)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int*, int*);
    void(*fp_GetMonthOfYear1)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, ::g::Uno::Time::Instant*, int*, int*);
    void(*fp_GetStartOfYearInTicks)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int*, int64_t*);
    void(*fp_GetTicksFromStartOfYearToStartOfMonth)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int*, int*, int64_t*);
    void(*fp_IsLeapYear)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int*, bool*);
};

YearMonthDayCalculator_type* YearMonthDayCalculator_typeof();
void YearMonthDayCalculator__ctor__fn(YearMonthDayCalculator* __this, int* minYear, int* maxYear, int* monthsInYear, int64_t* averageTicksPerYear, int64_t* ticksAtStartOfYear1, uArray* eras);
void YearMonthDayCalculator__get_Eras_fn(YearMonthDayCalculator* __this, uArray** __retval);
void YearMonthDayCalculator__GetDayOfMonth_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int* __retval);
void YearMonthDayCalculator__GetDayOfMonth1_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int* year, int* month, int* __retval);
void YearMonthDayCalculator__GetMonthOfYear_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int* __retval);
void YearMonthDayCalculator__GetStartOfYearInTicks_fn(YearMonthDayCalculator* __this, int* year, int64_t* __retval);
void YearMonthDayCalculator__GetTicksInYear_fn(YearMonthDayCalculator* __this, int* year, int64_t* __retval);
void YearMonthDayCalculator__GetYear_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int* __retval);
void YearMonthDayCalculator__GetYearMonthTicks_fn(YearMonthDayCalculator* __this, int* year, int* month, int64_t* __retval);
void YearMonthDayCalculator__get_MaxYear_fn(YearMonthDayCalculator* __this, int* __retval);
void YearMonthDayCalculator__get_MinYear_fn(YearMonthDayCalculator* __this, int* __retval);

struct YearMonthDayCalculator : uObject
{
    int64_t _averageTicksPerYear;
    uStrong<uArray*> _eras;
    int _maxYear;
    int _minYear;
    int _monthsInYear;
    int64_t _ticksAtStartOfYear1;

    void ctor_(int minYear, int maxYear, int monthsInYear, int64_t averageTicksPerYear, int64_t ticksAtStartOfYear1, uArray* eras);
    int CalculateStartOfYearDays(int year) { int __retval; return (((YearMonthDayCalculator_type*)__type)->fp_CalculateStartOfYearDays)(this, &year, &__retval), __retval; }
    uArray* Eras();
    int GetDayOfMonth(::g::Uno::Time::Instant instant);
    int GetDayOfMonth1(::g::Uno::Time::Instant instant, int year, int month);
    int GetMonthOfYear(::g::Uno::Time::Instant instant);
    int GetMonthOfYear1(::g::Uno::Time::Instant instant, int year);
    int64_t GetStartOfYearInTicks(int year) { int64_t __retval; return (((YearMonthDayCalculator_type*)__type)->fp_GetStartOfYearInTicks)(this, &year, &__retval), __retval; }
    int64_t GetTicksFromStartOfYearToStartOfMonth(int year, int month) { int64_t __retval; return (((YearMonthDayCalculator_type*)__type)->fp_GetTicksFromStartOfYearToStartOfMonth)(this, &year, &month, &__retval), __retval; }
    int64_t GetTicksInYear(int year);
    int GetYear(::g::Uno::Time::Instant instant);
    int64_t GetYearMonthTicks(int year, int month);
    bool IsLeapYear(int year) { bool __retval; return (((YearMonthDayCalculator_type*)__type)->fp_IsLeapYear)(this, &year, &__retval), __retval; }
    int MaxYear();
    int MinYear();
    static int64_t GetStartOfYearInTicks(YearMonthDayCalculator* __this, int year) { int64_t __retval; return YearMonthDayCalculator__GetStartOfYearInTicks_fn(__this, &year, &__retval), __retval; }
};

}}}} // ::g::Uno::Time::Calendars

#include <Uno.Time.Instant.h>

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

inline int YearMonthDayCalculator::GetMonthOfYear1(::g::Uno::Time::Instant instant, int year) { int __retval; return (((YearMonthDayCalculator_type*)__type)->fp_GetMonthOfYear1)(this, &instant, &year, &__retval), __retval; }
// }

}}}} // ::g::Uno::Time::Calendars
