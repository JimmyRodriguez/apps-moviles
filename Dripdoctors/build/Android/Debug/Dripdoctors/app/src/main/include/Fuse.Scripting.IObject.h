// This file was generated based on C:\ProgramData\Uno\Packages\FuseCore\0.32.14\Scripting\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IObject :331
// {
uInterfaceType* IObject_typeof();

struct IObject
{
    void(*fp_get_Item)(uObject*, uString*, uObject**);
    static uObject* Item(const uInterface& __this, uString* key) { uObject* __retval; return __this.VTable<IObject>()->fp_get_Item(__this, key, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
