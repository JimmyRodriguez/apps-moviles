// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Entities\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Entities{struct ModelMeshHelpers;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}
namespace g{namespace Uno{namespace Geometry{struct Box;}}}
namespace g{namespace Uno{namespace Geometry{struct Sphere;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal static class ModelMeshHelpers :1509
// {
uClassType* ModelMeshHelpers_typeof();
void ModelMeshHelpers__CalculateAABB_fn(::g::Uno::Content::Models::ModelMesh* modelMesh, ::g::Uno::Geometry::Box* __retval);
void ModelMeshHelpers__CalculateBoundingSphere_fn(::g::Uno::Content::Models::ModelMesh* modelMesh, ::g::Uno::Geometry::Sphere* __retval);

struct ModelMeshHelpers : uObject
{
    static ::g::Uno::Geometry::Box CalculateAABB(::g::Uno::Content::Models::ModelMesh* modelMesh);
    static ::g::Uno::Geometry::Sphere CalculateBoundingSphere(::g::Uno::Content::Models::ModelMesh* modelMesh);
};
// }

}}} // ::g::Fuse::Entities
