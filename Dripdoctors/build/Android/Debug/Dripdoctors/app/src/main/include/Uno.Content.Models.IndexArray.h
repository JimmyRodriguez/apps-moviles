// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Content\Models\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Models{struct IndexArray;}}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// public sealed class IndexArray :9
// {
uType* IndexArray_typeof();
void IndexArray__ctor_1_fn(IndexArray* __this, uArray* data);
void IndexArray__ctor_2_fn(IndexArray* __this, int* type, ::g::Uno::Buffer* buffer);
void IndexArray__get_Buffer_fn(IndexArray* __this, ::g::Uno::Buffer** __retval);
void IndexArray__get_Count_fn(IndexArray* __this, int* __retval);
void IndexArray__GetInt_fn(IndexArray* __this, int* index, int* __retval);
void IndexArray__New2_fn(uArray* data, IndexArray** __retval);
void IndexArray__get_Type_fn(IndexArray* __this, int* __retval);

struct IndexArray : uObject
{
    uStrong< ::g::Uno::Buffer*> _buffer;
    int _type;

    void ctor_1(uArray* data);
    void ctor_2(int type, ::g::Uno::Buffer* buffer);
    ::g::Uno::Buffer* Buffer();
    int Count();
    int GetInt(int index);
    int Type();
    static IndexArray* New2(uArray* data);
};
// }

}}}} // ::g::Uno::Content::Models
