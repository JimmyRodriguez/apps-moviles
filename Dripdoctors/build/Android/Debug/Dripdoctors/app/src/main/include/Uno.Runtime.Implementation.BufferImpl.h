// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct BufferImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class BufferImpl :181
// {
uClassType* BufferImpl_typeof();
void BufferImpl__GetFloat_fn(uArray* buffer, int* offset, bool* littleEndian, float* __retval);
void BufferImpl__GetInt_fn(uArray* buffer, int* offset, bool* littleEndian, int* __retval);
void BufferImpl__GetShort_fn(uArray* buffer, int* offset, bool* littleEndian, int16_t* __retval);
void BufferImpl__GetUInt_fn(uArray* buffer, int* offset, bool* littleEndian, uint32_t* __retval);
void BufferImpl__GetUShort_fn(uArray* buffer, int* offset, bool* littleEndian, uint16_t* __retval);
void BufferImpl__SetFloat_fn(uArray* buffer, int* offset, float* value, bool* littleEndian);
void BufferImpl__SetInt_fn(uArray* buffer, int* offset, int* value, bool* littleEndian);
void BufferImpl__SetUInt_fn(uArray* buffer, int* offset, uint32_t* value, bool* littleEndian);
void BufferImpl__SetUShort_fn(uArray* buffer, int* offset, uint16_t* value, bool* littleEndian);

struct BufferImpl : uObject
{
    static float GetFloat(uArray* buffer, int offset, bool littleEndian);
    static int GetInt(uArray* buffer, int offset, bool littleEndian);
    static int16_t GetShort(uArray* buffer, int offset, bool littleEndian);
    static uint32_t GetUInt(uArray* buffer, int offset, bool littleEndian);
    static uint16_t GetUShort(uArray* buffer, int offset, bool littleEndian);
    static void SetFloat(uArray* buffer, int offset, float value, bool littleEndian);
    static void SetInt(uArray* buffer, int offset, int value, bool littleEndian);
    static void SetUInt(uArray* buffer, int offset, uint32_t value, bool littleEndian);
    static void SetUShort(uArray* buffer, int offset, uint16_t value, bool littleEndian);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
