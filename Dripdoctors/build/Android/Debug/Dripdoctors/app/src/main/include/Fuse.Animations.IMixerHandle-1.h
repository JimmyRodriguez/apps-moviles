// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Animations\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// public abstract interface IMixerHandle<T> :1520
// {
uInterfaceType* IMixerHandle_typeof();

struct IMixerHandle
{
    void(*fp_Set)(uObject*, void*, float*);
    void(*fp_Unregister)(uObject*);
    template<class T>
    static void Set(const uInterface& __this, T value, float strength) { __this.VTable<IMixerHandle>()->fp_Set(__this, uConstrain(__this->__type->GetBase(IMixerHandle_typeof())->T(0), value), &strength); }
    static void Set_ex(const uInterface& __this, void* value, float* strength) { __this.VTable<IMixerHandle>()->fp_Set(__this, value, strength); }
    static void Unregister(const uInterface& __this) { __this.VTable<IMixerHandle>()->fp_Unregister(__this); }
};
// }

}}} // ::g::Fuse::Animations
