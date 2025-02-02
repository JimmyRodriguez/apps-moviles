// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Vector;}}

namespace g{
namespace Uno{

// public static class Vector :8537
// {
uClassType* Vector_typeof();
void Vector__Cross_fn(::g::Uno::Float3* left, ::g::Uno::Float3* right, ::g::Uno::Float3* __retval);
void Vector__Distance_fn(::g::Uno::Float2* p0, ::g::Uno::Float2* p1, float* __retval);
void Vector__Distance1_fn(::g::Uno::Float3* p0, ::g::Uno::Float3* p1, float* __retval);
void Vector__Dot_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval);
void Vector__Dot1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, float* __retval);
void Vector__Length_fn(::g::Uno::Float2* v, float* __retval);
void Vector__Length1_fn(::g::Uno::Float3* v, float* __retval);
void Vector__Length2_fn(::g::Uno::Float4* v, float* __retval);
void Vector__LengthSquared_fn(::g::Uno::Float2* v, float* __retval);
void Vector__LengthSquared1_fn(::g::Uno::Float3* v, float* __retval);
void Vector__LengthSquared2_fn(::g::Uno::Float4* v, float* __retval);
void Vector__Normalize_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval);
void Vector__Normalize1_fn(::g::Uno::Float3* v, ::g::Uno::Float3* __retval);
void Vector__Normalize2_fn(::g::Uno::Float4* v, ::g::Uno::Float4* __retval);
void Vector__Transform1_fn(::g::Uno::Float2* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval);
void Vector__Transform4_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval);
void Vector__Transform5_fn(::g::Uno::Float4* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval);
void Vector__TransformCoordinate_fn(::g::Uno::Float2* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float2* __retval);
void Vector__TransformCoordinate1_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float3* __retval);
void Vector__TransformNormal1_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float3* __retval);

struct Vector : uObject
{
    static ::g::Uno::Float3 Cross(::g::Uno::Float3 left, ::g::Uno::Float3 right);
    static float Distance(::g::Uno::Float2 p0, ::g::Uno::Float2 p1);
    static float Distance1(::g::Uno::Float3 p0, ::g::Uno::Float3 p1);
    static float Dot(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static float Dot1(::g::Uno::Float3 a, ::g::Uno::Float3 b);
    static float Length(::g::Uno::Float2 v);
    static float Length1(::g::Uno::Float3 v);
    static float Length2(::g::Uno::Float4 v);
    static float LengthSquared(::g::Uno::Float2 v);
    static float LengthSquared1(::g::Uno::Float3 v);
    static float LengthSquared2(::g::Uno::Float4 v);
    static ::g::Uno::Float2 Normalize(::g::Uno::Float2 v);
    static ::g::Uno::Float3 Normalize1(::g::Uno::Float3 v);
    static ::g::Uno::Float4 Normalize2(::g::Uno::Float4 v);
    static ::g::Uno::Float4 Transform1(::g::Uno::Float2 vector, ::g::Uno::Float4x4 matrix);
    static ::g::Uno::Float4 Transform4(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix);
    static ::g::Uno::Float4 Transform5(::g::Uno::Float4 vector, ::g::Uno::Float4x4 matrix);
    static ::g::Uno::Float2 TransformCoordinate(::g::Uno::Float2 vector, ::g::Uno::Float4x4 matrix);
    static ::g::Uno::Float3 TransformCoordinate1(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix);
    static ::g::Uno::Float3 TransformNormal1(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix);
};
// }

}} // ::g::Uno
