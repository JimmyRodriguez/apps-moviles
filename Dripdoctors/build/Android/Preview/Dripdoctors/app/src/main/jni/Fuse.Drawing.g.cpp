// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPolygons_bundle.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Antialiasing.h>
#include <Fuse.Drawing.BezierOp.h>
#include <Fuse.Drawing.BlendMode.h>
#include <Fuse.Drawing.BlendModeHelpers.h>
#include <Fuse.Drawing.Border.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.ButtCap.h>
#include <Fuse.Drawing.Cache-1.h>
#include <Fuse.Drawing.ClosePath.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.Contour.h>
#include <Fuse.Drawing.ContourEnumerable.h>
#include <Fuse.Drawing.ContourEnumerator.h>
#include <Fuse.Drawing.ContourTerminator.h>
#include <Fuse.Drawing.CurveTo.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.EllipseFactory.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.HorizontalLineTo.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.ISolidColor.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.LinearGradientDrawable.h>
#include <Fuse.Drawing.LineCap.h>
#include <Fuse.Drawing.LineCapImpl.h>
#include <Fuse.Drawing.LineJoin.h>
#include <Fuse.Drawing.LineJoinImpl.h>
#include <Fuse.Drawing.LineTo.h>
#include <Fuse.Drawing.MiterJoin.h>
#include <Fuse.Drawing.MoveTo.h>
#include <Fuse.Drawing.NonConsecutiveEnumerable.h>
#include <Fuse.Drawing.NonConsecutiveEnumerator.h>
#include <Fuse.Drawing.NonConsecutiveExtension.h>
#include <Fuse.Drawing.PathGeometry.h>
#include <Fuse.Drawing.PathGeometryExtensions.h>
#include <Fuse.Drawing.PathGeometryParser.h>
#include <Fuse.Drawing.PathGeometryRenderer.h>
#include <Fuse.Drawing.Polygon.h>
#include <Fuse.Drawing.PolygonDrawable.h>
#include <Fuse.Drawing.PolygonFiller.h>
#include <Fuse.Drawing.RectangleFactory.h>
#include <Fuse.Drawing.RegularPolygonFactory.h>
#include <Fuse.Drawing.RendererContext.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Drawing.RoundCap.h>
#include <Fuse.Drawing.SmoothCurveTo.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StarFactory.h>
#include <Fuse.Drawing.StaticBrush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.StrokeAdjustment.h>
#include <Fuse.Drawing.StrokeAlignment.h>
#include <Fuse.Drawing.Tesselation.Face.h>
#include <Fuse.Drawing.Tesselation.HalfEdge.h>
#include <Fuse.Drawing.Tesselation.Mesh.h>
#include <Fuse.Drawing.Tesselation.MeshBuilder.h>
#include <Fuse.Drawing.Tesselation.Vertex.h>
#include <Fuse.Drawing.Token.h>
#include <Fuse.Drawing.Util.h>
#include <Fuse.Drawing.VerticalLineTo.h>
#include <Fuse.Drawing.WindingRules.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.EmptyEnumerable-1.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Color.h>
#include <Uno.Content.Models.IndexArray.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Content.Models.VertexAttributeArray.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Geometry.Collision2D.h>
#include <Uno.Geometry.CubicBezier.h>
#include <Uno.Geometry.Triangle2D.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.PolygonWinding.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Math.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.Vector.h>
static uString* STRINGS[44];
static uType* TYPES[93];

namespace g{
namespace Fuse{
namespace Drawing{

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public enum Antialiasing :253
uEnumType* Antialiasing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.Antialiasing", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Gradient", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// public static class BezierOp :1286
// {
static void BezierOp_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Double_typeof()->Array();
    type->Reflection.SetFunctions(1,
        new uFunction("GetRect", NULL, (void*)BezierOp__GetRect_fn, 0, true, ::g::Uno::Rect_typeof(), 4, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()));
}

uClassType* BezierOp_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.BezierOp", options);
    type->fp_build_ = BezierOp_build;
    return type;
}

// private static double _Solve(double a_, double b_, double c_, bool s) :1340
void BezierOp___Solve_fn(double* a_, double* b_, double* c_, bool* s, double* __retval)
{
    *__retval = BezierOp::_Solve(*a_, *b_, *c_, *s);
}

// private static double A(double p0, double p1, double p2, double p3) :1318
void BezierOp__A_fn(double* p0, double* p1, double* p2, double* p3, double* __retval)
{
    *__retval = BezierOp::A(*p0, *p1, *p2, *p3);
}

// private static double B(double p0, double p1, double p2) :1324
void BezierOp__B_fn(double* p0, double* p1, double* p2, double* __retval)
{
    *__retval = BezierOp::B(*p0, *p1, *p2);
}

// private static double bezierSpline(double p0, double p1, double p2, double p3, double t) :1295
void BezierOp__bezierSpline_fn(double* p0, double* p1, double* p2, double* p3, double* t, double* __retval)
{
    *__retval = BezierOp::bezierSpline(*p0, *p1, *p2, *p3, *t);
}

// private static double C(double p0, double p1) :1329
void BezierOp__C_fn(double* p0, double* p1, double* __retval)
{
    *__retval = BezierOp::C(*p0, *p1);
}

// private static double Determinant(double a, double b, double c) :1335
void BezierOp__Determinant_fn(double* a, double* b, double* c, double* __retval)
{
    *__retval = BezierOp::Determinant(*a, *b, *c);
}

// public static Uno.Rect GetRect(float2 p1, float2 c1, float2 c2, float2 p2) :1375
void BezierOp__GetRect_fn(::g::Uno::Float2* p1, ::g::Uno::Float2* c1, ::g::Uno::Float2* c2, ::g::Uno::Float2* p2, ::g::Uno::Rect* __retval)
{
    *__retval = BezierOp::GetRect(*p1, *c1, *c2, *p2);
}

// private static double[] Solve(double a, double b, double c) :1347
void BezierOp__Solve_fn(double* a, double* b, double* c, uArray** __retval)
{
    *__retval = BezierOp::Solve(*a, *b, *c);
}

// private static double _Solve(double a_, double b_, double c_, bool s) [static] :1340
double BezierOp::_Solve(double a_, double b_, double c_, bool s)
{
    uStackFrame __("Fuse.Drawing.BezierOp", "_Solve(double,double,double,bool)");
    return (-b_ + (::g::Uno::Math::Sqrt((b_ * b_) - ((4.0 * a_) * c_)) * (double)(s ? 1 : -1))) / (2.0 * a_);
}

// private static double A(double p0, double p1, double p2, double p3) [static] :1318
double BezierOp::A(double p0, double p1, double p2, double p3)
{
    uStackFrame __("Fuse.Drawing.BezierOp", "A(double,double,double,double)");
    return (((3.0 * p3) - (9.0 * p2)) + (9.0 * p1)) - (3.0 * p0);
}

// private static double B(double p0, double p1, double p2) [static] :1324
double BezierOp::B(double p0, double p1, double p2)
{
    uStackFrame __("Fuse.Drawing.BezierOp", "B(double,double,double)");
    return ((6.0 * p2) - (12.0 * p1)) + (6.0 * p0);
}

// private static double bezierSpline(double p0, double p1, double p2, double p3, double t) [static] :1295
double BezierOp::bezierSpline(double p0, double p1, double p2, double p3, double t)
{
    uStackFrame __("Fuse.Drawing.BezierOp", "bezierSpline(double,double,double,double,double)");
    return ((((((p3 - (3.0 * p2)) + (3.0 * p1)) - p0) * ::g::Uno::Math::Pow(t, 3.0)) + ((((3.0 * p2) - (6.0 * p1)) + (3.0 * p0)) * ::g::Uno::Math::Pow(t, 2.0))) + (((3.0 * p1) - (3.0 * p0)) * t)) + p0;
}

// private static double C(double p0, double p1) [static] :1329
double BezierOp::C(double p0, double p1)
{
    uStackFrame __("Fuse.Drawing.BezierOp", "C(double,double)");
    return (3.0 * p1) - (3.0 * p0);
}

// private static double Determinant(double a, double b, double c) [static] :1335
double BezierOp::Determinant(double a, double b, double c)
{
    uStackFrame __("Fuse.Drawing.BezierOp", "Determinant(double,double,double)");
    return ::g::Uno::Math::Pow(b, 2.0) - ((4.0 * a) * c);
}

// public static Uno.Rect GetRect(float2 p1, float2 c1, float2 c2, float2 p2) [static] :1375
::g::Uno::Rect BezierOp::GetRect(::g::Uno::Float2 p1, ::g::Uno::Float2 c1, ::g::Uno::Float2 c2, ::g::Uno::Float2 p2)
{
    uStackFrame __("Fuse.Drawing.BezierOp", "GetRect(float2,float2,float2,float2)");
    double aX = BezierOp::A((double)p1.X, (double)c1.X, (double)c2.X, (double)p2.X);
    double bX = BezierOp::B((double)p1.X, (double)c1.X, (double)c2.X);
    double cX = BezierOp::C((double)p1.X, (double)c1.X);
    double aY = BezierOp::A((double)p1.Y, (double)c1.Y, (double)c2.Y, (double)p2.Y);
    double bY = BezierOp::B((double)p1.Y, (double)c1.Y, (double)c2.Y);
    double cY = BezierOp::C((double)p1.Y, (double)c1.Y);
    uArray* resX = BezierOp::Solve(aX, bX, cX);
    uArray* resY = BezierOp::Solve(aY, bY, cY);
    ::g::Uno::Float2 min = ::g::Uno::Math::Min3(p1, p2);
    ::g::Uno::Float2 max = ::g::Uno::Math::Max3(p1, p2);

    for (int index2 = 0, length3 = uPtr(resX)->Length(); index2 < length3; ++index2)
    {
        double e = uPtr(resX)->Item<double>(index2);

        if ((e < 0.0) || (e > 1.0))
            continue;

        double x = BezierOp::bezierSpline((double)p1.X, (double)c1.X, (double)c2.X, (double)p2.X, e);
        min.X = ::g::Uno::Math::Min1(min.X, (float)x);
        max.X = ::g::Uno::Math::Max1(max.X, (float)x);
    }

    for (int index5 = 0, length6 = uPtr(resY)->Length(); index5 < length6; ++index5)
    {
        double e1 = uPtr(resY)->Item<double>(index5);

        if ((e1 < 0.0) || (e1 > 1.0))
            continue;

        double y = BezierOp::bezierSpline((double)p1.Y, (double)c1.Y, (double)c2.Y, (double)p2.Y, e1);
        min.Y = ::g::Uno::Math::Min1(min.Y, (float)y);
        max.Y = ::g::Uno::Math::Max1(max.Y, (float)y);
    }

    return ::g::Uno::Rect__New1(min.X, min.Y, max.X, max.Y);
}

// private static double[] Solve(double a, double b, double c) [static] :1347
uArray* BezierOp::Solve(double a, double b, double c)
{
    uStackFrame __("Fuse.Drawing.BezierOp", "Solve(double,double,double)");
    double d = BezierOp::Determinant(a, b, c);

    if (d < 0.0)
        return uArray::Init<double>(::TYPES[0/*double[]*/], 0);

    if (::g::Uno::Math::Abs(a) < 9.9999997473787516e-06)
    {
        if (::g::Uno::Math::Abs(b) < 9.9999997473787516e-06)
            return uArray::Init<double>(::TYPES[0/*double[]*/], 0);

        return uArray::Init<double>(::TYPES[0/*double[]*/], 1, -c / b);
    }

    if (d == 0.0)
        return uArray::Init<double>(::TYPES[0/*double[]*/], 1, BezierOp::_Solve(a, b, c, true));
    else
        return uArray::Init<double>(::TYPES[0/*double[]*/], 2, BezierOp::_Solve(a, b, c, true), BezierOp::_Solve(a, b, c, false));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public enum BlendMode :8
uEnumType* BlendMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.BlendMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Normal", 0LL,
        "Add", 1LL,
        "Screen", 2LL,
        "Multiply", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public static class BlendModeHelpers :17
// {
// static BlendModeHelpers() :17
static void BlendModeHelpers__cctor__fn(uType* __type)
{
    BlendModeHelpers::_invalidBlendMode_ = ::STRINGS[0/*"Invalid ble...*/];
}

static void BlendModeHelpers_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Invalid blend mode");
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Drawing::BlendModeHelpers::_invalidBlendMode_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("GetDstAlpha", NULL, (void*)BlendModeHelpers__GetDstAlpha_fn, 0, true, ::g::Uno::Graphics::BlendOperand_typeof(), 1, ::g::Fuse::Drawing::BlendMode_typeof()),
        new uFunction("GetDstRgb", NULL, (void*)BlendModeHelpers__GetDstRgb_fn, 0, true, ::g::Uno::Graphics::BlendOperand_typeof(), 1, ::g::Fuse::Drawing::BlendMode_typeof()),
        new uFunction("GetSrcAlpha", NULL, (void*)BlendModeHelpers__GetSrcAlpha_fn, 0, true, ::g::Uno::Graphics::BlendOperand_typeof(), 1, ::g::Fuse::Drawing::BlendMode_typeof()),
        new uFunction("GetSrcRgb", NULL, (void*)BlendModeHelpers__GetSrcRgb_fn, 0, true, ::g::Uno::Graphics::BlendOperand_typeof(), 1, ::g::Fuse::Drawing::BlendMode_typeof()));
}

uClassType* BlendModeHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.BlendModeHelpers", options);
    type->fp_build_ = BlendModeHelpers_build;
    type->fp_cctor_ = BlendModeHelpers__cctor__fn;
    return type;
}

// public static Uno.Graphics.BlendOperand GetDstAlpha(Fuse.Drawing.BlendMode mode) :60
void BlendModeHelpers__GetDstAlpha_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetDstAlpha(*mode);
}

// public static Uno.Graphics.BlendOperand GetDstRgb(Fuse.Drawing.BlendMode mode) :34
void BlendModeHelpers__GetDstRgb_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetDstRgb(*mode);
}

// public static Uno.Graphics.BlendOperand GetSrcAlpha(Fuse.Drawing.BlendMode mode) :47
void BlendModeHelpers__GetSrcAlpha_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetSrcAlpha(*mode);
}

// public static Uno.Graphics.BlendOperand GetSrcRgb(Fuse.Drawing.BlendMode mode) :21
void BlendModeHelpers__GetSrcRgb_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetSrcRgb(*mode);
}

uSStrong<uString*> BlendModeHelpers::_invalidBlendMode_;

// public static Uno.Graphics.BlendOperand GetDstAlpha(Fuse.Drawing.BlendMode mode) [static] :60
int BlendModeHelpers::GetDstAlpha(int mode)
{
    uStackFrame __("Fuse.Drawing.BlendModeHelpers", "GetDstAlpha(Fuse.Drawing.BlendMode)");
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 3;
        case 1:
            return 3;
        case 2:
            return 3;
        case 3:
            return 3;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}

// public static Uno.Graphics.BlendOperand GetDstRgb(Fuse.Drawing.BlendMode mode) [static] :34
int BlendModeHelpers::GetDstRgb(int mode)
{
    uStackFrame __("Fuse.Drawing.BlendModeHelpers", "GetDstRgb(Fuse.Drawing.BlendMode)");
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 3;
        case 1:
            return 1;
        case 2:
            return 5;
        case 3:
            return 3;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}

// public static Uno.Graphics.BlendOperand GetSrcAlpha(Fuse.Drawing.BlendMode mode) [static] :47
int BlendModeHelpers::GetSrcAlpha(int mode)
{
    uStackFrame __("Fuse.Drawing.BlendModeHelpers", "GetSrcAlpha(Fuse.Drawing.BlendMode)");
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 1;
        case 1:
            return 1;
        case 2:
            return 1;
        case 3:
            return 1;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}

// public static Uno.Graphics.BlendOperand GetSrcRgb(Fuse.Drawing.BlendMode mode) [static] :21
int BlendModeHelpers::GetSrcRgb(int mode)
{
    uStackFrame __("Fuse.Drawing.BlendModeHelpers", "GetSrcRgb(Fuse.Drawing.BlendMode)");
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 1;
        case 1:
            return 1;
        case 2:
            return 1;
        case 3:
            return 8;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\Rendering\$.uno
// -------------------------------------------------------------------------

// internal sealed class Border :14
// {
static void Border_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[3] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    type->SetFields(0,
        ::g::Fuse::Drawing::Contour_typeof(), offsetof(::g::Fuse::Drawing::Border, _contour), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Border, _draw_6ce6a1c0), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Border, _draw_6d07a1c0), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Border, _draw_6d49a1c0), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Border, _draw_6daca1c0), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Border, _offset), 0,
        ::g::Uno::Float4_typeof()->Array(), offsetof(::g::Fuse::Drawing::Border, _strokeVertices), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Border, _vbo), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Drawing::Border, _vertices), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Border, _width), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Border, Draw_BlendDstAlpha_6daca1c0_7_7_10), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Border, Draw_BlendDstRgb_6daca1c0_7_5_9), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Border, Draw_BlendSrcAlpha_6daca1c0_7_6_8), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Border, Draw_BlendSrcRgb_6daca1c0_7_4_7), 0);
}

uType* Border_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(Border);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Border", options);
    type->fp_build_ = Border_build;
    return type;
}

// public Border(float2[] vertices, float offset, float width) :21
void Border__ctor__fn(Border* __this, uArray* vertices, float* offset, float* width)
{
    __this->ctor_(vertices, *offset, *width);
}

// private void CalculateStrokeVertices() :78
void Border__CalculateStrokeVertices_fn(Border* __this)
{
    __this->CalculateStrokeVertices();
}

// public Fuse.Drawing.Contour get_Contour() :60
void Border__get_Contour_fn(Border* __this, ::g::Fuse::Drawing::Contour** __retval)
{
    *__retval = __this->Contour();
}

// public void Dispose() :51
void Border__Dispose_fn(Border* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.Drawing.Brush s, Fuse.Drawing.RendererContext ctx) :28
void Border__Draw_fn(Border* __this, ::g::Fuse::Drawing::Brush* s, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->Draw(s, ctx);
}

// private generated void free_DrawCalls() :14
void Border__free_DrawCalls_fn(Border* __this)
{
    __this->free_DrawCalls();
}

// private float2 GetVertex(int indexWrap) :158
void Border__GetVertex_fn(Border* __this, int* indexWrap, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetVertex(*indexWrap);
}

// private generated void init_DrawCalls() :14
void Border__init_DrawCalls_fn(Border* __this)
{
    __this->init_DrawCalls();
}

// public Border New(float2[] vertices, float offset, float width) :21
void Border__New1_fn(uArray* vertices, float* offset, float* width, Border** __retval)
{
    *__retval = Border::New1(vertices, *offset, *width);
}

// public float4[] get_StrokeVertices() :71
void Border__get_StrokeVertices_fn(Border* __this, uArray** __retval)
{
    *__retval = __this->StrokeVertices();
}

// private int get_VertexCount() :156
void Border__get_VertexCount_fn(Border* __this, int* __retval)
{
    *__retval = __this->VertexCount();
}

// public Border(float2[] vertices, float offset, float width) [instance] :21
void Border::ctor_(uArray* vertices, float offset, float width)
{
    uStackFrame __("Fuse.Drawing.Border", ".ctor(float2[],float,float)");
    _vertices = vertices;
    _offset = offset;
    _width = width;
    init_DrawCalls();
}

// private void CalculateStrokeVertices() [instance] :78
void Border::CalculateStrokeVertices()
{
    uStackFrame __("Fuse.Drawing.Border", "CalculateStrokeVertices()");

    if (_strokeVertices != NULL)
        return;

    if (uPtr(_vertices)->Length() < 2)
    {
        _strokeVertices = uArray::New(::TYPES[1/*float4[]*/], 0);
        _contour = ::g::Fuse::Drawing::Contour::New1(true, uArray::New(::TYPES[2/*float2[]*/], 0));
        return;
    }

    uArray* vertices = uArray::New(::TYPES[1/*float4[]*/], VertexCount() * 2);
    uArray* shrinkedContour = uArray::New(::TYPES[2/*float2[]*/], VertexCount());
    int v = 0;
    int s = 0;
    float dist = 0.0f;

    for (int i = 0; i < VertexCount(); i++)
    {
        ::g::Uno::Float2 last = GetVertex(i - 1);
        ::g::Uno::Float2 current = GetVertex(i);
        ::g::Uno::Float2 next = GetVertex(i + 1);
        float len = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(last, current));

        if (i > 0)
            dist = dist + len;

        if (len < 1e-05f)
            continue;

        ::g::Uno::Float2 lv = ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(current, last));
        ::g::Uno::Float2 rv = ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(next, current));
        ::g::Uno::Float2 lvn = ::g::Uno::Float2__New2(-lv.Y, lv.X);
        ::g::Uno::Float2 rvn = ::g::Uno::Float2__New2(-rv.Y, rv.X);
        ::g::Uno::Float2 bn0 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(rvn, lvn), 2.0f);
        ::g::Uno::Float2 bisectNormal = ((::g::Uno::Math::Abs1(bn0.X) + ::g::Uno::Math::Abs1(bn0.Y)) < 1e-05f) ? lvn : ::g::Uno::Vector::Normalize(bn0);
        ::g::Uno::Float4 outer;
        ::g::Uno::Float4 inner;
        float angle = ::g::Uno::Geometry::Collision2D::AngleBetween(lv, bisectNormal);

        if (((angle < 0.2f) || (angle > 2.94159269f)) || (len < 1.0f))
        {
            ::g::Uno::Float2 lvo = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(bisectNormal, _width + _offset));
            ::g::Uno::Float2 lvi = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(bisectNormal, _offset));
            outer = ::g::Uno::Float4__New6(lvo, 0.0f, dist);
            inner = ::g::Uno::Float4__New6(lvi, 1.0f, dist);
        }
        else
        {
            ::g::Uno::Float2 lvo1 = ::g::Uno::Float2__op_Addition2(last, ::g::Uno::Float2__op_Multiply1(lvn, _width + _offset));
            ::g::Uno::Float2 lvi1 = ::g::Uno::Float2__op_Addition2(last, ::g::Uno::Float2__op_Multiply1(lvn, _offset));
            outer = ::g::Uno::Float4__New6(::g::Uno::Geometry::Collision2D::LineIntersectionPointVector(lvo1, lv, current, bisectNormal), 0.0f, dist);
            inner = ::g::Uno::Float4__New6(::g::Uno::Geometry::Collision2D::LineIntersectionPointVector(lvi1, lv, current, bisectNormal), 1.0f, dist);
        }

        uPtr(vertices)->Item< ::g::Uno::Float4>(v++) = outer;
        vertices->Item< ::g::Uno::Float4>(v++) = inner;
        uPtr(shrinkedContour)->Item< ::g::Uno::Float2>(s++) = ::g::Uno::Float2__New2(inner.X, inner.Y);
    }

    _strokeVertices = vertices;
    _vbo = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer5(vertices), 0);
    _contour = ::g::Fuse::Drawing::Contour::New1(true, shrinkedContour);
}

// public Fuse.Drawing.Contour get_Contour() [instance] :60
::g::Fuse::Drawing::Contour* Border::Contour()
{
    uStackFrame __("Fuse.Drawing.Border", "get_Contour()");
    CalculateStrokeVertices();
    return _contour;
}

// public void Dispose() [instance] :51
void Border::Dispose()
{
    uStackFrame __("Fuse.Drawing.Border", "Dispose()");
    free_DrawCalls();
    uPtr(_vbo)->Dispose();
}

// public void Draw(Fuse.Drawing.Brush s, Fuse.Drawing.RendererContext ctx) [instance] :28
void Border::Draw(::g::Fuse::Drawing::Brush* s, ::g::Fuse::Drawing::RendererContext* ctx)
{
    uStackFrame __("Fuse.Drawing.Border", "Draw(Fuse.Drawing.Brush,Fuse.Drawing.RendererContext)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;

    if (uPtr(_vertices)->Length() < 2)
        return;

    if (uPtr(StrokeVertices())->Length() < 4)
        return;

    if (uIs(s, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))
    {
        ::g::Uno::Graphics::Texture2D* Texture_6d49a1c0_9_6_1 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->GetTexture();
        ::g::Fuse::Drawing::ImageFill__DrawParams DP_6d49a1c0_9_5_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(NULL, uPtr(ctx)->CanvasSize());
        _draw_6d49a1c0.BlendEnabled(true);
        _draw_6d49a1c0.CullFace(uPtr(ctx)->CullFace());
        _draw_6d49a1c0.PrimitiveType(4);
        _draw_6d49a1c0.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_6d49a1c0.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_6d49a1c0.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_6d49a1c0.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_6d49a1c0.Const(0, Texture_6d49a1c0_9_6_1 == NULL);
        _draw_6d49a1c0.Use();
        _draw_6d49a1c0.Attrib1(1, 4, _vbo, 16, 0);
        _draw_6d49a1c0.Uniform12(2, ctx->Transform());
        _draw_6d49a1c0.Uniform2(3, ctx->CanvasSize());
        _draw_6d49a1c0.Uniform2(4, DP_6d49a1c0_9_5_4.Origin);
        _draw_6d49a1c0.Uniform2(5, DP_6d49a1c0_9_5_4.Size);
        _draw_6d49a1c0.Uniform2(6, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_6d49a1c0_9_5_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_6d49a1c0_9_5_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
        _draw_6d49a1c0.Uniform2(7, (ind3 = DP_6d49a1c0_9_5_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
        _draw_6d49a1c0.Uniform10(8, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->Color());
        _draw_6d49a1c0.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->Opacity());
        _draw_6d49a1c0.Sampler2(10, Texture_6d49a1c0_9_6_1);
        _draw_6d49a1c0.DrawArrays(uPtr(StrokeVertices())->Length());
    }
    else if (uIs(s, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))
    {
        _draw_6ce6a1c0.BlendEnabled(true);
        _draw_6ce6a1c0.CullFace(uPtr(ctx)->CullFace());
        _draw_6ce6a1c0.PrimitiveType(4);
        _draw_6ce6a1c0.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_6ce6a1c0.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_6ce6a1c0.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_6ce6a1c0.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_6ce6a1c0.Use();
        _draw_6ce6a1c0.Attrib1(0, 4, _vbo, 16, 0);
        _draw_6ce6a1c0.Uniform12(1, ctx->Transform());
        _draw_6ce6a1c0.Uniform10(2, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->Color());
        _draw_6ce6a1c0.Uniform(3, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->Opacity());
        _draw_6ce6a1c0.DrawArrays(uPtr(StrokeVertices())->Length());
    }
    else if (uIs(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))
    {
        ::g::Uno::Float2 angleSlope_6d07a1c0_9_18_3 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        float angleLen_6d07a1c0_9_17_4 = ::g::Uno::Math::Abs1(uPtr(ctx)->CanvasSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(ctx)->CanvasSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        _draw_6d07a1c0.BlendEnabled(true);
        _draw_6d07a1c0.CullFace(uPtr(ctx)->CullFace());
        _draw_6d07a1c0.PrimitiveType(4);
        _draw_6d07a1c0.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_6d07a1c0.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_6d07a1c0.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_6d07a1c0.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_6d07a1c0.Use();
        _draw_6d07a1c0.Attrib1(0, 4, _vbo, 16, 0);
        _draw_6d07a1c0.Uniform12(1, ctx->Transform());
        _draw_6d07a1c0.Uniform2(2, ctx->CanvasSize());
        _draw_6d07a1c0.Uniform2(3, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(ctx->CanvasSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_6d07a1c0_9_18_3, angleLen_6d07a1c0_9_17_4), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), ctx->CanvasSize()));
        _draw_6d07a1c0.Uniform2(4, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
        _draw_6d07a1c0.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->Opacity());
        _draw_6d07a1c0.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_6d07a1c0_9_18_3 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), ctx->CanvasSize())));
        _draw_6d07a1c0.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_6d07a1c0_9_17_4 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), ctx->CanvasSize())));
        _draw_6d07a1c0.Sampler2(8, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
        _draw_6d07a1c0.DrawArrays(uPtr(StrokeVertices())->Length());
    }
    else if (uIs(s, ::TYPES[6/*Fuse.Drawing.StaticSolidColor*/]))
    {
        _draw_6daca1c0.BlendEnabled(true);
        _draw_6daca1c0.CullFace(uPtr(ctx)->CullFace());
        _draw_6daca1c0.PrimitiveType(4);
        _draw_6daca1c0.BlendSrcRgb(Draw_BlendSrcRgb_6daca1c0_7_4_7);
        _draw_6daca1c0.BlendSrcAlpha(Draw_BlendSrcAlpha_6daca1c0_7_6_8);
        _draw_6daca1c0.BlendDstRgb(Draw_BlendDstRgb_6daca1c0_7_5_9);
        _draw_6daca1c0.BlendDstAlpha(Draw_BlendDstAlpha_6daca1c0_7_7_10);
        _draw_6daca1c0.Use();
        _draw_6daca1c0.Attrib1(0, 4, _vbo, 16, 0);
        _draw_6daca1c0.Uniform12(1, ctx->Transform());
        _draw_6daca1c0.Uniform10(2, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(s, ::TYPES[6/*Fuse.Drawing.StaticSolidColor*/]))->Color());
        _draw_6daca1c0.DrawArrays(uPtr(StrokeVertices())->Length());
    }
}

// private generated void free_DrawCalls() [instance] :14
void Border::free_DrawCalls()
{
}

// private float2 GetVertex(int indexWrap) [instance] :158
::g::Uno::Float2 Border::GetVertex(int indexWrap)
{
    uStackFrame __("Fuse.Drawing.Border", "GetVertex(int)");

    while (indexWrap < 0)
        indexWrap = indexWrap + uPtr(_vertices)->Length();

    while (indexWrap >= uPtr(_vertices)->Length())
        indexWrap = indexWrap - uPtr(_vertices)->Length();

    return uPtr(_vertices)->Item< ::g::Uno::Float2>(indexWrap);
}

// private generated void init_DrawCalls() [instance] :14
void Border::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.Border", "init_DrawCalls()");
    Draw_BlendSrcRgb_6daca1c0_7_4_7 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(0);
    Draw_BlendSrcAlpha_6daca1c0_7_6_8 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(0);
    Draw_BlendDstRgb_6daca1c0_7_5_9 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(0);
    Draw_BlendDstAlpha_6daca1c0_7_7_10 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(0);
    _draw_6d49a1c0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPolygons_bundle::Border102f669d());
    _draw_6ce6a1c0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPolygons_bundle::Border102c669d());
    _draw_6d07a1c0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPolygons_bundle::Border102d669d());
    _draw_6daca1c0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPolygons_bundle::Border1032669d());
}

// public float4[] get_StrokeVertices() [instance] :71
uArray* Border::StrokeVertices()
{
    uStackFrame __("Fuse.Drawing.Border", "get_StrokeVertices()");
    CalculateStrokeVertices();
    return _strokeVertices;
}

// private int get_VertexCount() [instance] :156
int Border::VertexCount()
{
    uStackFrame __("Fuse.Drawing.Border", "get_VertexCount()");
    return uPtr(_vertices)->Length() + 1;
}

// public Border New(float2[] vertices, float offset, float width) [static] :21
Border* Border::New1(uArray* vertices, float offset, float width)
{
    Border* obj4 = (Border*)uNew(Border_typeof());
    obj4->ctor_(vertices, offset, width);
    return obj4;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public abstract class Brush :86
// {
static void Brush_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Brush is not pinned, preparation invalid");
    ::STRINGS[2] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Drawing\\0.32.14\\$.uno");
    ::STRINGS[3] = uString::Const("Prepare");
    ::TYPES[7] = uObject_typeof();
    type->SetFields(1,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Brush, _pinCount), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_IsCompletelyTransparent", NULL, NULL, offsetof(Brush_type, fp_get_IsCompletelyTransparent), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsPinned", NULL, (void*)Brush__get_IsPinned_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Pin", NULL, (void*)Brush__Pin_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Prepare", NULL, (void*)Brush__Prepare_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Unpin", NULL, (void*)Brush__Unpin_fn, 0, false, uVoid_typeof(), 0));
}

Brush_type* Brush_typeof()
{
    static uSStrong<Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Brush);
    options.TypeSize = sizeof(Brush_type);
    type = (Brush_type*)uClassType::New("Fuse.Drawing.Brush", options);
    type->SetBase(::g::Uno::UX::PropertyObject_typeof());
    type->fp_build_ = Brush_build;
    type->fp_get_IsCompletelyTransparent = Brush__get_IsCompletelyTransparent_fn;
    type->fp_OnPinned = Brush__OnPinned_fn;
    type->fp_OnPrepare = Brush__OnPrepare_fn;
    type->fp_OnUnpinned = Brush__OnUnpinned_fn;
    return type;
}

// internal Brush() :107
void Brush__ctor_1_fn(Brush* __this)
{
    __this->ctor_1();
}

// public virtual bool get_IsCompletelyTransparent() :91
void Brush__get_IsCompletelyTransparent_fn(Brush* __this, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.Brush", "get_IsCompletelyTransparent()");
    return *__retval = false, void();
}

// public bool get_IsPinned() :124
void Brush__get_IsPinned_fn(Brush* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// protected virtual void OnPinned() :135
void Brush__OnPinned_fn(Brush* __this)
{
}

// protected virtual void OnPrepare(Fuse.DrawContext dc, float2 canvasSize) :133
void Brush__OnPrepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
}

// protected virtual void OnUnpinned() :136
void Brush__OnUnpinned_fn(Brush* __this)
{
}

// public void Pin() :110
void Brush__Pin_fn(Brush* __this)
{
    __this->Pin();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) :126
void Brush__Prepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->Prepare(dc, *canvasSize);
}

// public void Unpin() :117
void Brush__Unpin_fn(Brush* __this)
{
    __this->Unpin();
}

// internal Brush() [instance] :107
void Brush::ctor_1()
{
    uStackFrame __("Fuse.Drawing.Brush", ".ctor()");
    ctor_();
}

// public bool get_IsPinned() [instance] :124
bool Brush::IsPinned()
{
    uStackFrame __("Fuse.Drawing.Brush", "get_IsPinned()");
    return _pinCount > 0;
}

// public void Pin() [instance] :110
void Brush::Pin()
{
    uStackFrame __("Fuse.Drawing.Brush", "Pin()");
    _pinCount++;

    if (_pinCount == 1)
        OnPinned();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) [instance] :126
void Brush::Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    uStackFrame __("Fuse.Drawing.Brush", "Prepare(Fuse.DrawContext,float2)");

    if (!IsPinned())
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[1/*"Brush is no...*/], this, ::STRINGS[2/*"C:\\Program...*/], 129, ::STRINGS[3/*"Prepare"*/]);

    OnPrepare(dc, canvasSize);
}

// public void Unpin() [instance] :117
void Brush::Unpin()
{
    uStackFrame __("Fuse.Drawing.Brush", "Unpin()");
    _pinCount--;

    if (_pinCount == 0)
        OnUnpinned();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public static class Brushes :214
// {
// static Brushes() :214
static void Brushes__cctor__fn(uType* __type)
{
    Brushes::Transparent_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Black());
    Brushes::Black_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Black());
    Brushes::Silver_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Silver());
    Brushes::Gray_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Gray());
    Brushes::White_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::White());
    Brushes::Maroon_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Maroon());
    Brushes::Red_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Red());
    Brushes::Purple_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Purple());
    Brushes::Fuchsia_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Fuchsia());
    Brushes::Green_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Green());
    Brushes::Lime_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Lime());
    Brushes::Olive_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Olive());
    Brushes::Yellow_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Yellow());
    Brushes::Navy_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Navy());
    Brushes::Blue_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Blue());
    Brushes::Teal_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Teal());
    Brushes::Aqua_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Aqua());
}

static void Brushes_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Aqua_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Black_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Blue_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Fuchsia_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Gray_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Green_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Lime_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Maroon_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Navy_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Olive_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Purple_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Red_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Silver_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Teal_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Transparent_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::White_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Yellow_, uFieldFlagsStatic);
    type->Reflection.SetFields(17,
        new uField("Aqua", 0),
        new uField("Black", 1),
        new uField("Blue", 2),
        new uField("Fuchsia", 3),
        new uField("Gray", 4),
        new uField("Green", 5),
        new uField("Lime", 6),
        new uField("Maroon", 7),
        new uField("Navy", 8),
        new uField("Olive", 9),
        new uField("Purple", 10),
        new uField("Red", 11),
        new uField("Silver", 12),
        new uField("Teal", 13),
        new uField("Transparent", 14),
        new uField("White", 15),
        new uField("Yellow", 16));
}

uClassType* Brushes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Brushes", options);
    type->fp_build_ = Brushes_build;
    type->fp_cctor_ = Brushes__cctor__fn;
    return type;
}

uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Aqua_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Black_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Blue_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Fuchsia_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Gray_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Green_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Lime_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Maroon_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Navy_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Olive_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Purple_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Red_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Silver_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Teal_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Transparent_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::White_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Yellow_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\$.uno
// ---------------------------------------------------------------

// internal sealed class ButtCap :84
// {
static void ButtCap_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[9] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
}

::g::Fuse::Drawing::LineCapImpl_type* ButtCap_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::LineCapImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ButtCap);
    options.TypeSize = sizeof(::g::Fuse::Drawing::LineCapImpl_type);
    type = (::g::Fuse::Drawing::LineCapImpl_type*)uClassType::New("Fuse.Drawing.ButtCap", options);
    type->SetBase(::g::Fuse::Drawing::LineCapImpl_typeof());
    type->fp_build_ = ButtCap_build;
    type->fp_ctor_ = (void*)ButtCap__New1_fn;
    type->fp_Create = (void(*)(::g::Fuse::Drawing::LineCapImpl*, ::g::Uno::Float2*, ::g::Uno::Float2*, uObject**))ButtCap__Create_fn;
    return type;
}

// public generated ButtCap() :84
void ButtCap__ctor_1_fn(ButtCap* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.Collections.IEnumerable<float2> Create(float2 from, float2 to) :86
void ButtCap__Create_fn(ButtCap* __this, ::g::Uno::Float2* from, ::g::Uno::Float2* to, uObject** __retval)
{
    uStackFrame __("Fuse.Drawing.ButtCap", "Create(float2,float2)");
    return *__retval = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[9/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>*/], uArray::New(::TYPES[2/*float2[]*/], 0))), void();
}

// public generated ButtCap New() :84
void ButtCap__New1_fn(ButtCap** __retval)
{
    *__retval = ButtCap::New1();
}

// public generated ButtCap() [instance] :84
void ButtCap::ctor_1()
{
    uStackFrame __("Fuse.Drawing.ButtCap", ".ctor()");
    ctor_();
}

// public generated ButtCap New() [static] :84
ButtCap* ButtCap::New1()
{
    ButtCap* obj1 = (ButtCap*)uNew(ButtCap_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\Collections\$.uno
// ---------------------------------------------------------------------------

// internal sealed class Cache<T> :8
// {
static void Cache_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[11] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[12] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, type->T(0)),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)),
        ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(type->T(0)));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Fuse::Drawing::Cache, _cache), 0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Drawing::Cache, _source), 0);
}

uType* Cache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Cache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Cache`1", options);
    type->fp_build_ = Cache_build;
    return type;
}

// public Cache(T[] immutableItems) :13
void Cache__ctor__fn(Cache* __this, uArray* immutableItems)
{
    __this->ctor_(immutableItems);
}

// public Cache(Uno.Collections.IEnumerable<T> source) :18
void Cache__ctor_1_fn(Cache* __this, uObject* source)
{
    __this->ctor_1(source);
}

// private void Evaluate() :50
void Cache__Evaluate_fn(Cache* __this)
{
    __this->Evaluate();
}

// public T get_Item(int index) :43
void Cache__get_Item_fn(Cache* __this, int* index, uTRef __retval)
{
    uStackFrame __("Fuse.Drawing.Cache`1", "get_Item(int)");
    int index_ = *index;
    __this->Evaluate();
    return __retval.Store(uPtr(__this->_cache)->TItem(index_)), void();
}

// public Uno.Collections.IEnumerable<T> get_Items() :25
void Cache__get_Items_fn(Cache* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public int get_Length() :34
void Cache__get_Length_fn(Cache* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public Cache New(T[] immutableItems) :13
void Cache__New1_fn(uType* __type, uArray* immutableItems, Cache** __retval)
{
    *__retval = Cache::New1(__type, immutableItems);
}

// public Cache New(Uno.Collections.IEnumerable<T> source) :18
void Cache__New2_fn(uType* __type, uObject* source, Cache** __retval)
{
    *__retval = Cache::New2(__type, source);
}

// public Cache(T[] immutableItems) [instance] :13
void Cache::ctor_(uArray* immutableItems)
{
    uStackFrame __("Fuse.Drawing.Cache`1", ".ctor(T[])");
    _cache = immutableItems;
}

// public Cache(Uno.Collections.IEnumerable<T> source) [instance] :18
void Cache::ctor_1(uObject* source)
{
    uStackFrame __("Fuse.Drawing.Cache`1", ".ctor(Uno.Collections.IEnumerable<T>)");
    _source = source;
}

// private void Evaluate() [instance] :50
void Cache::Evaluate()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.ToArray<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Drawing.Cache`1", "Evaluate()");

    if (_cache == NULL)
    {
        _cache = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(__types[0], _source));
        _source = NULL;
    }
}

// public Uno.Collections.IEnumerable<T> get_Items() [instance] :25
uObject* Cache::Items()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.IEnumerable<T>*/),
        __type->T(0),
        __type->Precalced(2/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    uStackFrame __("Fuse.Drawing.Cache`1", "get_Items()");
    Evaluate();
    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[2], _cache));
}

// public int get_Length() [instance] :34
int Cache::Length()
{
    uStackFrame __("Fuse.Drawing.Cache`1", "get_Length()");
    Evaluate();
    return uPtr(_cache)->Length();
}

// public Cache New(T[] immutableItems) [static] :13
Cache* Cache::New1(uType* __type, uArray* immutableItems)
{
    Cache* obj1 = (Cache*)uNew(__type);
    obj1->ctor_(immutableItems);
    return obj1;
}

// public Cache New(Uno.Collections.IEnumerable<T> source) [static] :18
Cache* Cache::New2(uType* __type, uObject* source)
{
    Cache* obj2 = (Cache*)uNew(__type);
    obj2->ctor_1(source);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal sealed class ClosePath :1098
// {
static void ClosePath_build(uType* type)
{
    ::STRINGS[4] = uString::Const("Z");
    type->SetFields(4,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ClosePath, _lastPosition), 0);
}

::g::Fuse::Drawing::PathGeometry_type* ClosePath_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ClosePath);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.ClosePath", options);
    type->SetBase(::g::Fuse::Drawing::ContourTerminator_typeof());
    type->fp_build_ = ClosePath_build;
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))ClosePath__Serialize_fn;
    return type;
}

// public ClosePath(Fuse.Drawing.PathGeometry prev, float2 lastPosition) :1104
void ClosePath__ctor_3_fn(ClosePath* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition)
{
    __this->ctor_3(prev, *lastPosition);
}

// public ClosePath New(Fuse.Drawing.PathGeometry prev, float2 lastPosition) :1104
void ClosePath__New2_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ClosePath** __retval)
{
    *__retval = ClosePath::New2(prev, *lastPosition);
}

// protected internal override sealed string Serialize() :1111
void ClosePath__Serialize_fn(ClosePath* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.ClosePath", "Serialize()");
    return *__retval = ::STRINGS[4/*"Z"*/], void();
}

// public ClosePath(Fuse.Drawing.PathGeometry prev, float2 lastPosition) [instance] :1104
void ClosePath::ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition)
{
    uStackFrame __("Fuse.Drawing.ClosePath", ".ctor(Fuse.Drawing.PathGeometry,float2)");
    ctor_1();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ContourTerminatorCtor(prev, uPtr(prev)->FindStartOfLastContour());
    _lastPosition = lastPosition;
}

// public ClosePath New(Fuse.Drawing.PathGeometry prev, float2 lastPosition) [static] :1104
ClosePath* ClosePath::New2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition)
{
    ClosePath* obj1 = (ClosePath*)uNew(ClosePath_typeof());
    obj1->ctor_3(prev, lastPosition);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public static class Colors :193
// {
// static Colors() :193
static void Colors__cctor__fn(uType* __type)
{
    Colors::Transparent_ = ::g::Uno::Color::FromRgba321(0U);
    Colors::Black_ = ::g::Uno::Color::FromRgba321(255U);
    Colors::Silver_ = ::g::Uno::Color::FromRgba321(3233857791U);
    Colors::Gray_ = ::g::Uno::Color::FromRgba321(2155905279U);
    Colors::White_ = ::g::Uno::Color::FromRgba321(4294967295U);
    Colors::Maroon_ = ::g::Uno::Color::FromRgba321(2147483903U);
    Colors::Red_ = ::g::Uno::Color::FromRgba321(4278190335U);
    Colors::Purple_ = ::g::Uno::Color::FromRgba321(2147516671U);
    Colors::Fuchsia_ = ::g::Uno::Color::FromRgba321(4278255615U);
    Colors::Green_ = ::g::Uno::Color::FromRgba321(8388863U);
    Colors::Lime_ = ::g::Uno::Color::FromRgba321(16711935U);
    Colors::Olive_ = ::g::Uno::Color::FromRgba321(2155872511U);
    Colors::Yellow_ = ::g::Uno::Color::FromRgba321(4294902015U);
    Colors::Navy_ = ::g::Uno::Color::FromRgba321(33023U);
    Colors::Blue_ = ::g::Uno::Color::FromRgba321(65535U);
    Colors::Teal_ = ::g::Uno::Color::FromRgba321(8421631U);
    Colors::Aqua_ = ::g::Uno::Color::FromRgba321(16777215U);
}

static void Colors_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Aqua_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Black_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Blue_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Fuchsia_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Gray_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Green_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Lime_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Maroon_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Navy_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Olive_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Purple_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Red_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Silver_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Teal_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Transparent_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::White_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Yellow_, uFieldFlagsStatic);
    type->Reflection.SetFields(17,
        new uField("Aqua", 0),
        new uField("Black", 1),
        new uField("Blue", 2),
        new uField("Fuchsia", 3),
        new uField("Gray", 4),
        new uField("Green", 5),
        new uField("Lime", 6),
        new uField("Maroon", 7),
        new uField("Navy", 8),
        new uField("Olive", 9),
        new uField("Purple", 10),
        new uField("Red", 11),
        new uField("Silver", 12),
        new uField("Teal", 13),
        new uField("Transparent", 14),
        new uField("White", 15),
        new uField("Yellow", 16));
}

uClassType* Colors_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Colors", options);
    type->fp_build_ = Colors_build;
    type->fp_cctor_ = Colors__cctor__fn;
    return type;
}

::g::Uno::Float4 Colors::Aqua_;
::g::Uno::Float4 Colors::Black_;
::g::Uno::Float4 Colors::Blue_;
::g::Uno::Float4 Colors::Fuchsia_;
::g::Uno::Float4 Colors::Gray_;
::g::Uno::Float4 Colors::Green_;
::g::Uno::Float4 Colors::Lime_;
::g::Uno::Float4 Colors::Maroon_;
::g::Uno::Float4 Colors::Navy_;
::g::Uno::Float4 Colors::Olive_;
::g::Uno::Float4 Colors::Purple_;
::g::Uno::Float4 Colors::Red_;
::g::Uno::Float4 Colors::Silver_;
::g::Uno::Float4 Colors::Teal_;
::g::Uno::Float4 Colors::Transparent_;
::g::Uno::Float4 Colors::White_;
::g::Uno::Float4 Colors::Yellow_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\$.uno
// ---------------------------------------------------------------

// public sealed class Contour :9
// {
static void Contour_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[9] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[13] = ::g::Fuse::Drawing::Cache_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Contour, _count), 0,
        ::g::Fuse::Drawing::Cache_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Drawing::Contour, _vertices), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Contour, _IsClosed), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_IsClosed", NULL, (void*)Contour__get_IsClosed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Item", NULL, (void*)Contour__get_Item_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Contour__New1_fn, 0, true, Contour_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::Float2_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)Contour__New2_fn, 0, true, Contour_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof())),
        new uFunction("get_VertexCount", NULL, (void*)Contour__get_VertexCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Vertices", NULL, (void*)Contour__get_Vertices_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof()), 0));
}

uType* Contour_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Contour);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Contour", options);
    type->fp_build_ = Contour_build;
    return type;
}

// public Contour(bool isClosed, float2[] vertices) :45
void Contour__ctor__fn(Contour* __this, bool* isClosed, uArray* vertices)
{
    __this->ctor_(*isClosed, vertices);
}

// public Contour(bool isClosed, Uno.Collections.IEnumerable<float2> vertices) :49
void Contour__ctor_1_fn(Contour* __this, bool* isClosed, uObject* vertices)
{
    __this->ctor_1(*isClosed, vertices);
}

// public generated bool get_IsClosed() :43
void Contour__get_IsClosed_fn(Contour* __this, bool* __retval)
{
    *__retval = __this->IsClosed();
}

// private generated void set_IsClosed(bool value) :43
void Contour__set_IsClosed_fn(Contour* __this, bool* value)
{
    __this->IsClosed(*value);
}

// public float2 get_Item(int vertexIndex) :26
void Contour__get_Item_fn(Contour* __this, int* vertexIndex, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Item(*vertexIndex);
}

// public Contour New(bool isClosed, float2[] vertices) :45
void Contour__New1_fn(bool* isClosed, uArray* vertices, Contour** __retval)
{
    *__retval = Contour::New1(*isClosed, vertices);
}

// public Contour New(bool isClosed, Uno.Collections.IEnumerable<float2> vertices) :49
void Contour__New2_fn(bool* isClosed, uObject* vertices, Contour** __retval)
{
    *__retval = Contour::New2(*isClosed, vertices);
}

// public int get_VertexCount() :16
void Contour__get_VertexCount_fn(Contour* __this, int* __retval)
{
    *__retval = __this->VertexCount();
}

// public Uno.Collections.IEnumerable<float2> get_Vertices() :21
void Contour__get_Vertices_fn(Contour* __this, uObject** __retval)
{
    *__retval = __this->Vertices();
}

// public Contour(bool isClosed, float2[] vertices) [instance] :45
void Contour::ctor_(bool isClosed, uArray* vertices)
{
    uStackFrame __("Fuse.Drawing.Contour", ".ctor(bool,float2[])");
    ctor_1(isClosed, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[9/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>*/], vertices)));
}

// public Contour(bool isClosed, Uno.Collections.IEnumerable<float2> vertices) [instance] :49
void Contour::ctor_1(bool isClosed, uObject* vertices)
{
    uStackFrame __("Fuse.Drawing.Contour", ".ctor(bool,Uno.Collections.IEnumerable<float2>)");
    ::g::Uno::Float2 ret3;
    ::g::Uno::Float2 ret4;
    _vertices = ((::g::Fuse::Drawing::Cache*)::g::Fuse::Drawing::Cache::New2(::TYPES[13/*Fuse.Drawing.Cache<float2>*/], ::g::Fuse::Drawing::NonConsecutiveExtension::NonConsecutive(vertices)));
    IsClosed(isClosed);
    _count = ((isClosed && ::g::Uno::Float2__op_Equality((::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(0), &ret3), ret3), (::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(uPtr(_vertices)->Length() - 1), &ret4), ret4))) ? uPtr(_vertices)->Length() - 1 : uPtr(_vertices)->Length());
}

// public generated bool get_IsClosed() [instance] :43
bool Contour::IsClosed()
{
    uStackFrame __("Fuse.Drawing.Contour", "get_IsClosed()");
    return _IsClosed;
}

// private generated void set_IsClosed(bool value) [instance] :43
void Contour::IsClosed(bool value)
{
    uStackFrame __("Fuse.Drawing.Contour", "set_IsClosed(bool)");
    _IsClosed = value;
}

// public float2 get_Item(int vertexIndex) [instance] :26
::g::Uno::Float2 Contour::Item(int vertexIndex)
{
    uStackFrame __("Fuse.Drawing.Contour", "get_Item(int)");
    ::g::Uno::Float2 ret5;
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float2 ret7;
    ::g::Uno::Float2 ret8;
    ::g::Uno::Float2 ret9;
    ::g::Uno::Float2 ret10;
    ::g::Uno::Float2 ret11;
    ::g::Uno::Float2 ret12;

    if (IsClosed())
    {
        while (vertexIndex < 0)
            vertexIndex = vertexIndex + VertexCount();

        while (vertexIndex >= VertexCount())
            vertexIndex = vertexIndex - VertexCount();

        return (::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(vertexIndex), &ret5), ret5);
    }
    else
    {
        if (vertexIndex < 0)
            return ::g::Uno::Float2__op_Addition2((::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(0), &ret6), ret6), ::g::Uno::Float2__op_Subtraction2((::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(0), &ret7), ret7), (::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(1), &ret8), ret8)));

        if (vertexIndex >= uPtr(_vertices)->Length())
            return ::g::Uno::Float2__op_Addition2((::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(uPtr(_vertices)->Length() - 1), &ret9), ret9), ::g::Uno::Float2__op_Subtraction2((::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(uPtr(_vertices)->Length() - 1), &ret10), ret10), (::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(uPtr(_vertices)->Length() - 2), &ret11), ret11)));

        return (::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(vertexIndex), &ret12), ret12);
    }
}

// public int get_VertexCount() [instance] :16
int Contour::VertexCount()
{
    uStackFrame __("Fuse.Drawing.Contour", "get_VertexCount()");
    return _count;
}

// public Uno.Collections.IEnumerable<float2> get_Vertices() [instance] :21
uObject* Contour::Vertices()
{
    uStackFrame __("Fuse.Drawing.Contour", "get_Vertices()");
    return (uObject*)uPtr(_vertices)->Items();
}

// public Contour New(bool isClosed, float2[] vertices) [static] :45
Contour* Contour::New1(bool isClosed, uArray* vertices)
{
    Contour* obj1 = (Contour*)uNew(Contour_typeof());
    obj1->ctor_(isClosed, vertices);
    return obj1;
}

// public Contour New(bool isClosed, Uno.Collections.IEnumerable<float2> vertices) [static] :49
Contour* Contour::New2(bool isClosed, uObject* vertices)
{
    Contour* obj2 = (Contour*)uNew(Contour_typeof());
    obj2->ctor_1(isClosed, vertices);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal sealed class ContourEnumerable :13
// {
static void ContourEnumerable_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof()), offsetof(ContourEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Drawing::ContourEnumerable, _head), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ContourEnumerable, _scale), 0);
}

ContourEnumerable_type* ContourEnumerable_typeof()
{
    static uSStrong<ContourEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ContourEnumerable);
    options.TypeSize = sizeof(ContourEnumerable_type);
    type = (ContourEnumerable_type*)uClassType::New("Fuse.Drawing.ContourEnumerable", options);
    type->fp_build_ = ContourEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))ContourEnumerable__GetEnumerator_fn;
    return type;
}

// public ContourEnumerable(Fuse.Drawing.PathGeometry head, float2 scale) :18
void ContourEnumerable__ctor__fn(ContourEnumerable* __this, ::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale)
{
    __this->ctor_(head, *scale);
}

// public Uno.Collections.IEnumerator<Fuse.Drawing.Contour> GetEnumerator() :24
void ContourEnumerable__GetEnumerator_fn(ContourEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public ContourEnumerable New(Fuse.Drawing.PathGeometry head, float2 scale) :18
void ContourEnumerable__New1_fn(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale, ContourEnumerable** __retval)
{
    *__retval = ContourEnumerable::New1(head, *scale);
}

// public ContourEnumerable(Fuse.Drawing.PathGeometry head, float2 scale) [instance] :18
void ContourEnumerable::ctor_(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale)
{
    uStackFrame __("Fuse.Drawing.ContourEnumerable", ".ctor(Fuse.Drawing.PathGeometry,float2)");
    _head = head;
    _scale = scale;
}

// public Uno.Collections.IEnumerator<Fuse.Drawing.Contour> GetEnumerator() [instance] :24
uObject* ContourEnumerable::GetEnumerator()
{
    uStackFrame __("Fuse.Drawing.ContourEnumerable", "GetEnumerator()");
    return (uObject*)::g::Fuse::Drawing::ContourEnumerator::New1(_head, _scale);
}

// public ContourEnumerable New(Fuse.Drawing.PathGeometry head, float2 scale) [static] :18
ContourEnumerable* ContourEnumerable::New1(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale)
{
    ContourEnumerable* obj1 = (ContourEnumerable*)uNew(ContourEnumerable_typeof());
    obj1->ctor_(head, scale);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal sealed class ContourEnumerator :30
// {
static void ContourEnumerator_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Drawing::ClosePath_typeof();
    ::TYPES[16] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::PathGeometry_typeof());
    ::TYPES[17] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[19] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof()), offsetof(ContourEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ContourEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(ContourEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Drawing::Contour_typeof(), offsetof(::g::Fuse::Drawing::ContourEnumerator, _current), 0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Drawing::ContourEnumerator, _currentHead), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ContourEnumerator, _scale), 0);
}

ContourEnumerator_type* ContourEnumerator_typeof()
{
    static uSStrong<ContourEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ContourEnumerator);
    options.TypeSize = sizeof(ContourEnumerator_type);
    type = (ContourEnumerator_type*)uClassType::New("Fuse.Drawing.ContourEnumerator", options);
    type->fp_build_ = ContourEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))ContourEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ContourEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))ContourEnumerator__MoveNext_fn;
    return type;
}

// public ContourEnumerator(Fuse.Drawing.PathGeometry head, float2 scale) :36
void ContourEnumerator__ctor__fn(ContourEnumerator* __this, ::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale)
{
    __this->ctor_(head, *scale);
}

// public Fuse.Drawing.Contour get_Current() :69
void ContourEnumerator__get_Current_fn(ContourEnumerator* __this, ::g::Fuse::Drawing::Contour** __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :74
void ContourEnumerator__Dispose_fn(ContourEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :42
void ContourEnumerator__MoveNext_fn(ContourEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public ContourEnumerator New(Fuse.Drawing.PathGeometry head, float2 scale) :36
void ContourEnumerator__New1_fn(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale, ContourEnumerator** __retval)
{
    *__retval = ContourEnumerator::New1(head, *scale);
}

// public void Reset() :72
void ContourEnumerator__Reset_fn(ContourEnumerator* __this)
{
    __this->Reset();
}

// public ContourEnumerator(Fuse.Drawing.PathGeometry head, float2 scale) [instance] :36
void ContourEnumerator::ctor_(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale)
{
    uStackFrame __("Fuse.Drawing.ContourEnumerator", ".ctor(Fuse.Drawing.PathGeometry,float2)");
    _currentHead = head;
    _scale = scale;
}

// public Fuse.Drawing.Contour get_Current() [instance] :69
::g::Fuse::Drawing::Contour* ContourEnumerator::Current()
{
    uStackFrame __("Fuse.Drawing.ContourEnumerator", "get_Current()");
    return _current;
}

// public void Dispose() [instance] :74
void ContourEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :42
bool ContourEnumerator::MoveNext()
{
    uStackFrame __("Fuse.Drawing.ContourEnumerator", "MoveNext()");
    ::g::Fuse::Drawing::PathGeometry* ret3;
    ::g::Uno::Float2 ret4;

    if (_currentHead == NULL)
        return false;

    bool isClosed = uIs((::g::Fuse::Drawing::PathGeometry*)_currentHead, ::TYPES[15/*Fuse.Drawing.ClosePath*/]);
    ::g::Uno::Collections::List* revPath = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<Fuse.Drawing.PathGeometry>*/]);

    do
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(revPath), _currentHead);
        _currentHead = uPtr(_currentHead)->RemoveLast();
    }
    while ((_currentHead != NULL) && !uPtr(_currentHead)->EndsContour());

    ::g::Uno::Collections::List* vertices = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[17/*Uno.Collections.List<float2>*/]);

    for (int i = revPath->Count() - 1; i >= 0; --i)
    {
        uObject* headVertices = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(revPath), uCRef<int>(i), &ret3), ret3))->EvaluateLast();

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(headVertices), ::TYPES[8/*Uno.Collections.IEnumerable<float2>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::Float2 v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[19/*Uno.Collections.IEnumerator<float2>*/]), &ret4), ret4);
            ::g::Uno::Collections::List__Add_fn(uPtr(vertices), uCRef(::g::Uno::Float2__op_Multiply2(v, _scale)));
        }
    }

    _current = ::g::Fuse::Drawing::Contour::New2(isClosed, (uObject*)vertices);
    return true;
}

// public void Reset() [instance] :72
void ContourEnumerator::Reset()
{
    uStackFrame __("Fuse.Drawing.ContourEnumerator", "Reset()");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public ContourEnumerator New(Fuse.Drawing.PathGeometry head, float2 scale) [static] :36
ContourEnumerator* ContourEnumerator::New1(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale)
{
    ContourEnumerator* obj2 = (ContourEnumerator*)uNew(ContourEnumerator_typeof());
    obj2->ctor_(head, scale);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal abstract class ContourTerminator :1038
// {
static void ContourTerminator_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[20] = ::g::Uno::Collections::EmptyEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetFields(4);
}

::g::Fuse::Drawing::PathGeometry_type* ContourTerminator_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ContourTerminator);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.ContourTerminator", options);
    type->SetBase(::g::Fuse::Drawing::PathGeometry_typeof());
    type->fp_build_ = ContourTerminator_build;
    type->fp_get_EndsContour = (void(*)(::g::Fuse::Drawing::PathGeometry*, bool*))ContourTerminator__get_EndsContour_fn;
    type->fp_EvaluateLast = (void(*)(::g::Fuse::Drawing::PathGeometry*, uObject**))ContourTerminator__EvaluateLast_fn;
    type->fp_FindStartOfLastContour = (void(*)(::g::Fuse::Drawing::PathGeometry*, ::g::Uno::Float2*))ContourTerminator__FindStartOfLastContour_fn;
    return type;
}

// protected ContourTerminator() :1047
void ContourTerminator__ctor_1_fn(ContourTerminator* __this)
{
    __this->ctor_1();
}

// protected ContourTerminator(Fuse.Drawing.PathGeometry prev, float2 position) :1042
void ContourTerminator__ctor_2_fn(ContourTerminator* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* position)
{
    __this->ctor_2(prev, *position);
}

// protected void ContourTerminatorCtor(Fuse.Drawing.PathGeometry prev, float2 position) :1049
void ContourTerminator__ContourTerminatorCtor_fn(ContourTerminator* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* position)
{
    __this->ContourTerminatorCtor(prev, *position);
}

// internal override sealed bool get_EndsContour() :1040
void ContourTerminator__get_EndsContour_fn(ContourTerminator* __this, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.ContourTerminator", "get_EndsContour()");
    return *__retval = true, void();
}

// internal override sealed Uno.Collections.IEnumerable<float2> EvaluateLast() :1059
void ContourTerminator__EvaluateLast_fn(ContourTerminator* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Drawing.ContourTerminator", "EvaluateLast()");
    return *__retval = (uObject*)((::g::Uno::Collections::EmptyEnumerable*)::g::Uno::Collections::EmptyEnumerable::New1(::TYPES[20/*Uno.Collections.EmptyEnumerable<float2>*/])), void();
}

// internal override sealed float2 FindStartOfLastContour() :1054
void ContourTerminator__FindStartOfLastContour_fn(ContourTerminator* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Drawing.ContourTerminator", "FindStartOfLastContour()");
    return *__retval = __this->EndPosition(), void();
}

// protected ContourTerminator() [instance] :1047
void ContourTerminator::ctor_1()
{
    uStackFrame __("Fuse.Drawing.ContourTerminator", ".ctor()");
    ctor_();
}

// protected ContourTerminator(Fuse.Drawing.PathGeometry prev, float2 position) [instance] :1042
void ContourTerminator::ctor_2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.ContourTerminator", ".ctor(Fuse.Drawing.PathGeometry,float2)");
    ctor_();
    ContourTerminatorCtor(prev, position);
}

// protected void ContourTerminatorCtor(Fuse.Drawing.PathGeometry prev, float2 position) [instance] :1049
void ContourTerminator::ContourTerminatorCtor(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.ContourTerminator", "ContourTerminatorCtor(Fuse.Drawing.PathGeometry,float2)");
    PathGeometryCtor(prev, position);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal class CurveTo :1115
// {
static void CurveTo_build(uType* type)
{
    ::STRINGS[5] = uString::Const("C ");
    ::STRINGS[6] = uString::Const(" ");
    ::STRINGS[7] = uString::Const("C");
    ::TYPES[7] = uObject_typeof();
    type->SetFields(4,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::CurveTo, _controlPointEnd), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::CurveTo, _controlPointStart), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::CurveTo, _lastPosition), 0);
}

::g::Fuse::Drawing::PathGeometry_type* CurveTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(CurveTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.CurveTo", options);
    type->SetBase(::g::Fuse::Drawing::PathGeometry_typeof());
    type->fp_build_ = CurveTo_build;
    type->fp_ctor_ = (void*)CurveTo__New2_fn;
    type->fp_get_EndTangent = (void(*)(::g::Fuse::Drawing::PathGeometry*, ::g::Uno::Float2*))CurveTo__get_EndTangent_fn;
    type->fp_EvaluateLast = (void(*)(::g::Fuse::Drawing::PathGeometry*, uObject**))CurveTo__EvaluateLast_fn;
    type->fp_get_HasLastBounds = (void(*)(::g::Fuse::Drawing::PathGeometry*, bool*))CurveTo__get_HasLastBounds_fn;
    type->fp_get_LastBounds = (void(*)(::g::Fuse::Drawing::PathGeometry*, ::g::Uno::Rect*))CurveTo__get_LastBounds_fn;
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))CurveTo__Serialize_fn;
    return type;
}

// protected CurveTo() :1133
void CurveTo__ctor_1_fn(CurveTo* __this)
{
    __this->ctor_1();
}

// public CurveTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) :1123
void CurveTo__ctor_2_fn(CurveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position)
{
    __this->ctor_2(prev, *lastPosition, *controlPointStart, *controlPointEnd, *position);
}

// protected internal float2 get_ControlPointEnd() :1170
void CurveTo__get_ControlPointEnd_fn(CurveTo* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ControlPointEnd();
}

// protected void CurveToCtor(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) :1135
void CurveTo__CurveToCtor_fn(CurveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position)
{
    __this->CurveToCtor(prev, *lastPosition, *controlPointStart, *controlPointEnd, *position);
}

// public override sealed float2 get_EndTangent() :1151
void CurveTo__get_EndTangent_fn(CurveTo* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Drawing.CurveTo", "get_EndTangent()");
    return *__retval = ::g::Uno::Float2__op_Subtraction2(__this->EndPosition(), __this->ControlPointEnd()), void();
}

// internal override sealed Uno.Collections.IEnumerable<float2> EvaluateLast() :1143
void CurveTo__EvaluateLast_fn(CurveTo* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Drawing.CurveTo", "EvaluateLast()");
    float maxError = 0.5f;
    return *__retval = ::g::Uno::Geometry::CubicBezier::Subdivide(__this->_lastPosition, __this->_controlPointStart, __this->_controlPointEnd, __this->EndPosition(), maxError), void();
}

// protected internal override sealed bool get_HasLastBounds() :1156
void CurveTo__get_HasLastBounds_fn(CurveTo* __this, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.CurveTo", "get_HasLastBounds()");
    return *__retval = true, void();
}

// protected internal override sealed Uno.Rect get_LastBounds() :1161
void CurveTo__get_LastBounds_fn(CurveTo* __this, ::g::Uno::Rect* __retval)
{
    uStackFrame __("Fuse.Drawing.CurveTo", "get_LastBounds()");
    return *__retval = ::g::Fuse::Drawing::BezierOp::GetRect(__this->_lastPosition, __this->_controlPointStart, __this->_controlPointEnd, __this->EndPosition()), void();
}

// protected CurveTo New() :1133
void CurveTo__New2_fn(CurveTo** __retval)
{
    *__retval = CurveTo::New2();
}

// public CurveTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) :1123
void CurveTo__New3_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, CurveTo** __retval)
{
    *__retval = CurveTo::New3(prev, *lastPosition, *controlPointStart, *controlPointEnd, *position);
}

// protected internal override string Serialize() :1173
void CurveTo__Serialize_fn(CurveTo* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.CurveTo", "Serialize()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[5/*"C "*/], uBox(::g::Uno::Float_typeof(), __this->_controlPointStart.X)), ::STRINGS[6/*" "*/]), uBox(::g::Uno::Float_typeof(), __this->_controlPointStart.Y)), ::STRINGS[6/*" "*/]), uBox(::g::Uno::Float_typeof(), __this->_controlPointEnd.X)), ::STRINGS[6/*" "*/]), uBox(::g::Uno::Float_typeof(), __this->_controlPointEnd.Y)), ::STRINGS[6/*" "*/]), uBox(::g::Uno::Float_typeof(), __this->EndPosition().X)), ::STRINGS[6/*" "*/]), uBox(::g::Uno::Float_typeof(), __this->EndPosition().Y)), void();
}

// protected CurveTo() [instance] :1133
void CurveTo::ctor_1()
{
    uStackFrame __("Fuse.Drawing.CurveTo", ".ctor()");
    ctor_();
}

// public CurveTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) [instance] :1123
void CurveTo::ctor_2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.CurveTo", ".ctor(Fuse.Drawing.PathGeometry,float2,float2,float2,float2)");
    ctor_();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ::g::Fuse::Drawing::Util::ValidateFloat2(controlPointStart);
    ::g::Fuse::Drawing::Util::ValidateFloat2(controlPointEnd);
    ::g::Fuse::Drawing::Util::ValidateFloat2(position);
    CurveToCtor(prev, lastPosition, controlPointStart, controlPointEnd, position);
}

// protected internal float2 get_ControlPointEnd() [instance] :1170
::g::Uno::Float2 CurveTo::ControlPointEnd()
{
    uStackFrame __("Fuse.Drawing.CurveTo", "get_ControlPointEnd()");
    return _controlPointEnd;
}

// protected void CurveToCtor(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) [instance] :1135
void CurveTo::CurveToCtor(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.CurveTo", "CurveToCtor(Fuse.Drawing.PathGeometry,float2,float2,float2,float2)");
    PathGeometryCtor(prev, position);
    _lastPosition = lastPosition;
    _controlPointStart = controlPointStart;
    _controlPointEnd = controlPointEnd;
}

// protected CurveTo New() [static] :1133
CurveTo* CurveTo::New2()
{
    CurveTo* obj2 = (CurveTo*)uNew(CurveTo_typeof());
    obj2->ctor_1();
    return obj2;
}

// public CurveTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) [static] :1123
CurveTo* CurveTo::New3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    CurveTo* obj1 = (CurveTo*)uNew(CurveTo_typeof());
    obj1->ctor_2(prev, lastPosition, controlPointStart, controlPointEnd, position);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.32.14\Drawing\$.uno
// ---------------------------------------------------------------

// public struct ImageFill.DrawParams :77
// {
static void ImageFill__DrawParams_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, Origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, Size), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, UVClip), 0);
    type->Reflection.SetFields(3,
        new uField("Origin", 0),
        new uField("Size", 1),
        new uField("UVClip", 2));
}

uStructType* ImageFill__DrawParams_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(ImageFill__DrawParams);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Drawing.ImageFill.DrawParams", options);
    type->fp_build_ = ImageFill__DrawParams_build;
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public abstract class DynamicBrush :141
// {
// static DynamicBrush() :141
static void DynamicBrush__cctor__fn(uType* __type)
{
    DynamicBrush::_opacityName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Opacity"*/]);
    DynamicBrush::_blendModeName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"BlendMode"*/]);
}

static void DynamicBrush_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Opacity");
    ::STRINGS[9] = uString::Const("BlendMode");
    ::TYPES[21] = ::g::Uno::Int_typeof();
    type->SetFields(2,
        ::g::Fuse::Drawing::BlendMode_typeof(), offsetof(::g::Fuse::Drawing::DynamicBrush, _blendMode), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::DynamicBrush, _opacity), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::DynamicBrush::_blendModeName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::DynamicBrush::_opacityName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("get_BlendMode", NULL, (void*)DynamicBrush__get_BlendMode_fn, 0, false, ::g::Fuse::Drawing::BlendMode_typeof(), 0),
        new uFunction("set_BlendMode", NULL, (void*)DynamicBrush__set_BlendMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::BlendMode_typeof()),
        new uFunction("get_Opacity", NULL, (void*)DynamicBrush__get_Opacity_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Opacity", NULL, (void*)DynamicBrush__set_Opacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(DynamicBrush);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.DynamicBrush", options);
    type->SetBase(::g::Fuse::Drawing::Brush_typeof());
    type->fp_build_ = DynamicBrush_build;
    type->fp_cctor_ = DynamicBrush__cctor__fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))DynamicBrush__get_IsCompletelyTransparent_fn;
    return type;
}

// protected generated DynamicBrush() :141
void DynamicBrush__ctor_2_fn(DynamicBrush* __this)
{
    __this->ctor_2();
}

// public Fuse.Drawing.BlendMode get_BlendMode() :164
void DynamicBrush__get_BlendMode_fn(DynamicBrush* __this, int* __retval)
{
    *__retval = __this->BlendMode();
}

// public void set_BlendMode(Fuse.Drawing.BlendMode value) :165
void DynamicBrush__set_BlendMode_fn(DynamicBrush* __this, int* value)
{
    __this->BlendMode(*value);
}

// public override bool get_IsCompletelyTransparent() :143
void DynamicBrush__get_IsCompletelyTransparent_fn(DynamicBrush* __this, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.DynamicBrush", "get_IsCompletelyTransparent()");
    return *__retval = __this->Opacity() == 0.0f, void();
}

// public float get_Opacity() :150
void DynamicBrush__get_Opacity_fn(DynamicBrush* __this, float* __retval)
{
    *__retval = __this->Opacity();
}

// public void set_Opacity(float value) :151
void DynamicBrush__set_Opacity_fn(DynamicBrush* __this, float* value)
{
    __this->Opacity(*value);
}

::g::Uno::UX::Selector DynamicBrush::_blendModeName_;
::g::Uno::UX::Selector DynamicBrush::_opacityName_;

// protected generated DynamicBrush() [instance] :141
void DynamicBrush::ctor_2()
{
    uStackFrame __("Fuse.Drawing.DynamicBrush", ".ctor()");
    _opacity = 1.0f;
    ctor_1();
}

// public Fuse.Drawing.BlendMode get_BlendMode() [instance] :164
int DynamicBrush::BlendMode()
{
    uStackFrame __("Fuse.Drawing.DynamicBrush", "get_BlendMode()");
    return _blendMode;
}

// public void set_BlendMode(Fuse.Drawing.BlendMode value) [instance] :165
void DynamicBrush::BlendMode(int value)
{
    uStackFrame __("Fuse.Drawing.DynamicBrush", "set_BlendMode(Fuse.Drawing.BlendMode)");

    if (value == _blendMode)
        return;

    _blendMode = value;
    OnPropertyChanged(DynamicBrush::_blendModeName());
}

// public float get_Opacity() [instance] :150
float DynamicBrush::Opacity()
{
    uStackFrame __("Fuse.Drawing.DynamicBrush", "get_Opacity()");
    return _opacity;
}

// public void set_Opacity(float value) [instance] :151
void DynamicBrush::Opacity(float value)
{
    uStackFrame __("Fuse.Drawing.DynamicBrush", "set_Opacity(float)");

    if (value == _opacity)
        return;

    _opacity = value;
    OnPropertyChanged(DynamicBrush::_opacityName());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal static class EllipseFactory :93
// {
static void EllipseFactory_build(uType* type)
{
}

uClassType* EllipseFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.EllipseFactory", options);
    type->fp_build_ = EllipseFactory_build;
    return type;
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, float2 Radius) :95
void EllipseFactory__AppendTo_fn(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2* Radius, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = EllipseFactory::AppendTo(self, *Radius);
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, float2 Radius) [static] :95
::g::Fuse::Drawing::PathGeometry* EllipseFactory::AppendTo(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2 Radius)
{
    uStackFrame __("Fuse.Drawing.EllipseFactory", "AppendTo(Fuse.Drawing.PathGeometry,float2)");
    ::g::Uno::Float2 o = uPtr(self)->EndPosition();
    ::g::Uno::Float2 n = ::g::Uno::Float2__New2(0.0f, -Radius.Y);
    ::g::Uno::Float2 s = ::g::Uno::Float2__New2(0.0f, Radius.Y);
    ::g::Uno::Float2 w = ::g::Uno::Float2__New2(-Radius.X, 0.0f);
    ::g::Uno::Float2 e = ::g::Uno::Float2__New2(Radius.X, 0.0f);
    float p = 0.55f;
    return uPtr(uPtr(uPtr(uPtr(uPtr(uPtr(self->MoveTo1(::g::Uno::Float2__op_Addition2(o, w)))->CurveTo(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, w), ::g::Uno::Float2__op_Multiply1(s, p)), ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, s), ::g::Uno::Float2__op_Multiply1(w, p)), ::g::Uno::Float2__op_Addition2(o, s)))->CurveTo(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, s), ::g::Uno::Float2__op_Multiply1(e, p)), ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, e), ::g::Uno::Float2__op_Multiply1(s, p)), ::g::Uno::Float2__op_Addition2(o, e)))->CurveTo(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, e), ::g::Uno::Float2__op_Multiply1(n, p)), ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, n), ::g::Uno::Float2__op_Multiply1(e, p)), ::g::Uno::Float2__op_Addition2(o, n)))->CurveTo(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, n), ::g::Uno::Float2__op_Multiply1(w, p)), ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, w), ::g::Uno::Float2__op_Multiply1(n, p)), ::g::Uno::Float2__op_Addition2(o, w)))->ClosePath())->MoveTo1(o);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\Brushes\$.uno
// --------------------------------------------------------------

// public sealed class GradientStop :14
// {
// static GradientStop() :14
static void GradientStop__cctor__fn(uType* __type)
{
    GradientStop::_offsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Offset"*/]);
    GradientStop::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Color"*/]);
}

static void GradientStop_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Offset");
    ::STRINGS[11] = uString::Const("Color");
    type->SetFields(1,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::GradientStop, _color), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::GradientStop, _offset), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::GradientStop::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::GradientStop::_offsetName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Color", NULL, (void*)GradientStop__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)GradientStop__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)GradientStop__New2_fn, 0, true, GradientStop_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)GradientStop__New3_fn, 0, true, GradientStop_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_Offset", NULL, (void*)GradientStop__get_Offset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)GradientStop__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

uType* GradientStop_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(GradientStop);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.GradientStop", options);
    type->SetBase(::g::Uno::UX::PropertyObject_typeof());
    type->fp_build_ = GradientStop_build;
    type->fp_ctor_ = (void*)GradientStop__New2_fn;
    type->fp_cctor_ = GradientStop__cctor__fn;
    return type;
}

// public GradientStop() :48
void GradientStop__ctor_1_fn(GradientStop* __this)
{
    __this->ctor_1();
}

// public GradientStop(float4 color, float offset) :50
void GradientStop__ctor_2_fn(GradientStop* __this, ::g::Uno::Float4* color, float* offset)
{
    __this->ctor_2(*color, *offset);
}

// public float4 get_Color() :37
void GradientStop__get_Color_fn(GradientStop* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :38
void GradientStop__set_Color_fn(GradientStop* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public GradientStop New() :48
void GradientStop__New2_fn(GradientStop** __retval)
{
    *__retval = GradientStop::New2();
}

// public GradientStop New(float4 color, float offset) :50
void GradientStop__New3_fn(::g::Uno::Float4* color, float* offset, GradientStop** __retval)
{
    *__retval = GradientStop::New3(*color, *offset);
}

// public float get_Offset() :21
void GradientStop__get_Offset_fn(GradientStop* __this, float* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float value) :22
void GradientStop__set_Offset_fn(GradientStop* __this, float* value)
{
    __this->Offset(*value);
}

::g::Uno::UX::Selector GradientStop::_colorName_;
::g::Uno::UX::Selector GradientStop::_offsetName_;

// public GradientStop() [instance] :48
void GradientStop::ctor_1()
{
    uStackFrame __("Fuse.Drawing.GradientStop", ".ctor()");
    _color = ::g::Uno::Float4__New1(1.0f);
    ctor_();
}

// public GradientStop(float4 color, float offset) [instance] :50
void GradientStop::ctor_2(::g::Uno::Float4 color, float offset)
{
    uStackFrame __("Fuse.Drawing.GradientStop", ".ctor(float4,float)");
    _color = ::g::Uno::Float4__New1(1.0f);
    ctor_();
    _color = color;
    _offset = offset;
}

// public float4 get_Color() [instance] :37
::g::Uno::Float4 GradientStop::Color()
{
    uStackFrame __("Fuse.Drawing.GradientStop", "get_Color()");
    return _color;
}

// public void set_Color(float4 value) [instance] :38
void GradientStop::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Drawing.GradientStop", "set_Color(float4)");

    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(GradientStop::_colorName());
    }
}

// public float get_Offset() [instance] :21
float GradientStop::Offset()
{
    uStackFrame __("Fuse.Drawing.GradientStop", "get_Offset()");
    return _offset;
}

// public void set_Offset(float value) [instance] :22
void GradientStop::Offset(float value)
{
    uStackFrame __("Fuse.Drawing.GradientStop", "set_Offset(float)");

    if (_offset != value)
    {
        _offset = value;
        OnPropertyChanged(GradientStop::_offsetName());
    }
}

// public GradientStop New() [static] :48
GradientStop* GradientStop::New2()
{
    GradientStop* obj1 = (GradientStop*)uNew(GradientStop_typeof());
    obj1->ctor_1();
    return obj1;
}

// public GradientStop New(float4 color, float offset) [static] :50
GradientStop* GradientStop::New3(::g::Uno::Float4 color, float offset)
{
    GradientStop* obj2 = (GradientStop*)uNew(GradientStop_typeof());
    obj2->ctor_2(color, offset);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal sealed class HorizontalLineTo :1243
// {
static void HorizontalLineTo_build(uType* type)
{
    ::STRINGS[12] = uString::Const("H ");
    ::STRINGS[13] = uString::Const("H");
    ::TYPES[7] = uObject_typeof();
    type->SetFields(5,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::HorizontalLineTo, _x), 0);
}

::g::Fuse::Drawing::PathGeometry_type* HorizontalLineTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(HorizontalLineTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.HorizontalLineTo", options);
    type->SetBase(::g::Fuse::Drawing::LineTo_typeof());
    type->fp_build_ = HorizontalLineTo_build;
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))HorizontalLineTo__Serialize_fn;
    return type;
}

// public HorizontalLineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float x) :1249
void HorizontalLineTo__ctor_3_fn(HorizontalLineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* x)
{
    __this->ctor_3(prev, *lastPosition, *x);
}

// public HorizontalLineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float x) :1249
void HorizontalLineTo__New4_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* x, HorizontalLineTo** __retval)
{
    *__retval = HorizontalLineTo::New4(prev, *lastPosition, *x);
}

// protected internal override sealed string Serialize() :1258
void HorizontalLineTo__Serialize_fn(HorizontalLineTo* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.HorizontalLineTo", "Serialize()");
    return *__retval = ::g::Uno::String::op_Addition1(::STRINGS[12/*"H "*/], uBox(::g::Uno::Float_typeof(), __this->_x)), void();
}

// public HorizontalLineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float x) [instance] :1249
void HorizontalLineTo::ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float x)
{
    uStackFrame __("Fuse.Drawing.HorizontalLineTo", ".ctor(Fuse.Drawing.PathGeometry,float2,float)");
    ctor_1();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ::g::Fuse::Drawing::Util::ValidateFloat(x);
    LineToCtor(prev, lastPosition, ::g::Uno::Float2__New2(x, lastPosition.Y));
    _x = x;
}

// public HorizontalLineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float x) [static] :1249
HorizontalLineTo* HorizontalLineTo::New4(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float x)
{
    HorizontalLineTo* obj1 = (HorizontalLineTo*)uNew(HorizontalLineTo_typeof());
    obj1->ctor_3(prev, lastPosition, x);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.32.14\Drawing\$.uno
// ---------------------------------------------------------------

// public sealed class ImageFill :29
// {
// static ImageFill() :29
static void ImageFill__cctor_1_fn(uType* __type)
{
    ImageFill::_sourceName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"Source"*/]);
    ImageFill::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Color"*/]);
    ImageFill::_paramName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Param"*/]);
    ImageFill::_sizingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Sizing"*/]);
}

static void ImageFill_build(uType* type)
{
    ::STRINGS[14] = uString::Const("Source");
    ::STRINGS[11] = uString::Const("Color");
    ::STRINGS[15] = uString::Const("Param");
    ::STRINGS[16] = uString::Const("Sizing");
    ::TYPES[22] = ::g::Fuse::Internal::IImageContainerOwner_typeof();
    type->SetInterfaces(
        ::g::Fuse::Internal::IImageContainerOwner_typeof(), offsetof(ImageFill_type, interface0));
    type->SetFields(4,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _color), 0,
        ::g::Fuse::Internal::ImageContainer_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _container), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_paramName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_sizingName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_sourceName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(23,
        new uFunction("get_Color", NULL, (void*)ImageFill__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)ImageFill__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_ContentAlignment", NULL, (void*)ImageFill__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)ImageFill__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_Density", NULL, (void*)ImageFill__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)ImageFill__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_File", NULL, (void*)ImageFill__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)ImageFill__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("GetDrawParams", NULL, (void*)ImageFill__GetDrawParams_fn, 0, false, ImageFill__DrawParams_typeof(), 2, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("GetTexture", NULL, (void*)ImageFill__GetTexture_fn, 0, false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("get_MemoryPolicy", NULL, (void*)ImageFill__get_MemoryPolicy_fn, 0, false, ::g::Fuse::Resources::MemoryPolicy_typeof(), 0),
        new uFunction("set_MemoryPolicy", NULL, (void*)ImageFill__set_MemoryPolicy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction(".ctor", NULL, (void*)ImageFill__New2_fn, 0, true, ImageFill_typeof(), 0),
        new uFunction("get_ResampleMode", NULL, (void*)ImageFill__get_ResampleMode_fn, 0, false, ::g::Fuse::Drawing::ResampleMode_typeof(), 0),
        new uFunction("set_ResampleMode", NULL, (void*)ImageFill__set_ResampleMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::ResampleMode_typeof()),
        new uFunction("get_Source", NULL, (void*)ImageFill__get_Source_fn, 0, false, ::g::Fuse::Resources::ImageSource_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)ImageFill__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::ImageSource_typeof()),
        new uFunction("get_StretchDirection", NULL, (void*)ImageFill__get_StretchDirection_fn, 0, false, ::g::Fuse::Elements::StretchDirection_typeof(), 0),
        new uFunction("set_StretchDirection", NULL, (void*)ImageFill__set_StretchDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchDirection_typeof()),
        new uFunction("get_StretchMode", NULL, (void*)ImageFill__get_StretchMode_fn, 0, false, ::g::Fuse::Elements::StretchMode_typeof(), 0),
        new uFunction("set_StretchMode", NULL, (void*)ImageFill__set_StretchMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchMode_typeof()),
        new uFunction("get_Url", NULL, (void*)ImageFill__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)ImageFill__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

ImageFill_type* ImageFill_typeof()
{
    static uSStrong<ImageFill_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageFill);
    options.TypeSize = sizeof(ImageFill_type);
    type = (ImageFill_type*)uClassType::New("Fuse.Drawing.ImageFill", options);
    type->SetBase(::g::Fuse::Drawing::DynamicBrush_typeof());
    type->fp_build_ = ImageFill_build;
    type->fp_ctor_ = (void*)ImageFill__New2_fn;
    type->fp_cctor_ = ImageFill__cctor_1_fn;
    type->fp_OnPinned = (void(*)(::g::Fuse::Drawing::Brush*))ImageFill__OnPinned_fn;
    type->fp_OnUnpinned = (void(*)(::g::Fuse::Drawing::Brush*))ImageFill__OnUnpinned_fn;
    type->interface0.fp_OnSourceChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnSourceChanged_fn;
    type->interface0.fp_OnParamChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnParamChanged_fn;
    type->interface0.fp_OnSizingChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnSizingChanged_fn;
    return type;
}

// public ImageFill() :31
void ImageFill__ctor_3_fn(ImageFill* __this)
{
    __this->ctor_3();
}

// public float4 get_Color() :59
void ImageFill__get_Color_fn(ImageFill* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :60
void ImageFill__set_Color_fn(ImageFill* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public Fuse.Elements.Alignment get_ContentAlignment() :186
void ImageFill__get_ContentAlignment_fn(ImageFill* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :187
void ImageFill__set_ContentAlignment_fn(ImageFill* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public float get_Density() :137
void ImageFill__get_Density_fn(ImageFill* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :138
void ImageFill__set_Density_fn(ImageFill* __this, float* value)
{
    __this->Density(*value);
}

// public Uno.UX.FileSource get_File() :125
void ImageFill__get_File_fn(ImageFill* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :126
void ImageFill__set_File_fn(ImageFill* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// private void Fuse.Internal.IImageContainerOwner.OnParamChanged() :161
void ImageFill__FuseInternalIImageContainerOwnerOnParamChanged_fn(ImageFill* __this)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "Fuse.Internal.IImageContainerOwner.OnParamChanged()");
    __this->OnPropertyChanged(::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Param"*/]));
}

// private void Fuse.Internal.IImageContainerOwner.OnSizingChanged() :173
void ImageFill__FuseInternalIImageContainerOwnerOnSizingChanged_fn(ImageFill* __this)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "Fuse.Internal.IImageContainerOwner.OnSizingChanged()");
    __this->OnPropertyChanged(ImageFill::_sizingName());
}

// private void Fuse.Internal.IImageContainerOwner.OnSourceChanged() :49
void ImageFill__FuseInternalIImageContainerOwnerOnSourceChanged_fn(ImageFill* __this)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "Fuse.Internal.IImageContainerOwner.OnSourceChanged()");
    __this->OnPropertyChanged(ImageFill::_sourceName());
}

// public Fuse.Drawing.ImageFill.DrawParams GetDrawParams(Fuse.DrawContext dc, float2 size) :83
void ImageFill__GetDrawParams_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* size, ImageFill__DrawParams* __retval)
{
    *__retval = __this->GetDrawParams(dc, *size);
}

// private float2 GetSize() :70
void ImageFill__GetSize_fn(ImageFill* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// public texture2D GetTexture() :99
void ImageFill__GetTexture_fn(ImageFill* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() :143
void ImageFill__get_MemoryPolicy_fn(ImageFill* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->MemoryPolicy();
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) :144
void ImageFill__set_MemoryPolicy_fn(ImageFill* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->MemoryPolicy(value);
}

// public ImageFill New() :31
void ImageFill__New2_fn(ImageFill** __retval)
{
    *__retval = ImageFill::New2();
}

// protected override sealed void OnPinned() :36
void ImageFill__OnPinned_fn(ImageFill* __this)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "OnPinned()");
    ::g::Fuse::Drawing::Brush__OnPinned_fn(__this);
    uPtr(__this->_container)->IsRooted(true);
}

// protected override sealed void OnUnpinned() :42
void ImageFill__OnUnpinned_fn(ImageFill* __this)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "OnUnpinned()");
    uPtr(__this->_container)->IsRooted(false);
    ::g::Fuse::Drawing::Brush__OnUnpinned_fn(__this);
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() :156
void ImageFill__get_ResampleMode_fn(ImageFill* __this, int* __retval)
{
    *__retval = __this->ResampleMode();
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) :157
void ImageFill__set_ResampleMode_fn(ImageFill* __this, int* value)
{
    __this->ResampleMode(*value);
}

// public Fuse.Resources.ImageSource get_Source() :150
void ImageFill__get_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) :151
void ImageFill__set_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :180
void ImageFill__get_StretchDirection_fn(ImageFill* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :181
void ImageFill__set_StretchDirection_fn(ImageFill* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :168
void ImageFill__get_StretchMode_fn(ImageFill* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :169
void ImageFill__set_StretchMode_fn(ImageFill* __this, int* value)
{
    __this->StretchMode(*value);
}

// public string get_Url() :131
void ImageFill__get_Url_fn(ImageFill* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :132
void ImageFill__set_Url_fn(ImageFill* __this, uString* value)
{
    __this->Url(value);
}

::g::Uno::UX::Selector ImageFill::_colorName_;
::g::Uno::UX::Selector ImageFill::_paramName_;
::g::Uno::UX::Selector ImageFill::_sizingName_;
::g::Uno::UX::Selector ImageFill::_sourceName_;

// public ImageFill() [instance] :31
void ImageFill::ctor_3()
{
    uStackFrame __("Fuse.Drawing.ImageFill", ".ctor()");
    _color = ::g::Uno::Float4__New1(1.0f);
    ctor_2();
    _container = ::g::Fuse::Internal::ImageContainer::New1((uObject*)this);
}

// public float4 get_Color() [instance] :59
::g::Uno::Float4 ImageFill::Color()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_Color()");
    return _color;
}

// public void set_Color(float4 value) [instance] :60
void ImageFill::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_Color(float4)");

    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(ImageFill::_colorName());
    }
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :186
int ImageFill::ContentAlignment()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_ContentAlignment()");
    return uPtr(_container)->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :187
void ImageFill::ContentAlignment(int value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_ContentAlignment(Fuse.Elements.Alignment)");
    uPtr(_container)->ContentAlignment(value);
}

// public float get_Density() [instance] :137
float ImageFill::Density()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_Density()");
    return uPtr(_container)->Density();
}

// public void set_Density(float value) [instance] :138
void ImageFill::Density(float value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_Density(float)");
    uPtr(_container)->Density(value);
}

// public Uno.UX.FileSource get_File() [instance] :125
::g::Uno::UX::FileSource* ImageFill::File()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_File()");
    return uPtr(_container)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :126
void ImageFill::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_File(Uno.UX.FileSource)");
    uPtr(_container)->File(value);
}

// public Fuse.Drawing.ImageFill.DrawParams GetDrawParams(Fuse.DrawContext dc, float2 size) [instance] :83
ImageFill__DrawParams ImageFill::GetDrawParams(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "GetDrawParams(Fuse.DrawContext,float2)");
    uPtr(uPtr(_container)->Sizing)->absoluteZoom = ((dc == NULL) ? 1.0f : uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Uno::Float2 contentDesiredSize = GetSize();
    ::g::Uno::Float2 scale = uPtr(uPtr(_container)->Sizing)->CalcScale(size, contentDesiredSize);
    ::g::Uno::Float2 origin = uPtr(uPtr(_container)->Sizing)->CalcOrigin(size, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale));
    ImageFill__DrawParams dp = uDefault<ImageFill__DrawParams>();
    dp.Origin = origin;
    dp.Size = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale);
    dp.UVClip = uPtr(uPtr(_container)->Sizing)->CalcClip(size, &dp.Origin, &dp.Size);
    return dp;
}

// private float2 GetSize() [instance] :70
::g::Uno::Float2 ImageFill::GetSize()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "GetSize()");

    if (Source() != NULL)
        return uPtr(uPtr(_container)->Sizing)->CalcContentSize(uPtr(Source())->Size(), uPtr(Source())->PixelSize());

    return ::g::Uno::Float2__New1(0.0f);
}

// public texture2D GetTexture() [instance] :99
::g::Uno::Graphics::Texture2D* ImageFill::GetTexture()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "GetTexture()");
    return uPtr(_container)->GetTexture();
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() [instance] :143
::g::Fuse::Resources::MemoryPolicy* ImageFill::MemoryPolicy()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_MemoryPolicy()");
    return uPtr(_container)->MemoryPolicy();
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) [instance] :144
void ImageFill::MemoryPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_MemoryPolicy(Fuse.Resources.MemoryPolicy)");
    uPtr(_container)->MemoryPolicy(value);
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() [instance] :156
int ImageFill::ResampleMode()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_ResampleMode()");
    return uPtr(_container)->ResampleMode();
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) [instance] :157
void ImageFill::ResampleMode(int value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_ResampleMode(Fuse.Drawing.ResampleMode)");
    uPtr(_container)->ResampleMode(value);
}

// public Fuse.Resources.ImageSource get_Source() [instance] :150
::g::Fuse::Resources::ImageSource* ImageFill::Source()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_Source()");
    return uPtr(_container)->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance] :151
void ImageFill::Source(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_Source(Fuse.Resources.ImageSource)");
    uPtr(_container)->Source(value);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :180
int ImageFill::StretchDirection()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_StretchDirection()");
    return uPtr(_container)->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :181
void ImageFill::StretchDirection(int value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_StretchDirection(Fuse.Elements.StretchDirection)");
    uPtr(_container)->StretchDirection(value);
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :168
int ImageFill::StretchMode()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_StretchMode()");
    return uPtr(_container)->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :169
void ImageFill::StretchMode(int value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_StretchMode(Fuse.Elements.StretchMode)");
    uPtr(_container)->StretchMode(value);
}

// public string get_Url() [instance] :131
uString* ImageFill::Url()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_Url()");
    return uPtr(_container)->Url();
}

// public void set_Url(string value) [instance] :132
void ImageFill::Url(uString* value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_Url(string)");
    uPtr(_container)->Url(value);
}

// public ImageFill New() [static] :31
ImageFill* ImageFill::New2()
{
    ImageFill* obj1 = (ImageFill*)uNew(ImageFill_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\Brushes\$.uno
// --------------------------------------------------------------

// public abstract interface ISolidColor :370
// {
uInterfaceType* ISolidColor_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Drawing.ISolidColor", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Color", NULL, NULL, offsetof(ISolidColor, fp_get_Color), false, ::g::Uno::Float4_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\Brushes\$.uno
// --------------------------------------------------------------

// public sealed class LinearGradient :96
// {
// static LinearGradient() :231
static void LinearGradient__cctor_1_fn(uType* __type)
{
    LinearGradient::_stopsName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"Stops"*/]);
    LinearGradient::_stopOffsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Offset"*/]);
    LinearGradient::_stopColorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Color"*/]);
    LinearGradient::_startPointName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"StartPoint"*/]);
    LinearGradient::_endPointName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"EndPoint"*/]);
    LinearGradient::_angleName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"Angle"*/]);
    LinearGradient::_gradientSize_ = 256;
    LinearGradient::_gradientSize_ = ::g::Uno::Math::Min8(1028, ::g::Uno::Graphics::Texture2D::MaxSize());
}

static void LinearGradient_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Stops");
    ::STRINGS[10] = uString::Const("Offset");
    ::STRINGS[11] = uString::Const("Color");
    ::STRINGS[18] = uString::Const("StartPoint");
    ::STRINGS[19] = uString::Const("EndPoint");
    ::STRINGS[20] = uString::Const("Angle");
    ::TYPES[23] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[24] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[25] = ::g::Fuse::Drawing::GradientStop_typeof()->Array();
    ::TYPES[26] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[27] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[28] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[29] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), ::g::Fuse::Drawing::GradientStop_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[30] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[31] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof());
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(LinearGradient_type, interface0));
    type->SetFields(4,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _angle), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _endPoint), 0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _gradientBuffer), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _gradientStart), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _hasAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _invalid), 0,
        ::g::Fuse::Drawing::GradientStop_typeof()->Array(), offsetof(::g::Fuse::Drawing::LinearGradient, _sortedStops), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _startPoint), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof()), offsetof(::g::Fuse::Drawing::LinearGradient, _stops), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_angleName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_endPointName_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_gradientSize_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_startPointName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_stopColorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_stopOffsetName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_stopsName_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("_gradientBuffer", 6),
        new uField("_gradientStart", 7));
    type->Reflection.SetFunctions(13,
        new uFunction("get_Angle", NULL, (void*)LinearGradient__get_Angle_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Angle", NULL, (void*)LinearGradient__set_Angle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_AngleDegrees", NULL, (void*)LinearGradient__get_AngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_AngleDegrees", NULL, (void*)LinearGradient__set_AngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_EndPoint", NULL, (void*)LinearGradient__get_EndPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_EndPoint", NULL, (void*)LinearGradient__set_EndPoint_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_HasAngle", NULL, (void*)LinearGradient__get_HasAngle_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)LinearGradient__New2_fn, 0, true, LinearGradient_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)LinearGradient__New3_fn, 0, true, LinearGradient_typeof(), 1, ::g::Fuse::Drawing::GradientStop_typeof()->Array()),
        new uFunction("get_SortedStops", NULL, (void*)LinearGradient__get_SortedStops_fn, 0, false, ::g::Fuse::Drawing::GradientStop_typeof()->Array(), 0),
        new uFunction("get_StartPoint", NULL, (void*)LinearGradient__get_StartPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_StartPoint", NULL, (void*)LinearGradient__set_StartPoint_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Stops", NULL, (void*)LinearGradient__get_Stops_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof()), 0));
}

LinearGradient_type* LinearGradient_typeof()
{
    static uSStrong<LinearGradient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LinearGradient);
    options.TypeSize = sizeof(LinearGradient_type);
    type = (LinearGradient_type*)uClassType::New("Fuse.Drawing.LinearGradient", options);
    type->SetBase(::g::Fuse::Drawing::DynamicBrush_typeof());
    type->fp_build_ = LinearGradient_build;
    type->fp_ctor_ = (void*)LinearGradient__New2_fn;
    type->fp_cctor_ = LinearGradient__cctor_1_fn;
    type->fp_OnPrepare = (void(*)(::g::Fuse::Drawing::Brush*, ::g::Fuse::DrawContext*, ::g::Uno::Float2*))LinearGradient__OnPrepare_fn;
    type->fp_OnUnpinned = (void(*)(::g::Fuse::Drawing::Brush*))LinearGradient__OnUnpinned_fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))LinearGradient__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public LinearGradient() :220
void LinearGradient__ctor_3_fn(LinearGradient* __this)
{
    __this->ctor_3();
}

// public LinearGradient(Fuse.Drawing.GradientStop[] stops) :225
void LinearGradient__ctor_4_fn(LinearGradient* __this, uArray* stops)
{
    __this->ctor_4(stops);
}

// public float get_Angle() :167
void LinearGradient__get_Angle_fn(LinearGradient* __this, float* __retval)
{
    *__retval = __this->Angle();
}

// public void set_Angle(float value) :168
void LinearGradient__set_Angle_fn(LinearGradient* __this, float* value)
{
    __this->Angle(*value);
}

// public float get_AngleDegrees() :182
void LinearGradient__get_AngleDegrees_fn(LinearGradient* __this, float* __retval)
{
    *__retval = __this->AngleDegrees();
}

// public void set_AngleDegrees(float value) :183
void LinearGradient__set_AngleDegrees_fn(LinearGradient* __this, float* value)
{
    __this->AngleDegrees(*value);
}

// public float2 get_EndPoint() :150
void LinearGradient__get_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->EndPoint();
}

// public void set_EndPoint(float2 value) :151
void LinearGradient__set_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value)
{
    __this->EndPoint(*value);
}

// public bool get_HasAngle() :186
void LinearGradient__get_HasAngle_fn(LinearGradient* __this, bool* __retval)
{
    *__retval = __this->HasAngle();
}

// private void InitList() :214
void LinearGradient__InitList_fn(LinearGradient* __this)
{
    __this->InitList();
}

// public LinearGradient New() :220
void LinearGradient__New2_fn(LinearGradient** __retval)
{
    *__retval = LinearGradient::New2();
}

// public LinearGradient New(Fuse.Drawing.GradientStop[] stops) :225
void LinearGradient__New3_fn(uArray* stops, LinearGradient** __retval)
{
    *__retval = LinearGradient::New3(stops);
}

// private void OnAdded(Fuse.Drawing.GradientStop gs) :199
void LinearGradient__OnAdded_fn(LinearGradient* __this, ::g::Fuse::Drawing::GradientStop* gs)
{
    __this->OnAdded(gs);
}

// protected override sealed void OnPrepare(Fuse.DrawContext dc, float2 canvasSize) :242
void LinearGradient__OnPrepare_fn(LinearGradient* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "OnPrepare(Fuse.DrawContext,float2)");

    if (__this->_gradientBuffer == NULL)
    {
        __this->_gradientBuffer = ::g::Fuse::FramebufferPool::Lock1(::g::Uno::Int2__New2(LinearGradient::_gradientSize(), 1), 3, false);
        __this->_invalid = true;
    }

    if (__this->_invalid)
    {
        __this->_gradientStart = uPtr(::g::Fuse::Drawing::LinearGradientDrawable::Singleton())->FillBuffer(dc, __this, __this->_gradientBuffer);
        __this->_invalid = false;
    }
}

// private void OnRemoved(Fuse.Drawing.GradientStop gs) :207
void LinearGradient__OnRemoved_fn(LinearGradient* __this, ::g::Fuse::Drawing::GradientStop* gs)
{
    __this->OnRemoved(gs);
}

// protected override sealed void OnUnpinned() :257
void LinearGradient__OnUnpinned_fn(LinearGradient* __this)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "OnUnpinned()");

    if (__this->_gradientBuffer != NULL)
    {
        ::g::Fuse::FramebufferPool::Release(__this->_gradientBuffer);
        __this->_gradientBuffer = NULL;
        __this->_invalid = true;
    }
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) :194
void LinearGradient__SelectOffset_fn(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b, int* __retval)
{
    *__retval = LinearGradient::SelectOffset(a, b);
}

// public Fuse.Drawing.GradientStop[] get_SortedStops() :114
void LinearGradient__get_SortedStops_fn(LinearGradient* __this, uArray** __retval)
{
    *__retval = __this->SortedStops();
}

// private void SortStops() :188
void LinearGradient__SortStops_fn(LinearGradient* __this)
{
    __this->SortStops();
}

// public float2 get_StartPoint() :129
void LinearGradient__get_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->StartPoint();
}

// public void set_StartPoint(float2 value) :130
void LinearGradient__set_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value)
{
    __this->StartPoint(*value);
}

// public Uno.Collections.IList<Fuse.Drawing.GradientStop> get_Stops() :117
void LinearGradient__get_Stops_fn(LinearGradient* __this, uObject** __retval)
{
    *__retval = __this->Stops();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector property) :102
void LinearGradient__UnoUXIPropertyListenerOnPropertyChanged_fn(LinearGradient* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector property_ = *property;

    if (::g::Uno::UX::Selector__op_Equality(property_, LinearGradient::_stopOffsetName()) || ::g::Uno::UX::Selector__op_Equality(property_, LinearGradient::_stopColorName()))
        __this->_invalid = true;

    __this->OnPropertyChanged(LinearGradient::_stopsName());
}

::g::Uno::UX::Selector LinearGradient::_angleName_;
::g::Uno::UX::Selector LinearGradient::_endPointName_;
int LinearGradient::_gradientSize_;
::g::Uno::UX::Selector LinearGradient::_startPointName_;
::g::Uno::UX::Selector LinearGradient::_stopColorName_;
::g::Uno::UX::Selector LinearGradient::_stopOffsetName_;
::g::Uno::UX::Selector LinearGradient::_stopsName_;

// public LinearGradient() [instance] :220
void LinearGradient::ctor_3()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", ".ctor()");
    _endPoint = ::g::Uno::Float2__New2(0.0f, 1.0f);
    _invalid = true;
    ctor_2();
    InitList();
}

// public LinearGradient(Fuse.Drawing.GradientStop[] stops) [instance] :225
void LinearGradient::ctor_4(uArray* stops)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", ".ctor(Fuse.Drawing.GradientStop[])");
    uArray* array1;
    int index2;
    int length3;
    _endPoint = ::g::Uno::Float2__New2(0.0f, 1.0f);
    _invalid = true;
    ctor_2();
    InitList();

    for (array1 = stops, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Drawing::GradientStop* s = uPtr(array1)->Strong< ::g::Fuse::Drawing::GradientStop*>(index2);
        ::g::Uno::Collections::ObservableList__Add_fn(uPtr(_stops), s);
    }
}

// public float get_Angle() [instance] :167
float LinearGradient::Angle()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "get_Angle()");
    return _angle;
}

// public void set_Angle(float value) [instance] :168
void LinearGradient::Angle(float value)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "set_Angle(float)");

    if ((_angle != value) || !_hasAngle)
    {
        _angle = value;
        _hasAngle = true;
        OnPropertyChanged(LinearGradient::_angleName());
    }
}

// public float get_AngleDegrees() [instance] :182
float LinearGradient::AngleDegrees()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "get_AngleDegrees()");
    return ::g::Uno::Math::RadiansToDegrees1(_angle);
}

// public void set_AngleDegrees(float value) [instance] :183
void LinearGradient::AngleDegrees(float value)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "set_AngleDegrees(float)");
    Angle(::g::Uno::Math::DegreesToRadians1(value));
}

// public float2 get_EndPoint() [instance] :150
::g::Uno::Float2 LinearGradient::EndPoint()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "get_EndPoint()");
    return _endPoint;
}

// public void set_EndPoint(float2 value) [instance] :151
void LinearGradient::EndPoint(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "set_EndPoint(float2)");

    if (::g::Uno::Float2__op_Inequality(_endPoint, value))
    {
        _endPoint = value;
        OnPropertyChanged(LinearGradient::_endPointName());
    }
}

// public bool get_HasAngle() [instance] :186
bool LinearGradient::HasAngle()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "get_HasAngle()");
    return _hasAngle;
}

// private void InitList() [instance] :214
void LinearGradient::InitList()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "InitList()");
    _stops = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[23/*Uno.Collections.ObservableList<Fuse.Drawing.GradientStop>*/], uDelegate::New(::TYPES[24/*Uno.Action<Fuse.Drawing.GradientStop>*/], (void*)LinearGradient__OnAdded_fn, this), uDelegate::New(::TYPES[24/*Uno.Action<Fuse.Drawing.GradientStop>*/], (void*)LinearGradient__OnRemoved_fn, this)));
    _sortedStops = uArray::New(::TYPES[25/*Fuse.Drawing.GradientStop[]*/], 0);
}

// private void OnAdded(Fuse.Drawing.GradientStop gs) [instance] :199
void LinearGradient::OnAdded(::g::Fuse::Drawing::GradientStop* gs)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "OnAdded(Fuse.Drawing.GradientStop)");
    uPtr(gs)->AddPropertyListener((uObject*)this);
    OnPropertyChanged(LinearGradient::_stopsName());
    _invalid = true;
    SortStops();
}

// private void OnRemoved(Fuse.Drawing.GradientStop gs) [instance] :207
void LinearGradient::OnRemoved(::g::Fuse::Drawing::GradientStop* gs)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "OnRemoved(Fuse.Drawing.GradientStop)");
    uPtr(gs)->RemovePropertyListener((uObject*)this);
    _invalid = true;
    OnPropertyChanged(LinearGradient::_stopsName());
}

// public Fuse.Drawing.GradientStop[] get_SortedStops() [instance] :114
uArray* LinearGradient::SortedStops()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "get_SortedStops()");
    return _sortedStops;
}

// private void SortStops() [instance] :188
void LinearGradient::SortStops()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "SortStops()");
    uObject* order = (uObject*)::g::Uno::Collections::EnumerableExtensions::OrderBy1(::TYPES[27/*Uno.Collections.EnumerableExtensions.OrderBy<Fuse.Drawing.GradientStop>*/], (uObject*)_stops, uDelegate::New(::TYPES[29/*Uno.Func<Fuse.Drawing.GradientStop, Fuse.Drawing.GradientStop, int>*/], (void*)LinearGradient__SelectOffset_fn));
    _sortedStops = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[30/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.GradientStop>*/], order));
}

// public float2 get_StartPoint() [instance] :129
::g::Uno::Float2 LinearGradient::StartPoint()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "get_StartPoint()");
    return _startPoint;
}

// public void set_StartPoint(float2 value) [instance] :130
void LinearGradient::StartPoint(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "set_StartPoint(float2)");

    if (::g::Uno::Float2__op_Inequality(_startPoint, value))
    {
        _startPoint = value;
        OnPropertyChanged(LinearGradient::_startPointName());
    }
}

// public Uno.Collections.IList<Fuse.Drawing.GradientStop> get_Stops() [instance] :117
uObject* LinearGradient::Stops()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "get_Stops()");
    return (uObject*)_stops;
}

// public LinearGradient New() [static] :220
LinearGradient* LinearGradient::New2()
{
    LinearGradient* obj4 = (LinearGradient*)uNew(LinearGradient_typeof());
    obj4->ctor_3();
    return obj4;
}

// public LinearGradient New(Fuse.Drawing.GradientStop[] stops) [static] :225
LinearGradient* LinearGradient::New3(uArray* stops)
{
    LinearGradient* obj5 = (LinearGradient*)uNew(LinearGradient_typeof());
    obj5->ctor_4(stops);
    return obj5;
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) [static] :194
int LinearGradient::SelectOffset(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "SelectOffset(Fuse.Drawing.GradientStop,Fuse.Drawing.GradientStop)");
    LinearGradient_typeof()->Init();
    return (int)::g::Uno::Math::Sign1(uPtr(a)->Offset() - uPtr(b)->Offset());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\Brushes\$.uno
// --------------------------------------------------------------

// internal sealed class LinearGradientDrawable :290
// {
// static LinearGradientDrawable() :290
static void LinearGradientDrawable__cctor__fn(uType* __type)
{
    LinearGradientDrawable::Singleton_ = LinearGradientDrawable::New1();
}

static void LinearGradientDrawable_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[32] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::LinearGradientDrawable, _draw_3cb3c708), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::LinearGradientDrawable, FillBuffer_TexCoord_3cb3c708_1_1_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Drawing::LinearGradientDrawable, FillBuffer_Vertices_3cb3c708_1_0_9), 0,
        LinearGradientDrawable_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradientDrawable::Singleton_, uFieldFlagsStatic);
}

uType* LinearGradientDrawable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LinearGradientDrawable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.LinearGradientDrawable", options);
    type->fp_build_ = LinearGradientDrawable_build;
    type->fp_ctor_ = (void*)LinearGradientDrawable__New1_fn;
    type->fp_cctor_ = LinearGradientDrawable__cctor__fn;
    return type;
}

// public generated LinearGradientDrawable() :290
void LinearGradientDrawable__ctor__fn(LinearGradientDrawable* __this)
{
    __this->ctor_();
}

// public float2 FillBuffer(Fuse.DrawContext dc, Fuse.Drawing.LinearGradient lg, framebuffer fb) :294
void LinearGradientDrawable__FillBuffer_fn(LinearGradientDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FillBuffer(dc, lg, fb);
}

// private static generated float4[] FillBuffer_Colors_3cb3c708_1_6_6(int Colors_1_6_4, Fuse.Drawing.GradientStop[] Colors_1_6_5) :323
void LinearGradientDrawable__FillBuffer_Colors_3cb3c708_1_6_6_fn(int* Colors_1_6_4, uArray* Colors_1_6_5, uArray** __retval)
{
    *__retval = LinearGradientDrawable::FillBuffer_Colors_3cb3c708_1_6_6(*Colors_1_6_4, Colors_1_6_5);
}

// private static generated float[] FillBuffer_Offsets_3cb3c708_1_5_4(int Offsets_1_5_1, Fuse.Drawing.GradientStop[] Offsets_1_5_2) :316
void LinearGradientDrawable__FillBuffer_Offsets_3cb3c708_1_5_4_fn(int* Offsets_1_5_1, uArray* Offsets_1_5_2, uArray** __retval)
{
    *__retval = LinearGradientDrawable::FillBuffer_Offsets_3cb3c708_1_5_4(*Offsets_1_5_1, Offsets_1_5_2);
}

// private generated void init_DrawCalls() :290
void LinearGradientDrawable__init_DrawCalls_fn(LinearGradientDrawable* __this)
{
    __this->init_DrawCalls();
}

// public generated LinearGradientDrawable New() :290
void LinearGradientDrawable__New1_fn(LinearGradientDrawable** __retval)
{
    *__retval = LinearGradientDrawable::New1();
}

uSStrong<LinearGradientDrawable*> LinearGradientDrawable::Singleton_;

// public generated LinearGradientDrawable() [instance] :290
void LinearGradientDrawable::ctor_()
{
    uStackFrame __("Fuse.Drawing.LinearGradientDrawable", ".ctor()");
    init_DrawCalls();
}

// public float2 FillBuffer(Fuse.DrawContext dc, Fuse.Drawing.LinearGradient lg, framebuffer fb) [instance] :294
::g::Uno::Float2 LinearGradientDrawable::FillBuffer(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb)
{
    uStackFrame __("Fuse.Drawing.LinearGradientDrawable", "FillBuffer(Fuse.DrawContext,Fuse.Drawing.LinearGradient,framebuffer)");
    uArray* stops = uPtr(lg)->SortedStops();

    if (uPtr(stops)->Length() < 2)
        return ::g::Uno::Float2__New2(0.0f, 1.0f);

    float length = uPtr(uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(uPtr(stops)->Length() - 1))->Offset() - uPtr(uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(0))->Offset();
    uPtr(dc)->PushRenderTarget(fb);
    uArray* Offsets_3cb3c708_1_5_5 = LinearGradientDrawable::FillBuffer_Offsets_3cb3c708_1_5_4(stops->Length(), stops);
    uArray* Colors_3cb3c708_1_6_7 = LinearGradientDrawable::FillBuffer_Colors_3cb3c708_1_6_6(stops->Length(), stops);
    _draw_3cb3c708.DepthTestEnabled(false);
    _draw_3cb3c708.Const1(0, uPtr(Offsets_3cb3c708_1_5_5)->Length());
    _draw_3cb3c708.Const1(1, uPtr(Colors_3cb3c708_1_6_7)->Length());
    _draw_3cb3c708.Use();
    _draw_3cb3c708.Attrib1(2, 2, FillBuffer_TexCoord_3cb3c708_1_1_1, 8, 0);
    _draw_3cb3c708.Uniform1(3, Offsets_3cb3c708_1_5_5);
    _draw_3cb3c708.Uniform(4, length);
    _draw_3cb3c708.Uniform11(5, Colors_3cb3c708_1_6_7);
    _draw_3cb3c708.DrawArrays(uPtr(FillBuffer_Vertices_3cb3c708_1_0_9)->Length());
    dc->PopRenderTarget();
    return ::g::Uno::Float2__New2(uPtr(stops->Strong< ::g::Fuse::Drawing::GradientStop*>(0))->Offset(), length);
}

// private generated void init_DrawCalls() [instance] :290
void LinearGradientDrawable::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.LinearGradientDrawable", "init_DrawCalls()");
    uArray* Vertices_3cb3c708_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    FillBuffer_TexCoord_3cb3c708_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_3cb3c708_1_0_0), 0);
    FillBuffer_Vertices_3cb3c708_1_0_9 = Vertices_3cb3c708_1_0_0;
    _draw_3cb3c708 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawing_bundle::LinearGradientDrawableccd93376());
}

// private static generated float4[] FillBuffer_Colors_3cb3c708_1_6_6(int Colors_1_6_4, Fuse.Drawing.GradientStop[] Colors_1_6_5) [static] :323
uArray* LinearGradientDrawable::FillBuffer_Colors_3cb3c708_1_6_6(int Colors_1_6_4, uArray* Colors_1_6_5)
{
    uStackFrame __("Fuse.Drawing.LinearGradientDrawable", "FillBuffer_Colors_3cb3c708_1_6_6(int,Fuse.Drawing.GradientStop[])");
    LinearGradientDrawable_typeof()->Init();
    uArray* cols = uArray::New(::TYPES[1/*float4[]*/], ::g::Uno::Math::Max8(Colors_1_6_4, 1));

    for (int i = 0; i < Colors_1_6_4; i++)
        uPtr(cols)->Item< ::g::Uno::Float4>(i) = uPtr(uPtr(Colors_1_6_5)->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Color();

    return cols;
}

// private static generated float[] FillBuffer_Offsets_3cb3c708_1_5_4(int Offsets_1_5_1, Fuse.Drawing.GradientStop[] Offsets_1_5_2) [static] :316
uArray* LinearGradientDrawable::FillBuffer_Offsets_3cb3c708_1_5_4(int Offsets_1_5_1, uArray* Offsets_1_5_2)
{
    uStackFrame __("Fuse.Drawing.LinearGradientDrawable", "FillBuffer_Offsets_3cb3c708_1_5_4(int,Fuse.Drawing.GradientStop[])");
    LinearGradientDrawable_typeof()->Init();
    uArray* ofs = uArray::New(::TYPES[32/*float[]*/], ::g::Uno::Math::Max8(Offsets_1_5_1, 1));

    for (int i = 0; i < Offsets_1_5_1; i++)
        uPtr(ofs)->Item<float>(i) = uPtr(uPtr(Offsets_1_5_2)->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Offset();

    return ofs;
}

// public generated LinearGradientDrawable New() [static] :290
LinearGradientDrawable* LinearGradientDrawable::New1()
{
    LinearGradientDrawable* obj1 = (LinearGradientDrawable*)uNew(LinearGradientDrawable_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public enum LineCap :242
uEnumType* LineCap_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.LineCap", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Butt", 0LL,
        "Round", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\$.uno
// ---------------------------------------------------------------

// internal abstract class LineCapImpl :69
// {
static void LineCapImpl_build(uType* type)
{
}

LineCapImpl_type* LineCapImpl_typeof()
{
    static uSStrong<LineCapImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LineCapImpl);
    options.TypeSize = sizeof(LineCapImpl_type);
    type = (LineCapImpl_type*)uClassType::New("Fuse.Drawing.LineCapImpl", options);
    type->fp_build_ = LineCapImpl_build;
    return type;
}

// protected generated LineCapImpl() :69
void LineCapImpl__ctor__fn(LineCapImpl* __this)
{
    __this->ctor_();
}

// public static Fuse.Drawing.LineCapImpl Create(Fuse.Drawing.LineCap lineCap) :73
void LineCapImpl__Create1_fn(int* lineCap, LineCapImpl** __retval)
{
    *__retval = LineCapImpl::Create1(*lineCap);
}

// protected generated LineCapImpl() [instance] :69
void LineCapImpl::ctor_()
{
}

// public static Fuse.Drawing.LineCapImpl Create(Fuse.Drawing.LineCap lineCap) [static] :73
LineCapImpl* LineCapImpl::Create1(int lineCap)
{
    uStackFrame __("Fuse.Drawing.LineCapImpl", "Create(Fuse.Drawing.LineCap)");

    switch (lineCap)
    {
        case 0:
            return ::g::Fuse::Drawing::ButtCap::New1();
        case 1:
            return ::g::Fuse::Drawing::RoundCap::New1();
    }

    U_THROW(::g::Uno::NotImplementedException::New4());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public enum LineJoin :248
uEnumType* LineJoin_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.LineJoin", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Miter", 0LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\$.uno
// ---------------------------------------------------------------

// internal abstract class LineJoinImpl :126
// {
static void LineJoinImpl_build(uType* type)
{
}

LineJoinImpl_type* LineJoinImpl_typeof()
{
    static uSStrong<LineJoinImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LineJoinImpl);
    options.TypeSize = sizeof(LineJoinImpl_type);
    type = (LineJoinImpl_type*)uClassType::New("Fuse.Drawing.LineJoinImpl", options);
    type->fp_build_ = LineJoinImpl_build;
    return type;
}

// protected generated LineJoinImpl() :126
void LineJoinImpl__ctor__fn(LineJoinImpl* __this)
{
    __this->ctor_();
}

// public static Fuse.Drawing.LineJoinImpl Create(Fuse.Drawing.LineJoin lineJoin) :130
void LineJoinImpl__Create1_fn(int* lineJoin, LineJoinImpl** __retval)
{
    *__retval = LineJoinImpl::Create1(*lineJoin);
}

// protected generated LineJoinImpl() [instance] :126
void LineJoinImpl::ctor_()
{
}

// public static Fuse.Drawing.LineJoinImpl Create(Fuse.Drawing.LineJoin lineJoin) [static] :130
LineJoinImpl* LineJoinImpl::Create1(int lineJoin)
{
    uStackFrame __("Fuse.Drawing.LineJoinImpl", "Create(Fuse.Drawing.LineJoin)");

    switch (lineJoin)
    {
        case 0:
            return ::g::Fuse::Drawing::MiterJoin::New1();
    }

    U_THROW(::g::Uno::NotImplementedException::New4());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal class LineTo :1199
// {
static void LineTo_build(uType* type)
{
    ::STRINGS[21] = uString::Const("L ");
    ::STRINGS[6] = uString::Const(" ");
    ::STRINGS[22] = uString::Const("L");
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[9] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[7] = uObject_typeof();
    type->SetFields(4,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LineTo, _lastPosition), 0);
}

::g::Fuse::Drawing::PathGeometry_type* LineTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LineTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.LineTo", options);
    type->SetBase(::g::Fuse::Drawing::PathGeometry_typeof());
    type->fp_build_ = LineTo_build;
    type->fp_ctor_ = (void*)LineTo__New2_fn;
    type->fp_EvaluateLast = (void(*)(::g::Fuse::Drawing::PathGeometry*, uObject**))LineTo__EvaluateLast_fn;
    type->fp_get_HasLastBounds = (void(*)(::g::Fuse::Drawing::PathGeometry*, bool*))LineTo__get_HasLastBounds_fn;
    type->fp_get_LastBounds = (void(*)(::g::Fuse::Drawing::PathGeometry*, ::g::Uno::Rect*))LineTo__get_LastBounds_fn;
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))LineTo__Serialize_fn;
    return type;
}

// protected LineTo() :1213
void LineTo__ctor_1_fn(LineTo* __this)
{
    __this->ctor_1();
}

// public LineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) :1205
void LineTo__ctor_2_fn(LineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* position)
{
    __this->ctor_2(prev, *lastPosition, *position);
}

// internal override sealed Uno.Collections.IEnumerable<float2> EvaluateLast() :1221
void LineTo__EvaluateLast_fn(LineTo* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Drawing.LineTo", "EvaluateLast()");
    return *__retval = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[9/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>*/], uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 2, __this->_lastPosition, __this->EndPosition()))), void();
}

// protected internal override sealed bool get_HasLastBounds() :1228
void LineTo__get_HasLastBounds_fn(LineTo* __this, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.LineTo", "get_HasLastBounds()");
    return *__retval = true, void();
}

// protected internal override sealed Uno.Rect get_LastBounds() :1233
void LineTo__get_LastBounds_fn(LineTo* __this, ::g::Uno::Rect* __retval)
{
    uStackFrame __("Fuse.Drawing.LineTo", "get_LastBounds()");
    return *__retval = ::g::Uno::Rect__ContainingPoints(__this->_lastPosition, __this->EndPosition()), void();
}

// protected void LineToCtor(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) :1215
void LineTo__LineToCtor_fn(LineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* position)
{
    __this->LineToCtor(prev, *lastPosition, *position);
}

// protected LineTo New() :1213
void LineTo__New2_fn(LineTo** __retval)
{
    *__retval = LineTo::New2();
}

// public LineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) :1205
void LineTo__New3_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* position, LineTo** __retval)
{
    *__retval = LineTo::New3(prev, *lastPosition, *position);
}

// protected internal override string Serialize() :1236
void LineTo__Serialize_fn(LineTo* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.LineTo", "Serialize()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[21/*"L "*/], uBox(::g::Uno::Float_typeof(), __this->EndPosition().X)), ::STRINGS[6/*" "*/]), uBox(::g::Uno::Float_typeof(), __this->EndPosition().Y)), void();
}

// protected LineTo() [instance] :1213
void LineTo::ctor_1()
{
    uStackFrame __("Fuse.Drawing.LineTo", ".ctor()");
    ctor_();
}

// public LineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) [instance] :1205
void LineTo::ctor_2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.LineTo", ".ctor(Fuse.Drawing.PathGeometry,float2,float2)");
    ctor_();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ::g::Fuse::Drawing::Util::ValidateFloat2(position);
    LineToCtor(prev, lastPosition, position);
}

// protected void LineToCtor(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) [instance] :1215
void LineTo::LineToCtor(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.LineTo", "LineToCtor(Fuse.Drawing.PathGeometry,float2,float2)");
    PathGeometryCtor(prev, position);
    _lastPosition = lastPosition;
}

// protected LineTo New() [static] :1213
LineTo* LineTo::New2()
{
    LineTo* obj2 = (LineTo*)uNew(LineTo_typeof());
    obj2->ctor_1();
    return obj2;
}

// public LineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) [static] :1205
LineTo* LineTo::New3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 position)
{
    LineTo* obj1 = (LineTo*)uNew(LineTo_typeof());
    obj1->ctor_2(prev, lastPosition, position);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\$.uno
// ---------------------------------------------------------------

// internal sealed class MiterJoin :140
// {
static void MiterJoin_build(uType* type)
{
}

::g::Fuse::Drawing::LineJoinImpl_type* MiterJoin_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::LineJoinImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(MiterJoin);
    options.TypeSize = sizeof(::g::Fuse::Drawing::LineJoinImpl_type);
    type = (::g::Fuse::Drawing::LineJoinImpl_type*)uClassType::New("Fuse.Drawing.MiterJoin", options);
    type->SetBase(::g::Fuse::Drawing::LineJoinImpl_typeof());
    type->fp_build_ = MiterJoin_build;
    type->fp_ctor_ = (void*)MiterJoin__New1_fn;
    type->fp_Create = (void(*)(::g::Fuse::Drawing::LineJoinImpl*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*, uObject*, uObject*))MiterJoin__Create_fn;
    return type;
}

// public generated MiterJoin() :140
void MiterJoin__ctor_1_fn(MiterJoin* __this)
{
    __this->ctor_1();
}

// public override sealed void Create(float2 leftInner, float2 leftOuter, float2 rightInner, float2 rightOuter, Uno.Collections.IList<float2> outer, Uno.Collections.IList<float2> inner) :142
void MiterJoin__Create_fn(MiterJoin* __this, ::g::Uno::Float2* leftInner, ::g::Uno::Float2* leftOuter, ::g::Uno::Float2* rightInner, ::g::Uno::Float2* rightOuter, uObject* outer, uObject* inner)
{
}

// public generated MiterJoin New() :140
void MiterJoin__New1_fn(MiterJoin** __retval)
{
    *__retval = MiterJoin::New1();
}

// public generated MiterJoin() [instance] :140
void MiterJoin::ctor_1()
{
    uStackFrame __("Fuse.Drawing.MiterJoin", ".ctor()");
    ctor_();
}

// public generated MiterJoin New() [static] :140
MiterJoin* MiterJoin::New1()
{
    MiterJoin* obj1 = (MiterJoin*)uNew(MiterJoin_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal sealed class MoveTo :1082
// {
static void MoveTo_build(uType* type)
{
    ::STRINGS[23] = uString::Const("M ");
    ::STRINGS[6] = uString::Const(" ");
    ::STRINGS[24] = uString::Const("M");
    ::TYPES[7] = uObject_typeof();
    type->SetFields(4);
}

::g::Fuse::Drawing::PathGeometry_type* MoveTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MoveTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.MoveTo", options);
    type->SetBase(::g::Fuse::Drawing::ContourTerminator_typeof());
    type->fp_build_ = MoveTo_build;
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))MoveTo__Serialize_fn;
    return type;
}

// public MoveTo(Fuse.Drawing.PathGeometry prev, float2 position) :1086
void MoveTo__ctor_3_fn(MoveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* position)
{
    __this->ctor_3(prev, *position);
}

// public MoveTo New(Fuse.Drawing.PathGeometry prev, float2 position) :1086
void MoveTo__New2_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* position, MoveTo** __retval)
{
    *__retval = MoveTo::New2(prev, *position);
}

// protected internal override sealed string Serialize() :1092
void MoveTo__Serialize_fn(MoveTo* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.MoveTo", "Serialize()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[23/*"M "*/], uBox(::g::Uno::Float_typeof(), __this->EndPosition().X)), ::STRINGS[6/*" "*/]), uBox(::g::Uno::Float_typeof(), __this->EndPosition().Y)), void();
}

// public MoveTo(Fuse.Drawing.PathGeometry prev, float2 position) [instance] :1086
void MoveTo::ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.MoveTo", ".ctor(Fuse.Drawing.PathGeometry,float2)");
    ctor_1();
    ::g::Fuse::Drawing::Util::ValidateFloat2(position);
    ContourTerminatorCtor(prev, position);
}

// public MoveTo New(Fuse.Drawing.PathGeometry prev, float2 position) [static] :1086
MoveTo* MoveTo::New2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 position)
{
    MoveTo* obj1 = (MoveTo*)uNew(MoveTo_typeof());
    obj1->ctor_3(prev, position);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\Collections\$.uno
// ---------------------------------------------------------------------------

// internal sealed class NonConsecutiveEnumerable :396
// {
static void NonConsecutiveEnumerable_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(NonConsecutiveEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Drawing::NonConsecutiveEnumerable, _source), 0);
}

NonConsecutiveEnumerable_type* NonConsecutiveEnumerable_typeof()
{
    static uSStrong<NonConsecutiveEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NonConsecutiveEnumerable);
    options.TypeSize = sizeof(NonConsecutiveEnumerable_type);
    type = (NonConsecutiveEnumerable_type*)uClassType::New("Fuse.Drawing.NonConsecutiveEnumerable", options);
    type->fp_build_ = NonConsecutiveEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))NonConsecutiveEnumerable__GetEnumerator_fn;
    return type;
}

// public NonConsecutiveEnumerable(Uno.Collections.IEnumerable<float2> source) :400
void NonConsecutiveEnumerable__ctor__fn(NonConsecutiveEnumerable* __this, uObject* source)
{
    __this->ctor_(source);
}

// public Uno.Collections.IEnumerator<float2> GetEnumerator() :405
void NonConsecutiveEnumerable__GetEnumerator_fn(NonConsecutiveEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public NonConsecutiveEnumerable New(Uno.Collections.IEnumerable<float2> source) :400
void NonConsecutiveEnumerable__New1_fn(uObject* source, NonConsecutiveEnumerable** __retval)
{
    *__retval = NonConsecutiveEnumerable::New1(source);
}

// public NonConsecutiveEnumerable(Uno.Collections.IEnumerable<float2> source) [instance] :400
void NonConsecutiveEnumerable::ctor_(uObject* source)
{
    uStackFrame __("Fuse.Drawing.NonConsecutiveEnumerable", ".ctor(Uno.Collections.IEnumerable<float2>)");
    _source = source;
}

// public Uno.Collections.IEnumerator<float2> GetEnumerator() [instance] :405
uObject* NonConsecutiveEnumerable::GetEnumerator()
{
    uStackFrame __("Fuse.Drawing.NonConsecutiveEnumerable", "GetEnumerator()");
    return (uObject*)::g::Fuse::Drawing::NonConsecutiveEnumerator::New1((uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_source), ::TYPES[8/*Uno.Collections.IEnumerable<float2>*/])));
}

// public NonConsecutiveEnumerable New(Uno.Collections.IEnumerable<float2> source) [static] :400
NonConsecutiveEnumerable* NonConsecutiveEnumerable::New1(uObject* source)
{
    NonConsecutiveEnumerable* obj1 = (NonConsecutiveEnumerable*)uNew(NonConsecutiveEnumerable_typeof());
    obj1->ctor_(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\Collections\$.uno
// ---------------------------------------------------------------------------

// internal sealed class NonConsecutiveEnumerator :411
// {
static void NonConsecutiveEnumerator_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[19] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(NonConsecutiveEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(NonConsecutiveEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(NonConsecutiveEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::NonConsecutiveEnumerator, _current), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::NonConsecutiveEnumerator, _first), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::NonConsecutiveEnumerator, _hasCurrent), 0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Drawing::NonConsecutiveEnumerator, _source), 0);
}

NonConsecutiveEnumerator_type* NonConsecutiveEnumerator_typeof()
{
    static uSStrong<NonConsecutiveEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(NonConsecutiveEnumerator);
    options.TypeSize = sizeof(NonConsecutiveEnumerator_type);
    type = (NonConsecutiveEnumerator_type*)uClassType::New("Fuse.Drawing.NonConsecutiveEnumerator", options);
    type->fp_build_ = NonConsecutiveEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))NonConsecutiveEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))NonConsecutiveEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))NonConsecutiveEnumerator__MoveNext_fn;
    return type;
}

// public NonConsecutiveEnumerator(Uno.Collections.IEnumerator<float2> source) :418
void NonConsecutiveEnumerator__ctor__fn(NonConsecutiveEnumerator* __this, uObject* source)
{
    __this->ctor_(source);
}

// public float2 get_Current() :458
void NonConsecutiveEnumerator__get_Current_fn(NonConsecutiveEnumerator* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :452
void NonConsecutiveEnumerator__Dispose_fn(NonConsecutiveEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :423
void NonConsecutiveEnumerator__MoveNext_fn(NonConsecutiveEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public NonConsecutiveEnumerator New(Uno.Collections.IEnumerator<float2> source) :418
void NonConsecutiveEnumerator__New1_fn(uObject* source, NonConsecutiveEnumerator** __retval)
{
    *__retval = NonConsecutiveEnumerator::New1(source);
}

// public void Reset() :454
void NonConsecutiveEnumerator__Reset_fn(NonConsecutiveEnumerator* __this)
{
    __this->Reset();
}

// public NonConsecutiveEnumerator(Uno.Collections.IEnumerator<float2> source) [instance] :418
void NonConsecutiveEnumerator::ctor_(uObject* source)
{
    uStackFrame __("Fuse.Drawing.NonConsecutiveEnumerator", ".ctor(Uno.Collections.IEnumerator<float2>)");
    _source = source;
}

// public float2 get_Current() [instance] :458
::g::Uno::Float2 NonConsecutiveEnumerator::Current()
{
    uStackFrame __("Fuse.Drawing.NonConsecutiveEnumerator", "get_Current()");
    return ::g::Uno::Float2__New2(_current.X, _current.Y);
}

// public void Dispose() [instance] :452
void NonConsecutiveEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :423
bool NonConsecutiveEnumerator::MoveNext()
{
    uStackFrame __("Fuse.Drawing.NonConsecutiveEnumerator", "MoveNext()");
    ::g::Uno::Float2 ret2;
    ::g::Uno::Float2 ret3;
    ::g::Uno::Float2 ret4;

    if (!_hasCurrent)
    {
        if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::TYPES[18/*Uno.Collections.IEnumerator*/])))
            return false;

        _first = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), ::TYPES[19/*Uno.Collections.IEnumerator<float2>*/]), &ret2), ret2);
        _current = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), ::TYPES[19/*Uno.Collections.IEnumerator<float2>*/]), &ret3), ret3);
        _hasCurrent = true;
        return true;
    }

    while (true)
    {
        if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::TYPES[18/*Uno.Collections.IEnumerator*/])))
            return false;

        ::g::Uno::Float2 next = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), ::TYPES[19/*Uno.Collections.IEnumerator<float2>*/]), &ret4), ret4);

        if ((::g::Uno::Math::Abs1(next.X - _current.X) > 1e-05f) || (::g::Uno::Math::Abs1(next.Y - _current.Y) > 1e-05f))
        {
            _current = next;
            return true;
        }
    }

    return false;
}

// public void Reset() [instance] :454
void NonConsecutiveEnumerator::Reset()
{
    uStackFrame __("Fuse.Drawing.NonConsecutiveEnumerator", "Reset()");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public NonConsecutiveEnumerator New(Uno.Collections.IEnumerator<float2> source) [static] :418
NonConsecutiveEnumerator* NonConsecutiveEnumerator::New1(uObject* source)
{
    NonConsecutiveEnumerator* obj1 = (NonConsecutiveEnumerator*)uNew(NonConsecutiveEnumerator_typeof());
    obj1->ctor_(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\Collections\$.uno
// ---------------------------------------------------------------------------

// internal static class NonConsecutiveExtension :388
// {
static void NonConsecutiveExtension_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
}

uClassType* NonConsecutiveExtension_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.NonConsecutiveExtension", options);
    type->fp_build_ = NonConsecutiveExtension_build;
    return type;
}

// public static Uno.Collections.IEnumerable<float2> NonConsecutive(Uno.Collections.IEnumerable<float2> self) :390
void NonConsecutiveExtension__NonConsecutive_fn(uObject* self, uObject** __retval)
{
    *__retval = NonConsecutiveExtension::NonConsecutive(self);
}

// public static Uno.Collections.IEnumerable<float2> NonConsecutive(Uno.Collections.IEnumerable<float2> self) [static] :390
uObject* NonConsecutiveExtension::NonConsecutive(uObject* self)
{
    uStackFrame __("Fuse.Drawing.NonConsecutiveExtension", "NonConsecutive(Uno.Collections.IEnumerable<float2>)");
    return (uObject*)::g::Fuse::Drawing::NonConsecutiveEnumerable::New1(self);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// public class PathGeometry :130
// {
static void PathGeometry_build(uType* type)
{
    ::STRINGS[25] = uString::Const("");
    ::STRINGS[6] = uString::Const(" ");
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[20] = ::g::Uno::Collections::EmptyEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[33] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Drawing::PathGeometry, _boundsCache), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::PathGeometry, _hasBoundsCache), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::PathGeometry, _position), 0,
        PathGeometry_typeof(), offsetof(::g::Fuse::Drawing::PathGeometry, _previous), 0);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Bounds", NULL, (void*)PathGeometry__get_Bounds_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("ClosePath", NULL, (void*)PathGeometry__ClosePath_fn, 0, false, PathGeometry_typeof(), 0),
        new uFunction("CurveTo", NULL, (void*)PathGeometry__CurveTo_fn, 0, false, PathGeometry_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_EndPosition", NULL, (void*)PathGeometry__get_EndPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_EndTangent", NULL, NULL, offsetof(PathGeometry_type, fp_get_EndTangent), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("HorizontalLineTo", NULL, (void*)PathGeometry__HorizontalLineTo_fn, 0, false, PathGeometry_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("LineTo", NULL, (void*)PathGeometry__LineTo_fn, 0, false, PathGeometry_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("LineTo", NULL, (void*)PathGeometry__LineTo1_fn, 0, false, PathGeometry_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("MoveTo", NULL, (void*)PathGeometry__MoveTo_fn, 0, false, PathGeometry_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("MoveTo", NULL, (void*)PathGeometry__MoveTo1_fn, 0, false, PathGeometry_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)PathGeometry__New1_fn, 0, true, PathGeometry_typeof(), 0),
        new uFunction("Parse", NULL, (void*)PathGeometry__Parse_fn, 0, true, PathGeometry_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("RemoveLast", NULL, (void*)PathGeometry__RemoveLast_fn, 0, false, PathGeometry_typeof(), 0),
        new uFunction("SmoothCurveTo", NULL, (void*)PathGeometry__SmoothCurveTo_fn, 0, false, PathGeometry_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("ToPolygon", NULL, (void*)PathGeometry__ToPolygon_fn, 0, false, ::g::Fuse::Drawing::Polygon_typeof(), 2, ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof()), ::g::Uno::Float2_typeof()),
        new uFunction("VerticalLineTo", NULL, (void*)PathGeometry__VerticalLineTo_fn, 0, false, PathGeometry_typeof(), 1, ::g::Uno::Float_typeof()));
}

PathGeometry_type* PathGeometry_typeof()
{
    static uSStrong<PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(PathGeometry);
    options.TypeSize = sizeof(PathGeometry_type);
    type = (PathGeometry_type*)uClassType::New("Fuse.Drawing.PathGeometry", options);
    type->fp_build_ = PathGeometry_build;
    type->fp_ctor_ = (void*)PathGeometry__New1_fn;
    type->fp_get_EndsContour = PathGeometry__get_EndsContour_fn;
    type->fp_get_EndTangent = PathGeometry__get_EndTangent_fn;
    type->fp_EvaluateLast = PathGeometry__EvaluateLast_fn;
    type->fp_FindStartOfLastContour = PathGeometry__FindStartOfLastContour_fn;
    type->fp_get_HasLastBounds = PathGeometry__get_HasLastBounds_fn;
    type->fp_get_LastBounds = PathGeometry__get_LastBounds_fn;
    type->fp_Serialize = PathGeometry__Serialize_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))PathGeometry__ToString_fn;
    return type;
}

// public PathGeometry() :140
void PathGeometry__ctor__fn(PathGeometry* __this)
{
    __this->ctor_();
}

// public Uno.Rect get_Bounds() :185
void PathGeometry__get_Bounds_fn(PathGeometry* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->Bounds();
}

// private Uno.Rect CalculateBounds() :196
void PathGeometry__CalculateBounds_fn(PathGeometry* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalculateBounds();
}

// public Fuse.Drawing.PathGeometry ClosePath() :168
void PathGeometry__ClosePath_fn(PathGeometry* __this, PathGeometry** __retval)
{
    *__retval = __this->ClosePath();
}

// public Fuse.Drawing.PathGeometry CurveTo(float2 controlPointStart, float2 controlPointEnd, float2 position) :164
void PathGeometry__CurveTo_fn(PathGeometry* __this, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, PathGeometry** __retval)
{
    *__retval = __this->CurveTo(*controlPointStart, *controlPointEnd, *position);
}

// public float2 get_EndPosition() :246
void PathGeometry__get_EndPosition_fn(PathGeometry* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->EndPosition();
}

// internal virtual bool get_EndsContour() :234
void PathGeometry__get_EndsContour_fn(PathGeometry* __this, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "get_EndsContour()");
    return *__retval = false, void();
}

// public virtual float2 get_EndTangent() :251
void PathGeometry__get_EndTangent_fn(PathGeometry* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "get_EndTangent()");
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// internal virtual Uno.Collections.IEnumerable<float2> EvaluateLast() :227
void PathGeometry__EvaluateLast_fn(PathGeometry* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "EvaluateLast()");
    return *__retval = (uObject*)((::g::Uno::Collections::EmptyEnumerable*)::g::Uno::Collections::EmptyEnumerable::New1(::TYPES[20/*Uno.Collections.EmptyEnumerable<float2>*/])), void();
}

// internal virtual float2 FindStartOfLastContour() :237
void PathGeometry__FindStartOfLastContour_fn(PathGeometry* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "FindStartOfLastContour()");
    return *__retval = (__this->_previous != NULL) ? uPtr(__this->_previous)->FindStartOfLastContour() : ::g::Uno::Float2__New2(0.0f, 0.0f), void();
}

// protected internal virtual bool get_HasLastBounds() :219
void PathGeometry__get_HasLastBounds_fn(PathGeometry* __this, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "get_HasLastBounds()");
    return *__retval = false, void();
}

// public Fuse.Drawing.PathGeometry HorizontalLineTo(float x) :160
void PathGeometry__HorizontalLineTo_fn(PathGeometry* __this, float* x, PathGeometry** __retval)
{
    *__retval = __this->HorizontalLineTo(*x);
}

// protected internal virtual Uno.Rect get_LastBounds() :224
void PathGeometry__get_LastBounds_fn(PathGeometry* __this, ::g::Uno::Rect* __retval)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "get_LastBounds()");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public Fuse.Drawing.PathGeometry LineTo(float x, float y) :156
void PathGeometry__LineTo_fn(PathGeometry* __this, float* x, float* y, PathGeometry** __retval)
{
    *__retval = __this->LineTo(*x, *y);
}

// public Fuse.Drawing.PathGeometry LineTo(float2 position) :158
void PathGeometry__LineTo1_fn(PathGeometry* __this, ::g::Uno::Float2* position, PathGeometry** __retval)
{
    *__retval = __this->LineTo1(*position);
}

// public Fuse.Drawing.PathGeometry MoveTo(float x, float y) :152
void PathGeometry__MoveTo_fn(PathGeometry* __this, float* x, float* y, PathGeometry** __retval)
{
    *__retval = __this->MoveTo(*x, *y);
}

// public Fuse.Drawing.PathGeometry MoveTo(float2 position) :154
void PathGeometry__MoveTo1_fn(PathGeometry* __this, ::g::Uno::Float2* position, PathGeometry** __retval)
{
    *__retval = __this->MoveTo1(*position);
}

// public PathGeometry New() :140
void PathGeometry__New1_fn(PathGeometry** __retval)
{
    *__retval = PathGeometry::New1();
}

// public static Fuse.Drawing.PathGeometry Parse(string pathDescription) :135
void PathGeometry__Parse_fn(uString* pathDescription, PathGeometry** __retval)
{
    *__retval = PathGeometry::Parse(pathDescription);
}

// protected internal void PathGeometryCtor(Fuse.Drawing.PathGeometry previous, float2 position) :146
void PathGeometry__PathGeometryCtor_fn(PathGeometry* __this, PathGeometry* previous, ::g::Uno::Float2* position)
{
    __this->PathGeometryCtor(previous, *position);
}

// public Fuse.Drawing.PathGeometry RemoveLast() :175
void PathGeometry__RemoveLast_fn(PathGeometry* __this, PathGeometry** __retval)
{
    *__retval = __this->RemoveLast();
}

// protected internal virtual string Serialize() :259
void PathGeometry__Serialize_fn(PathGeometry* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "Serialize()");
    return *__retval = ::STRINGS[25/*""*/], void();
}

// public Fuse.Drawing.PathGeometry SmoothCurveTo(float2 controlPointEnd, float2 position) :166
void PathGeometry__SmoothCurveTo_fn(PathGeometry* __this, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, PathGeometry** __retval)
{
    *__retval = __this->SmoothCurveTo(*controlPointEnd, *position);
}

// public Fuse.Drawing.Polygon ToPolygon([Uno.Predicate<int> WindingRule], [float2 scale]) :170
void PathGeometry__ToPolygon_fn(PathGeometry* __this, uDelegate* WindingRule, ::g::Uno::Float2* scale, ::g::Fuse::Drawing::Polygon** __retval)
{
    *__retval = __this->ToPolygon(WindingRule, *scale);
}

// public override sealed string ToString() :254
void PathGeometry__ToString_fn(PathGeometry* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((__this->_previous == NULL) ? ::STRINGS[25/*""*/] : (uString*)uPtr(__this->_previous)->ToString(), ::STRINGS[6/*" "*/]), __this->Serialize()), void();
}

// public Fuse.Drawing.PathGeometry VerticalLineTo(float y) :162
void PathGeometry__VerticalLineTo_fn(PathGeometry* __this, float* y, PathGeometry** __retval)
{
    *__retval = __this->VerticalLineTo(*y);
}

// public PathGeometry() [instance] :140
void PathGeometry::ctor_()
{
    uStackFrame __("Fuse.Drawing.PathGeometry", ".ctor()");
    _previous = NULL;
    _position = ::g::Uno::Float2__New2(0.0f, 0.0f);
}

// public Uno.Rect get_Bounds() [instance] :185
::g::Uno::Rect PathGeometry::Bounds()
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "get_Bounds()");

    if (!_hasBoundsCache)
    {
        _hasBoundsCache = true;
        _boundsCache = CalculateBounds();
    }

    return _boundsCache;
}

// private Uno.Rect CalculateBounds() [instance] :196
::g::Uno::Rect PathGeometry::CalculateBounds()
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "CalculateBounds()");
    PathGeometry* pg = this;

    while ((pg != NULL) && !pg->HasLastBounds())
        pg = uPtr(pg)->_previous;

    if (pg == NULL)
        return ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    ::g::Uno::Rect rectUnion = uPtr(pg)->LastBounds();
    pg = uPtr(pg)->_previous;

    while (pg != NULL)
    {
        if (uPtr(pg)->HasLastBounds())
            rectUnion = ::g::Uno::Rect__Union(rectUnion, uPtr(pg)->LastBounds());

        pg = uPtr(pg)->_previous;
    }

    return rectUnion;
}

// public Fuse.Drawing.PathGeometry ClosePath() [instance] :168
PathGeometry* PathGeometry::ClosePath()
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "ClosePath()");
    return ::g::Fuse::Drawing::ClosePath::New2(this, EndPosition());
}

// public Fuse.Drawing.PathGeometry CurveTo(float2 controlPointStart, float2 controlPointEnd, float2 position) [instance] :164
PathGeometry* PathGeometry::CurveTo(::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "CurveTo(float2,float2,float2)");
    return ::g::Fuse::Drawing::CurveTo::New3(this, EndPosition(), controlPointStart, controlPointEnd, position);
}

// public float2 get_EndPosition() [instance] :246
::g::Uno::Float2 PathGeometry::EndPosition()
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "get_EndPosition()");
    return _position;
}

// public Fuse.Drawing.PathGeometry HorizontalLineTo(float x) [instance] :160
PathGeometry* PathGeometry::HorizontalLineTo(float x)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "HorizontalLineTo(float)");
    return ::g::Fuse::Drawing::HorizontalLineTo::New4(this, EndPosition(), x);
}

// public Fuse.Drawing.PathGeometry LineTo(float x, float y) [instance] :156
PathGeometry* PathGeometry::LineTo(float x, float y)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "LineTo(float,float)");
    return ::g::Fuse::Drawing::LineTo::New3(this, EndPosition(), ::g::Uno::Float2__New2(x, y));
}

// public Fuse.Drawing.PathGeometry LineTo(float2 position) [instance] :158
PathGeometry* PathGeometry::LineTo1(::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "LineTo(float2)");
    return ::g::Fuse::Drawing::LineTo::New3(this, EndPosition(), position);
}

// public Fuse.Drawing.PathGeometry MoveTo(float x, float y) [instance] :152
PathGeometry* PathGeometry::MoveTo(float x, float y)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "MoveTo(float,float)");
    return ::g::Fuse::Drawing::MoveTo::New2(this, ::g::Uno::Float2__New2(x, y));
}

// public Fuse.Drawing.PathGeometry MoveTo(float2 position) [instance] :154
PathGeometry* PathGeometry::MoveTo1(::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "MoveTo(float2)");
    return ::g::Fuse::Drawing::MoveTo::New2(this, position);
}

// protected internal void PathGeometryCtor(Fuse.Drawing.PathGeometry previous, float2 position) [instance] :146
void PathGeometry::PathGeometryCtor(PathGeometry* previous, ::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "PathGeometryCtor(Fuse.Drawing.PathGeometry,float2)");
    _previous = previous;
    _position = position;
}

// public Fuse.Drawing.PathGeometry RemoveLast() [instance] :175
PathGeometry* PathGeometry::RemoveLast()
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "RemoveLast()");
    return _previous;
}

// public Fuse.Drawing.PathGeometry SmoothCurveTo(float2 controlPointEnd, float2 position) [instance] :166
PathGeometry* PathGeometry::SmoothCurveTo(::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "SmoothCurveTo(float2,float2)");
    return ::g::Fuse::Drawing::SmoothCurveTo::New4(this, EndPosition(), EndTangent(), controlPointEnd, position);
}

// public Fuse.Drawing.Polygon ToPolygon([Uno.Predicate<int> WindingRule], [float2 scale]) [instance] :170
::g::Fuse::Drawing::Polygon* PathGeometry::ToPolygon(uDelegate* WindingRule, ::g::Uno::Float2 scale)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "ToPolygon([Uno.Predicate<int>],[float2])");
    return ::g::Fuse::Drawing::Polygon::New4(WindingRule, (uObject*)::g::Fuse::Drawing::ContourEnumerable::New1(this, scale));
}

// public Fuse.Drawing.PathGeometry VerticalLineTo(float y) [instance] :162
PathGeometry* PathGeometry::VerticalLineTo(float y)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "VerticalLineTo(float)");
    return ::g::Fuse::Drawing::VerticalLineTo::New4(this, EndPosition(), y);
}

// public PathGeometry New() [static] :140
PathGeometry* PathGeometry::New1()
{
    PathGeometry* obj1 = (PathGeometry*)uNew(PathGeometry_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Fuse.Drawing.PathGeometry Parse(string pathDescription) [static] :135
PathGeometry* PathGeometry::Parse(uString* pathDescription)
{
    uStackFrame __("Fuse.Drawing.PathGeometry", "Parse(string)");
    return ::g::Fuse::Drawing::PathGeometryParser::Deserialize(pathDescription);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// public static class PathGeometryExtensions :281
// {
static void PathGeometryExtensions_build(uType* type)
{
    type->Reflection.SetFunctions(5,
        new uFunction("Circle", NULL, (void*)PathGeometryExtensions__Circle_fn, 0, true, ::g::Fuse::Drawing::PathGeometry_typeof(), 2, ::g::Fuse::Drawing::PathGeometry_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Ellipse", NULL, (void*)PathGeometryExtensions__Ellipse_fn, 0, true, ::g::Fuse::Drawing::PathGeometry_typeof(), 2, ::g::Fuse::Drawing::PathGeometry_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Rectangle", NULL, (void*)PathGeometryExtensions__Rectangle_fn, 0, true, ::g::Fuse::Drawing::PathGeometry_typeof(), 3, ::g::Fuse::Drawing::PathGeometry_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof()),
        new uFunction("RegularPolygon", NULL, (void*)PathGeometryExtensions__RegularPolygon_fn, 0, true, ::g::Fuse::Drawing::PathGeometry_typeof(), 3, ::g::Fuse::Drawing::PathGeometry_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Star", NULL, (void*)PathGeometryExtensions__Star_fn, 0, true, ::g::Fuse::Drawing::PathGeometry_typeof(), 6, ::g::Fuse::Drawing::PathGeometry_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()));
}

uClassType* PathGeometryExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.PathGeometryExtensions", options);
    type->fp_build_ = PathGeometryExtensions_build;
    return type;
}

// public static Fuse.Drawing.PathGeometry Circle(Fuse.Drawing.PathGeometry self, float Radius) :295
void PathGeometryExtensions__Circle_fn(::g::Fuse::Drawing::PathGeometry* self, float* Radius, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = PathGeometryExtensions::Circle(self, *Radius);
}

// public static Fuse.Drawing.PathGeometry Ellipse(Fuse.Drawing.PathGeometry self, float2 Radius) :300
void PathGeometryExtensions__Ellipse_fn(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2* Radius, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = PathGeometryExtensions::Ellipse(self, *Radius);
}

// public static Fuse.Drawing.PathGeometry Rectangle(Fuse.Drawing.PathGeometry self, float2 Size, [float4 CornerRadius]) :305
void PathGeometryExtensions__Rectangle_fn(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = PathGeometryExtensions::Rectangle(self, *Size, *CornerRadius);
}

// public static Fuse.Drawing.PathGeometry RegularPolygon(Fuse.Drawing.PathGeometry self, int Sides, float Radius) :283
void PathGeometryExtensions__RegularPolygon_fn(::g::Fuse::Drawing::PathGeometry* self, int* Sides, float* Radius, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = PathGeometryExtensions::RegularPolygon(self, *Sides, *Radius);
}

// public static Fuse.Drawing.PathGeometry Star(Fuse.Drawing.PathGeometry self, int Corners, float Radius, float SpokeRadius, [float CornerRatio], [float rotation]) :288
void PathGeometryExtensions__Star_fn(::g::Fuse::Drawing::PathGeometry* self, int* Corners, float* Radius, float* SpokeRadius, float* CornerRatio, float* rotation, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = PathGeometryExtensions::Star(self, *Corners, *Radius, *SpokeRadius, *CornerRatio, *rotation);
}

// public static Fuse.Drawing.PathGeometry Circle(Fuse.Drawing.PathGeometry self, float Radius) [static] :295
::g::Fuse::Drawing::PathGeometry* PathGeometryExtensions::Circle(::g::Fuse::Drawing::PathGeometry* self, float Radius)
{
    uStackFrame __("Fuse.Drawing.PathGeometryExtensions", "Circle(Fuse.Drawing.PathGeometry,float)");
    return ::g::Fuse::Drawing::EllipseFactory::AppendTo(self, ::g::Uno::Float2__New1(Radius));
}

// public static Fuse.Drawing.PathGeometry Ellipse(Fuse.Drawing.PathGeometry self, float2 Radius) [static] :300
::g::Fuse::Drawing::PathGeometry* PathGeometryExtensions::Ellipse(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2 Radius)
{
    uStackFrame __("Fuse.Drawing.PathGeometryExtensions", "Ellipse(Fuse.Drawing.PathGeometry,float2)");
    return ::g::Fuse::Drawing::EllipseFactory::AppendTo(self, Radius);
}

// public static Fuse.Drawing.PathGeometry Rectangle(Fuse.Drawing.PathGeometry self, float2 Size, [float4 CornerRadius]) [static] :305
::g::Fuse::Drawing::PathGeometry* PathGeometryExtensions::Rectangle(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius)
{
    uStackFrame __("Fuse.Drawing.PathGeometryExtensions", "Rectangle(Fuse.Drawing.PathGeometry,float2,[float4])");
    return ::g::Fuse::Drawing::RectangleFactory::AppendTo(self, Size, CornerRadius);
}

// public static Fuse.Drawing.PathGeometry RegularPolygon(Fuse.Drawing.PathGeometry self, int Sides, float Radius) [static] :283
::g::Fuse::Drawing::PathGeometry* PathGeometryExtensions::RegularPolygon(::g::Fuse::Drawing::PathGeometry* self, int Sides, float Radius)
{
    uStackFrame __("Fuse.Drawing.PathGeometryExtensions", "RegularPolygon(Fuse.Drawing.PathGeometry,int,float)");
    return ::g::Fuse::Drawing::RegularPolygonFactory::AppendTo(self, Sides, Radius);
}

// public static Fuse.Drawing.PathGeometry Star(Fuse.Drawing.PathGeometry self, int Corners, float Radius, float SpokeRadius, [float CornerRatio], [float rotation]) [static] :288
::g::Fuse::Drawing::PathGeometry* PathGeometryExtensions::Star(::g::Fuse::Drawing::PathGeometry* self, int Corners, float Radius, float SpokeRadius, float CornerRatio, float rotation)
{
    uStackFrame __("Fuse.Drawing.PathGeometryExtensions", "Star(Fuse.Drawing.PathGeometry,int,float,float,[float],[float])");
    return ::g::Fuse::Drawing::StarFactory::AppendTo(self, Corners, Radius, SpokeRadius, CornerRatio, rotation);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal sealed class PathGeometryParser :324
// {
static void PathGeometryParser_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _data), 0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _head), 0,
        ::g::Fuse::Drawing::Token_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _headToken), 0,
        ::g::Fuse::Drawing::Token_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _prevToken), 0,
        ::g::Fuse::Drawing::Token_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _token), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _x), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _y), 0);
}

uType* PathGeometryParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(PathGeometryParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.PathGeometryParser", options);
    type->fp_build_ = PathGeometryParser_build;
    return type;
}

// private PathGeometryParser(string data) :349
void PathGeometryParser__ctor__fn(PathGeometryParser* __this, uString* data)
{
    __this->ctor_(data);
}

// private void ClosePath() :500
void PathGeometryParser__ClosePath_fn(PathGeometryParser* __this)
{
    __this->ClosePath();
}

// private void CurveTo(float offsetX, float offsetY) :454
void PathGeometryParser__CurveTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->CurveTo(*offsetX, *offsetY);
}

// public static Fuse.Drawing.PathGeometry Deserialize(string data) :328
void PathGeometryParser__Deserialize_fn(uString* data, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = PathGeometryParser::Deserialize(data);
}

// private void Execute(char c) :423
void PathGeometryParser__Execute_fn(PathGeometryParser* __this, uChar* c)
{
    __this->Execute(*c);
}

// private void HLineTo(float offsetX, float offsetY) :488
void PathGeometryParser__HLineTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->HLineTo(*offsetX, *offsetY);
}

// private void LineTo(float offsetX, float offsetY) :481
void PathGeometryParser__LineTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->LineTo(*offsetX, *offsetY);
}

// private void MoveTo(float offsetX, float offsetY) :474
void PathGeometryParser__MoveTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->MoveTo(*offsetX, *offsetY);
}

// private PathGeometryParser New(string data) :349
void PathGeometryParser__New1_fn(uString* data, PathGeometryParser** __retval)
{
    *__retval = PathGeometryParser::New1(data);
}

// private float ReadFloat() :505
void PathGeometryParser__ReadFloat_fn(PathGeometryParser* __this, float* __retval)
{
    *__retval = __this->ReadFloat();
}

// private void SmoothCurveTo(float offsetX, float offsetY) :465
void PathGeometryParser__SmoothCurveTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->SmoothCurveTo(*offsetX, *offsetY);
}

// private void StartNewToken(int prevLastChar, int nextFirstChar, [bool hasAction]) :445
void PathGeometryParser__StartNewToken_fn(PathGeometryParser* __this, int* prevLastChar, int* nextFirstChar, bool* hasAction)
{
    __this->StartNewToken(*prevLastChar, *nextFirstChar, *hasAction);
}

// private void VLineTo(float offsetX, float offsetY) :494
void PathGeometryParser__VLineTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->VLineTo(*offsetX, *offsetY);
}

// private PathGeometryParser(string data) [instance] :349
void PathGeometryParser::ctor_(uString* data)
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", ".ctor(string)");
    _data = data;
    _headToken = ::g::Fuse::Drawing::Token::New1(-1, false);
    _prevToken = (uPtr(_headToken)->Next = ::g::Fuse::Drawing::Token::New1(0, false));
    bool wasExponent = false;

    for (int i = 0; i < uPtr(data)->Length(); i++)
    {
        uChar c = uPtr(data)->Item(i);

        switch (c)
        {
            case 0:
            case ' ':
            case ',':
            {
                StartNewToken(i - 1, i + 1, false);
                break;
            }
            case '-':
            {
                if (!wasExponent)
                    StartNewToken(i - 1, i, false);

                break;
            }
            case 'M':
            case 'C':
            case 'S':
            case 'Z':
            case 'L':
            case 'H':
            case 'V':
            case 'm':
            case 'c':
            case 's':
            case 'z':
            case 'l':
            case 'h':
            case 'v':
            {
                StartNewToken(i - 1, i, true);
                StartNewToken(i, i + 1, false);
                break;
            }
        }

        wasExponent = (c == 'e') || (c == 'E');
    }

    uPtr(_prevToken)->Last = (uPtr(data)->Length() - 1);

    for (::g::Fuse::Drawing::Token* token = uPtr(_headToken)->Next; token != NULL; )
    {
        ::g::Fuse::Drawing::Token* next = uPtr(token)->Next;

        while ((next != NULL) && ((uPtr(next)->Last - uPtr(next)->First) < 0))
            next = uPtr(next)->Next;

        token = uPtr(token)->Next = next;
    }

    _head = ::g::Fuse::Drawing::PathGeometry::New1();
    _token = uPtr(_headToken)->Next;

    while (_token != NULL)
    {
        if (!uPtr(_token)->HasAction)
        {
            _token = uPtr(_token)->Next;
            continue;
        }

        uChar currentCommand = uPtr(_data)->Item(uPtr(_token)->First);
        _token = uPtr(_token)->Next;

        do
            Execute(currentCommand);
        while ((_token != NULL) && !uPtr(_token)->HasAction);
    }
}

// private void ClosePath() [instance] :500
void PathGeometryParser::ClosePath()
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", "ClosePath()");
    _head = uPtr(_head)->ClosePath();
}

// private void CurveTo(float offsetX, float offsetY) [instance] :454
void PathGeometryParser::CurveTo(float offsetX, float offsetY)
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", "CurveTo(float,float)");
    float x1 = offsetX + ReadFloat();
    float y1 = offsetY + ReadFloat();
    float x2 = offsetX + ReadFloat();
    float y2 = offsetY + ReadFloat();
    float x = _x = (offsetX + ReadFloat());
    float y = _y = (offsetY + ReadFloat());
    _head = uPtr(_head)->CurveTo(::g::Uno::Float2__New2(x1, y1), ::g::Uno::Float2__New2(x2, y2), ::g::Uno::Float2__New2(x, y));
}

// private void Execute(char c) [instance] :423
void PathGeometryParser::Execute(uChar c)
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", "Execute(char)");

    switch (c)
    {
        case 'M':
        {
            MoveTo(0.0f, 0.0f);
            break;
        }
        case 'C':
        {
            CurveTo(0.0f, 0.0f);
            break;
        }
        case 'S':
        {
            SmoothCurveTo(0.0f, 0.0f);
            break;
        }
        case 'Z':
        {
            ClosePath();
            break;
        }
        case 'L':
        {
            LineTo(0.0f, 0.0f);
            break;
        }
        case 'H':
        {
            HLineTo(0.0f, 0.0f);
            break;
        }
        case 'V':
        {
            VLineTo(0.0f, 0.0f);
            break;
        }
        case 'm':
        {
            MoveTo(_x, _y);
            break;
        }
        case 'c':
        {
            CurveTo(_x, _y);
            break;
        }
        case 's':
        {
            SmoothCurveTo(_x, _y);
            break;
        }
        case 'z':
        {
            ClosePath();
            break;
        }
        case 'l':
        {
            LineTo(_x, _y);
            break;
        }
        case 'h':
        {
            HLineTo(_x, _y);
            break;
        }
        case 'v':
        {
            VLineTo(_x, _y);
            break;
        }
    }
}

// private void HLineTo(float offsetX, float offsetY) [instance] :488
void PathGeometryParser::HLineTo(float offsetX, float offsetY)
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", "HLineTo(float,float)");
    float x = _x = (offsetX + ReadFloat());
    _head = uPtr(_head)->HorizontalLineTo(x);
}

// private void LineTo(float offsetX, float offsetY) [instance] :481
void PathGeometryParser::LineTo(float offsetX, float offsetY)
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", "LineTo(float,float)");
    float x = _x = (offsetX + ReadFloat());
    float y = _y = (offsetY + ReadFloat());
    _head = uPtr(_head)->LineTo(x, y);
}

// private void MoveTo(float offsetX, float offsetY) [instance] :474
void PathGeometryParser::MoveTo(float offsetX, float offsetY)
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", "MoveTo(float,float)");
    float x = _x = (offsetX + ReadFloat());
    float y = _y = (offsetY + ReadFloat());
    _head = uPtr(_head)->MoveTo(x, y);
}

// private float ReadFloat() [instance] :505
float PathGeometryParser::ReadFloat()
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", "ReadFloat()");
    uString* str = ::g::Uno::String::Substring1(uPtr(_data), uPtr(_token)->First, (uPtr(_token)->Last - uPtr(_token)->First) + 1);
    float res = ::g::Uno::Float::Parse(str);
    _token = uPtr(_token)->Next;
    return res;
}

// private void SmoothCurveTo(float offsetX, float offsetY) [instance] :465
void PathGeometryParser::SmoothCurveTo(float offsetX, float offsetY)
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", "SmoothCurveTo(float,float)");
    float x2 = offsetX + ReadFloat();
    float y2 = offsetY + ReadFloat();
    float x = _x = (offsetX + ReadFloat());
    float y = _y = (offsetY + ReadFloat());
    _head = uPtr(_head)->SmoothCurveTo(::g::Uno::Float2__New2(x2, y2), ::g::Uno::Float2__New2(x, y));
}

// private void StartNewToken(int prevLastChar, int nextFirstChar, [bool hasAction]) [instance] :445
void PathGeometryParser::StartNewToken(int prevLastChar, int nextFirstChar, bool hasAction)
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", "StartNewToken(int,int,[bool])");
    uPtr(_prevToken)->Last = prevLastChar;
    _prevToken = (uPtr(_prevToken)->Next = ::g::Fuse::Drawing::Token::New1(nextFirstChar, hasAction));
}

// private void VLineTo(float offsetX, float offsetY) [instance] :494
void PathGeometryParser::VLineTo(float offsetX, float offsetY)
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", "VLineTo(float,float)");
    float y = _y = (offsetY + ReadFloat());
    _head = uPtr(_head)->VerticalLineTo(y);
}

// public static Fuse.Drawing.PathGeometry Deserialize(string data) [static] :328
::g::Fuse::Drawing::PathGeometry* PathGeometryParser::Deserialize(uString* data)
{
    uStackFrame __("Fuse.Drawing.PathGeometryParser", "Deserialize(string)");

    if (::g::Uno::String::op_Equality(data, NULL) || (uPtr(data)->Length() == 0))
        return ::g::Fuse::Drawing::PathGeometry::New1();

    return PathGeometryParser::New1(data)->_head;
}

// private PathGeometryParser New(string data) [static] :349
PathGeometryParser* PathGeometryParser::New1(uString* data)
{
    PathGeometryParser* obj1 = (PathGeometryParser*)uNew(PathGeometryParser_typeof());
    obj1->ctor_(data);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// public partial sealed class PathGeometryRenderer :542
// {
static void PathGeometryRenderer_build(uType* type)
{
    ::STRINGS[26] = uString::Const("value");
    ::TYPES[34] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[35] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), ::g::Fuse::Drawing::PolygonFiller_typeof());
    ::TYPES[36] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[37] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[38] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), ::g::Fuse::Drawing::PolygonFiller_typeof());
    ::TYPES[7] = uObject_typeof();
    ::TYPES[39] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[40] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[41] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[42] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), ::g::Fuse::Drawing::PolygonFiller_typeof());
    ::TYPES[43] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), ::g::Fuse::Drawing::PolygonFiller_typeof());
    ::TYPES[44] = ::g::Uno::Delegate_typeof();
    ::TYPES[45] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[26] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[46] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[47] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[21] = ::g::Uno::Int_typeof();
    ::TYPES[48] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[49] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[50] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[51] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[52] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[53] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[54] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[55] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[56] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(PathGeometryRenderer_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Drawing::Antialiasing_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _antialiasing), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _bounds), 0,
        ::g::Fuse::Drawing::Antialiasing_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _cachedAntialiasing), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _density), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _fillDensity), 0,
        ::g::Fuse::Drawing::PolygonFiller_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _fillRenderer), 0,
        ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _fillRule), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _fills), 0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _geometry), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _hasBoundsCache), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _innerBounds), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _preScale), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _strokeDensity), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _strokePadding), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), ::g::Fuse::Drawing::PolygonFiller_typeof()), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _strokeRenderers), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _strokes), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, VisualInvalidated1), 0);
    type->Reflection.SetFunctions(27,
        new uFunction("get_Antialiasing", NULL, (void*)PathGeometryRenderer__get_Antialiasing_fn, 0, false, ::g::Fuse::Drawing::Antialiasing_typeof(), 0),
        new uFunction("set_Antialiasing", NULL, (void*)PathGeometryRenderer__set_Antialiasing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Antialiasing_typeof()),
        new uFunction("get_Bounds", NULL, (void*)PathGeometryRenderer__get_Bounds_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("get_Density", NULL, (void*)PathGeometryRenderer__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)PathGeometryRenderer__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Draw", NULL, (void*)PathGeometryRenderer__Draw_fn, 0, false, uVoid_typeof(), 3, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Draw", NULL, (void*)PathGeometryRenderer__Draw1_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::RendererContext_typeof()),
        new uFunction("get_Fill", NULL, (void*)PathGeometryRenderer__get_Fill_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_Fill", NULL, (void*)PathGeometryRenderer__set_Fill_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_FillRule", NULL, (void*)PathGeometryRenderer__get_FillRule_fn, 0, false, ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof()), 0),
        new uFunction("set_FillRule", NULL, (void*)PathGeometryRenderer__set_FillRule_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof())),
        new uFunction("get_Fills", NULL, (void*)PathGeometryRenderer__get_Fills_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), 0),
        new uFunction("get_Geometry", NULL, (void*)PathGeometryRenderer__get_Geometry_fn, 0, false, ::g::Fuse::Drawing::PathGeometry_typeof(), 0),
        new uFunction("set_Geometry", NULL, (void*)PathGeometryRenderer__set_Geometry_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::PathGeometry_typeof()),
        new uFunction("GetHitPart", NULL, (void*)PathGeometryRenderer__GetHitPart_fn, 0, false, uObject_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_HasFills", NULL, (void*)PathGeometryRenderer__get_HasFills_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasStrokes", NULL, (void*)PathGeometryRenderer__get_HasStrokes_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)PathGeometryRenderer__New1_fn, 0, true, PathGeometryRenderer_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)PathGeometryRenderer__New2_fn, 0, true, PathGeometryRenderer_typeof(), 1, ::g::Fuse::Drawing::PathGeometry_typeof()),
        new uFunction("get_PreScale", NULL, (void*)PathGeometryRenderer__get_PreScale_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_PreScale", NULL, (void*)PathGeometryRenderer__set_PreScale_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("SoftDispose", NULL, (void*)PathGeometryRenderer__SoftDispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Stroke", NULL, (void*)PathGeometryRenderer__get_Stroke_fn, 0, false, ::g::Fuse::Drawing::Stroke_typeof(), 0),
        new uFunction("set_Stroke", NULL, (void*)PathGeometryRenderer__set_Stroke_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Stroke_typeof()),
        new uFunction("get_Strokes", NULL, (void*)PathGeometryRenderer__get_Strokes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), 0),
        new uFunction("add_VisualInvalidated", NULL, (void*)PathGeometryRenderer__add_VisualInvalidated_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("remove_VisualInvalidated", NULL, (void*)PathGeometryRenderer__remove_VisualInvalidated_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()));
}

PathGeometryRenderer_type* PathGeometryRenderer_typeof()
{
    static uSStrong<PathGeometryRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PathGeometryRenderer);
    options.TypeSize = sizeof(PathGeometryRenderer_type);
    type = (PathGeometryRenderer_type*)uClassType::New("Fuse.Drawing.PathGeometryRenderer", options);
    type->fp_build_ = PathGeometryRenderer_build;
    type->fp_ctor_ = (void*)PathGeometryRenderer__New1_fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))PathGeometryRenderer__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public PathGeometryRenderer() :898
void PathGeometryRenderer__ctor__fn(PathGeometryRenderer* __this)
{
    __this->ctor_();
}

// public PathGeometryRenderer(Fuse.Drawing.PathGeometry geometry) :900
void PathGeometryRenderer__ctor_1_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::PathGeometry* geometry)
{
    __this->ctor_1(geometry);
}

// public Fuse.Drawing.Antialiasing get_Antialiasing() :863
void PathGeometryRenderer__get_Antialiasing_fn(PathGeometryRenderer* __this, int* __retval)
{
    *__retval = __this->Antialiasing();
}

// public void set_Antialiasing(Fuse.Drawing.Antialiasing value) :864
void PathGeometryRenderer__set_Antialiasing_fn(PathGeometryRenderer* __this, int* value)
{
    __this->Antialiasing(*value);
}

// public Uno.Rect get_Bounds() :780
void PathGeometryRenderer__get_Bounds_fn(PathGeometryRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->Bounds();
}

// private void CalcBounds() :819
void PathGeometryRenderer__CalcBounds_fn(PathGeometryRenderer* __this)
{
    __this->CalcBounds();
}

// private void CompleteStrokeRenderers(float density) :700
void PathGeometryRenderer__CompleteStrokeRenderers_fn(PathGeometryRenderer* __this, float* density)
{
    __this->CompleteStrokeRenderers(*density);
}

// public float get_Density() :808
void PathGeometryRenderer__get_Density_fn(PathGeometryRenderer* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :809
void PathGeometryRenderer__set_Density_fn(PathGeometryRenderer* __this, float* value)
{
    __this->Density(*value);
}

// public void Draw(Fuse.DrawContext dc, float4x4 transform, float2 elementSize) :979
void PathGeometryRenderer__Draw_fn(PathGeometryRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* elementSize)
{
    __this->Draw(dc, *transform, *elementSize);
}

// public void Draw(Fuse.Drawing.RendererContext ctx) :993
void PathGeometryRenderer__Draw1_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->Draw1(ctx);
}

// internal void DrawFill(Fuse.Drawing.RendererContext ctx, Fuse.Drawing.Brush fill) :599
void PathGeometryRenderer__DrawFill_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Brush* fill)
{
    __this->DrawFill(ctx, fill);
}

// private void DrawFills(Fuse.Drawing.RendererContext ctx) :590
void PathGeometryRenderer__DrawFills_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->DrawFills(ctx);
}

// internal void DrawStroke(Fuse.Drawing.RendererContext ctx, Fuse.Drawing.Stroke s) :725
void PathGeometryRenderer__DrawStroke_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Stroke* s)
{
    __this->DrawStroke(ctx, s);
}

// private void DrawStrokes(Fuse.Drawing.RendererContext ctx) :691
void PathGeometryRenderer__DrawStrokes_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->DrawStrokes(ctx);
}

// private void EnsureFillRenderer(float density) :607
void PathGeometryRenderer__EnsureFillRenderer_fn(PathGeometryRenderer* __this, float* density)
{
    __this->EnsureFillRenderer(*density);
}

// private void EnsureStrokeRenderers() :671
void PathGeometryRenderer__EnsureStrokeRenderers_fn(PathGeometryRenderer* __this)
{
    __this->EnsureStrokeRenderers();
}

// public Fuse.Drawing.Brush get_Fill() :550
void PathGeometryRenderer__get_Fill_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Fill();
}

// public void set_Fill(Fuse.Drawing.Brush value) :551
void PathGeometryRenderer__set_Fill_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Fill(value);
}

// public Uno.Predicate<int> get_FillRule() :875
void PathGeometryRenderer__get_FillRule_fn(PathGeometryRenderer* __this, uDelegate** __retval)
{
    *__retval = __this->FillRule();
}

// public void set_FillRule(Uno.Predicate<int> value) :876
void PathGeometryRenderer__set_FillRule_fn(PathGeometryRenderer* __this, uDelegate* value)
{
    __this->FillRule(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() :564
void PathGeometryRenderer__get_Fills_fn(PathGeometryRenderer* __this, uObject** __retval)
{
    *__retval = __this->Fills();
}

// public Fuse.Drawing.PathGeometry get_Geometry() :764
void PathGeometryRenderer__get_Geometry_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = __this->Geometry();
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) :765
void PathGeometryRenderer__set_Geometry_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::PathGeometry* value)
{
    __this->Geometry(value);
}

// private void GeometryChanged(Fuse.Drawing.PathGeometry geom) :854
void PathGeometryRenderer__GeometryChanged_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::PathGeometry* geom)
{
    __this->GeometryChanged(geom);
}

// public object GetHitPart(float2 p) :949
void PathGeometryRenderer__GetHitPart_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* p, uObject** __retval)
{
    *__retval = __this->GetHitPart(*p);
}

// internal object GetHitPart(float2 p, Uno.Collections.IList<Fuse.Drawing.Brush> fills, Uno.Collections.IList<Fuse.Drawing.Stroke> strokes) :960
void PathGeometryRenderer__GetHitPart1_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* p, uObject* fills, uObject* strokes, uObject** __retval)
{
    *__retval = __this->GetHitPart1(*p, fills, strokes);
}

// internal Fuse.Drawing.RendererContext GetRendererContext(Fuse.DrawContext dc, float4x4 transform, float2 elementSize) :984
void PathGeometryRenderer__GetRendererContext_fn(PathGeometryRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* elementSize, ::g::Fuse::Drawing::RendererContext** __retval)
{
    *__retval = __this->GetRendererContext(dc, *transform, *elementSize);
}

// private Fuse.Drawing.PolygonFiller GetStrokeRenderer(Fuse.Drawing.Stroke s, float density) :707
void PathGeometryRenderer__GetStrokeRenderer_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s, float* density, ::g::Fuse::Drawing::PolygonFiller** __retval)
{
    *__retval = __this->GetStrokeRenderer(s, *density);
}

// public bool get_HasFills() :569
void PathGeometryRenderer__get_HasFills_fn(PathGeometryRenderer* __this, bool* __retval)
{
    *__retval = __this->HasFills();
}

// public bool get_HasStrokes() :656
void PathGeometryRenderer__get_HasStrokes_fn(PathGeometryRenderer* __this, bool* __retval)
{
    *__retval = __this->HasStrokes();
}

// internal Uno.Rect get_InnerBounds() :789
void PathGeometryRenderer__get_InnerBounds_fn(PathGeometryRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->InnerBounds();
}

// private void InvalidateStrokeAndFill() :920
void PathGeometryRenderer__InvalidateStrokeAndFill_fn(PathGeometryRenderer* __this)
{
    __this->InvalidateStrokeAndFill();
}

// private void InvalidateVisual() :944
void PathGeometryRenderer__InvalidateVisual_fn(PathGeometryRenderer* __this)
{
    __this->InvalidateVisual();
}

// public PathGeometryRenderer New() :898
void PathGeometryRenderer__New1_fn(PathGeometryRenderer** __retval)
{
    *__retval = PathGeometryRenderer::New1();
}

// public PathGeometryRenderer New(Fuse.Drawing.PathGeometry geometry) :900
void PathGeometryRenderer__New2_fn(::g::Fuse::Drawing::PathGeometry* geometry, PathGeometryRenderer** __retval)
{
    *__retval = PathGeometryRenderer::New2(geometry);
}

// private void OnFillAdded(Fuse.Drawing.Brush f) :572
void PathGeometryRenderer__OnFillAdded_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillAdded(f);
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) :581
void PathGeometryRenderer__OnFillRemoved_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillRemoved(f);
}

// private void OnShadingChanged() :905
void PathGeometryRenderer__OnShadingChanged_fn(PathGeometryRenderer* __this)
{
    __this->OnShadingChanged();
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) :659
void PathGeometryRenderer__OnStrokeAdded_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeAdded(s);
}

// private void OnStrokeChanged(Fuse.Drawing.Stroke s) :676
void PathGeometryRenderer__OnStrokeChanged_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeChanged(s);
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) :665
void PathGeometryRenderer__OnStrokeRemoved_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeRemoved(s);
}

// public float2 get_PreScale() :887
void PathGeometryRenderer__get_PreScale_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PreScale();
}

// public void set_PreScale(float2 value) :888
void PathGeometryRenderer__set_PreScale_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* value)
{
    __this->PreScale(*value);
}

// public void SoftDispose() :1001
void PathGeometryRenderer__SoftDispose_fn(PathGeometryRenderer* __this)
{
    __this->SoftDispose();
}

// public Fuse.Drawing.Stroke get_Stroke() :637
void PathGeometryRenderer__get_Stroke_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke** __retval)
{
    *__retval = __this->Stroke();
}

// public void set_Stroke(Fuse.Drawing.Stroke value) :638
void PathGeometryRenderer__set_Stroke_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* value)
{
    __this->Stroke(value);
}

// internal float4 get_StrokePadding() :798
void PathGeometryRenderer__get_StrokePadding_fn(PathGeometryRenderer* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->StrokePadding();
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() :651
void PathGeometryRenderer__get_Strokes_fn(PathGeometryRenderer* __this, uObject** __retval)
{
    *__retval = __this->Strokes();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject po, Uno.UX.Selector prop) :754
void PathGeometryRenderer__UnoUXIPropertyListenerOnPropertyChanged_fn(PathGeometryRenderer* __this, ::g::Uno::UX::PropertyObject* po, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");

    if (uIs(po, ::TYPES[46/*Fuse.Drawing.Stroke*/]))
        __this->OnStrokeChanged(uCast< ::g::Fuse::Drawing::Stroke*>(po, ::TYPES[46/*Fuse.Drawing.Stroke*/]));
    else if (uIs(po, ::TYPES[47/*Fuse.Drawing.Brush*/]))
        __this->OnShadingChanged();
    else
        U_THROW(::g::Uno::Exception::New1());
}

// private void UpdateAa() :910
void PathGeometryRenderer__UpdateAa_fn(PathGeometryRenderer* __this)
{
    __this->UpdateAa();
}

// public generated void add_VisualInvalidated(Uno.Action value) :856
void PathGeometryRenderer__add_VisualInvalidated_fn(PathGeometryRenderer* __this, uDelegate* value)
{
    __this->add_VisualInvalidated(value);
}

// public generated void remove_VisualInvalidated(Uno.Action value) :856
void PathGeometryRenderer__remove_VisualInvalidated_fn(PathGeometryRenderer* __this, uDelegate* value)
{
    __this->remove_VisualInvalidated(value);
}

// public PathGeometryRenderer() [instance] :898
void PathGeometryRenderer::ctor_()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", ".ctor()");
    _geometry = ::g::Fuse::Drawing::PathGeometry::New1();
    _density = 1.0f;
    _antialiasing = 1;
    _fillRule = uDelegate::New(::TYPES[34/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__NonZero_fn);
    _preScale = ::g::Uno::Float2__New1(1.0f);
}

// public PathGeometryRenderer(Fuse.Drawing.PathGeometry geometry) [instance] :900
void PathGeometryRenderer::ctor_1(::g::Fuse::Drawing::PathGeometry* geometry)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", ".ctor(Fuse.Drawing.PathGeometry)");
    _geometry = ::g::Fuse::Drawing::PathGeometry::New1();
    _density = 1.0f;
    _antialiasing = 1;
    _fillRule = uDelegate::New(::TYPES[34/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__NonZero_fn);
    _preScale = ::g::Uno::Float2__New1(1.0f);
    Geometry(geometry);
}

// public Fuse.Drawing.Antialiasing get_Antialiasing() [instance] :863
int PathGeometryRenderer::Antialiasing()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_Antialiasing()");
    return _antialiasing;
}

// public void set_Antialiasing(Fuse.Drawing.Antialiasing value) [instance] :864
void PathGeometryRenderer::Antialiasing(int value)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "set_Antialiasing(Fuse.Drawing.Antialiasing)");

    if (value == _antialiasing)
        return;

    _antialiasing = value;
    InvalidateVisual();
}

// public Uno.Rect get_Bounds() [instance] :780
::g::Uno::Rect PathGeometryRenderer::Bounds()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_Bounds()");
    CalcBounds();
    return _bounds;
}

// private void CalcBounds() [instance] :819
void PathGeometryRenderer::CalcBounds()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "CalcBounds()");
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Drawing::PolygonFiller*> > ret15;

    if (_hasBoundsCache)
        return;

    _innerBounds = uPtr(_geometry)->Bounds();
    ::g::Uno::Rect scaled = _innerBounds;
    scaled.Left = (scaled.Left * _preScale.X);
    scaled.Top = (scaled.Top * _preScale.Y);
    scaled.Right = (scaled.Right * _preScale.X);
    scaled.Bottom = (scaled.Bottom * _preScale.Y);
    _bounds = scaled;
    _strokePadding = ::g::Uno::Float4__New1(0.0f);

    if (HasStrokes())
    {
        UpdateAa();
        CompleteStrokeRenderers(Density());
        ::g::Uno::Rect r = scaled;

        for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Drawing::PolygonFiller*> > enum3 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(_strokeRenderers)->Values()), &ret15), ret15); enum3.MoveNext(::TYPES[35/*Uno.Collections.Dictionary<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>.ValueCollection.Enumerator*/]); )
        {
            ::g::Fuse::Drawing::PolygonFiller* s = enum3.Current(::TYPES[35/*Uno.Collections.Dictionary<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>.ValueCollection.Enumerator*/]);
            ::g::Uno::Rect c = uPtr(s)->Bounds();
            r = ::g::Uno::Rect__Union(r, c);
        }

        ::g::Uno::Float2 diffMin = ::g::Uno::Float2__op_Subtraction2(_bounds.Minimum(), r.Minimum());
        ::g::Uno::Float2 diffMax = ::g::Uno::Float2__op_Subtraction2(r.Maximum(), _bounds.Maximum());
        _strokePadding = ::g::Uno::Float4__New2(diffMin.X, diffMin.Y, diffMax.X, diffMax.Y);
        _strokePadding = ::g::Uno::Math::Max7(_strokePadding, ::g::Uno::Float4__New1(0.0f));
        _bounds = r;
    }

    _hasBoundsCache = true;
}

// private void CompleteStrokeRenderers(float density) [instance] :700
void PathGeometryRenderer::CompleteStrokeRenderers(float density)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "CompleteStrokeRenderers(float)");
    ::g::Fuse::Drawing::Stroke* ret16;
    EnsureStrokeRenderers();

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Strokes()), ::TYPES[36/*Uno.Collections.IEnumerable<Fuse.Drawing.Stroke>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Stroke* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[37/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret16), ret16);
        GetStrokeRenderer(s, density);
    }
}

// public float get_Density() [instance] :808
float PathGeometryRenderer::Density()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_Density()");
    return _density;
}

// public void set_Density(float value) [instance] :809
void PathGeometryRenderer::Density(float value)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "set_Density(float)");

    if (_density != value)
    {
        _density = value;
        InvalidateStrokeAndFill();
    }
}

// public void Draw(Fuse.DrawContext dc, float4x4 transform, float2 elementSize) [instance] :979
void PathGeometryRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 elementSize)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "Draw(Fuse.DrawContext,float4x4,float2)");
    Draw1(GetRendererContext(dc, transform, elementSize));
}

// public void Draw(Fuse.Drawing.RendererContext ctx) [instance] :993
void PathGeometryRenderer::Draw1(::g::Fuse::Drawing::RendererContext* ctx)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "Draw(Fuse.Drawing.RendererContext)");
    UpdateAa();
    DrawFills(ctx);
    DrawStrokes(ctx);
}

// internal void DrawFill(Fuse.Drawing.RendererContext ctx, Fuse.Drawing.Brush fill) [instance] :599
void PathGeometryRenderer::DrawFill(::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Brush* fill)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "DrawFill(Fuse.Drawing.RendererContext,Fuse.Drawing.Brush)");
    EnsureFillRenderer(uPtr(ctx)->Density());

    if (!uPtr(fill)->IsCompletelyTransparent())
        uPtr(_fillRenderer)->Draw1(fill, ctx);
}

// private void DrawFills(Fuse.Drawing.RendererContext ctx) [instance] :590
void PathGeometryRenderer::DrawFills(::g::Fuse::Drawing::RendererContext* ctx)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "DrawFills(Fuse.Drawing.RendererContext)");
    ::g::Fuse::Drawing::Brush* ret17;

    if (HasFills())

        for (int i = 0; i < uPtr(_fills)->Count(); i++)
            DrawFill(ctx, (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_fills), uCRef<int>(i), &ret17), ret17));
}

// internal void DrawStroke(Fuse.Drawing.RendererContext ctx, Fuse.Drawing.Stroke s) [instance] :725
void PathGeometryRenderer::DrawStroke(::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Stroke* s)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "DrawStroke(Fuse.Drawing.RendererContext,Fuse.Drawing.Stroke)");
    EnsureStrokeRenderers();

    if (_strokeDensity != uPtr(ctx)->Density())
    {
        uPtr(_strokeRenderers)->Clear();
        _strokeDensity = uPtr(ctx)->Density();
    }

    if ((uPtr(s)->Brush() != NULL) && !uPtr(uPtr(s)->Brush())->IsCompletelyTransparent())
    {
        ::g::Fuse::Drawing::PolygonFiller* sr = GetStrokeRenderer(s, uPtr(ctx)->Density());
        uPtr(sr)->Draw1(uPtr(s)->Brush(), ctx);
    }
}

// private void DrawStrokes(Fuse.Drawing.RendererContext ctx) [instance] :691
void PathGeometryRenderer::DrawStrokes(::g::Fuse::Drawing::RendererContext* ctx)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "DrawStrokes(Fuse.Drawing.RendererContext)");
    ::g::Fuse::Drawing::Stroke* ret18;

    if (HasStrokes())

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Strokes()), ::TYPES[36/*Uno.Collections.IEnumerable<Fuse.Drawing.Stroke>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Drawing::Stroke* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[37/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret18), ret18);
            DrawStroke(ctx, s);
        }
}

// private void EnsureFillRenderer(float density) [instance] :607
void PathGeometryRenderer::EnsureFillRenderer(float density)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "EnsureFillRenderer(float)");
    ::g::Fuse::Drawing::PolygonFiller* ind8;

    if ((_fillDensity != density) || (_fillRenderer == NULL))
    {
        _fillRenderer = (ind8 = _fillRenderer, ((ind8 != NULL) ? ind8 : (::g::Fuse::Drawing::PolygonFiller*)::g::Fuse::Drawing::PolygonFiller::New1(uPtr(_geometry)->ToPolygon(_fillRule, _preScale), _antialiasing, density)));
        _fillDensity = density;
    }
}

// private void EnsureStrokeRenderers() [instance] :671
void PathGeometryRenderer::EnsureStrokeRenderers()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "EnsureStrokeRenderers()");

    if (_strokeRenderers == NULL)
        _strokeRenderers = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[38/*Uno.Collections.Dictionary<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>*/]));
}

// public Fuse.Drawing.Brush get_Fill() [instance] :550
::g::Fuse::Drawing::Brush* PathGeometryRenderer::Fill()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_Fill()");
    ::g::Fuse::Drawing::Brush* ret28;
    return HasFills() ? (::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[48/*Uno.Collections.EnumerableExtensions.FirstOrDefault<Fuse.Drawing.Brush>*/], Fills(), &ret28), ret28) : NULL;
}

// public void set_Fill(Fuse.Drawing.Brush value) [instance] :551
void PathGeometryRenderer::Fill(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "set_Fill(Fuse.Drawing.Brush)");
    ::g::Fuse::Drawing::Brush* ret29;

    if ((HasFills() && (uPtr(_fills)->Count() == 1)) && ((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_fills), uCRef<int>(0), &ret29), ret29) == value))
        return;

    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(Fills()), ::TYPES[50/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]));

    if (value != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Fills()), ::TYPES[50/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), value);
}

// public Uno.Predicate<int> get_FillRule() [instance] :875
uDelegate* PathGeometryRenderer::FillRule()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_FillRule()");
    return _fillRule;
}

// public void set_FillRule(Uno.Predicate<int> value) [instance] :876
void PathGeometryRenderer::FillRule(uDelegate* value)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "set_FillRule(Uno.Predicate<int>)");

    if (::g::Uno::Delegate::op_Equality(value, _fillRule))
        return;

    _fillRule = value;
    InvalidateStrokeAndFill();
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() [instance] :564
uObject* PathGeometryRenderer::Fills()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_Fills()");
    ::g::Uno::Collections::ObservableList* ind11;
    return (uObject*)(ind11 = _fills, ((ind11 != NULL) ? ind11 : (::g::Uno::Collections::ObservableList*)(_fills = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[51/*Uno.Collections.ObservableList<Fuse.Drawing.Brush>*/], uDelegate::New(::TYPES[52/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)PathGeometryRenderer__OnFillAdded_fn, this), uDelegate::New(::TYPES[52/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)PathGeometryRenderer__OnFillRemoved_fn, this))))));
}

// public Fuse.Drawing.PathGeometry get_Geometry() [instance] :764
::g::Fuse::Drawing::PathGeometry* PathGeometryRenderer::Geometry()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_Geometry()");
    return _geometry;
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) [instance] :765
void PathGeometryRenderer::Geometry(::g::Fuse::Drawing::PathGeometry* value)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "set_Geometry(Fuse.Drawing.PathGeometry)");

    if (value == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[26/*"value"*/]));

    if (value == _geometry)
        return;

    _geometry = value;
    GeometryChanged(_geometry);
}

// private void GeometryChanged(Fuse.Drawing.PathGeometry geom) [instance] :854
void PathGeometryRenderer::GeometryChanged(::g::Fuse::Drawing::PathGeometry* geom)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "GeometryChanged(Fuse.Drawing.PathGeometry)");
    InvalidateStrokeAndFill();
}

// public object GetHitPart(float2 p) [instance] :949
uObject* PathGeometryRenderer::GetHitPart(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "GetHitPart(float2)");
    UpdateAa();

    if (HasStrokes())
        CompleteStrokeRenderers(Density());

    GetHitPart1(p, HasFills() ? (uObject*)Fills() : NULL, HasStrokes() ? (uObject*)Strokes() : NULL);
    return NULL;
}

// internal object GetHitPart(float2 p, Uno.Collections.IList<Fuse.Drawing.Brush> fills, Uno.Collections.IList<Fuse.Drawing.Stroke> strokes) [instance] :960
uObject* PathGeometryRenderer::GetHitPart1(::g::Uno::Float2 p, uObject* fills, uObject* strokes)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "GetHitPart(float2,Uno.Collections.IList<Fuse.Drawing.Brush>,Uno.Collections.IList<Fuse.Drawing.Stroke>)");
    ::g::Fuse::Drawing::Stroke* ret19;
    ::g::Fuse::Drawing::Brush* ret20;

    if (strokes != NULL)

        for (uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(strokes), ::TYPES[36/*Uno.Collections.IEnumerable<Fuse.Drawing.Stroke>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Drawing::Stroke* stroke = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[37/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret19), ret19);

            if (uPtr(GetStrokeRenderer(stroke, Density()))->Intersects(p))
                return stroke;
        }

    if (fills != NULL)
    {
        EnsureFillRenderer(Density());

        if (uPtr(_fillRenderer)->Intersects(p))
            return (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(fills), ::TYPES[39/*Uno.Collections.IList<Fuse.Drawing.Brush>*/]), uCRef<int>(0), &ret20), ret20);
    }

    return NULL;
}

// internal Fuse.Drawing.RendererContext GetRendererContext(Fuse.DrawContext dc, float4x4 transform, float2 elementSize) [instance] :984
::g::Fuse::Drawing::RendererContext* PathGeometryRenderer::GetRendererContext(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 elementSize)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "GetRendererContext(Fuse.DrawContext,float4x4,float2)");
    ::g::Fuse::Drawing::RendererContext* collection6;
    collection6 = ::g::Fuse::Drawing::RendererContext::New1();
    uPtr(collection6)->Transform(transform);
    transform;
    uPtr(collection6)->CanvasSize(elementSize);
    elementSize;
    float ind9 = Density();
    uPtr(collection6)->Density(ind9);
    ;
    int ind10 = uPtr(dc)->CullFace();
    uPtr(collection6)->CullFace(ind10);
    ;
    return collection6;
}

// private Fuse.Drawing.PolygonFiller GetStrokeRenderer(Fuse.Drawing.Stroke s, float density) [instance] :707
::g::Fuse::Drawing::PolygonFiller* PathGeometryRenderer::GetStrokeRenderer(::g::Fuse::Drawing::Stroke* s, float density)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "GetStrokeRenderer(Fuse.Drawing.Stroke,float)");
    bool ret21;
    ::g::Fuse::Drawing::PolygonFiller* strokeRenderer;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_strokeRenderers), s, (void**)(&strokeRenderer), &ret21), ret21))
    {
        ::g::Uno::Float2 widthOffset = uPtr(s)->GetDeviceAdjusted(density);
        ::g::Fuse::Drawing::Polygon* strokePolygon = uPtr(uPtr(_geometry)->ToPolygon(_fillRule, _preScale))->Stroke(::g::Uno::Math::Max1(0.0f, widthOffset.Item(0)), widthOffset.Item(1), s->LineCap(), s->LineCap());
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_strokeRenderers), s, strokeRenderer = ::g::Fuse::Drawing::PolygonFiller::New1(strokePolygon, _antialiasing, density));
    }

    return strokeRenderer;
}

// public bool get_HasFills() [instance] :569
bool PathGeometryRenderer::HasFills()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_HasFills()");
    return (_fills != NULL) && (uPtr(_fills)->Count() > 0);
}

// public bool get_HasStrokes() [instance] :656
bool PathGeometryRenderer::HasStrokes()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_HasStrokes()");
    return (_strokes != NULL) && (uPtr(_strokes)->Count() > 0);
}

// internal Uno.Rect get_InnerBounds() [instance] :789
::g::Uno::Rect PathGeometryRenderer::InnerBounds()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_InnerBounds()");
    CalcBounds();
    return _innerBounds;
}

// private void InvalidateStrokeAndFill() [instance] :920
void PathGeometryRenderer::InvalidateStrokeAndFill()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "InvalidateStrokeAndFill()");
    ::g::Fuse::Drawing::Stroke* ret22;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Drawing::Stroke*>, uStrong< ::g::Fuse::Drawing::PolygonFiller*> > ret23;
    _hasBoundsCache = false;

    if (HasStrokes())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Strokes()), ::TYPES[40/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/])); i++)
            OnStrokeChanged((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Strokes()), ::TYPES[41/*Uno.Collections.IList<Fuse.Drawing.Stroke>*/]), uCRef<int>(i), &ret22), ret22));

    if (_strokeRenderers != NULL)
    {
        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Drawing::Stroke*>, uStrong< ::g::Fuse::Drawing::PolygonFiller*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_strokeRenderers), &ret23), ret23); enum4.MoveNext(::TYPES[42/*Uno.Collections.Dictionary<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Fuse::Drawing::Stroke*>, uStrong< ::g::Fuse::Drawing::PolygonFiller*> > p = enum4.Current(::TYPES[42/*Uno.Collections.Dictionary<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>.Enumerator*/]);
            uPtr(p.Value(::TYPES[43/*Uno.Collections.KeyValuePair<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>*/]))->Dispose();
        }

        _strokeRenderers = NULL;
    }

    if (_fillRenderer != NULL)
    {
        uPtr(_fillRenderer)->Dispose();
        _fillRenderer = NULL;
    }

    InvalidateVisual();
}

// private void InvalidateVisual() [instance] :944
void PathGeometryRenderer::InvalidateVisual()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "InvalidateVisual()");

    if (::g::Uno::Delegate::op_Inequality(VisualInvalidated1, NULL))
        uPtr(VisualInvalidated1)->InvokeVoid();
}

// private void OnFillAdded(Fuse.Drawing.Brush f) [instance] :572
void PathGeometryRenderer::OnFillAdded(::g::Fuse::Drawing::Brush* f)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "OnFillAdded(Fuse.Drawing.Brush)");

    if (uIs(f, ::TYPES[45/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[45/*Fuse.Drawing.DynamicBrush*/]))->AddPropertyListener((uObject*)this);

    OnShadingChanged();
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) [instance] :581
void PathGeometryRenderer::OnFillRemoved(::g::Fuse::Drawing::Brush* f)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "OnFillRemoved(Fuse.Drawing.Brush)");

    if (uIs(f, ::TYPES[45/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[45/*Fuse.Drawing.DynamicBrush*/]))->RemovePropertyListener((uObject*)this);

    OnShadingChanged();
}

// private void OnShadingChanged() [instance] :905
void PathGeometryRenderer::OnShadingChanged()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "OnShadingChanged()");
    InvalidateVisual();
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) [instance] :659
void PathGeometryRenderer::OnStrokeAdded(::g::Fuse::Drawing::Stroke* s)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "OnStrokeAdded(Fuse.Drawing.Stroke)");
    uPtr(s)->AddPropertyListener((uObject*)this);
    OnStrokeChanged(s);
}

// private void OnStrokeChanged(Fuse.Drawing.Stroke s) [instance] :676
void PathGeometryRenderer::OnStrokeChanged(::g::Fuse::Drawing::Stroke* s)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "OnStrokeChanged(Fuse.Drawing.Stroke)");
    bool ret24;
    bool ret25;

    if (_strokeRenderers != NULL)
    {
        ::g::Fuse::Drawing::PolygonFiller* strokeRenderer = NULL;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_strokeRenderers), s, (void**)(&strokeRenderer), &ret24), ret24))
        {
            uPtr(strokeRenderer)->Dispose();
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_strokeRenderers), s, &ret25);
        }
    }

    InvalidateVisual();
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) [instance] :665
void PathGeometryRenderer::OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "OnStrokeRemoved(Fuse.Drawing.Stroke)");
    uPtr(s)->RemovePropertyListener((uObject*)this);
    OnStrokeChanged(s);
}

// public float2 get_PreScale() [instance] :887
::g::Uno::Float2 PathGeometryRenderer::PreScale()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_PreScale()");
    return _preScale;
}

// public void set_PreScale(float2 value) [instance] :888
void PathGeometryRenderer::PreScale(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "set_PreScale(float2)");

    if (::g::Uno::Float2__op_Inequality(_preScale, value))
    {
        _preScale = value;
        InvalidateStrokeAndFill();
    }
}

// public void SoftDispose() [instance] :1001
void PathGeometryRenderer::SoftDispose()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "SoftDispose()");
    ::g::Fuse::Drawing::Stroke* ret26;
    bool ret27;

    if (_fillRenderer != NULL)
    {
        uPtr(_fillRenderer)->Dispose();
        _fillRenderer = NULL;
    }

    if (_strokeRenderers != NULL)
    {
        for (uObject* enum7 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Strokes()), ::TYPES[36/*Uno.Collections.IEnumerable<Fuse.Drawing.Stroke>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum7), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Drawing::Stroke* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum7), ::TYPES[37/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret26), ret26);
            ::g::Fuse::Drawing::PolygonFiller* strokeRenderer = NULL;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_strokeRenderers), s, (void**)(&strokeRenderer), &ret27), ret27))
                uPtr(strokeRenderer)->Dispose();
        }

        uPtr(_strokeRenderers)->Clear();
        _strokeRenderers = NULL;
    }
}

// public Fuse.Drawing.Stroke get_Stroke() [instance] :637
::g::Fuse::Drawing::Stroke* PathGeometryRenderer::Stroke()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_Stroke()");
    ::g::Fuse::Drawing::Stroke* ret30;
    return HasStrokes() ? (::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[53/*Uno.Collections.EnumerableExtensions.FirstOrDefault<Fuse.Drawing.Stroke>*/], (uObject*)_strokes, &ret30), ret30) : NULL;
}

// public void set_Stroke(Fuse.Drawing.Stroke value) [instance] :638
void PathGeometryRenderer::Stroke(::g::Fuse::Drawing::Stroke* value)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "set_Stroke(Fuse.Drawing.Stroke)");
    ::g::Fuse::Drawing::Stroke* ret31;

    if ((HasStrokes() && (uPtr(_strokes)->Count() == 1)) && ((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_strokes), uCRef<int>(0), &ret31), ret31) == value))
        return;

    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(Strokes()), ::TYPES[40/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]));

    if (value != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Strokes()), ::TYPES[40/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), value);
}

// internal float4 get_StrokePadding() [instance] :798
::g::Uno::Float4 PathGeometryRenderer::StrokePadding()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_StrokePadding()");
    CalcBounds();
    return _strokePadding;
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() [instance] :651
uObject* PathGeometryRenderer::Strokes()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "get_Strokes()");
    ::g::Uno::Collections::ObservableList* ind12;
    return (uObject*)(ind12 = _strokes, ((ind12 != NULL) ? ind12 : (::g::Uno::Collections::ObservableList*)(_strokes = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[54/*Uno.Collections.ObservableList<Fuse.Drawing.Stroke>*/], uDelegate::New(::TYPES[55/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)PathGeometryRenderer__OnStrokeAdded_fn, this), uDelegate::New(::TYPES[55/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)PathGeometryRenderer__OnStrokeRemoved_fn, this))))));
}

// private void UpdateAa() [instance] :910
void PathGeometryRenderer::UpdateAa()
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "UpdateAa()");

    if (_cachedAntialiasing == Antialiasing())
        return;

    _cachedAntialiasing = Antialiasing();
    InvalidateStrokeAndFill();
}

// public generated void add_VisualInvalidated(Uno.Action value) [instance] :856
void PathGeometryRenderer::add_VisualInvalidated(uDelegate* value)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "add_VisualInvalidated(Uno.Action)");
    VisualInvalidated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(VisualInvalidated1, value), ::TYPES[56/*Uno.Action*/]);
}

// public generated void remove_VisualInvalidated(Uno.Action value) [instance] :856
void PathGeometryRenderer::remove_VisualInvalidated(uDelegate* value)
{
    uStackFrame __("Fuse.Drawing.PathGeometryRenderer", "remove_VisualInvalidated(Uno.Action)");
    VisualInvalidated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(VisualInvalidated1, value), ::TYPES[56/*Uno.Action*/]);
}

// public PathGeometryRenderer New() [static] :898
PathGeometryRenderer* PathGeometryRenderer::New1()
{
    PathGeometryRenderer* obj13 = (PathGeometryRenderer*)uNew(PathGeometryRenderer_typeof());
    obj13->ctor_();
    return obj13;
}

// public PathGeometryRenderer New(Fuse.Drawing.PathGeometry geometry) [static] :900
PathGeometryRenderer* PathGeometryRenderer::New2(::g::Fuse::Drawing::PathGeometry* geometry)
{
    PathGeometryRenderer* obj14 = (PathGeometryRenderer*)uNew(PathGeometryRenderer_typeof());
    obj14->ctor_1(geometry);
    return obj14;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\$.uno
// ---------------------------------------------------------------

// public partial sealed class Polygon :161
// {
static void Polygon_build(uType* type)
{
    ::STRINGS[27] = uString::Const("Position");
    ::STRINGS[28] = uString::Const("Normal");
    ::STRINGS[29] = uString::Const("Tangent");
    ::STRINGS[30] = uString::Const("Path");
    ::TYPES[34] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[57] = ::g::Fuse::Drawing::Cache_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[58] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Float3_typeof());
    ::TYPES[59] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[60] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Geometry::Triangle2D_typeof());
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[61] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Geometry::Triangle2D_typeof());
    ::TYPES[33] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[14] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[62] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof());
    ::TYPES[63] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::Float3_typeof());
    ::TYPES[64] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float3_typeof());
    ::TYPES[65] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::Float4_typeof());
    ::TYPES[66] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[67] = ::g::Fuse::Drawing::Contour_typeof()->Array();
    ::TYPES[68] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[69] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[70] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Fuse::Drawing::Tesselation::Face_typeof(), ::g::Uno::Geometry::Triangle2D_typeof());
    ::TYPES[71] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Face_typeof(), ::g::Uno::Geometry::Triangle2D_typeof());
    ::TYPES[72] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Tesselation::Face_typeof());
    ::TYPES[73] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Face_typeof());
    ::TYPES[74] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Face_typeof());
    ::TYPES[75] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof());
    ::TYPES[76] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof());
    ::TYPES[77] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[17] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[78] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::Float2_typeof());
    ::TYPES[9] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[79] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::PolygonDrawable_typeof());
    ::TYPES[80] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Drawing::PolygonDrawable_typeof());
    ::TYPES[81] = ::g::Fuse::Drawing::PolygonDrawable_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Drawing::Contour_typeof()->Array(), offsetof(::g::Fuse::Drawing::Polygon, _boundaryContours), 0,
        ::g::Fuse::Drawing::Cache_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof()), offsetof(::g::Fuse::Drawing::Polygon, _contours), 0,
        ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(::g::Fuse::Drawing::Polygon, _windingRule), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Contours", NULL, (void*)Polygon__get_Contours_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof()), 0),
        new uFunction("Extrude", NULL, (void*)Polygon__Extrude_fn, 0, false, ::g::Uno::Content::Models::ModelMesh_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("GetBoundaryContours", NULL, (void*)Polygon__GetBoundaryContours_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof()), 0),
        new uFunction("get_IsDegenerate", NULL, (void*)Polygon__get_IsDegenerate_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Polygon__New1_fn, 0, true, Polygon_typeof(), 1, ::g::Fuse::Drawing::Contour_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)Polygon__New2_fn, 0, true, Polygon_typeof(), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof())),
        new uFunction(".ctor", NULL, (void*)Polygon__New3_fn, 0, true, Polygon_typeof(), 2, ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof()), ::g::Fuse::Drawing::Contour_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)Polygon__New4_fn, 0, true, Polygon_typeof(), 2, ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof())),
        new uFunction("Stroke", NULL, (void*)Polygon__Stroke_fn, 0, false, Polygon_typeof(), 4, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::LineCap_typeof(), ::g::Fuse::Drawing::LineCap_typeof()),
        new uFunction("Triangulate", NULL, (void*)Polygon__Triangulate_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::PolygonDrawable_typeof()), 0),
        new uFunction("get_WindingRule", NULL, (void*)Polygon__get_WindingRule_fn, 0, false, ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof()), 0));
}

uType* Polygon_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Polygon);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Polygon", options);
    type->fp_build_ = Polygon_build;
    return type;
}

// public Polygon(Fuse.Drawing.Contour[] contours) :510
void Polygon__ctor__fn(Polygon* __this, uArray* contours)
{
    __this->ctor_(contours);
}

// public Polygon(Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) :500
void Polygon__ctor_1_fn(Polygon* __this, uObject* contours)
{
    __this->ctor_1(contours);
}

// public Polygon(Uno.Predicate<int> windingRule, Fuse.Drawing.Contour[] contours) :514
void Polygon__ctor_2_fn(Polygon* __this, uDelegate* windingRule, uArray* contours)
{
    __this->ctor_2(windingRule, contours);
}

// public Polygon(Uno.Predicate<int> windingRule, Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) :504
void Polygon__ctor_3_fn(Polygon* __this, uDelegate* windingRule, uObject* contours)
{
    __this->ctor_3(windingRule, contours);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Contour> get_Contours() :497
void Polygon__get_Contours_fn(Polygon* __this, uObject** __retval)
{
    *__retval = __this->Contours();
}

// private Uno.Geometry.Triangle2D CreateTriangle(Fuse.Drawing.Tesselation.Face face) :389
void Polygon__CreateTriangle_fn(Polygon* __this, ::g::Fuse::Drawing::Tesselation::Face* face, ::g::Uno::Geometry::Triangle2D** __retval)
{
    *__retval = __this->CreateTriangle(face);
}

// public Uno.Content.Models.ModelMesh Extrude(float depth, [float smoothingThreshold]) :163
void Polygon__Extrude_fn(Polygon* __this, float* depth, float* smoothingThreshold, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = __this->Extrude(*depth, *smoothingThreshold);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Contour> GetBoundaryContours() :564
void Polygon__GetBoundaryContours_fn(Polygon* __this, uObject** __retval)
{
    *__retval = __this->GetBoundaryContours();
}

// internal Uno.Collections.IEnumerable<Uno.Geometry.Triangle2D> GetFillTriangles() :381
void Polygon__GetFillTriangles_fn(Polygon* __this, uObject** __retval)
{
    *__retval = __this->GetFillTriangles();
}

// internal float2[] GetTriangleVertices() :391
void Polygon__GetTriangleVertices_fn(Polygon* __this, uArray** __retval)
{
    *__retval = __this->GetTriangleVertices();
}

// public bool get_IsDegenerate() :583
void Polygon__get_IsDegenerate_fn(Polygon* __this, bool* __retval)
{
    *__retval = __this->IsDegenerate();
}

// public Polygon New(Fuse.Drawing.Contour[] contours) :510
void Polygon__New1_fn(uArray* contours, Polygon** __retval)
{
    *__retval = Polygon::New1(contours);
}

// public Polygon New(Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) :500
void Polygon__New2_fn(uObject* contours, Polygon** __retval)
{
    *__retval = Polygon::New2(contours);
}

// public Polygon New(Uno.Predicate<int> windingRule, Fuse.Drawing.Contour[] contours) :514
void Polygon__New3_fn(uDelegate* windingRule, uArray* contours, Polygon** __retval)
{
    *__retval = Polygon::New3(windingRule, contours);
}

// public Polygon New(Uno.Predicate<int> windingRule, Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) :504
void Polygon__New4_fn(uDelegate* windingRule, uObject* contours, Polygon** __retval)
{
    *__retval = Polygon::New4(windingRule, contours);
}

// public Fuse.Drawing.Polygon Stroke(float Width, [float Offset], [Fuse.Drawing.LineCap StartCap], [Fuse.Drawing.LineCap EndCap]) :260
void Polygon__Stroke_fn(Polygon* __this, float* Width, float* Offset, int* StartCap, int* EndCap, Polygon** __retval)
{
    *__retval = __this->Stroke(*Width, *Offset, *StartCap, *EndCap);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.PolygonDrawable> Triangulate() :374
void Polygon__Triangulate_fn(Polygon* __this, uObject** __retval)
{
    *__retval = __this->Triangulate();
}

// public Uno.Predicate<int> get_WindingRule() :492
void Polygon__get_WindingRule_fn(Polygon* __this, uDelegate** __retval)
{
    *__retval = __this->WindingRule();
}

// public Polygon(Fuse.Drawing.Contour[] contours) [instance] :510
void Polygon::ctor_(uArray* contours)
{
    uStackFrame __("Fuse.Drawing.Polygon", ".ctor(Fuse.Drawing.Contour[])");
    ctor_2(uDelegate::New(::TYPES[34/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__NonZero_fn), contours);
}

// public Polygon(Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) [instance] :500
void Polygon::ctor_1(uObject* contours)
{
    uStackFrame __("Fuse.Drawing.Polygon", ".ctor(Uno.Collections.IEnumerable<Fuse.Drawing.Contour>)");
    ctor_3(uDelegate::New(::TYPES[34/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__NonZero_fn), contours);
}

// public Polygon(Uno.Predicate<int> windingRule, Fuse.Drawing.Contour[] contours) [instance] :514
void Polygon::ctor_2(uDelegate* windingRule, uArray* contours)
{
    uStackFrame __("Fuse.Drawing.Polygon", ".ctor(Uno.Predicate<int>,Fuse.Drawing.Contour[])");
    _windingRule = windingRule;
    _contours = ((::g::Fuse::Drawing::Cache*)::g::Fuse::Drawing::Cache::New1(::TYPES[57/*Fuse.Drawing.Cache<Fuse.Drawing.Contour>*/], contours));
}

// public Polygon(Uno.Predicate<int> windingRule, Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) [instance] :504
void Polygon::ctor_3(uDelegate* windingRule, uObject* contours)
{
    uStackFrame __("Fuse.Drawing.Polygon", ".ctor(Uno.Predicate<int>,Uno.Collections.IEnumerable<Fuse.Drawing.Contour>)");
    _windingRule = windingRule;
    _contours = ((::g::Fuse::Drawing::Cache*)::g::Fuse::Drawing::Cache::New2(::TYPES[57/*Fuse.Drawing.Cache<Fuse.Drawing.Contour>*/], contours));
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Contour> get_Contours() [instance] :497
uObject* Polygon::Contours()
{
    uStackFrame __("Fuse.Drawing.Polygon", "get_Contours()");
    return (uObject*)uPtr(_contours)->Items();
}

// private Uno.Geometry.Triangle2D CreateTriangle(Fuse.Drawing.Tesselation.Face face) [instance] :389
::g::Uno::Geometry::Triangle2D* Polygon::CreateTriangle(::g::Fuse::Drawing::Tesselation::Face* face)
{
    uStackFrame __("Fuse.Drawing.Polygon", "CreateTriangle(Fuse.Drawing.Tesselation.Face)");
    return uPtr(face)->ToTriangle();
}

// public Uno.Content.Models.ModelMesh Extrude(float depth, [float smoothingThreshold]) [instance] :163
::g::Uno::Content::Models::ModelMesh* Polygon::Extrude(float depth, float smoothingThreshold)
{
    uStackFrame __("Fuse.Drawing.Polygon", "Extrude(float,[float])");
    ::g::Uno::Geometry::Triangle2D* ret10;
    ::g::Fuse::Drawing::Contour* ret11;
    Polygon* poly = this;
    ::g::Uno::Collections::List* vertices = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[58/*Uno.Collections.List<float3>*/]);
    ::g::Uno::Collections::List* normals = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[58/*Uno.Collections.List<float3>*/]);
    ::g::Uno::Collections::List* tangents = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[59/*Uno.Collections.List<float4>*/]);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(poly->GetFillTriangles()), ::TYPES[60/*Uno.Collections.IEnumerable<Uno.Geometry.Triangle2D>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Geometry::Triangle2D* tri = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[61/*Uno.Collections.IEnumerator<Uno.Geometry.Triangle2D>*/]), &ret10), ret10);
        ::g::Uno::Float3 z = ::g::Uno::Float3__New2(0.0f, 0.0f, -1.0f);
        ::g::Uno::Float3 nz = ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f);
        ::g::Uno::Float4 t = ::g::Uno::Float4__New2(1.0f, 0.0f, 0.0f, 1.0f);
        ::g::Uno::Float4 nt = ::g::Uno::Float4__New2(1.0f, 0.0f, 0.0f, -1.0f);
        ::g::Uno::Collections::List__Add_fn(uPtr(vertices), uCRef(::g::Uno::Float3__New4(uPtr(tri)->C, 0.0f)));
        ::g::Uno::Collections::List__Add_fn(uPtr(normals), uCRef(z));
        ::g::Uno::Collections::List__Add_fn(uPtr(tangents), uCRef(t));
        ::g::Uno::Collections::List__Add_fn(vertices, uCRef(::g::Uno::Float3__New4(tri->B, 0.0f)));
        ::g::Uno::Collections::List__Add_fn(normals, uCRef(z));
        ::g::Uno::Collections::List__Add_fn(tangents, uCRef(t));
        ::g::Uno::Collections::List__Add_fn(vertices, uCRef(::g::Uno::Float3__New4(tri->A, 0.0f)));
        ::g::Uno::Collections::List__Add_fn(normals, uCRef(z));
        ::g::Uno::Collections::List__Add_fn(tangents, uCRef(t));
        ::g::Uno::Collections::List__Add_fn(vertices, uCRef(::g::Uno::Float3__New4(tri->A, depth)));
        ::g::Uno::Collections::List__Add_fn(normals, uCRef(nz));
        ::g::Uno::Collections::List__Add_fn(tangents, uCRef(nt));
        ::g::Uno::Collections::List__Add_fn(vertices, uCRef(::g::Uno::Float3__New4(tri->B, depth)));
        ::g::Uno::Collections::List__Add_fn(normals, uCRef(nz));
        ::g::Uno::Collections::List__Add_fn(tangents, uCRef(nt));
        ::g::Uno::Collections::List__Add_fn(vertices, uCRef(::g::Uno::Float3__New4(tri->C, depth)));
        ::g::Uno::Collections::List__Add_fn(normals, uCRef(nz));
        ::g::Uno::Collections::List__Add_fn(tangents, uCRef(nt));
    }

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(poly->GetBoundaryContours()), ::TYPES[33/*Uno.Collections.IEnumerable<Fuse.Drawing.Contour>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Contour* contour = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[14/*Uno.Collections.IEnumerator<Fuse.Drawing.Contour>*/]), &ret11), ret11);
        uArray* faceNormals = uArray::New(::TYPES[2/*float2[]*/], uPtr(contour)->VertexCount());

        for (int i = 0; i < contour->VertexCount(); i++)
        {
            ::g::Uno::Float2 tmp = ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(uPtr(contour)->Item(i), uPtr(contour)->Item(i - 1)));
            uPtr(faceNormals)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Float2__New2(tmp.Y, -tmp.X);
        }

        for (int i1 = 0; i1 < contour->VertexCount(); i1++)
        {
            int fpi = i1 - 1;
            int fni = i1 + 1;

            while (fpi < 0)
                fpi = fpi + uPtr(faceNormals)->Length();

            while (fni >= uPtr(faceNormals)->Length())
                fni = fni - uPtr(faceNormals)->Length();

            ::g::Uno::Float2 fprev = uPtr(faceNormals)->Item< ::g::Uno::Float2>(fpi);
            ::g::Uno::Float2 fcurrent = faceNormals->Item< ::g::Uno::Float2>(i1);
            ::g::Uno::Float2 fnext = faceNormals->Item< ::g::Uno::Float2>(fni);
            ::g::Uno::Float2 l = uPtr(contour)->Item(i1 - 1);
            ::g::Uno::Float3 tl = ::g::Uno::Float3__New4(l, 0.0f);
            ::g::Uno::Float3 bl = ::g::Uno::Float3__New4(l, depth);
            ::g::Uno::Float2 c = contour->Item(i1);
            ::g::Uno::Float3 tc = ::g::Uno::Float3__New4(c, 0.0f);
            ::g::Uno::Float3 bc = ::g::Uno::Float3__New4(c, depth);
            ::g::Uno::Float3 nl = (::g::Uno::Vector::Dot(fprev, fcurrent) > smoothingThreshold) ? ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply1(fprev, 0.5f), ::g::Uno::Float2__op_Multiply1(fcurrent, 0.5f)), 0.0f) : ::g::Uno::Float3__New4(fcurrent, 0.0f);
            ::g::Uno::Float3 nc = (::g::Uno::Vector::Dot(fcurrent, fnext) > smoothingThreshold) ? ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply1(fnext, 0.5f), ::g::Uno::Float2__op_Multiply1(fcurrent, 0.5f)), 0.0f) : ::g::Uno::Float3__New4(fcurrent, 0.0f);
            ::g::Uno::Float4 t1 = ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 1.0f);
            ::g::Uno::Collections::List__Add_fn(uPtr(vertices), uCRef(tl));
            ::g::Uno::Collections::List__Add_fn(uPtr(normals), uCRef(nl));
            ::g::Uno::Collections::List__Add_fn(uPtr(tangents), uCRef(t1));
            ::g::Uno::Collections::List__Add_fn(vertices, uCRef(tc));
            ::g::Uno::Collections::List__Add_fn(normals, uCRef(nc));
            ::g::Uno::Collections::List__Add_fn(tangents, uCRef(t1));
            ::g::Uno::Collections::List__Add_fn(vertices, uCRef(bl));
            ::g::Uno::Collections::List__Add_fn(normals, uCRef(nl));
            ::g::Uno::Collections::List__Add_fn(tangents, uCRef(t1));
            ::g::Uno::Collections::List__Add_fn(vertices, uCRef(bl));
            ::g::Uno::Collections::List__Add_fn(normals, uCRef(nl));
            ::g::Uno::Collections::List__Add_fn(tangents, uCRef(t1));
            ::g::Uno::Collections::List__Add_fn(vertices, uCRef(tc));
            ::g::Uno::Collections::List__Add_fn(normals, uCRef(nc));
            ::g::Uno::Collections::List__Add_fn(tangents, uCRef(t1));
            ::g::Uno::Collections::List__Add_fn(vertices, uCRef(bc));
            ::g::Uno::Collections::List__Add_fn(normals, uCRef(nc));
            ::g::Uno::Collections::List__Add_fn(tangents, uCRef(t1));
        }
    }

    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[62/*Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray>*/]);
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[27/*"Position"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[63/*Uno.Collections.EnumerableExtensions.ToArray<float3>*/], (uObject*)vertices)));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[28/*"Normal"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[63/*Uno.Collections.EnumerableExtensions.ToArray<float3>*/], (uObject*)normals)));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[29/*"Tangent"*/], ::g::Uno::Content::Models::VertexAttributeArray::New5((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[65/*Uno.Collections.EnumerableExtensions.ToArray<float4>*/], (uObject*)tangents)));
    return ::g::Uno::Content::Models::ModelMesh::New1(::STRINGS[30/*"Path"*/], 1, dict, NULL);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Contour> GetBoundaryContours() [instance] :564
uObject* Polygon::GetBoundaryContours()
{
    uStackFrame __("Fuse.Drawing.Polygon", "GetBoundaryContours()");

    if (IsDegenerate())
        _boundaryContours = uArray::New(::TYPES[67/*Fuse.Drawing.Contour[]*/], 0);

    if (_boundaryContours == NULL)
    {
        ::g::Fuse::Drawing::Tesselation::Mesh* mesh = ::g::Fuse::Drawing::Tesselation::MeshBuilder::CreateFromContours(Contours());
        uPtr(mesh)->ComputeInterior(_windingRule);
        mesh->SetWindingNumber(1);
        mesh->DeleteInternalEdges();
        _boundaryContours = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[68/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.Contour>*/], mesh->GetContours()));
        mesh->Dispose();
    }

    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[69/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Contour>*/], _boundaryContours));
}

// internal Uno.Collections.IEnumerable<Uno.Geometry.Triangle2D> GetFillTriangles() [instance] :381
uObject* Polygon::GetFillTriangles()
{
    uStackFrame __("Fuse.Drawing.Polygon", "GetFillTriangles()");
    ::g::Fuse::Drawing::Tesselation::Mesh* mesh = ::g::Fuse::Drawing::Tesselation::MeshBuilder::CreateFromContours(Contours());
    uPtr(mesh)->ComputeInterior(_windingRule);
    mesh->TessellateInterior();
    return (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[70/*Uno.Collections.EnumerableExtensions.Select<Fuse.Drawing.Tesselation.Face, Uno.Geometry.Triangle2D>*/], mesh->InteriorFaces(), uDelegate::New(::TYPES[71/*Uno.Func<Fuse.Drawing.Tesselation.Face, Uno.Geometry.Triangle2D>*/], (void*)Polygon__CreateTriangle_fn, this));
}

// internal float2[] GetTriangleVertices() [instance] :391
uArray* Polygon::GetTriangleVertices()
{
    uStackFrame __("Fuse.Drawing.Polygon", "GetTriangleVertices()");
    ::g::Fuse::Drawing::Tesselation::Face* ret12;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* ret13;
    ::g::Fuse::Drawing::Tesselation::Mesh* mesh = ::g::Fuse::Drawing::Tesselation::MeshBuilder::CreateFromContours(Contours());
    uPtr(mesh)->ComputeInterior(_windingRule);
    mesh->TessellateInterior();
    uArray* vertices = uArray::New(::TYPES[2/*float2[]*/], ::g::Uno::Collections::EnumerableExtensions::Count(::TYPES[72/*Uno.Collections.EnumerableExtensions.Count<Fuse.Drawing.Tesselation.Face>*/], mesh->InteriorFaces()) * 3);
    int v = 0;

    for (uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(mesh->InteriorFaces()), ::TYPES[73/*Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Face>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Tesselation::Face* face = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[74/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.Face>*/]), &ret12), ret12);

        for (uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(face)->EdgeLoop()), ::TYPES[75/*Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Drawing::Tesselation::HalfEdge* vert = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[76/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.HalfEdge>*/]), &ret13), ret13);
            uPtr(vertices)->Item< ::g::Uno::Float2>(v++) = uPtr(uPtr(vert)->Origin())->Coords();
        }
    }

    mesh->Dispose();
    return vertices;
}

// public bool get_IsDegenerate() [instance] :583
bool Polygon::IsDegenerate()
{
    uStackFrame __("Fuse.Drawing.Polygon", "get_IsDegenerate()");
    return uPtr(_contours)->Length() < 1;
}

// public Fuse.Drawing.Polygon Stroke(float Width, [float Offset], [Fuse.Drawing.LineCap StartCap], [Fuse.Drawing.LineCap EndCap]) [instance] :260
Polygon* Polygon::Stroke(float Width, float Offset, int StartCap, int EndCap)
{
    uStackFrame __("Fuse.Drawing.Polygon", "Stroke(float,[float],[Fuse.Drawing.LineCap],[Fuse.Drawing.LineCap])");
    ::g::Fuse::Drawing::Contour* ret14;
    ::g::Uno::Float2 ret15;
    float _width = Width;
    float _offset = Offset - (Width * 0.5f);
    ::g::Uno::Collections::List* strokeContours = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[77/*Uno.Collections.List<Fuse.Drawing.Contour>*/]);

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Contours()), ::TYPES[33/*Uno.Collections.IEnumerable<Fuse.Drawing.Contour>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[18/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Contour* contour = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[14/*Uno.Collections.IEnumerator<Fuse.Drawing.Contour>*/]), &ret14), ret14);
        int vertexCount = uPtr(contour)->VertexCount();

        if (vertexCount < 2)
            continue;

        ::g::Uno::Collections::List* outer = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[17/*Uno.Collections.List<float2>*/]);
        ::g::Uno::Collections::List* inner = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[17/*Uno.Collections.List<float2>*/]);
        float dist = 0.0f;
        ::g::Uno::Float2 startInner = ::g::Uno::Float2__New1(0.0f);
        ::g::Uno::Float2 startOuter = ::g::Uno::Float2__New1(0.0f);
        ::g::Uno::Float2 endInner = ::g::Uno::Float2__New1(0.0f);
        ::g::Uno::Float2 endOuter = ::g::Uno::Float2__New1(0.0f);

        for (int i = 0; i < vertexCount; i++)
        {
            ::g::Uno::Float2 last = uPtr(contour)->Item(i - 1);
            ::g::Uno::Float2 current = contour->Item(i);
            ::g::Uno::Float2 next = contour->Item(i + 1);
            ::g::Uno::Float2 lv = ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(current, last));
            ::g::Uno::Float2 lvn = ::g::Uno::Float2__New2(-lv.Y, lv.X);
            ::g::Uno::Float2 rv = ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(next, current));
            ::g::Uno::Float2 rvn = ::g::Uno::Float2__New2(-rv.Y, rv.X);
            float len = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(last, current));

            if (i > 0)
                dist = dist + len;

            ::g::Uno::Float2 outerV;
            ::g::Uno::Float2 innerV;

            if (!contour->IsClosed() && (i == 0))
            {
                startInner = innerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(rvn, _offset));
                startOuter = outerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(rvn, _width + _offset));
            }
            else if (!uPtr(contour)->IsClosed() && (i == (vertexCount - 1)))
            {
                endInner = innerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(lvn, _offset));
                endOuter = outerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(lvn, _width + _offset));
            }
            else
            {
                ::g::Uno::Float2 bn0 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(rvn, lvn), 2.0f);
                ::g::Uno::Float2 bisectNormal = ((::g::Uno::Math::Abs1(bn0.X) + ::g::Uno::Math::Abs1(bn0.Y)) < 1e-05f) ? lvn : ::g::Uno::Vector::Normalize(bn0);
                float angle = ::g::Uno::Geometry::Collision2D::AngleBetween(lv, bisectNormal);

                if (((angle < 0.1f) || (angle > 3.04159284f)) || (len < 1.0f))
                {
                    outerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(bisectNormal, _width + _offset));
                    innerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(bisectNormal, _offset));
                }
                else
                {
                    ::g::Uno::Float2 lvo = ::g::Uno::Float2__op_Addition2(last, ::g::Uno::Float2__op_Multiply1(lvn, _width + _offset));
                    ::g::Uno::Float2 lvi = ::g::Uno::Float2__op_Addition2(last, ::g::Uno::Float2__op_Multiply1(lvn, _offset));
                    outerV = ::g::Uno::Geometry::Collision2D::LineIntersectionPointVector(lvo, lv, current, bisectNormal);
                    innerV = ::g::Uno::Geometry::Collision2D::LineIntersectionPointVector(lvi, lv, current, bisectNormal);
                }
            }

            ::g::Uno::Collections::List__Add_fn(uPtr(outer), uCRef(outerV));
            ::g::Uno::Collections::List__Add_fn(uPtr(inner), uCRef(innerV));
        }

        uArray* innerRev = uArray::New(::TYPES[2/*float2[]*/], inner->Count());

        for (int i1 = 0; i1 < inner->Count(); ++i1)
            uPtr(innerRev)->Item< ::g::Uno::Float2>(i1) = (::g::Uno::Collections::List__get_Item_fn(uPtr(inner), uCRef<int>((uPtr(inner)->Count() - i1) - 1), &ret15), ret15);

        if (contour->IsClosed())
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(strokeContours), ::g::Fuse::Drawing::Contour::New2(true, (uObject*)outer));
            ::g::Uno::Collections::List__Add_fn(strokeContours, ::g::Fuse::Drawing::Contour::New1(true, innerRev));
        }
        else
        {
            uObject* start = uPtr(::g::Fuse::Drawing::LineCapImpl::Create1(StartCap))->Create(startInner, startOuter);
            uObject* end = uPtr(::g::Fuse::Drawing::LineCapImpl::Create1(EndCap))->Create(endOuter, endInner);
            ::g::Uno::Collections::List__Add_fn(uPtr(strokeContours), ::g::Fuse::Drawing::Contour::New2(true, (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[78/*Uno.Collections.EnumerableExtensions.Union<float2>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[78/*Uno.Collections.EnumerableExtensions.Union<float2>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[78/*Uno.Collections.EnumerableExtensions.Union<float2>*/], start, (uObject*)outer), end), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[9/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>*/], innerRev)))));
        }
    }

    return Polygon::New2((uObject*)strokeContours);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.PolygonDrawable> Triangulate() [instance] :374
uObject* Polygon::Triangulate()
{
    uStackFrame __("Fuse.Drawing.Polygon", "Triangulate()");
    uArray* verts = GetTriangleVertices();

    if (uPtr(verts)->Length() < 3)
        return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[80/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.PolygonDrawable>*/], uArray::New(::TYPES[81/*Fuse.Drawing.PolygonDrawable[]*/], 0)));

    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[80/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.PolygonDrawable>*/], uArray::Init< ::g::Fuse::Drawing::PolygonDrawable*>(::TYPES[81/*Fuse.Drawing.PolygonDrawable[]*/], 1, (::g::Fuse::Drawing::PolygonDrawable*)::g::Fuse::Drawing::PolygonDrawable::New1(verts))));
}

// public Uno.Predicate<int> get_WindingRule() [instance] :492
uDelegate* Polygon::WindingRule()
{
    uStackFrame __("Fuse.Drawing.Polygon", "get_WindingRule()");
    return _windingRule;
}

// public Polygon New(Fuse.Drawing.Contour[] contours) [static] :510
Polygon* Polygon::New1(uArray* contours)
{
    Polygon* obj8 = (Polygon*)uNew(Polygon_typeof());
    obj8->ctor_(contours);
    return obj8;
}

// public Polygon New(Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) [static] :500
Polygon* Polygon::New2(uObject* contours)
{
    Polygon* obj6 = (Polygon*)uNew(Polygon_typeof());
    obj6->ctor_1(contours);
    return obj6;
}

// public Polygon New(Uno.Predicate<int> windingRule, Fuse.Drawing.Contour[] contours) [static] :514
Polygon* Polygon::New3(uDelegate* windingRule, uArray* contours)
{
    Polygon* obj9 = (Polygon*)uNew(Polygon_typeof());
    obj9->ctor_2(windingRule, contours);
    return obj9;
}

// public Polygon New(Uno.Predicate<int> windingRule, Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) [static] :504
Polygon* Polygon::New4(uDelegate* windingRule, uObject* contours)
{
    Polygon* obj7 = (Polygon*)uNew(Polygon_typeof());
    obj7->ctor_3(windingRule, contours);
    return obj7;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\$.uno
// ---------------------------------------------------------------

// public sealed class PolygonDrawable :406
// {
static void PolygonDrawable_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, _draw_1834ada4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, _draw_2b0b75), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, _draw_5d8396da), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, _vbo), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Drawing::PolygonDrawable, _vertices), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, Draw_BlendDstAlpha_303e4fd3_7_7_8), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, Draw_BlendDstRgb_303e4fd3_7_5_7), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, Draw_BlendSrcAlpha_303e4fd3_7_6_6), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, Draw_BlendSrcRgb_303e4fd3_7_4_5), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("CalcBounds", NULL, (void*)PolygonDrawable__CalcBounds_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)PolygonDrawable__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Draw", NULL, (void*)PolygonDrawable__Draw_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Drawing::Brush_typeof(), ::g::Fuse::Drawing::RendererContext_typeof()));
}

uType* PolygonDrawable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PolygonDrawable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.PolygonDrawable", options);
    type->fp_build_ = PolygonDrawable_build;
    return type;
}

// internal PolygonDrawable(float2[] vertices) :411
void PolygonDrawable__ctor__fn(PolygonDrawable* __this, uArray* vertices)
{
    __this->ctor_(vertices);
}

// public Uno.Rect CalcBounds() :451
void PolygonDrawable__CalcBounds_fn(PolygonDrawable* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalcBounds();
}

// public void Dispose() :445
void PolygonDrawable__Dispose_fn(PolygonDrawable* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.Drawing.Brush f, Fuse.Drawing.RendererContext ctx) :429
void PolygonDrawable__Draw_fn(PolygonDrawable* __this, ::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->Draw(f, ctx);
}

// private generated void free_DrawCalls() :406
void PolygonDrawable__free_DrawCalls_fn(PolygonDrawable* __this)
{
    __this->free_DrawCalls();
}

// private generated void init_DrawCalls() :406
void PolygonDrawable__init_DrawCalls_fn(PolygonDrawable* __this)
{
    __this->init_DrawCalls();
}

// internal bool Intersects(float2 p) :419
void PolygonDrawable__Intersects_fn(PolygonDrawable* __this, ::g::Uno::Float2* p, bool* __retval)
{
    *__retval = __this->Intersects(*p);
}

// internal PolygonDrawable New(float2[] vertices) :411
void PolygonDrawable__New1_fn(uArray* vertices, PolygonDrawable** __retval)
{
    *__retval = PolygonDrawable::New1(vertices);
}

// internal PolygonDrawable(float2[] vertices) [instance] :411
void PolygonDrawable::ctor_(uArray* vertices)
{
    uStackFrame __("Fuse.Drawing.PolygonDrawable", ".ctor(float2[])");
    _vertices = vertices;
    _vbo = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(vertices), 0);
    init_DrawCalls();
}

// public Uno.Rect CalcBounds() [instance] :451
::g::Uno::Rect PolygonDrawable::CalcBounds()
{
    uStackFrame __("Fuse.Drawing.PolygonDrawable", "CalcBounds()");
    uArray* array1;
    int index2;
    int length3;

    if (uPtr(_vertices)->Length() == 0)
        return ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    ::g::Uno::Float2 min = uPtr(_vertices)->Item< ::g::Uno::Float2>(0);
    ::g::Uno::Float2 max = uPtr(_vertices)->Item< ::g::Uno::Float2>(0);

    for (array1 = _vertices, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Uno::Float2 v = uPtr(array1)->Item< ::g::Uno::Float2>(index2);
        min = ::g::Uno::Math::Min3(min, v);
        max = ::g::Uno::Math::Max3(max, v);
    }

    return ::g::Uno::Rect__New1(min.X, min.Y, max.X, max.Y);
}

// public void Dispose() [instance] :445
void PolygonDrawable::Dispose()
{
    uStackFrame __("Fuse.Drawing.PolygonDrawable", "Dispose()");
    free_DrawCalls();
    uPtr(_vbo)->Dispose();
}

// public void Draw(Fuse.Drawing.Brush f, Fuse.Drawing.RendererContext ctx) [instance] :429
void PolygonDrawable::Draw(::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx)
{
    uStackFrame __("Fuse.Drawing.PolygonDrawable", "Draw(Fuse.Drawing.Brush,Fuse.Drawing.RendererContext)");
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;

    if (uIs(f, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))
    {
        ::g::Uno::Graphics::Texture2D* Texture_1834ada4_9_6_1 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->GetTexture();
        ::g::Fuse::Drawing::ImageFill__DrawParams DP_1834ada4_9_5_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(NULL, uPtr(ctx)->CanvasSize());
        _draw_1834ada4.BlendEnabled(true);
        _draw_1834ada4.DepthTestEnabled(false);
        _draw_1834ada4.CullFace(uPtr(ctx)->CullFace());
        _draw_1834ada4.PolygonWinding(0);
        _draw_1834ada4.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_1834ada4.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_1834ada4.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_1834ada4.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_1834ada4.Const(0, Texture_1834ada4_9_6_1 == NULL);
        _draw_1834ada4.Use();
        _draw_1834ada4.Attrib1(1, 2, _vbo, 8, 0);
        _draw_1834ada4.Uniform12(2, ctx->Transform());
        _draw_1834ada4.Uniform2(3, ctx->CanvasSize());
        _draw_1834ada4.Uniform2(4, DP_1834ada4_9_5_4.Origin);
        _draw_1834ada4.Uniform2(5, DP_1834ada4_9_5_4.Size);
        _draw_1834ada4.Uniform2(6, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_1834ada4_9_5_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_1834ada4_9_5_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
        _draw_1834ada4.Uniform2(7, (ind6 = DP_1834ada4_9_5_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
        _draw_1834ada4.Uniform10(8, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->Color());
        _draw_1834ada4.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[3/*Fuse.Drawing.ImageFill*/]))->Opacity());
        _draw_1834ada4.Sampler2(10, Texture_1834ada4_9_6_1);
        _draw_1834ada4.DrawArrays(uPtr(_vertices)->Length());
    }
    else if (uIs(f, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))
    {
        _draw_2b0b75.BlendEnabled(true);
        _draw_2b0b75.DepthTestEnabled(false);
        _draw_2b0b75.CullFace(uPtr(ctx)->CullFace());
        _draw_2b0b75.PolygonWinding(0);
        _draw_2b0b75.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_2b0b75.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_2b0b75.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_2b0b75.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_2b0b75.Use();
        _draw_2b0b75.Attrib1(0, 2, _vbo, 8, 0);
        _draw_2b0b75.Uniform12(1, ctx->Transform());
        _draw_2b0b75.Uniform10(2, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1((ind7 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind7.X, ind7.Y, ind7.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->Opacity()), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->Color().W * uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->Opacity()));
        _draw_2b0b75.DrawArrays(uPtr(_vertices)->Length());
    }
    else if (uIs(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))
    {
        ::g::Uno::Float2 angleSlope_5d8396da_9_18_3 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        float angleLen_5d8396da_9_17_4 = ::g::Uno::Math::Abs1(uPtr(ctx)->CanvasSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(ctx)->CanvasSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        _draw_5d8396da.BlendEnabled(true);
        _draw_5d8396da.DepthTestEnabled(false);
        _draw_5d8396da.CullFace(uPtr(ctx)->CullFace());
        _draw_5d8396da.PolygonWinding(0);
        _draw_5d8396da.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_5d8396da.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_5d8396da.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_5d8396da.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_5d8396da.Use();
        _draw_5d8396da.Attrib1(0, 2, _vbo, 8, 0);
        _draw_5d8396da.Uniform12(1, ctx->Transform());
        _draw_5d8396da.Uniform2(2, ctx->CanvasSize());
        _draw_5d8396da.Uniform2(3, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(ctx->CanvasSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_5d8396da_9_18_3, angleLen_5d8396da_9_17_4), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), ctx->CanvasSize()));
        _draw_5d8396da.Uniform2(4, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
        _draw_5d8396da.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->Opacity());
        _draw_5d8396da.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_5d8396da_9_18_3 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), ctx->CanvasSize())));
        _draw_5d8396da.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_5d8396da_9_17_4 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), ctx->CanvasSize())));
        _draw_5d8396da.Sampler2(8, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[5/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
        _draw_5d8396da.DrawArrays(uPtr(_vertices)->Length());
    }
    else if (uIs(f, ::TYPES[6/*Fuse.Drawing.StaticSolidColor*/]))
    {
        _draw_2b0b75.BlendEnabled(true);
        _draw_2b0b75.DepthTestEnabled(false);
        _draw_2b0b75.CullFace(uPtr(ctx)->CullFace());
        _draw_2b0b75.PolygonWinding(0);
        _draw_2b0b75.BlendSrcRgb(Draw_BlendSrcRgb_303e4fd3_7_4_5);
        _draw_2b0b75.BlendSrcAlpha(Draw_BlendSrcAlpha_303e4fd3_7_6_6);
        _draw_2b0b75.BlendDstRgb(Draw_BlendDstRgb_303e4fd3_7_5_7);
        _draw_2b0b75.BlendDstAlpha(Draw_BlendDstAlpha_303e4fd3_7_7_8);
        _draw_2b0b75.Use();
        _draw_2b0b75.Attrib1(0, 2, _vbo, 8, 0);
        _draw_2b0b75.Uniform12(1, ctx->Transform());
        _draw_2b0b75.Uniform10(2, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind8 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(f, ::TYPES[6/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind8.X, ind8.Y, ind8.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(f, ::TYPES[6/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(f, ::TYPES[6/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
        _draw_2b0b75.DrawArrays(uPtr(_vertices)->Length());
    }
}

// private generated void free_DrawCalls() [instance] :406
void PolygonDrawable::free_DrawCalls()
{
}

// private generated void init_DrawCalls() [instance] :406
void PolygonDrawable::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.PolygonDrawable", "init_DrawCalls()");
    Draw_BlendSrcRgb_303e4fd3_7_4_5 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(0);
    Draw_BlendSrcAlpha_303e4fd3_7_6_6 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(0);
    Draw_BlendDstRgb_303e4fd3_7_5_7 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(0);
    Draw_BlendDstAlpha_303e4fd3_7_7_8 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(0);
    _draw_1834ada4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPolygons_bundle::PolygonDrawablea9a9dafc());
    _draw_2b0b75 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPolygons_bundle::PolygonDrawable91a038cd());
    _draw_5d8396da = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPolygons_bundle::PolygonDrawableeef8c432());
}

// internal bool Intersects(float2 p) [instance] :419
bool PolygonDrawable::Intersects(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Drawing.PolygonDrawable", "Intersects(float2)");

    for (int i = 2; i < uPtr(_vertices)->Length(); i = i + 3)
        if (::g::Uno::Geometry::Collision2D::TriangleContainsPoint(uPtr(_vertices)->Item< ::g::Uno::Float2>(i - 2), uPtr(_vertices)->Item< ::g::Uno::Float2>(i - 1), uPtr(_vertices)->Item< ::g::Uno::Float2>(i), p))
            return true;

    return false;
}

// internal PolygonDrawable New(float2[] vertices) [static] :411
PolygonDrawable* PolygonDrawable::New1(uArray* vertices)
{
    PolygonDrawable* obj9 = (PolygonDrawable*)uNew(PolygonDrawable_typeof());
    obj9->ctor_(vertices);
    return obj9;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\Rendering\$.uno
// -------------------------------------------------------------------------

// public sealed class PolygonFiller :184
// {
static void PolygonFiller_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::Int_typeof();
    ::TYPES[82] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Border_typeof());
    ::TYPES[83] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Fuse::Drawing::Contour_typeof(), ::g::Fuse::Drawing::Border_typeof());
    ::TYPES[84] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof(), ::g::Fuse::Drawing::Border_typeof());
    ::TYPES[85] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::PolygonDrawable_typeof());
    ::TYPES[86] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Fuse::Drawing::Border_typeof(), ::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[87] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Border_typeof());
    ::TYPES[88] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Border_typeof());
    ::TYPES[89] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Drawing::Border_typeof(), ::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[90] = ::g::Fuse::Drawing::Border_typeof()->Array();
    ::TYPES[91] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::Float2_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PolygonFiller_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Drawing::Border_typeof()->Array(), offsetof(::g::Fuse::Drawing::PolygonFiller, _antialiasingBorders), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Drawing::PolygonFiller, _bounds), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PolygonFiller, _density), 0,
        ::g::Fuse::Drawing::PolygonDrawable_typeof()->Array(), offsetof(::g::Fuse::Drawing::PolygonFiller, _fills), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::PolygonFiller, _hasBounds), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PolygonFiller, _px), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Bounds", NULL, (void*)PolygonFiller__get_Bounds_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)PolygonFiller__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Draw", NULL, (void*)PolygonFiller__Draw_fn, 0, false, uVoid_typeof(), 4, ::g::Fuse::Drawing::Brush_typeof(), ::g::Fuse::DrawContext_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Draw", NULL, (void*)PolygonFiller__Draw1_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Drawing::Brush_typeof(), ::g::Fuse::Drawing::RendererContext_typeof()),
        new uFunction("Intersects", NULL, (void*)PolygonFiller__Intersects_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)PolygonFiller__New1_fn, 0, true, PolygonFiller_typeof(), 3, ::g::Fuse::Drawing::Polygon_typeof(), ::g::Fuse::Drawing::Antialiasing_typeof(), ::g::Uno::Float_typeof()));
}

PolygonFiller_type* PolygonFiller_typeof()
{
    static uSStrong<PolygonFiller_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PolygonFiller);
    options.TypeSize = sizeof(PolygonFiller_type);
    type = (PolygonFiller_type*)uClassType::New("Fuse.Drawing.PolygonFiller", options);
    type->fp_build_ = PolygonFiller_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))PolygonFiller__Dispose_fn;
    return type;
}

// public PolygonFiller(Fuse.Drawing.Polygon polygon, Fuse.Drawing.Antialiasing antialiasing, float density) :191
void PolygonFiller__ctor__fn(PolygonFiller* __this, ::g::Fuse::Drawing::Polygon* polygon, int* antialiasing, float* density)
{
    __this->ctor_(polygon, *antialiasing, *density);
}

// public Uno.Rect get_Bounds() :220
void PolygonFiller__get_Bounds_fn(PolygonFiller* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->Bounds();
}

// private Uno.Rect CalcBounds() :231
void PolygonFiller__CalcBounds_fn(PolygonFiller* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalcBounds();
}

// private Fuse.Drawing.Contour Contour(Fuse.Drawing.Border border) :209
void PolygonFiller__Contour_fn(PolygonFiller* __this, ::g::Fuse::Drawing::Border* border, ::g::Fuse::Drawing::Contour** __retval)
{
    *__retval = __this->Contour(border);
}

// private Fuse.Drawing.Border CreateBorder(Fuse.Drawing.Contour contour) :211
void PolygonFiller__CreateBorder_fn(PolygonFiller* __this, ::g::Fuse::Drawing::Contour* contour, ::g::Fuse::Drawing::Border** __retval)
{
    *__retval = __this->CreateBorder(contour);
}

// public void Dispose() :263
void PolygonFiller__Dispose_fn(PolygonFiller* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.Drawing.Brush f, Fuse.DrawContext dc, float4x4 transform, float2 elementSize) :243
void PolygonFiller__Draw_fn(PolygonFiller* __this, ::g::Fuse::Drawing::Brush* f, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* elementSize)
{
    __this->Draw(f, dc, *transform, *elementSize);
}

// public void Draw(Fuse.Drawing.Brush f, Fuse.Drawing.RendererContext ctx) :252
void PolygonFiller__Draw1_fn(PolygonFiller* __this, ::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->Draw1(f, ctx);
}

// public bool Intersects(float2 p) :281
void PolygonFiller__Intersects_fn(PolygonFiller* __this, ::g::Uno::Float2* p, bool* __retval)
{
    *__retval = __this->Intersects(*p);
}

// public PolygonFiller New(Fuse.Drawing.Polygon polygon, Fuse.Drawing.Antialiasing antialiasing, float density) :191
void PolygonFiller__New1_fn(::g::Fuse::Drawing::Polygon* polygon, int* antialiasing, float* density, PolygonFiller** __retval)
{
    *__retval = PolygonFiller::New1(polygon, *antialiasing, *density);
}

// public PolygonFiller(Fuse.Drawing.Polygon polygon, Fuse.Drawing.Antialiasing antialiasing, float density) [instance] :191
void PolygonFiller::ctor_(::g::Fuse::Drawing::Polygon* polygon, int antialiasing, float density)
{
    uStackFrame __("Fuse.Drawing.PolygonFiller", ".ctor(Fuse.Drawing.Polygon,Fuse.Drawing.Antialiasing,float)");
    _density = density;

    if (false && (antialiasing == 1))
    {
        _px = (1.0f / density);
        uObject* boundaries = uPtr(polygon)->GetBoundaryContours();
        _antialiasingBorders = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[82/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.Border>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[83/*Uno.Collections.EnumerableExtensions.Select<Fuse.Drawing.Contour, Fuse.Drawing.Border>*/], boundaries, uDelegate::New(::TYPES[84/*Uno.Func<Fuse.Drawing.Contour, Fuse.Drawing.Border>*/], (void*)PolygonFiller__CreateBorder_fn, this))));
        _fills = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[85/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.PolygonDrawable>*/], ::g::Fuse::Drawing::Polygon::New2((uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[86/*Uno.Collections.EnumerableExtensions.Select<Fuse.Drawing.Border, Fuse.Drawing.Contour>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[88/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Border>*/], _antialiasingBorders)), uDelegate::New(::TYPES[89/*Uno.Func<Fuse.Drawing.Border, Fuse.Drawing.Contour>*/], (void*)PolygonFiller__Contour_fn, this)))->Triangulate()));
    }
    else
    {
        _fills = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[85/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.PolygonDrawable>*/], uPtr(polygon)->Triangulate()));
        _antialiasingBorders = uArray::New(::TYPES[90/*Fuse.Drawing.Border[]*/], 0);
    }
}

// public Uno.Rect get_Bounds() [instance] :220
::g::Uno::Rect PolygonFiller::Bounds()
{
    uStackFrame __("Fuse.Drawing.PolygonFiller", "get_Bounds()");

    if (_hasBounds)
        return _bounds;

    _bounds = CalcBounds();
    _hasBounds = true;
    return _bounds;
}

// private Uno.Rect CalcBounds() [instance] :231
::g::Uno::Rect PolygonFiller::CalcBounds()
{
    uStackFrame __("Fuse.Drawing.PolygonFiller", "CalcBounds()");

    if (uPtr(_fills)->Length() == 0)
        return ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    ::g::Uno::Rect r = uPtr(uPtr(_fills)->Strong< ::g::Fuse::Drawing::PolygonDrawable*>(0))->CalcBounds();

    for (int i = 1; i < uPtr(_fills)->Length(); ++i)
        r = ::g::Uno::Rect__Union(r, uPtr(uPtr(_fills)->Strong< ::g::Fuse::Drawing::PolygonDrawable*>(i))->CalcBounds());

    return r;
}

// private Fuse.Drawing.Contour Contour(Fuse.Drawing.Border border) [instance] :209
::g::Fuse::Drawing::Contour* PolygonFiller::Contour(::g::Fuse::Drawing::Border* border)
{
    uStackFrame __("Fuse.Drawing.PolygonFiller", "Contour(Fuse.Drawing.Border)");
    return uPtr(border)->Contour();
}

// private Fuse.Drawing.Border CreateBorder(Fuse.Drawing.Contour contour) [instance] :211
::g::Fuse::Drawing::Border* PolygonFiller::CreateBorder(::g::Fuse::Drawing::Contour* contour)
{
    uStackFrame __("Fuse.Drawing.PolygonFiller", "CreateBorder(Fuse.Drawing.Contour)");
    return ::g::Fuse::Drawing::Border::New1((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[91/*Uno.Collections.EnumerableExtensions.ToArray<float2>*/], uPtr(contour)->Vertices()), _px * 0.5f, -_px);
}

// public void Dispose() [instance] :263
void PolygonFiller::Dispose()
{
    uStackFrame __("Fuse.Drawing.PolygonFiller", "Dispose()");
    uArray* array8;
    int index9;
    int length10;
    uArray* array11;
    int index12;
    int length13;

    for (array8 = _antialiasingBorders, index9 = 0, length10 = uPtr(array8)->Length(); index9 < length10; ++index9)
    {
        ::g::Fuse::Drawing::Border* border = uPtr(array8)->Strong< ::g::Fuse::Drawing::Border*>(index9);
        uPtr(border)->Dispose();
    }

    for (array11 = _fills, index12 = 0, length13 = uPtr(array11)->Length(); index12 < length13; ++index12)
    {
        ::g::Fuse::Drawing::PolygonDrawable* fill = uPtr(array11)->Strong< ::g::Fuse::Drawing::PolygonDrawable*>(index12);
        uPtr(fill)->Dispose();
    }
}

// public void Draw(Fuse.Drawing.Brush f, Fuse.DrawContext dc, float4x4 transform, float2 elementSize) [instance] :243
void PolygonFiller::Draw(::g::Fuse::Drawing::Brush* f, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 elementSize)
{
    uStackFrame __("Fuse.Drawing.PolygonFiller", "Draw(Fuse.Drawing.Brush,Fuse.DrawContext,float4x4,float2)");
    ::g::Fuse::Drawing::RendererContext* collection1;
    float ind17;
    int ind18;
    Draw1(f, (collection1 = ::g::Fuse::Drawing::RendererContext::New1(), uPtr(collection1)->Transform(transform), transform, uPtr(collection1)->CanvasSize(elementSize), elementSize, ind17 = _density, uPtr(collection1)->Density(ind17), ind17, ind18 = uPtr(dc)->CullFace(), uPtr(collection1)->CullFace(ind18), ind18, collection1));
}

// public void Draw(Fuse.Drawing.Brush f, Fuse.Drawing.RendererContext ctx) [instance] :252
void PolygonFiller::Draw1(::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx)
{
    uStackFrame __("Fuse.Drawing.PolygonFiller", "Draw(Fuse.Drawing.Brush,Fuse.Drawing.RendererContext)");
    uArray* array2;
    int index3;
    int length4;
    uArray* array5;
    int index6;
    int length7;

    for (array2 = _antialiasingBorders, index3 = 0, length4 = uPtr(array2)->Length(); index3 < length4; ++index3)
    {
        ::g::Fuse::Drawing::Border* aa = uPtr(array2)->Strong< ::g::Fuse::Drawing::Border*>(index3);
        uPtr(aa)->Draw(f, ctx);
    }

    for (array5 = _fills, index6 = 0, length7 = uPtr(array5)->Length(); index6 < length7; ++index6)
    {
        ::g::Fuse::Drawing::PolygonDrawable* fill = uPtr(array5)->Strong< ::g::Fuse::Drawing::PolygonDrawable*>(index6);
        uPtr(fill)->Draw(f, ctx);
    }
}

// public bool Intersects(float2 p) [instance] :281
bool PolygonFiller::Intersects(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Drawing.PolygonFiller", "Intersects(float2)");
    uArray* array14;
    int index15;
    int length16;

    for (array14 = _fills, index15 = 0, length16 = uPtr(array14)->Length(); index15 < length16; ++index15)
    {
        ::g::Fuse::Drawing::PolygonDrawable* fill = uPtr(array14)->Strong< ::g::Fuse::Drawing::PolygonDrawable*>(index15);

        if (uPtr(fill)->Intersects(p))
            return true;
    }

    return false;
}

// public PolygonFiller New(Fuse.Drawing.Polygon polygon, Fuse.Drawing.Antialiasing antialiasing, float density) [static] :191
PolygonFiller* PolygonFiller::New1(::g::Fuse::Drawing::Polygon* polygon, int antialiasing, float density)
{
    PolygonFiller* obj19 = (PolygonFiller*)uNew(PolygonFiller_typeof());
    obj19->ctor_(polygon, antialiasing, density);
    return obj19;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal static class RectangleFactory :1504
// {
static void RectangleFactory_build(uType* type)
{
}

uClassType* RectangleFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.RectangleFactory", options);
    type->fp_build_ = RectangleFactory_build;
    return type;
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, float2 Size, [float4 CornerRadius]) :1506
void RectangleFactory__AppendTo_fn(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = RectangleFactory::AppendTo(self, *Size, *CornerRadius);
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, float2 Size, [float4 CornerRadius]) [static] :1506
::g::Fuse::Drawing::PathGeometry* RectangleFactory::AppendTo(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius)
{
    uStackFrame __("Fuse.Drawing.RectangleFactory", "AppendTo(Fuse.Drawing.PathGeometry,float2,[float4])");
    ::g::Uno::Float2 o = uPtr(self)->EndPosition();
    float t = o.Y;
    float b = t + Size.Y;
    float l = o.X;
    float r = l + Size.X;

    if (::g::Uno::Float4__op_Equality(CornerRadius, ::g::Uno::Float4__New1(0.0f)))
        return uPtr(uPtr(uPtr(uPtr(uPtr(self)->MoveTo1(o))->LineTo(l, b))->LineTo(r, b))->LineTo(r, t))->ClosePath();

    ::g::Uno::Float4 cornerRadius = CornerRadius;

    if ((cornerRadius.X + cornerRadius.Y) > Size.X)
    {
        float f = Size.X / (cornerRadius.X + cornerRadius.Y);
        cornerRadius.X = (cornerRadius.X * f);
        cornerRadius.Y = (cornerRadius.Y * f);
    }

    if ((cornerRadius.Y + cornerRadius.Z) > Size.Y)
    {
        float f1 = Size.Y / (cornerRadius.Y + cornerRadius.Z);
        cornerRadius.Y = (cornerRadius.Y * f1);
        cornerRadius.Z = (cornerRadius.Z * f1);
    }

    if ((cornerRadius.Z + cornerRadius.W) > Size.X)
    {
        float f2 = Size.X / (cornerRadius.Z + cornerRadius.W);
        cornerRadius.Z = (cornerRadius.Z * f2);
        cornerRadius.W = (cornerRadius.W * f2);
    }

    if ((cornerRadius.W + cornerRadius.X) > Size.Y)
    {
        float f3 = Size.Y / (cornerRadius.W + cornerRadius.X);
        cornerRadius.W = (cornerRadius.W * f3);
        cornerRadius.X = (cornerRadius.X * f3);
    }

    ::g::Uno::Float2 rtlx = ::g::Uno::Float2__New2(cornerRadius.X, 0.0f);
    ::g::Uno::Float2 rtly = ::g::Uno::Float2__New2(0.0f, cornerRadius.X);
    ::g::Uno::Float2 rtrx = ::g::Uno::Float2__New2(cornerRadius.Y, 0.0f);
    ::g::Uno::Float2 rtry = ::g::Uno::Float2__New2(0.0f, cornerRadius.Y);
    ::g::Uno::Float2 rbrx = ::g::Uno::Float2__New2(cornerRadius.Z, 0.0f);
    ::g::Uno::Float2 rbry = ::g::Uno::Float2__New2(0.0f, cornerRadius.Z);
    ::g::Uno::Float2 rblx = ::g::Uno::Float2__New2(cornerRadius.W, 0.0f);
    ::g::Uno::Float2 rbly = ::g::Uno::Float2__New2(0.0f, cornerRadius.W);
    ::g::Uno::Float2 tl = ::g::Uno::Float2__New2(l, t);
    ::g::Uno::Float2 tr = ::g::Uno::Float2__New2(r, t);
    ::g::Uno::Float2 bl = ::g::Uno::Float2__New2(l, b);
    ::g::Uno::Float2 br = ::g::Uno::Float2__New2(r, b);
    float p = 0.45f;
    return uPtr(uPtr(uPtr(uPtr(uPtr(uPtr(uPtr(uPtr(uPtr(self->MoveTo1(::g::Uno::Float2__op_Subtraction2(bl, rbly)))->CurveTo(::g::Uno::Float2__op_Subtraction2(bl, ::g::Uno::Float2__op_Multiply1(rbly, p)), ::g::Uno::Float2__op_Addition2(bl, ::g::Uno::Float2__op_Multiply1(rblx, p)), ::g::Uno::Float2__op_Addition2(bl, rblx)))->LineTo1(::g::Uno::Float2__op_Subtraction2(br, rbrx)))->CurveTo(::g::Uno::Float2__op_Subtraction2(br, ::g::Uno::Float2__op_Multiply1(rbrx, p)), ::g::Uno::Float2__op_Subtraction2(br, ::g::Uno::Float2__op_Multiply1(rbry, p)), ::g::Uno::Float2__op_Subtraction2(br, rbry)))->LineTo1(::g::Uno::Float2__op_Addition2(tr, rtry)))->CurveTo(::g::Uno::Float2__op_Addition2(tr, ::g::Uno::Float2__op_Multiply1(rtry, p)), ::g::Uno::Float2__op_Subtraction2(tr, ::g::Uno::Float2__op_Multiply1(rtrx, p)), ::g::Uno::Float2__op_Subtraction2(tr, rtrx)))->LineTo1(::g::Uno::Float2__op_Addition2(tl, rtlx)))->CurveTo(::g::Uno::Float2__op_Addition2(tl, ::g::Uno::Float2__op_Multiply1(rtlx, p)), ::g::Uno::Float2__op_Addition2(tl, ::g::Uno::Float2__op_Multiply1(rtly, p)), ::g::Uno::Float2__op_Addition2(tl, rtly)))->ClosePath())->MoveTo1(o);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal static class RegularPolygonFactory :1431
// {
static void RegularPolygonFactory_build(uType* type)
{
}

uClassType* RegularPolygonFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.RegularPolygonFactory", options);
    type->fp_build_ = RegularPolygonFactory_build;
    return type;
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, int Sides, float Radius) :1433
void RegularPolygonFactory__AppendTo_fn(::g::Fuse::Drawing::PathGeometry* self, int* Sides, float* Radius, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = RegularPolygonFactory::AppendTo(self, *Sides, *Radius);
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, int Sides, float Radius) [static] :1433
::g::Fuse::Drawing::PathGeometry* RegularPolygonFactory::AppendTo(::g::Fuse::Drawing::PathGeometry* self, int Sides, float Radius)
{
    uStackFrame __("Fuse.Drawing.RegularPolygonFactory", "AppendTo(Fuse.Drawing.PathGeometry,int,float)");
    float t = -6.28318548f / (float)Sides;
    ::g::Uno::Float2 c = uPtr(self)->EndPosition();
    ::g::Fuse::Drawing::PathGeometry* g = self->MoveTo(c.X, c.Y - Radius);

    for (int i = 1; i < Sides; i++)
        g = uPtr(g)->LineTo(c.X + (::g::Uno::Math::Sin1(t * (float)i) * Radius), c.Y - (::g::Uno::Math::Cos1(t * (float)i) * Radius));

    g = uPtr(g)->ClosePath();
    return g;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\Rendering\$.uno
// -------------------------------------------------------------------------

// public sealed class RendererContext :307
// {
static void RendererContext_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::RendererContext, _CanvasSize), 0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(::g::Fuse::Drawing::RendererContext, _CullFace), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::RendererContext, _Density), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Drawing::RendererContext, _Transform), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_CanvasSize", NULL, (void*)RendererContext__get_CanvasSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_CanvasSize", NULL, (void*)RendererContext__set_CanvasSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_CullFace", NULL, (void*)RendererContext__get_CullFace_fn, 0, false, ::g::Uno::Graphics::PolygonFace_typeof(), 0),
        new uFunction("set_CullFace", NULL, (void*)RendererContext__set_CullFace_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::PolygonFace_typeof()),
        new uFunction("get_Density", NULL, (void*)RendererContext__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)RendererContext__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)RendererContext__New1_fn, 0, true, RendererContext_typeof(), 0),
        new uFunction("get_Transform", NULL, (void*)RendererContext__get_Transform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("set_Transform", NULL, (void*)RendererContext__set_Transform_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()));
}

uType* RendererContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RendererContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.RendererContext", options);
    type->fp_build_ = RendererContext_build;
    type->fp_ctor_ = (void*)RendererContext__New1_fn;
    return type;
}

// public generated RendererContext() :307
void RendererContext__ctor__fn(RendererContext* __this)
{
    __this->ctor_();
}

// public generated float2 get_CanvasSize() :311
void RendererContext__get_CanvasSize_fn(RendererContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CanvasSize();
}

// public generated void set_CanvasSize(float2 value) :311
void RendererContext__set_CanvasSize_fn(RendererContext* __this, ::g::Uno::Float2* value)
{
    __this->CanvasSize(*value);
}

// public generated Uno.Graphics.PolygonFace get_CullFace() :313
void RendererContext__get_CullFace_fn(RendererContext* __this, int* __retval)
{
    *__retval = __this->CullFace();
}

// public generated void set_CullFace(Uno.Graphics.PolygonFace value) :313
void RendererContext__set_CullFace_fn(RendererContext* __this, int* value)
{
    __this->CullFace(*value);
}

// public generated float get_Density() :312
void RendererContext__get_Density_fn(RendererContext* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public generated void set_Density(float value) :312
void RendererContext__set_Density_fn(RendererContext* __this, float* value)
{
    __this->Density(*value);
}

// public generated RendererContext New() :307
void RendererContext__New1_fn(RendererContext** __retval)
{
    *__retval = RendererContext::New1();
}

// public generated float4x4 get_Transform() :310
void RendererContext__get_Transform_fn(RendererContext* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->Transform();
}

// public generated void set_Transform(float4x4 value) :310
void RendererContext__set_Transform_fn(RendererContext* __this, ::g::Uno::Float4x4* value)
{
    __this->Transform(*value);
}

// public generated RendererContext() [instance] :307
void RendererContext::ctor_()
{
}

// public generated float2 get_CanvasSize() [instance] :311
::g::Uno::Float2 RendererContext::CanvasSize()
{
    uStackFrame __("Fuse.Drawing.RendererContext", "get_CanvasSize()");
    return _CanvasSize;
}

// public generated void set_CanvasSize(float2 value) [instance] :311
void RendererContext::CanvasSize(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Drawing.RendererContext", "set_CanvasSize(float2)");
    _CanvasSize = value;
}

// public generated Uno.Graphics.PolygonFace get_CullFace() [instance] :313
int RendererContext::CullFace()
{
    uStackFrame __("Fuse.Drawing.RendererContext", "get_CullFace()");
    return _CullFace;
}

// public generated void set_CullFace(Uno.Graphics.PolygonFace value) [instance] :313
void RendererContext::CullFace(int value)
{
    uStackFrame __("Fuse.Drawing.RendererContext", "set_CullFace(Uno.Graphics.PolygonFace)");
    _CullFace = value;
}

// public generated float get_Density() [instance] :312
float RendererContext::Density()
{
    uStackFrame __("Fuse.Drawing.RendererContext", "get_Density()");
    return _Density;
}

// public generated void set_Density(float value) [instance] :312
void RendererContext::Density(float value)
{
    uStackFrame __("Fuse.Drawing.RendererContext", "set_Density(float)");
    _Density = value;
}

// public generated float4x4 get_Transform() [instance] :310
::g::Uno::Float4x4 RendererContext::Transform()
{
    uStackFrame __("Fuse.Drawing.RendererContext", "get_Transform()");
    return _Transform;
}

// public generated void set_Transform(float4x4 value) [instance] :310
void RendererContext::Transform(::g::Uno::Float4x4 value)
{
    uStackFrame __("Fuse.Drawing.RendererContext", "set_Transform(float4x4)");
    _Transform = value;
}

// public generated RendererContext New() [static] :307
RendererContext* RendererContext::New1()
{
    RendererContext* obj1 = (RendererContext*)uNew(RendererContext_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public enum ResampleMode :258
uEnumType* ResampleMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.ResampleMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Nearest", 0LL,
        "Linear", 1LL,
        "Mipmap", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\$.uno
// ---------------------------------------------------------------

// internal sealed class RoundCap :92
// {
static void RoundCap_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[9] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
}

::g::Fuse::Drawing::LineCapImpl_type* RoundCap_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::LineCapImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(RoundCap);
    options.TypeSize = sizeof(::g::Fuse::Drawing::LineCapImpl_type);
    type = (::g::Fuse::Drawing::LineCapImpl_type*)uClassType::New("Fuse.Drawing.RoundCap", options);
    type->SetBase(::g::Fuse::Drawing::LineCapImpl_typeof());
    type->fp_build_ = RoundCap_build;
    type->fp_ctor_ = (void*)RoundCap__New1_fn;
    type->fp_Create = (void(*)(::g::Fuse::Drawing::LineCapImpl*, ::g::Uno::Float2*, ::g::Uno::Float2*, uObject**))RoundCap__Create_fn;
    return type;
}

// public generated RoundCap() :92
void RoundCap__ctor_1_fn(RoundCap* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.Collections.IEnumerable<float2> Create(float2 from, float2 to) :94
void RoundCap__Create_fn(RoundCap* __this, ::g::Uno::Float2* from, ::g::Uno::Float2* to, uObject** __retval)
{
    uStackFrame __("Fuse.Drawing.RoundCap", "Create(float2,float2)");
    ::g::Uno::Float2 from_ = *from;
    ::g::Uno::Float2 to_ = *to;
    int steps = 20;
    uArray* verts = uArray::New(::TYPES[2/*float2[]*/], 18);
    ::g::Uno::Float2 center = ::g::Uno::Math::Lerp2(from_, to_, 0.5f);
    ::g::Uno::Float2 u = ::g::Uno::Float2__op_Subtraction2(from_, center);
    ::g::Uno::Float2 v = ::g::Uno::Float2__New2(u.Y, -u.X);
    ::g::Uno::Float2x2 matrix = ::g::Uno::Float2x2__New2(u, v);

    for (int i = 1; i < 19; i++)
    {
        float f = (float)i / 20.0f;
        float r = (float)((double)f * 3.1415926535897931);
        ::g::Uno::Float2 rainbow = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(r), ::g::Uno::Math::Sin1(r));
        uPtr(verts)->Item< ::g::Uno::Float2>(i - 1) = ::g::Uno::Float2__op_Addition2(center, ::g::Uno::Vector::Transform(rainbow, matrix));
    }

    return *__retval = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[9/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>*/], verts)), void();
}

// public generated RoundCap New() :92
void RoundCap__New1_fn(RoundCap** __retval)
{
    *__retval = RoundCap::New1();
}

// public generated RoundCap() [instance] :92
void RoundCap::ctor_1()
{
    uStackFrame __("Fuse.Drawing.RoundCap", ".ctor()");
    ctor_();
}

// public generated RoundCap New() [static] :92
RoundCap* RoundCap::New1()
{
    RoundCap* obj1 = (RoundCap*)uNew(RoundCap_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal sealed class SmoothCurveTo :1179
// {
static void SmoothCurveTo_build(uType* type)
{
    ::STRINGS[31] = uString::Const("S ");
    ::STRINGS[6] = uString::Const(" ");
    ::STRINGS[32] = uString::Const("S");
    ::TYPES[7] = uObject_typeof();
    type->SetFields(7);
}

::g::Fuse::Drawing::PathGeometry_type* SmoothCurveTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SmoothCurveTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.SmoothCurveTo", options);
    type->SetBase(::g::Fuse::Drawing::CurveTo_typeof());
    type->fp_build_ = SmoothCurveTo_build;
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))SmoothCurveTo__Serialize_fn;
    return type;
}

// public SmoothCurveTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 lastTangent, float2 controlPointEnd, float2 position) :1183
void SmoothCurveTo__ctor_3_fn(SmoothCurveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* lastTangent, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position)
{
    __this->ctor_3(prev, *lastPosition, *lastTangent, *controlPointEnd, *position);
}

// public SmoothCurveTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 lastTangent, float2 controlPointEnd, float2 position) :1183
void SmoothCurveTo__New4_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* lastTangent, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, SmoothCurveTo** __retval)
{
    *__retval = SmoothCurveTo::New4(prev, *lastPosition, *lastTangent, *controlPointEnd, *position);
}

// protected internal override sealed string Serialize() :1193
void SmoothCurveTo__Serialize_fn(SmoothCurveTo* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.SmoothCurveTo", "Serialize()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[31/*"S "*/], uBox(::g::Uno::Float_typeof(), __this->ControlPointEnd().X)), ::STRINGS[6/*" "*/]), uBox(::g::Uno::Float_typeof(), __this->ControlPointEnd().Y)), ::STRINGS[6/*" "*/]), uBox(::g::Uno::Float_typeof(), __this->EndPosition().X)), ::STRINGS[6/*" "*/]), uBox(::g::Uno::Float_typeof(), __this->EndPosition().Y)), void();
}

// public SmoothCurveTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 lastTangent, float2 controlPointEnd, float2 position) [instance] :1183
void SmoothCurveTo::ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 lastTangent, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Drawing.SmoothCurveTo", ".ctor(Fuse.Drawing.PathGeometry,float2,float2,float2,float2)");
    ctor_1();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastTangent);
    ::g::Fuse::Drawing::Util::ValidateFloat2(controlPointEnd);
    ::g::Fuse::Drawing::Util::ValidateFloat2(position);
    CurveToCtor(prev, ::g::Uno::Float2__New2(lastPosition.X, lastPosition.Y), ::g::Uno::Float2__op_Addition2(lastPosition, lastTangent), ::g::Uno::Float2__New2(controlPointEnd.X, controlPointEnd.Y), ::g::Uno::Float2__New2(position.X, position.Y));
}

// public SmoothCurveTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 lastTangent, float2 controlPointEnd, float2 position) [static] :1183
SmoothCurveTo* SmoothCurveTo::New4(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 lastTangent, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    SmoothCurveTo* obj1 = (SmoothCurveTo*)uNew(SmoothCurveTo_typeof());
    obj1->ctor_3(prev, lastPosition, lastTangent, controlPointEnd, position);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\Brushes\$.uno
// --------------------------------------------------------------

// public sealed class SolidColor :375
// {
// static SolidColor() :375
static void SolidColor__cctor_1_fn(uType* __type)
{
    SolidColor::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Color"*/]);
}

static void SolidColor_build(uType* type)
{
    ::STRINGS[11] = uString::Const("Color");
    type->SetInterfaces(
        ::g::Fuse::Drawing::ISolidColor_typeof(), offsetof(SolidColor_type, interface0));
    type->SetFields(4,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::SolidColor, _color), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::SolidColor::_colorName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Color", NULL, (void*)SolidColor__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)SolidColor__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)SolidColor__New2_fn, 0, true, SolidColor_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)SolidColor__New3_fn, 0, true, SolidColor_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("SetColor", NULL, (void*)SolidColor__SetColor1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

SolidColor_type* SolidColor_typeof()
{
    static uSStrong<SolidColor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SolidColor);
    options.TypeSize = sizeof(SolidColor_type);
    type = (SolidColor_type*)uClassType::New("Fuse.Drawing.SolidColor", options);
    type->SetBase(::g::Fuse::Drawing::DynamicBrush_typeof());
    type->fp_build_ = SolidColor_build;
    type->fp_ctor_ = (void*)SolidColor__New2_fn;
    type->fp_cctor_ = SolidColor__cctor_1_fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))SolidColor__get_IsCompletelyTransparent_fn;
    type->interface0.fp_get_Color = (void(*)(uObject*, ::g::Uno::Float4*))SolidColor__get_Color_fn;
    return type;
}

// public SolidColor() :413
void SolidColor__ctor_3_fn(SolidColor* __this)
{
    __this->ctor_3();
}

// public SolidColor(float4 color) :418
void SolidColor__ctor_4_fn(SolidColor* __this, ::g::Uno::Float4* color)
{
    __this->ctor_4(*color);
}

// public float4 get_Color() :383
void SolidColor__get_Color_fn(SolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :384
void SolidColor__set_Color_fn(SolidColor* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public override sealed bool get_IsCompletelyTransparent() :409
void SolidColor__get_IsCompletelyTransparent_fn(SolidColor* __this, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.SolidColor", "get_IsCompletelyTransparent()");
    bool ret3;
    return *__retval = (::g::Fuse::Drawing::DynamicBrush__get_IsCompletelyTransparent_fn(__this, &ret3), ret3) || (__this->Color().W == 0.0f), void();
}

// public SolidColor New() :413
void SolidColor__New2_fn(SolidColor** __retval)
{
    *__retval = SolidColor::New2();
}

// public SolidColor New(float4 color) :418
void SolidColor__New3_fn(::g::Uno::Float4* color, SolidColor** __retval)
{
    *__retval = SolidColor::New3(*color);
}

// internal void SetColor(float4 c) :404
void SolidColor__SetColor_fn(SolidColor* __this, ::g::Uno::Float4* c)
{
    __this->SetColor(*c);
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin) :394
void SolidColor__SetColor1_fn(SolidColor* __this, ::g::Uno::Float4* c, uObject* origin)
{
    __this->SetColor1(*c, origin);
}

::g::Uno::UX::Selector SolidColor::_colorName_;

// public SolidColor() [instance] :413
void SolidColor::ctor_3()
{
    uStackFrame __("Fuse.Drawing.SolidColor", ".ctor()");
    ctor_2();
    _color = ::g::Uno::Float4__New1(1.0f);
}

// public SolidColor(float4 color) [instance] :418
void SolidColor::ctor_4(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.Drawing.SolidColor", ".ctor(float4)");
    ctor_2();
    _color = color;
}

// public float4 get_Color() [instance] :383
::g::Uno::Float4 SolidColor::Color()
{
    uStackFrame __("Fuse.Drawing.SolidColor", "get_Color()");
    return _color;
}

// public void set_Color(float4 value) [instance] :384
void SolidColor::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Drawing.SolidColor", "set_Color(float4)");

    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(SolidColor::_colorName());
    }
}

// internal void SetColor(float4 c) [instance] :404
void SolidColor::SetColor(::g::Uno::Float4 c)
{
    uStackFrame __("Fuse.Drawing.SolidColor", "SetColor(float4)");
    Color(c);
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin) [instance] :394
void SolidColor::SetColor1(::g::Uno::Float4 c, uObject* origin)
{
    uStackFrame __("Fuse.Drawing.SolidColor", "SetColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(_color, c))
    {
        _color = c;
        OnPropertyChanged1(SolidColor::_colorName(), origin);
    }
}

// public SolidColor New() [static] :413
SolidColor* SolidColor::New2()
{
    SolidColor* obj1 = (SolidColor*)uNew(SolidColor_typeof());
    obj1->ctor_3();
    return obj1;
}

// public SolidColor New(float4 color) [static] :418
SolidColor* SolidColor::New3(::g::Uno::Float4 color)
{
    SolidColor* obj2 = (SolidColor*)uNew(SolidColor_typeof());
    obj2->ctor_4(color);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal static class StarFactory :1449
// {
static void StarFactory_build(uType* type)
{
}

uClassType* StarFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.StarFactory", options);
    type->fp_build_ = StarFactory_build;
    return type;
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, int Points, float Radius, float spokeRadius, [float cornerRatio], [float rotation]) :1451
void StarFactory__AppendTo_fn(::g::Fuse::Drawing::PathGeometry* self, int* Points, float* Radius, float* spokeRadius, float* cornerRatio, float* rotation, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = StarFactory::AppendTo(self, *Points, *Radius, *spokeRadius, *cornerRatio, *rotation);
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, int Points, float Radius, float spokeRadius, [float cornerRatio], [float rotation]) [static] :1451
::g::Fuse::Drawing::PathGeometry* StarFactory::AppendTo(::g::Fuse::Drawing::PathGeometry* self, int Points, float Radius, float spokeRadius, float cornerRatio, float rotation)
{
    uStackFrame __("Fuse.Drawing.StarFactory", "AppendTo(Fuse.Drawing.PathGeometry,int,float,float,[float],[float])");
    float t = -6.28318548f / (float)(Points * 2);
    ::g::Uno::Float2 c = uPtr(self)->EndPosition();
    ::g::Fuse::Drawing::PathGeometry* g = self;
    int count = (Points * 2) - 1;

    for (int i = 0; i < count; i++)
    {
        ::g::Uno::Float2 radius = ((i % 2) == 0) ? ::g::Uno::Float2__New2(Radius, spokeRadius) : ::g::Uno::Float2__New2(spokeRadius, Radius);
        ::g::Uno::Float2 pa = ::g::Uno::Float2__New2(c.X + (::g::Uno::Math::Sin1((t * (float)i) + rotation) * radius.Item(0)), c.Y - (::g::Uno::Math::Cos1((t * (float)i) + rotation) * radius.Item(0)));
        ::g::Uno::Float2 pb = ::g::Uno::Float2__New2(c.X + (::g::Uno::Math::Sin1((t * (float)(i + 1)) + rotation) * radius.Item(1)), c.Y - (::g::Uno::Math::Cos1((t * (float)(i + 1)) + rotation) * radius.Item(1)));

        if (i == 0)
            g = uPtr(g)->MoveTo1(pa);

        if (cornerRatio > 1e-05f)
        {
            ::g::Uno::Float2 na = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1((t * (float)i) + rotation), ::g::Uno::Math::Sin1((t * (float)i) + rotation));
            ::g::Uno::Float2 nb = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1((t * (float)(i + 1)) + rotation), ::g::Uno::Math::Sin1((t * (float)(i + 1)) + rotation));
            g = uPtr(g)->CurveTo(::g::Uno::Float2__op_Subtraction2(pa, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Multiply1(na, cornerRatio), radius.Item(0))), ::g::Uno::Float2__op_Addition2(pb, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Multiply1(nb, cornerRatio), radius.Item(1))), pb);
        }
        else
            g = uPtr(g)->LineTo1(pb);
    }

    g = uPtr(g)->ClosePath();
    return g;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public abstract class StaticBrush :139
// {
static void StaticBrush_build(uType* type)
{
    type->SetFields(2);
}

::g::Fuse::Drawing::Brush_type* StaticBrush_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StaticBrush);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.StaticBrush", options);
    type->SetBase(::g::Fuse::Drawing::Brush_typeof());
    type->fp_build_ = StaticBrush_build;
    return type;
}

// protected generated StaticBrush() :139
void StaticBrush__ctor_2_fn(StaticBrush* __this)
{
    __this->ctor_2();
}

// protected generated StaticBrush() [instance] :139
void StaticBrush::ctor_2()
{
    uStackFrame __("Fuse.Drawing.StaticBrush", ".ctor()");
    ctor_1();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\Brushes\$.uno
// --------------------------------------------------------------

// public sealed class StaticSolidColor :424
// {
static void StaticSolidColor_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Drawing::ISolidColor_typeof(), offsetof(StaticSolidColor_type, interface0));
    type->SetFields(2,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::StaticSolidColor, _color), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Color", NULL, (void*)StaticSolidColor__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)StaticSolidColor__New2_fn, 0, true, StaticSolidColor_typeof(), 1, ::g::Uno::Float4_typeof()));
}

StaticSolidColor_type* StaticSolidColor_typeof()
{
    static uSStrong<StaticSolidColor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StaticSolidColor);
    options.TypeSize = sizeof(StaticSolidColor_type);
    type = (StaticSolidColor_type*)uClassType::New("Fuse.Drawing.StaticSolidColor", options);
    type->SetBase(::g::Fuse::Drawing::StaticBrush_typeof());
    type->fp_build_ = StaticSolidColor_build;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))StaticSolidColor__get_IsCompletelyTransparent_fn;
    type->interface0.fp_get_Color = (void(*)(uObject*, ::g::Uno::Float4*))StaticSolidColor__get_Color_fn;
    return type;
}

// public StaticSolidColor(float4 color) :437
void StaticSolidColor__ctor_3_fn(StaticSolidColor* __this, ::g::Uno::Float4* color)
{
    __this->ctor_3(*color);
}

// public float4 get_Color() :431
void StaticSolidColor__get_Color_fn(StaticSolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public override sealed bool get_IsCompletelyTransparent() :426
void StaticSolidColor__get_IsCompletelyTransparent_fn(StaticSolidColor* __this, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.StaticSolidColor", "get_IsCompletelyTransparent()");
    bool ret2;
    return *__retval = (::g::Fuse::Drawing::Brush__get_IsCompletelyTransparent_fn(__this, &ret2), ret2) || (__this->Color().W == 0.0f), void();
}

// public StaticSolidColor New(float4 color) :437
void StaticSolidColor__New2_fn(::g::Uno::Float4* color, StaticSolidColor** __retval)
{
    *__retval = StaticSolidColor::New2(*color);
}

// public StaticSolidColor(float4 color) [instance] :437
void StaticSolidColor::ctor_3(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.Drawing.StaticSolidColor", ".ctor(float4)");
    ctor_2();
    _color = color;
}

// public float4 get_Color() [instance] :431
::g::Uno::Float4 StaticSolidColor::Color()
{
    uStackFrame __("Fuse.Drawing.StaticSolidColor", "get_Color()");
    return _color;
}

// public StaticSolidColor New(float4 color) [static] :437
StaticSolidColor* StaticSolidColor::New2(::g::Uno::Float4 color)
{
    StaticSolidColor* obj1 = (StaticSolidColor*)uNew(StaticSolidColor_typeof());
    obj1->ctor_3(color);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public sealed class Stroke :289
// {
// static Stroke() :289
static void Stroke__cctor__fn(uType* __type)
{
    Stroke::_shadingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"Shading"*/]);
    Stroke::_brushName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[34/*"Brush"*/]);
    Stroke::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Color"*/]);
    Stroke::_widthName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[35/*"Width"*/]);
    Stroke::_offsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Offset"*/]);
    Stroke::_adjustmentName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[36/*"Adjustment"*/]);
    Stroke::_alignmentName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[37/*"Alignment"*/]);
    Stroke::_lineCapName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[38/*"LineCap"*/]);
    Stroke::_lineJoinName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[39/*"LineJoin"*/]);
}

static void Stroke_build(uType* type)
{
    ::STRINGS[33] = uString::Const("Shading");
    ::STRINGS[34] = uString::Const("Brush");
    ::STRINGS[11] = uString::Const("Color");
    ::STRINGS[35] = uString::Const("Width");
    ::STRINGS[10] = uString::Const("Offset");
    ::STRINGS[36] = uString::Const("Adjustment");
    ::STRINGS[37] = uString::Const("Alignment");
    ::STRINGS[38] = uString::Const("LineCap");
    ::STRINGS[39] = uString::Const("LineJoin");
    ::TYPES[21] = ::g::Uno::Int_typeof();
    ::TYPES[45] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[26] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[92] = ::g::Fuse::Drawing::ISolidColor_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[47] = ::g::Fuse::Drawing::Brush_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Stroke_type, interface0));
    type->SetFields(1,
        ::g::Fuse::Drawing::StrokeAdjustment_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _adjustment), 0,
        ::g::Fuse::Drawing::StrokeAlignment_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _alignment), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _brush), 0,
        ::g::Fuse::Drawing::LineCap_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _lineCap), 0,
        ::g::Fuse::Drawing::LineJoin_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _lineJoin), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _offset), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _pinCount), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _width), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_adjustmentName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_alignmentName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_brushName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_lineCapName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_lineJoinName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_offsetName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_shadingName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_widthName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(23,
        new uFunction("get_Adjustment", NULL, (void*)Stroke__get_Adjustment_fn, 0, false, ::g::Fuse::Drawing::StrokeAdjustment_typeof(), 0),
        new uFunction("set_Adjustment", NULL, (void*)Stroke__set_Adjustment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::StrokeAdjustment_typeof()),
        new uFunction("get_Alignment", NULL, (void*)Stroke__get_Alignment_fn, 0, false, ::g::Fuse::Drawing::StrokeAlignment_typeof(), 0),
        new uFunction("set_Alignment", NULL, (void*)Stroke__set_Alignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::StrokeAlignment_typeof()),
        new uFunction("get_Brush", NULL, (void*)Stroke__get_Brush_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_Brush", NULL, (void*)Stroke__set_Brush_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_Color", NULL, (void*)Stroke__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)Stroke__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("GetDeviceAdjusted", NULL, (void*)Stroke__GetDeviceAdjusted_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IsPinned", NULL, (void*)Stroke__get_IsPinned_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_LineCap", NULL, (void*)Stroke__get_LineCap_fn, 0, false, ::g::Fuse::Drawing::LineCap_typeof(), 0),
        new uFunction("set_LineCap", NULL, (void*)Stroke__set_LineCap_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::LineCap_typeof()),
        new uFunction("get_LineJoin", NULL, (void*)Stroke__get_LineJoin_fn, 0, false, ::g::Fuse::Drawing::LineJoin_typeof(), 0),
        new uFunction("set_LineJoin", NULL, (void*)Stroke__set_LineJoin_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::LineJoin_typeof()),
        new uFunction(".ctor", NULL, (void*)Stroke__New2_fn, 0, true, Stroke_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Stroke__New3_fn, 0, true, Stroke_typeof(), 4, ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::LineCap_typeof(), ::g::Fuse::Drawing::LineJoin_typeof()),
        new uFunction("get_Offset", NULL, (void*)Stroke__get_Offset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)Stroke__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Pin", NULL, (void*)Stroke__Pin_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Prepare", NULL, (void*)Stroke__Prepare_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Unpin", NULL, (void*)Stroke__Unpin_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Width", NULL, (void*)Stroke__get_Width_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Width", NULL, (void*)Stroke__set_Width_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

Stroke_type* Stroke_typeof()
{
    static uSStrong<Stroke_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stroke);
    options.TypeSize = sizeof(Stroke_type);
    type = (Stroke_type*)uClassType::New("Fuse.Drawing.Stroke", options);
    type->SetBase(::g::Uno::UX::PropertyObject_typeof());
    type->fp_build_ = Stroke_build;
    type->fp_ctor_ = (void*)Stroke__New2_fn;
    type->fp_cctor_ = Stroke__cctor__fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Stroke__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public Stroke() :487
void Stroke__ctor_1_fn(Stroke* __this)
{
    __this->ctor_1();
}

// public Stroke(Fuse.Drawing.Brush brush, [float width], [Fuse.Drawing.LineCap lineCap], [Fuse.Drawing.LineJoin lineJoin]) :489
void Stroke__ctor_2_fn(Stroke* __this, ::g::Fuse::Drawing::Brush* brush, float* width, int* lineCap, int* lineJoin)
{
    __this->ctor_2(brush, *width, *lineCap, *lineJoin);
}

// private float Adjust(float w, float ppi) :451
void Stroke__Adjust_fn(Stroke* __this, float* w, float* ppi, float* __retval)
{
    *__retval = __this->Adjust(*w, *ppi);
}

// public Fuse.Drawing.StrokeAdjustment get_Adjustment() :375
void Stroke__get_Adjustment_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->Adjustment();
}

// public void set_Adjustment(Fuse.Drawing.StrokeAdjustment value) :376
void Stroke__set_Adjustment_fn(Stroke* __this, int* value)
{
    __this->Adjustment(*value);
}

// private float AdjustPosition(float w, float ppi) :428
void Stroke__AdjustPosition_fn(Stroke* __this, float* w, float* ppi, float* __retval)
{
    *__retval = __this->AdjustPosition(*w, *ppi);
}

// public Fuse.Drawing.StrokeAlignment get_Alignment() :391
void Stroke__get_Alignment_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->Alignment();
}

// public void set_Alignment(Fuse.Drawing.StrokeAlignment value) :392
void Stroke__set_Alignment_fn(Stroke* __this, int* value)
{
    __this->Alignment(*value);
}

// public Fuse.Drawing.Brush get_Brush() :302
void Stroke__get_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Brush();
}

// public void set_Brush(Fuse.Drawing.Brush value) :303
void Stroke__set_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Brush(value);
}

// public float4 get_Color() :325
void Stroke__get_Color_fn(Stroke* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :331
void Stroke__set_Color_fn(Stroke* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float2 GetDeviceAdjusted(float ppi) :403
void Stroke__GetDeviceAdjusted_fn(Stroke* __this, float* ppi, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetDeviceAdjusted(*ppi);
}

// public bool get_IsPinned() :512
void Stroke__get_IsPinned_fn(Stroke* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public Fuse.Drawing.LineCap get_LineCap() :464
void Stroke__get_LineCap_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->LineCap();
}

// public void set_LineCap(Fuse.Drawing.LineCap value) :465
void Stroke__set_LineCap_fn(Stroke* __this, int* value)
{
    __this->LineCap(*value);
}

// public Fuse.Drawing.LineJoin get_LineJoin() :478
void Stroke__get_LineJoin_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->LineJoin();
}

// public void set_LineJoin(Fuse.Drawing.LineJoin value) :479
void Stroke__set_LineJoin_fn(Stroke* __this, int* value)
{
    __this->LineJoin(*value);
}

// public Stroke New() :487
void Stroke__New2_fn(Stroke** __retval)
{
    *__retval = Stroke::New2();
}

// public Stroke New(Fuse.Drawing.Brush brush, [float width], [Fuse.Drawing.LineCap lineCap], [Fuse.Drawing.LineJoin lineJoin]) :489
void Stroke__New3_fn(::g::Fuse::Drawing::Brush* brush, float* width, int* lineCap, int* lineJoin, Stroke** __retval)
{
    *__retval = Stroke::New3(brush, *width, *lineCap, *lineJoin);
}

// public float get_Offset() :362
void Stroke__get_Offset_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float value) :363
void Stroke__set_Offset_fn(Stroke* __this, float* value)
{
    __this->Offset(*value);
}

// protected void OnPinned() :514
void Stroke__OnPinned_fn(Stroke* __this)
{
    __this->OnPinned();
}

// protected void OnUnpinned() :520
void Stroke__OnUnpinned_fn(Stroke* __this)
{
    __this->OnUnpinned();
}

// public void Pin() :498
void Stroke__Pin_fn(Stroke* __this)
{
    __this->Pin();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) :526
void Stroke__Prepare_fn(Stroke* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->Prepare(dc, *canvasSize);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :292
void Stroke__UnoUXIPropertyListenerOnPropertyChanged_fn(Stroke* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Drawing.Stroke", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    __this->OnPropertyChanged(Stroke::_shadingName());
}

// public void Unpin() :505
void Stroke__Unpin_fn(Stroke* __this)
{
    __this->Unpin();
}

// public float get_Width() :350
void Stroke__get_Width_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :351
void Stroke__set_Width_fn(Stroke* __this, float* value)
{
    __this->Width(*value);
}

::g::Uno::UX::Selector Stroke::_adjustmentName_;
::g::Uno::UX::Selector Stroke::_alignmentName_;
::g::Uno::UX::Selector Stroke::_brushName_;
::g::Uno::UX::Selector Stroke::_colorName_;
::g::Uno::UX::Selector Stroke::_lineCapName_;
::g::Uno::UX::Selector Stroke::_lineJoinName_;
::g::Uno::UX::Selector Stroke::_offsetName_;
::g::Uno::UX::Selector Stroke::_shadingName_;
::g::Uno::UX::Selector Stroke::_widthName_;

// public Stroke() [instance] :487
void Stroke::ctor_1()
{
    uStackFrame __("Fuse.Drawing.Stroke", ".ctor()");
    _width = 1.0f;
    _adjustment = 2;
    _alignment = 1;
    ctor_();
}

// public Stroke(Fuse.Drawing.Brush brush, [float width], [Fuse.Drawing.LineCap lineCap], [Fuse.Drawing.LineJoin lineJoin]) [instance] :489
void Stroke::ctor_2(::g::Fuse::Drawing::Brush* brush, float width, int lineCap, int lineJoin)
{
    uStackFrame __("Fuse.Drawing.Stroke", ".ctor(Fuse.Drawing.Brush,[float],[Fuse.Drawing.LineCap],[Fuse.Drawing.LineJoin])");
    _width = 1.0f;
    _adjustment = 2;
    _alignment = 1;
    ctor_();
    Brush(brush);
    Width(width);
    LineCap(lineCap);
    LineJoin(lineJoin);
}

// private float Adjust(float w, float ppi) [instance] :451
float Stroke::Adjust(float w, float ppi)
{
    uStackFrame __("Fuse.Drawing.Stroke", "Adjust(float,float)");
    w = AdjustPosition(w, ppi);
    w = ::g::Uno::Math::Max1(w, 1.0f / ppi);
    return w;
}

// public Fuse.Drawing.StrokeAdjustment get_Adjustment() [instance] :375
int Stroke::Adjustment()
{
    uStackFrame __("Fuse.Drawing.Stroke", "get_Adjustment()");
    return _adjustment;
}

// public void set_Adjustment(Fuse.Drawing.StrokeAdjustment value) [instance] :376
void Stroke::Adjustment(int value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Adjustment(Fuse.Drawing.StrokeAdjustment)");

    if (_adjustment != value)
    {
        _adjustment = value;
        OnPropertyChanged(Stroke::_adjustmentName());
    }
}

// private float AdjustPosition(float w, float ppi) [instance] :428
float Stroke::AdjustPosition(float w, float ppi)
{
    uStackFrame __("Fuse.Drawing.Stroke", "AdjustPosition(float,float)");

    switch (Adjustment())
    {
        case 0:
            return w;
        case 1:
        {
            w = ::g::Uno::Math::Ceil1(w * ppi) / ppi;
            break;
        }
        case 2:
        {
            w = ::g::Uno::Math::Floor1((w * ppi) + 0.5f) / ppi;
            break;
        }
        case 3:
        {
            w = ::g::Uno::Math::Floor1(w * ppi) / ppi;
            break;
        }
    }

    return w;
}

// public Fuse.Drawing.StrokeAlignment get_Alignment() [instance] :391
int Stroke::Alignment()
{
    uStackFrame __("Fuse.Drawing.Stroke", "get_Alignment()");
    return _alignment;
}

// public void set_Alignment(Fuse.Drawing.StrokeAlignment value) [instance] :392
void Stroke::Alignment(int value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Alignment(Fuse.Drawing.StrokeAlignment)");

    if (_alignment != value)
    {
        _alignment = value;
        OnPropertyChanged(Stroke::_alignmentName());
    }
}

// public Fuse.Drawing.Brush get_Brush() [instance] :302
::g::Fuse::Drawing::Brush* Stroke::Brush()
{
    uStackFrame __("Fuse.Drawing.Stroke", "get_Brush()");
    return _brush;
}

// public void set_Brush(Fuse.Drawing.Brush value) [instance] :303
void Stroke::Brush(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Brush(Fuse.Drawing.Brush)");

    if (value == _brush)
        return;

    if (IsPinned())
        uPtr(_brush)->Unpin();

    if (uIs((::g::Fuse::Drawing::Brush*)_brush, ::TYPES[45/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(_brush, ::TYPES[45/*Fuse.Drawing.DynamicBrush*/]))->RemovePropertyListener((uObject*)this);

    _brush = value;

    if (uIs((::g::Fuse::Drawing::Brush*)_brush, ::TYPES[45/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(_brush, ::TYPES[45/*Fuse.Drawing.DynamicBrush*/]))->AddPropertyListener((uObject*)this);

    if (IsPinned())
        uPtr(_brush)->Pin();

    OnPropertyChanged(Stroke::_brushName());
}

// public float4 get_Color() [instance] :325
::g::Uno::Float4 Stroke::Color()
{
    uStackFrame __("Fuse.Drawing.Stroke", "get_Color()");

    if (uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[92/*Fuse.Drawing.ISolidColor*/]))
        return ::g::Fuse::Drawing::ISolidColor::Color(uInterface(uPtr((uObject*)Brush()), ::TYPES[92/*Fuse.Drawing.ISolidColor*/]));

    return ::g::Uno::Float4__New1(0.0f);
}

// public void set_Color(float4 value) [instance] :331
void Stroke::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Color(float4)");

    if (::g::Uno::Float4__op_Inequality(value, Color()))
    {
        if (!uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[4/*Fuse.Drawing.SolidColor*/]))
            Brush(::g::Fuse::Drawing::SolidColor::New3(value));
        else
            uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(Brush(), ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->Color(value);

        OnPropertyChanged(Stroke::_colorName());
    }
}

// public float2 GetDeviceAdjusted(float ppi) [instance] :403
::g::Uno::Float2 Stroke::GetDeviceAdjusted(float ppi)
{
    uStackFrame __("Fuse.Drawing.Stroke", "GetDeviceAdjusted(float)");
    float lo = 0.0f;
    float hi = 0.0f;

    switch (Alignment())
    {
        case 2:
        {
            lo = ::g::Uno::Math::Ceil1((_offset - 0.5f) * ppi) / ppi;
            hi = lo + Adjust(_width, ppi);
            break;
        }
        case 1:
        {
            hi = ::g::Uno::Math::Floor1((_offset + 0.5f) * ppi) / ppi;
            lo = hi - Adjust(_width, ppi);
            break;
        }
        case 0:
        {
            lo = AdjustPosition(_offset - (_width / 2.0f), ppi);
            hi = lo + Adjust(_width, ppi);
            break;
        }
    }

    ::g::Uno::Float2 r = ::g::Uno::Float2__New2(hi - lo, (hi + lo) / 2.0f);
    return r;
}

// public bool get_IsPinned() [instance] :512
bool Stroke::IsPinned()
{
    uStackFrame __("Fuse.Drawing.Stroke", "get_IsPinned()");
    return _pinCount > 0;
}

// public Fuse.Drawing.LineCap get_LineCap() [instance] :464
int Stroke::LineCap()
{
    uStackFrame __("Fuse.Drawing.Stroke", "get_LineCap()");
    return _lineCap;
}

// public void set_LineCap(Fuse.Drawing.LineCap value) [instance] :465
void Stroke::LineCap(int value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_LineCap(Fuse.Drawing.LineCap)");

    if (value == _lineCap)
        return;

    _lineCap = value;
    OnPropertyChanged(Stroke::_lineCapName());
}

// public Fuse.Drawing.LineJoin get_LineJoin() [instance] :478
int Stroke::LineJoin()
{
    uStackFrame __("Fuse.Drawing.Stroke", "get_LineJoin()");
    return _lineJoin;
}

// public void set_LineJoin(Fuse.Drawing.LineJoin value) [instance] :479
void Stroke::LineJoin(int value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_LineJoin(Fuse.Drawing.LineJoin)");

    if (value == _lineJoin)
        return;

    _lineJoin = value;
    OnPropertyChanged(Stroke::_lineJoinName());
}

// public float get_Offset() [instance] :362
float Stroke::Offset()
{
    uStackFrame __("Fuse.Drawing.Stroke", "get_Offset()");
    return _offset;
}

// public void set_Offset(float value) [instance] :363
void Stroke::Offset(float value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Offset(float)");
    _offset = value;
    OnPropertyChanged(Stroke::_offsetName());
}

// protected void OnPinned() [instance] :514
void Stroke::OnPinned()
{
    uStackFrame __("Fuse.Drawing.Stroke", "OnPinned()");

    if (Brush() != NULL)
        uPtr(Brush())->Pin();
}

// protected void OnUnpinned() [instance] :520
void Stroke::OnUnpinned()
{
    uStackFrame __("Fuse.Drawing.Stroke", "OnUnpinned()");

    if (Brush() != NULL)
        uPtr(Brush())->Unpin();
}

// public void Pin() [instance] :498
void Stroke::Pin()
{
    uStackFrame __("Fuse.Drawing.Stroke", "Pin()");
    _pinCount++;

    if (_pinCount == 1)
        OnPinned();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) [instance] :526
void Stroke::Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    uStackFrame __("Fuse.Drawing.Stroke", "Prepare(Fuse.DrawContext,float2)");

    if (Brush() != NULL)
        uPtr(Brush())->Prepare(dc, canvasSize);
}

// public void Unpin() [instance] :505
void Stroke::Unpin()
{
    uStackFrame __("Fuse.Drawing.Stroke", "Unpin()");
    _pinCount--;

    if (_pinCount == 0)
        OnUnpinned();
}

// public float get_Width() [instance] :350
float Stroke::Width()
{
    uStackFrame __("Fuse.Drawing.Stroke", "get_Width()");
    return _width;
}

// public void set_Width(float value) [instance] :351
void Stroke::Width(float value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Width(float)");
    _width = value;
    OnPropertyChanged(Stroke::_widthName());
}

// public Stroke New() [static] :487
Stroke* Stroke::New2()
{
    Stroke* obj1 = (Stroke*)uNew(Stroke_typeof());
    obj1->ctor_1();
    return obj1;
}

// public Stroke New(Fuse.Drawing.Brush brush, [float width], [Fuse.Drawing.LineCap lineCap], [Fuse.Drawing.LineJoin lineJoin]) [static] :489
Stroke* Stroke::New3(::g::Fuse::Drawing::Brush* brush, float width, int lineCap, int lineJoin)
{
    Stroke* obj2 = (Stroke*)uNew(Stroke_typeof());
    obj2->ctor_2(brush, width, lineCap, lineJoin);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public enum StrokeAdjustment :274
uEnumType* StrokeAdjustment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.StrokeAdjustment", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "PixelCeil", 1LL,
        "PixelNear", 2LL,
        "PixelFloor", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public enum StrokeAlignment :282
uEnumType* StrokeAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.StrokeAlignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Center", 0LL,
        "Inside", 1LL,
        "Outside", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal sealed class Token :514
// {
static void Token_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Token, First), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Token, HasAction), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Token, Last), 0,
        Token_typeof(), offsetof(::g::Fuse::Drawing::Token, Next), 0);
}

uType* Token_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Token);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Token", options);
    type->fp_build_ = Token_build;
    return type;
}

// public Token(int first, bool hasAction) :523
void Token__ctor__fn(Token* __this, int* first, bool* hasAction)
{
    __this->ctor_(*first, *hasAction);
}

// public Token New(int first, bool hasAction) :523
void Token__New1_fn(int* first, bool* hasAction, Token** __retval)
{
    *__retval = Token::New1(*first, *hasAction);
}

// public Token(int first, bool hasAction) [instance] :523
void Token::ctor_(int first, bool hasAction)
{
    uStackFrame __("Fuse.Drawing.Token", ".ctor(int,bool)");
    First = first;
    HasAction = hasAction;
}

// public Token New(int first, bool hasAction) [static] :523
Token* Token::New1(int first, bool hasAction)
{
    Token* obj1 = (Token*)uNew(Token_typeof());
    obj1->ctor_(first, hasAction);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal sealed class Util :1065
// {
static void Util_build(uType* type)
{
    ::STRINGS[40] = uString::Const("NaN in path data!");
    ::STRINGS[41] = uString::Const("Too large path coordinate!");
}

uType* Util_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Util);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Util", options);
    type->fp_build_ = Util_build;
    type->fp_ctor_ = (void*)Util__New1_fn;
    return type;
}

// public generated Util() :1065
void Util__ctor__fn(Util* __this)
{
    __this->ctor_();
}

// public generated Util New() :1065
void Util__New1_fn(Util** __retval)
{
    *__retval = Util::New1();
}

// public static void ValidateFloat(float v) :1067
void Util__ValidateFloat_fn(float* v)
{
    Util::ValidateFloat(*v);
}

// public static void ValidateFloat2(float2 v) :1075
void Util__ValidateFloat2_fn(::g::Uno::Float2* v)
{
    Util::ValidateFloat2(*v);
}

// public generated Util() [instance] :1065
void Util::ctor_()
{
}

// public generated Util New() [static] :1065
Util* Util::New1()
{
    Util* obj1 = (Util*)uNew(Util_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void ValidateFloat(float v) [static] :1067
void Util::ValidateFloat(float v)
{
    uStackFrame __("Fuse.Drawing.Util", "ValidateFloat(float)");

    if (v != v)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[40/*"NaN in path...*/]));

    if (v >= 1e+18f)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[41/*"Too large p...*/]));
}

// public static void ValidateFloat2(float2 v) [static] :1075
void Util::ValidateFloat2(::g::Uno::Float2 v)
{
    uStackFrame __("Fuse.Drawing.Util", "ValidateFloat2(float2)");
    Util::ValidateFloat(v.X);
    Util::ValidateFloat(v.Y);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.32.14\$.uno
// ------------------------------------------------------------

// internal sealed class VerticalLineTo :1264
// {
static void VerticalLineTo_build(uType* type)
{
    ::STRINGS[42] = uString::Const("V ");
    ::STRINGS[43] = uString::Const("V");
    ::TYPES[7] = uObject_typeof();
    type->SetFields(5,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::VerticalLineTo, _y), 0);
}

::g::Fuse::Drawing::PathGeometry_type* VerticalLineTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(VerticalLineTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.VerticalLineTo", options);
    type->SetBase(::g::Fuse::Drawing::LineTo_typeof());
    type->fp_build_ = VerticalLineTo_build;
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))VerticalLineTo__Serialize_fn;
    return type;
}

// public VerticalLineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float y) :1270
void VerticalLineTo__ctor_3_fn(VerticalLineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* y)
{
    __this->ctor_3(prev, *lastPosition, *y);
}

// public VerticalLineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float y) :1270
void VerticalLineTo__New4_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* y, VerticalLineTo** __retval)
{
    *__retval = VerticalLineTo::New4(prev, *lastPosition, *y);
}

// protected internal override sealed string Serialize() :1279
void VerticalLineTo__Serialize_fn(VerticalLineTo* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.VerticalLineTo", "Serialize()");
    return *__retval = ::g::Uno::String::op_Addition1(::STRINGS[42/*"V "*/], uBox(::g::Uno::Float_typeof(), __this->_y)), void();
}

// public VerticalLineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float y) [instance] :1270
void VerticalLineTo::ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float y)
{
    uStackFrame __("Fuse.Drawing.VerticalLineTo", ".ctor(Fuse.Drawing.PathGeometry,float2,float)");
    ctor_1();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ::g::Fuse::Drawing::Util::ValidateFloat(y);
    LineToCtor(prev, lastPosition, ::g::Uno::Float2__New2(lastPosition.X, y));
    _y = y;
}

// public VerticalLineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float y) [static] :1270
VerticalLineTo* VerticalLineTo::New4(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float y)
{
    VerticalLineTo* obj1 = (VerticalLineTo*)uNew(VerticalLineTo_typeof());
    obj1->ctor_3(prev, lastPosition, y);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.32.14\$.uno
// ------------------------------------------------------

// public static class WindingRules :539
// {
static void WindingRules_build(uType* type)
{
    type->Reflection.SetFunctions(5,
        new uFunction("AbsoluteGreaterOrEqualsTwo", NULL, (void*)WindingRules__AbsoluteGreaterOrEqualsTwo_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Negative", NULL, (void*)WindingRules__Negative_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NonZero", NULL, (void*)WindingRules__NonZero_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Odd", NULL, (void*)WindingRules__Odd_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Positive", NULL, (void*)WindingRules__Positive_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()));
}

uClassType* WindingRules_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.WindingRules", options);
    type->fp_build_ = WindingRules_build;
    return type;
}

// public static bool AbsoluteGreaterOrEqualsTwo(int n) :557
void WindingRules__AbsoluteGreaterOrEqualsTwo_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::AbsoluteGreaterOrEqualsTwo(*n);
}

// public static bool Negative(int n) :553
void WindingRules__Negative_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::Negative(*n);
}

// public static bool NonZero(int n) :545
void WindingRules__NonZero_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::NonZero(*n);
}

// public static bool Odd(int n) :541
void WindingRules__Odd_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::Odd(*n);
}

// public static bool Positive(int n) :549
void WindingRules__Positive_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::Positive(*n);
}

// public static bool AbsoluteGreaterOrEqualsTwo(int n) [static] :557
bool WindingRules::AbsoluteGreaterOrEqualsTwo(int n)
{
    uStackFrame __("Fuse.Drawing.WindingRules", "AbsoluteGreaterOrEqualsTwo(int)");
    return (n >= 2) || (n <= -2);
}

// public static bool Negative(int n) [static] :553
bool WindingRules::Negative(int n)
{
    uStackFrame __("Fuse.Drawing.WindingRules", "Negative(int)");
    return n < 0;
}

// public static bool NonZero(int n) [static] :545
bool WindingRules::NonZero(int n)
{
    uStackFrame __("Fuse.Drawing.WindingRules", "NonZero(int)");
    return n != 0;
}

// public static bool Odd(int n) [static] :541
bool WindingRules::Odd(int n)
{
    uStackFrame __("Fuse.Drawing.WindingRules", "Odd(int)");
    return (n & 1) != 0;
}

// public static bool Positive(int n) [static] :549
bool WindingRules::Positive(int n)
{
    uStackFrame __("Fuse.Drawing.WindingRules", "Positive(int)");
    return n > 0;
}
// }

}}} // ::g::Fuse::Drawing
