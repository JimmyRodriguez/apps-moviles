// This file was generated based on C:\ProgramData\Uno\Packages\FuseCore\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public abstract interface IFrustum :2520
// {
uInterfaceType* IFrustum_typeof();

struct IFrustum
{
    void(*fp_GetProjectionTransform)(uObject*, uObject*, ::g::Uno::Float4x4*);
    void(*fp_GetProjectionTransformInverse)(uObject*, uObject*, ::g::Uno::Float4x4*);
    void(*fp_GetViewTransform)(uObject*, uObject*, ::g::Uno::Float4x4*);
    void(*fp_GetViewTransformInverse)(uObject*, uObject*, ::g::Uno::Float4x4*);
    void(*fp_GetWorldPosition)(uObject*, uObject*, ::g::Uno::Float3*);
    static ::g::Uno::Float4x4 GetProjectionTransform(const uInterface& __this, uObject* viewport);
    static ::g::Uno::Float4x4 GetProjectionTransformInverse(const uInterface& __this, uObject* viewport);
    static ::g::Uno::Float4x4 GetViewTransform(const uInterface& __this, uObject* viewport);
    static ::g::Uno::Float4x4 GetViewTransformInverse(const uInterface& __this, uObject* viewport);
    static ::g::Uno::Float3 GetWorldPosition(const uInterface& __this, uObject* viewport);
};

}} // ::g::Fuse

#include <Uno.Float3.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float4x4 IFrustum::GetProjectionTransform(const uInterface& __this, uObject* viewport) { ::g::Uno::Float4x4 __retval; return __this.VTable<IFrustum>()->fp_GetProjectionTransform(__this, viewport, &__retval), __retval; }
inline ::g::Uno::Float4x4 IFrustum::GetProjectionTransformInverse(const uInterface& __this, uObject* viewport) { ::g::Uno::Float4x4 __retval; return __this.VTable<IFrustum>()->fp_GetProjectionTransformInverse(__this, viewport, &__retval), __retval; }
inline ::g::Uno::Float4x4 IFrustum::GetViewTransform(const uInterface& __this, uObject* viewport) { ::g::Uno::Float4x4 __retval; return __this.VTable<IFrustum>()->fp_GetViewTransform(__this, viewport, &__retval), __retval; }
inline ::g::Uno::Float4x4 IFrustum::GetViewTransformInverse(const uInterface& __this, uObject* viewport) { ::g::Uno::Float4x4 __retval; return __this.VTable<IFrustum>()->fp_GetViewTransformInverse(__this, viewport, &__retval), __retval; }
inline ::g::Uno::Float3 IFrustum::GetWorldPosition(const uInterface& __this, uObject* viewport) { ::g::Uno::Float3 __retval; return __this.VTable<IFrustum>()->fp_GetWorldPosition(__this, viewport, &__retval), __retval; }
// }

}} // ::g::Fuse
