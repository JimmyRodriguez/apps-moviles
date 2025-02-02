// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Byte4;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct SByte4;}}
namespace g{namespace Uno{struct Short2;}}
namespace g{namespace Uno{struct Short4;}}
namespace g{namespace Uno{struct UShort2;}}
namespace g{namespace Uno{struct UShort4;}}

namespace g{
namespace Uno{

// public sealed class Buffer :347
// {
uType* Buffer_typeof();
void Buffer__ctor__fn(Buffer* __this, uArray* data);
void Buffer__ctor_2_fn(Buffer* __this, uArray* data, int* offset, int* sizeInBytes, bool* isReadOnly);
void Buffer__ctor_3_fn(Buffer* __this, int* sizeInBytes);
void Buffer__GetByte_fn(Buffer* __this, int* offset, uint8_t* __retval);
void Buffer__GetByte4_fn(Buffer* __this, int* offset, ::g::Uno::Byte4* __retval);
void Buffer__GetFloat_fn(Buffer* __this, int* offset, bool* littleEndian, float* __retval);
void Buffer__GetFloat2_fn(Buffer* __this, int* offset, bool* littleEndian, ::g::Uno::Float2* __retval);
void Buffer__GetFloat3_fn(Buffer* __this, int* offset, bool* littleEndian, ::g::Uno::Float3* __retval);
void Buffer__GetFloat4_fn(Buffer* __this, int* offset, bool* littleEndian, ::g::Uno::Float4* __retval);
void Buffer__get_GetHandle_fn(Buffer* __this, uArray** __retval);
void Buffer__GetSByte_fn(Buffer* __this, int* offset, int8_t* __retval);
void Buffer__GetSByte4_fn(Buffer* __this, int* offset, ::g::Uno::SByte4* __retval);
void Buffer__GetShort_fn(Buffer* __this, int* offset, bool* littleEndian, int16_t* __retval);
void Buffer__GetShort2_fn(Buffer* __this, int* offset, bool* littleEndian, ::g::Uno::Short2* __retval);
void Buffer__GetShort4_fn(Buffer* __this, int* offset, bool* littleEndian, ::g::Uno::Short4* __retval);
void Buffer__GetUInt_fn(Buffer* __this, int* offset, bool* littleEndian, uint32_t* __retval);
void Buffer__GetUShort_fn(Buffer* __this, int* offset, bool* littleEndian, uint16_t* __retval);
void Buffer__GetUShort2_fn(Buffer* __this, int* offset, bool* littleEndian, ::g::Uno::UShort2* __retval);
void Buffer__GetUShort4_fn(Buffer* __this, int* offset, bool* littleEndian, ::g::Uno::UShort4* __retval);
void Buffer__get_Item_fn(Buffer* __this, int* offset, uint8_t* __retval);
void Buffer__set_Item_fn(Buffer* __this, int* offset, uint8_t* value);
void Buffer__New1_fn(uArray* data, Buffer** __retval);
void Buffer__New3_fn(uArray* data, int* offset, int* sizeInBytes, bool* isReadOnly, Buffer** __retval);
void Buffer__New4_fn(int* sizeInBytes, Buffer** __retval);
void Buffer__Set_fn(Buffer* __this, int* offset, uint8_t* value);
void Buffer__Set2_fn(Buffer* __this, int* offset, ::g::Uno::Byte4* value);
void Buffer__Set4_fn(Buffer* __this, int* offset, float* value, bool* littleEndian);
void Buffer__Set5_fn(Buffer* __this, int* offset, ::g::Uno::Float2* value, bool* littleEndian);
void Buffer__Set6_fn(Buffer* __this, int* offset, ::g::Uno::Float3* value, bool* littleEndian);
void Buffer__Set8_fn(Buffer* __this, int* offset, ::g::Uno::Float4* value, bool* littleEndian);
void Buffer__Set21_fn(Buffer* __this, int* offset, uint32_t* value, bool* littleEndian);
void Buffer__Set23_fn(Buffer* __this, int* offset, uint16_t* value, bool* littleEndian);
void Buffer__get_SetHandle_fn(Buffer* __this, uArray** __retval);
void Buffer__get_SizeInBytes_fn(Buffer* __this, int* __retval);

struct Buffer : uObject
{
    uStrong<uArray*> _data;
    bool _isReadOnly;
    int _offset;
    int _sizeInBytes;

    void ctor_(uArray* data);
    void ctor_2(uArray* data, int offset, int sizeInBytes, bool isReadOnly);
    void ctor_3(int sizeInBytes);
    uint8_t GetByte(int offset);
    ::g::Uno::Byte4 GetByte4(int offset);
    float GetFloat(int offset, bool littleEndian);
    ::g::Uno::Float2 GetFloat2(int offset, bool littleEndian);
    ::g::Uno::Float3 GetFloat3(int offset, bool littleEndian);
    ::g::Uno::Float4 GetFloat4(int offset, bool littleEndian);
    uArray* GetHandle();
    int8_t GetSByte(int offset);
    ::g::Uno::SByte4 GetSByte4(int offset);
    int16_t GetShort(int offset, bool littleEndian);
    ::g::Uno::Short2 GetShort2(int offset, bool littleEndian);
    ::g::Uno::Short4 GetShort4(int offset, bool littleEndian);
    uint32_t GetUInt(int offset, bool littleEndian);
    uint16_t GetUShort(int offset, bool littleEndian);
    ::g::Uno::UShort2 GetUShort2(int offset, bool littleEndian);
    ::g::Uno::UShort4 GetUShort4(int offset, bool littleEndian);
    uint8_t Item(int offset);
    void Item(int offset, uint8_t value);
    void Set(int offset, uint8_t value);
    void Set2(int offset, ::g::Uno::Byte4 value);
    void Set4(int offset, float value, bool littleEndian);
    void Set5(int offset, ::g::Uno::Float2 value, bool littleEndian);
    void Set6(int offset, ::g::Uno::Float3 value, bool littleEndian);
    void Set8(int offset, ::g::Uno::Float4 value, bool littleEndian);
    void Set21(int offset, uint32_t value, bool littleEndian);
    void Set23(int offset, uint16_t value, bool littleEndian);
    uArray* SetHandle();
    int SizeInBytes();
    static Buffer* New1(uArray* data);
    static Buffer* New3(uArray* data, int offset, int sizeInBytes, bool isReadOnly);
    static Buffer* New4(int sizeInBytes);
};
// }

}} // ::g::Uno
