// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.35.6/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Time.Text.IPatternPart-1.h>
#include <Uno.Time.Text.PatternPart-2.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct NumberPart;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal sealed class NumberPart<T> :862
// {
::g::Uno::Time::Text::PatternPart_type* NumberPart_typeof();
void NumberPart__ctor_1_fn(NumberPart* __this, int* size, bool* obligatory, uDelegate* setter, uDelegate* getter);
void NumberPart__GetPart_fn(NumberPart* __this, uString* line, int* index, uString** __retval);
void NumberPart__New1_fn(uType* __type, int* size, bool* obligatory, uDelegate* setter, uDelegate* getter, NumberPart** __retval);
void NumberPart__Read_fn(NumberPart* __this, uString* line, int* position, void* value, int* __retval);
void NumberPart__Write_fn(NumberPart* __this, void* value, uString** __retval);

struct NumberPart : ::g::Uno::Time::Text::PatternPart
{
    void ctor_1(int size, bool obligatory, uDelegate* setter, uDelegate* getter);
    uString* GetPart(uString* line, int index);
    static NumberPart* New1(uType* __type, int size, bool obligatory, uDelegate* setter, uDelegate* getter);
};
// }

}}}} // ::g::Uno::Time::Text
