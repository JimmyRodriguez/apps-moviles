// This file was generated based on C:\ProgramData\Uno\Packages\Uno.Collections\0.32.1\Extensions\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct UnionEnumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class UnionEnumerator<T> :531
// {
struct UnionEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

UnionEnumerator_type* UnionEnumerator_typeof();
void UnionEnumerator__ctor__fn(UnionEnumerator* __this, uObject* first, uObject* second);
void UnionEnumerator__get_Current_fn(UnionEnumerator* __this, uTRef __retval);
void UnionEnumerator__Dispose_fn(UnionEnumerator* __this);
void UnionEnumerator__MoveNext_fn(UnionEnumerator* __this, bool* __retval);
void UnionEnumerator__New1_fn(uType* __type, uObject* first, uObject* second, UnionEnumerator** __retval);

struct UnionEnumerator : uObject
{
    uStrong<uObject*> _current;
    uStrong<uObject*> _first;
    uStrong<uObject*> _second;

    void ctor_(uObject* first, uObject* second);
    template<class T>
    T Current() { T __retval; return UnionEnumerator__get_Current_fn(this, &__retval), __retval; }
    void Dispose();
    bool MoveNext();
    static UnionEnumerator* New1(uType* __type, uObject* first, uObject* second);
};
// }

}}} // ::g::Uno::Collections
