// This file was generated based on C:\ProgramData\Uno\Packages\FuseCore\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IViewport.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FixedViewport;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{

// internal sealed class FixedViewport :2603
// {
struct FixedViewport_type : uType
{
    ::g::Fuse::IViewport interface0;
};

FixedViewport_type* FixedViewport_typeof();
void FixedViewport__ctor__fn(FixedViewport* __this, ::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum);
void FixedViewport__New1_fn(::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum, FixedViewport** __retval);
void FixedViewport__get_PixelSize_fn(FixedViewport* __this, ::g::Uno::Float2* __retval);
void FixedViewport__get_PixelsPerPoint_fn(FixedViewport* __this, float* __retval);
void FixedViewport__PointToWorldRay_fn(FixedViewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval);
void FixedViewport__get_ProjectionTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval);
void FixedViewport__get_Size_fn(FixedViewport* __this, ::g::Uno::Float2* __retval);
void FixedViewport__get_ViewOrigin_fn(FixedViewport* __this, ::g::Uno::Float3* __retval);
void FixedViewport__get_ViewProjectionTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval);
void FixedViewport__get_ViewProjectionTransformInverse_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval);
void FixedViewport__get_ViewTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval);

struct FixedViewport : uObject
{
    uStrong<uObject*> _frustum;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    ::g::Uno::Float2 _pixelSize;
    float _pixelsPerPoint;

    void ctor_(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum);
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pointPos);
    ::g::Uno::Float4x4 ProjectionTransform();
    ::g::Uno::Float2 Size();
    ::g::Uno::Float3 ViewOrigin();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float4x4 ViewProjectionTransformInverse();
    ::g::Uno::Float4x4 ViewTransform();
    static FixedViewport* New1(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum);
};
// }

}} // ::g::Fuse
