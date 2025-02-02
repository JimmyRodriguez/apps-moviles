// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Entities\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.Entry.h>
#include <Fuse.IFlush.h>
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct Batch;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct MeshBatcher;}}}}
namespace g{namespace Fuse{namespace Entities{struct Material;}}}
namespace g{namespace Fuse{namespace Entities{struct Mesh;}}}
namespace g{namespace Fuse{namespace Entities{struct MeshBatchingEngine;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class MeshBatchingEngine :974
// {
struct MeshBatchingEngine_type : uType
{
    ::g::Fuse::IFlush interface0;
};

MeshBatchingEngine_type* MeshBatchingEngine_typeof();
void MeshBatchingEngine__ctor__fn(MeshBatchingEngine* __this);
void MeshBatchingEngine__Draw_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4* transform, ::g::Fuse::Entities::Material* material);
void MeshBatchingEngine__DrawBatch_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::Batch* batch, ::g::Uno::Float4x4* world, ::g::Uno::Float4x4* worldInverse);
void MeshBatchingEngine__DrawBatched_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::MeshBatcher* batcher, ::g::Uno::Collections::List* entries);
void MeshBatchingEngine__DrawIndividual_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Uno::Collections::List* entries);
void MeshBatchingEngine__DrawList_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Uno::Collections::List* entries);
void MeshBatchingEngine__DrawMesh_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4* world, ::g::Uno::Float4x4* worldInverse);
void MeshBatchingEngine__FindOrCreateBatcher_fn(MeshBatchingEngine* __this, ::g::Fuse::Entities::Mesh* mesh, ::g::Fuse::Drawing::Batching::MeshBatcher** __retval);
void MeshBatchingEngine__Flush_fn(MeshBatchingEngine* __this, ::g::Fuse::DrawContext* dc);
void MeshBatchingEngine__init_DrawCalls_fn(MeshBatchingEngine* __this);
void MeshBatchingEngine__MeshVertexCount_fn(MeshBatchingEngine* __this, ::g::Fuse::Entities::Mesh* mesh, int* __retval);
void MeshBatchingEngine__New1_fn(MeshBatchingEngine** __retval);
void MeshBatchingEngine__get_Singleton_fn(MeshBatchingEngine** __retval);

struct MeshBatchingEngine : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_3d7404f9;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e92d1425;
    static uSStrong<MeshBatchingEngine*> _singleton_;
    static uSStrong<MeshBatchingEngine*>& _singleton() { return _singleton_; }
    uStrong< ::g::Uno::Collections::Dictionary*> batchers;
    uStrong< ::g::Uno::Collections::Dictionary*> drawLists;
    uStrong<uArray*> normalArray;
    uStrong<uArray*> worldArray;

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4 transform, ::g::Fuse::Entities::Material* material);
    void DrawBatch(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::Batch* batch, ::g::Uno::Float4x4 world, ::g::Uno::Float4x4 worldInverse);
    void DrawBatched(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Fuse::Drawing::Batching::MeshBatcher* batcher, ::g::Uno::Collections::List* entries);
    void DrawIndividual(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Uno::Collections::List* entries);
    void DrawList(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* material, ::g::Uno::Collections::List* entries);
    void DrawMesh(::g::Fuse::DrawContext* dc, ::g::Fuse::Entities::Material* m, ::g::Fuse::Entities::Mesh* mesh, ::g::Uno::Float4x4 world, ::g::Uno::Float4x4 worldInverse);
    ::g::Fuse::Drawing::Batching::MeshBatcher* FindOrCreateBatcher(::g::Fuse::Entities::Mesh* mesh);
    void Flush(::g::Fuse::DrawContext* dc);
    void init_DrawCalls();
    int MeshVertexCount(::g::Fuse::Entities::Mesh* mesh);
    static MeshBatchingEngine* New1();
    static MeshBatchingEngine* Singleton();
};
// }

}}} // ::g::Fuse::Entities
