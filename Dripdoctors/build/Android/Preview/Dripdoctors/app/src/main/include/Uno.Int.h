// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct Int :3423
// {
uStructType* Int_typeof();
void Int__Equals_fn(int* __this, uType* __type, uObject* o, bool* __retval);
void Int__GetHashCode_fn(int* __this, uType* __type, int* __retval);
void Int__Parse_fn(uString* str, int* __retval);
void Int__ToString_fn(int* __this, uType* __type, uString** __retval);
void Int__TryParse_fn(uString* str, int* res, bool* __retval);

struct Int
{
    static bool Equals(int __this, uType* __type, uObject* o) { bool __retval; return Int__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(int __this, uType* __type) { int __retval; return Int__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(int __this, uType* __type) { uString* __retval; return Int__ToString_fn(&__this, __type, &__retval), __retval; }
    static int Parse(uString* str);
    static bool TryParse(uString* str, int* res);
};
// }

}} // ::g::Uno
