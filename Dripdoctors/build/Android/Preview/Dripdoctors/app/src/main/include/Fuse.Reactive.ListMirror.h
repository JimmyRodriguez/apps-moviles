// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ValueMirror.h>
#include <Fuse.Scripting.IArray.h>
namespace g{namespace Fuse{namespace Reactive{struct ListMirror;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class ListMirror :2704
// {
struct ListMirror_type : ::g::Fuse::Reactive::ValueMirror_type
{
    ::g::Fuse::Scripting::IArray interface0;
    void(*fp_get_Item)(::g::Fuse::Reactive::ListMirror*, int*, uObject**);
    void(*fp_get_Length)(::g::Fuse::Reactive::ListMirror*, int*);
};

ListMirror_type* ListMirror_typeof();
void ListMirror__ctor_1_fn(ListMirror* __this, uObject* raw);

struct ListMirror : ::g::Fuse::Reactive::ValueMirror
{
    void ctor_1(uObject* raw);
    uObject* Item(int index) { uObject* __retval; return (((ListMirror_type*)__type)->fp_get_Item)(this, &index, &__retval), __retval; }
    int Length() { int __retval; return (((ListMirror_type*)__type)->fp_get_Length)(this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
