// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseDrawingPrimitives_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.BlendMode.h>
#include <Fuse.Drawing.BlendModeHelpers.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.Internal.Float2Buffer.h>
#include <Fuse.Drawing.Internal.FloatBuffer.h>
#include <Fuse.Drawing.Internal.TypedBuffer.h>
#include <Fuse.Drawing.Internal.UShortBuffer.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.Primitives.Circle.h>
#include <Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h>
#include <Fuse.Drawing.Primitives.ConvexWedgeCoverage.h>
#include <Fuse.Drawing.Primitives.Coverage.h>
#include <Fuse.Drawing.Primitives.FillCoverage.h>
#include <Fuse.Drawing.Primitives.LimitCoverage.h>
#include <Fuse.Drawing.Primitives.OneLimitCoverage.h>
#include <Fuse.Drawing.Primitives.Rectangle.h>
#include <Fuse.Drawing.Primitives.StrokeCoverage.h>
#include <Fuse.Drawing.Primitives.Wedge.h>
#include <Fuse.Drawing.Primitives.WedgeCoverage.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[18];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.32.14\$.uno
// -----------------------------------------------------------------

// public sealed class Circle :21
// {
// static Circle() :21
static void Circle__cctor__fn(uType* __type)
{
    Circle::Singleton_ = Circle::New1();
}

static void Circle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof();
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::Primitives::OneLimitCoverage_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    ::TYPES[11] = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    type->SetFields(0,
        ::g::Fuse::Drawing::Internal::UShortBuffer_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _bufferIndex), 0,
        ::g::Fuse::Drawing::Internal::Float2Buffer_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _bufferVertex), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_22c0272b), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_37e0cc03), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_44028225), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_44238225), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_44c88225), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_492f1061), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_49d1aa95), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_508d0866), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_8cc20e6d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_8f2093cb), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_95395768), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_95dbf19c), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_9cb80e6d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_a4b30e6d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_a6879bc6), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_ad930e6d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_b58e0e6d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_bdee0e6d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_c0451d52), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_c0451d53), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_c5840e6d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_ebd684fc), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_ec791f30), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_f3347d01), 0,
        ::g::Fuse::Drawing::Primitives::FillCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _oneLimitCoverage), 0,
        ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _strokeCoverage), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, Draw_BlendDstAlpha_44028225_12_7_25), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, Draw_BlendDstRgb_44028225_12_5_24), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, Draw_BlendSrcAlpha_44028225_12_6_23), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, Draw_BlendSrcRgb_44028225_12_4_22), 0,
        Circle_typeof(), (uintptr_t)&::g::Fuse::Drawing::Primitives::Circle::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 33));
    type->Reflection.SetFunctions(3,
        new uFunction("Fill", NULL, (void*)Circle__Fill_fn, 0, false, uVoid_typeof(), 6, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Circle__New1_fn, 0, true, Circle_typeof(), 0),
        new uFunction("Stroke", NULL, (void*)Circle__Stroke_fn, 0, false, uVoid_typeof(), 6, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()));
}

uType* Circle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 34;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Circle", options);
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_cctor_ = Circle__cctor__fn;
    return type;
}

// public generated Circle() :21
void Circle__ctor__fn(Circle* __this)
{
    __this->ctor_();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float2 extend, float2 center, float smoothness) :79
void Circle__Draw_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, ::g::Uno::Float2* extend, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Draw(dc, visual, *radius, brush, cover, limit, *extend, *center, *smoothness);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness) :43
void Circle__Fill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Fill(dc, visual, *radius, brush, *center, *smoothness);
}

// private generated void init_DrawCalls() :21
void Circle__init_DrawCalls_fn(Circle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers() :53
void Circle__InitBuffers_fn(Circle* __this)
{
    __this->InitBuffers();
}

// public generated Circle New() :21
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness) :27
void Circle__Stroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Stroke(dc, visual, *radius, stroke, *center, *smoothness);
}

uSStrong<Circle*> Circle::Singleton_;

// public generated Circle() [instance] :21
void Circle::ctor_()
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", ".ctor()");
    _oneLimitCoverage = ::g::Fuse::Drawing::Primitives::OneLimitCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    init_DrawCalls();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float2 extend, float2 center, float smoothness) [instance] :79
void Circle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, ::g::Uno::Float2 extend, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Draw(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,Fuse.Drawing.Primitives.Coverage,Fuse.Drawing.Primitives.LimitCoverage,float2,float2,float)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float4 ind19;
    ::g::Uno::Float4 ind20;
    ::g::Uno::Float4 ind21;
    ::g::Uno::Float4 ind22;
    ::g::Uno::Float4 ind23;
    ::g::Uno::Float4 ind24;
    ::g::Uno::Float4 ind25;
    ::g::Uno::Float4 ind26;
    ::g::Uno::Float4 ind27;
    ::g::Uno::Float4 ind28;
    ::g::Uno::Float4 ind29;
    ::g::Uno::Float4 ind30;

    if (_bufferVertex == NULL)
        InitBuffers();

    if (uIs(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Graphics::Texture2D* Texture_8cc20e6d_14_6_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetTexture();
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_8cc20e6d_14_5_7 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_8cc20e6d_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_8cc20e6d_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_8cc20e6d.BlendEnabled(true);
                _draw_8cc20e6d.DepthTestEnabled(false);
                _draw_8cc20e6d.CullFace(uPtr(dc)->CullFace());
                _draw_8cc20e6d.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_8cc20e6d.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_8cc20e6d.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_8cc20e6d.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_8cc20e6d.Const(0, Texture_8cc20e6d_14_6_4 == NULL);
                _draw_8cc20e6d.Use();
                _draw_8cc20e6d.Attrib1(1, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_8cc20e6d.Uniform2(2, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_8cc20e6d.Uniform2(3, center);
                _draw_8cc20e6d.Uniform12(4, dc->GetLocalToClipTransform(visual));
                _draw_8cc20e6d.Uniform2(5, uPtr(visual)->ActualSize());
                _draw_8cc20e6d.Uniform2(6, DP_8cc20e6d_14_5_7.Origin);
                _draw_8cc20e6d.Uniform2(7, DP_8cc20e6d_14_5_7.Size);
                _draw_8cc20e6d.Uniform2(8, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_8cc20e6d_14_5_7.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_8cc20e6d_14_5_7.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
                _draw_8cc20e6d.Uniform2(9, (ind3 = DP_8cc20e6d_14_5_7.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_8cc20e6d.Uniform10(10, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_8cc20e6d.Uniform(11, radius);
                _draw_8cc20e6d.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_8cc20e6d.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_8cc20e6d.Uniform(14, dc->ViewportPixelsPerPoint());
                _draw_8cc20e6d.Uniform(15, 1.0f / smoothness);
                _draw_8cc20e6d.Uniform(16, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_8cc20e6d.Uniform2(17, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_8cc20e6d_20_2_14, EndVec_8cc20e6d_20_3_15)));
                _draw_8cc20e6d.Uniform2(18, StartVec_8cc20e6d_20_2_14);
                _draw_8cc20e6d.Uniform2(19, EndVec_8cc20e6d_20_3_15);
                _draw_8cc20e6d.Sampler2(20, Texture_8cc20e6d_14_6_4);
                _draw_8cc20e6d.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Graphics::Texture2D* Texture_a4b30e6d_14_6_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetTexture();
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_a4b30e6d_14_5_7 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_a4b30e6d_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_a4b30e6d_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_a4b30e6d.BlendEnabled(true);
                _draw_a4b30e6d.DepthTestEnabled(false);
                _draw_a4b30e6d.CullFace(uPtr(dc)->CullFace());
                _draw_a4b30e6d.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_a4b30e6d.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_a4b30e6d.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_a4b30e6d.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_a4b30e6d.Const(0, Texture_a4b30e6d_14_6_4 == NULL);
                _draw_a4b30e6d.Use();
                _draw_a4b30e6d.Attrib1(1, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_a4b30e6d.Uniform2(2, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_a4b30e6d.Uniform2(3, center);
                _draw_a4b30e6d.Uniform12(4, dc->GetLocalToClipTransform(visual));
                _draw_a4b30e6d.Uniform2(5, uPtr(visual)->ActualSize());
                _draw_a4b30e6d.Uniform2(6, DP_a4b30e6d_14_5_7.Origin);
                _draw_a4b30e6d.Uniform2(7, DP_a4b30e6d_14_5_7.Size);
                _draw_a4b30e6d.Uniform2(8, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_a4b30e6d_14_5_7.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_a4b30e6d_14_5_7.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_a4b30e6d.Uniform2(9, (ind6 = DP_a4b30e6d_14_5_7.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_a4b30e6d.Uniform10(10, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_a4b30e6d.Uniform(11, radius);
                _draw_a4b30e6d.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_a4b30e6d.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_a4b30e6d.Uniform(14, dc->ViewportPixelsPerPoint());
                _draw_a4b30e6d.Uniform(15, 1.0f / smoothness);
                _draw_a4b30e6d.Uniform(16, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_a4b30e6d.Uniform2(17, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_a4b30e6d_20_2_14, EndVec_a4b30e6d_20_3_15)));
                _draw_a4b30e6d.Uniform2(18, StartVec_a4b30e6d_20_2_14);
                _draw_a4b30e6d.Uniform2(19, EndVec_a4b30e6d_20_3_15);
                _draw_a4b30e6d.Sampler2(20, Texture_a4b30e6d_14_6_4);
                _draw_a4b30e6d.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[6/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Graphics::Texture2D* Texture_9cb80e6d_14_6_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetTexture();
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_9cb80e6d_14_5_7 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_9cb80e6d.BlendEnabled(true);
                _draw_9cb80e6d.DepthTestEnabled(false);
                _draw_9cb80e6d.CullFace(uPtr(dc)->CullFace());
                _draw_9cb80e6d.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_9cb80e6d.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_9cb80e6d.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_9cb80e6d.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_9cb80e6d.Const(0, Texture_9cb80e6d_14_6_4 == NULL);
                _draw_9cb80e6d.Use();
                _draw_9cb80e6d.Attrib1(1, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_9cb80e6d.Uniform2(2, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_9cb80e6d.Uniform2(3, center);
                _draw_9cb80e6d.Uniform12(4, dc->GetLocalToClipTransform(visual));
                _draw_9cb80e6d.Uniform2(5, uPtr(visual)->ActualSize());
                _draw_9cb80e6d.Uniform2(6, DP_9cb80e6d_14_5_7.Origin);
                _draw_9cb80e6d.Uniform2(7, DP_9cb80e6d_14_5_7.Size);
                _draw_9cb80e6d.Uniform2(8, ::g::Uno::Float2__op_Subtraction2((ind7 = DP_9cb80e6d_14_5_7.UVClip, ::g::Uno::Float2__New2(ind7.Z, ind7.W)), (ind8 = DP_9cb80e6d_14_5_7.UVClip, ::g::Uno::Float2__New2(ind8.X, ind8.Y))));
                _draw_9cb80e6d.Uniform2(9, (ind9 = DP_9cb80e6d_14_5_7.UVClip, ::g::Uno::Float2__New2(ind9.X, ind9.Y)));
                _draw_9cb80e6d.Uniform10(10, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_9cb80e6d.Uniform(11, radius);
                _draw_9cb80e6d.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_9cb80e6d.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_9cb80e6d.Uniform(14, dc->ViewportPixelsPerPoint());
                _draw_9cb80e6d.Uniform(15, 1.0f / smoothness);
                _draw_9cb80e6d.Uniform(16, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_9cb80e6d.Sampler2(17, Texture_9cb80e6d_14_6_4);
                _draw_9cb80e6d.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_b58e0e6d_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_b58e0e6d_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_b58e0e6d.BlendEnabled(true);
                _draw_b58e0e6d.DepthTestEnabled(false);
                _draw_b58e0e6d.CullFace(uPtr(dc)->CullFace());
                _draw_b58e0e6d.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_b58e0e6d.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_b58e0e6d.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_b58e0e6d.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_b58e0e6d.Use();
                _draw_b58e0e6d.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_b58e0e6d.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_b58e0e6d.Uniform2(2, center);
                _draw_b58e0e6d.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_b58e0e6d.Uniform(4, radius);
                _draw_b58e0e6d.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_b58e0e6d.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_b58e0e6d.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_b58e0e6d.Uniform(8, 1.0f / smoothness);
                _draw_b58e0e6d.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_b58e0e6d.Uniform6(10, (ind10 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind10.X, ind10.Y, ind10.Z)));
                _draw_b58e0e6d.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_b58e0e6d.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_b58e0e6d_20_2_7, EndVec_b58e0e6d_20_3_8)));
                _draw_b58e0e6d.Uniform2(13, StartVec_b58e0e6d_20_2_7);
                _draw_b58e0e6d.Uniform2(14, EndVec_b58e0e6d_20_3_8);
                _draw_b58e0e6d.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_ad930e6d_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_ad930e6d_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_ad930e6d.BlendEnabled(true);
                _draw_ad930e6d.DepthTestEnabled(false);
                _draw_ad930e6d.CullFace(uPtr(dc)->CullFace());
                _draw_ad930e6d.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_ad930e6d.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_ad930e6d.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_ad930e6d.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_ad930e6d.Use();
                _draw_ad930e6d.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_ad930e6d.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_ad930e6d.Uniform2(2, center);
                _draw_ad930e6d.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_ad930e6d.Uniform(4, radius);
                _draw_ad930e6d.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_ad930e6d.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_ad930e6d.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_ad930e6d.Uniform(8, 1.0f / smoothness);
                _draw_ad930e6d.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_ad930e6d.Uniform6(10, (ind11 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind11.X, ind11.Y, ind11.Z)));
                _draw_ad930e6d.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_ad930e6d.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_ad930e6d_20_2_7, EndVec_ad930e6d_20_3_8)));
                _draw_ad930e6d.Uniform2(13, StartVec_ad930e6d_20_2_7);
                _draw_ad930e6d.Uniform2(14, EndVec_ad930e6d_20_3_8);
                _draw_ad930e6d.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[6/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_c5840e6d.BlendEnabled(true);
                _draw_c5840e6d.DepthTestEnabled(false);
                _draw_c5840e6d.CullFace(uPtr(dc)->CullFace());
                _draw_c5840e6d.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_c5840e6d.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_c5840e6d.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_c5840e6d.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_c5840e6d.Use();
                _draw_c5840e6d.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c5840e6d.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_c5840e6d.Uniform2(2, center);
                _draw_c5840e6d.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_c5840e6d.Uniform(4, radius);
                _draw_c5840e6d.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_c5840e6d.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_c5840e6d.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_c5840e6d.Uniform(8, 1.0f / smoothness);
                _draw_c5840e6d.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_c5840e6d.Uniform6(10, (ind12 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind12.X, ind12.Y, ind12.Z)));
                _draw_c5840e6d.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_c5840e6d.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_bdee0e6d_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_bdee0e6d_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                ::g::Uno::Float2 StartVec_bdee0e6d_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_bdee0e6d_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_bdee0e6d.BlendEnabled(true);
                _draw_bdee0e6d.DepthTestEnabled(false);
                _draw_bdee0e6d.CullFace(uPtr(dc)->CullFace());
                _draw_bdee0e6d.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_bdee0e6d.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_bdee0e6d.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_bdee0e6d.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_bdee0e6d.Use();
                _draw_bdee0e6d.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_bdee0e6d.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_bdee0e6d.Uniform2(2, center);
                _draw_bdee0e6d.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_bdee0e6d.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_bdee0e6d.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_bdee0e6d_14_18_6, angleLen_bdee0e6d_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_bdee0e6d.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_bdee0e6d.Uniform(7, radius);
                _draw_bdee0e6d.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_bdee0e6d.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_bdee0e6d.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_bdee0e6d.Uniform(11, 1.0f / smoothness);
                _draw_bdee0e6d.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_bdee0e6d.Uniform2(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_bdee0e6d_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_bdee0e6d.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_bdee0e6d_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_bdee0e6d.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_bdee0e6d_20_2_15, EndVec_bdee0e6d_20_3_16)));
                _draw_bdee0e6d.Uniform2(16, StartVec_bdee0e6d_20_2_15);
                _draw_bdee0e6d.Uniform2(17, EndVec_bdee0e6d_20_3_16);
                _draw_bdee0e6d.Sampler2(18, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_bdee0e6d.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_c0451d53_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_c0451d53_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                ::g::Uno::Float2 StartVec_c0451d53_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_c0451d53_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_c0451d53.BlendEnabled(true);
                _draw_c0451d53.DepthTestEnabled(false);
                _draw_c0451d53.CullFace(uPtr(dc)->CullFace());
                _draw_c0451d53.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_c0451d53.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_c0451d53.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_c0451d53.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_c0451d53.Use();
                _draw_c0451d53.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c0451d53.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_c0451d53.Uniform2(2, center);
                _draw_c0451d53.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_c0451d53.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_c0451d53.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_c0451d53_14_18_6, angleLen_c0451d53_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_c0451d53.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_c0451d53.Uniform(7, radius);
                _draw_c0451d53.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_c0451d53.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_c0451d53.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_c0451d53.Uniform(11, 1.0f / smoothness);
                _draw_c0451d53.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_c0451d53.Uniform2(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_c0451d53_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_c0451d53.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_c0451d53_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_c0451d53.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_c0451d53_20_2_15, EndVec_c0451d53_20_3_16)));
                _draw_c0451d53.Uniform2(16, StartVec_c0451d53_20_2_15);
                _draw_c0451d53.Uniform2(17, EndVec_c0451d53_20_3_16);
                _draw_c0451d53.Sampler2(18, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_c0451d53.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[6/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_c0451d52_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_c0451d52_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                _draw_c0451d52.BlendEnabled(true);
                _draw_c0451d52.DepthTestEnabled(false);
                _draw_c0451d52.CullFace(uPtr(dc)->CullFace());
                _draw_c0451d52.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_c0451d52.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_c0451d52.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_c0451d52.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_c0451d52.Use();
                _draw_c0451d52.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c0451d52.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_c0451d52.Uniform2(2, center);
                _draw_c0451d52.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_c0451d52.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_c0451d52.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_c0451d52_14_18_6, angleLen_c0451d52_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_c0451d52.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_c0451d52.Uniform(7, radius);
                _draw_c0451d52.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_c0451d52.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_c0451d52.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_c0451d52.Uniform(11, 1.0f / smoothness);
                _draw_c0451d52.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_c0451d52.Uniform2(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_c0451d52_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_c0451d52.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_c0451d52_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_c0451d52.Sampler2(15, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_c0451d52.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_44028225_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_44028225_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_44028225.BlendEnabled(true);
                _draw_44028225.DepthTestEnabled(false);
                _draw_44028225.CullFace(uPtr(dc)->CullFace());
                _draw_44028225.BlendSrcRgb(Draw_BlendSrcRgb_44028225_12_4_22);
                _draw_44028225.BlendSrcAlpha(Draw_BlendSrcAlpha_44028225_12_6_23);
                _draw_44028225.BlendDstRgb(Draw_BlendDstRgb_44028225_12_5_24);
                _draw_44028225.BlendDstAlpha(Draw_BlendDstAlpha_44028225_12_7_25);
                _draw_44028225.Use();
                _draw_44028225.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_44028225.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_44028225.Uniform2(2, center);
                _draw_44028225.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_44028225.Uniform(4, radius);
                _draw_44028225.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_44028225.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_44028225.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_44028225.Uniform(8, 1.0f / smoothness);
                _draw_44028225.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_44028225.Uniform6(10, (ind13 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind13.X, ind13.Y, ind13.Z)));
                _draw_44028225.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_44028225_20_2_7, EndVec_44028225_20_3_8)));
                _draw_44028225.Uniform2(12, StartVec_44028225_20_2_7);
                _draw_44028225.Uniform2(13, EndVec_44028225_20_3_8);
                _draw_44028225.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_44238225_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_44238225_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_44238225.BlendEnabled(true);
                _draw_44238225.DepthTestEnabled(false);
                _draw_44238225.CullFace(uPtr(dc)->CullFace());
                _draw_44238225.BlendSrcRgb(Draw_BlendSrcRgb_44028225_12_4_22);
                _draw_44238225.BlendSrcAlpha(Draw_BlendSrcAlpha_44028225_12_6_23);
                _draw_44238225.BlendDstRgb(Draw_BlendDstRgb_44028225_12_5_24);
                _draw_44238225.BlendDstAlpha(Draw_BlendDstAlpha_44028225_12_7_25);
                _draw_44238225.Use();
                _draw_44238225.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_44238225.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_44238225.Uniform2(2, center);
                _draw_44238225.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_44238225.Uniform(4, radius);
                _draw_44238225.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_44238225.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_44238225.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_44238225.Uniform(8, 1.0f / smoothness);
                _draw_44238225.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_44238225.Uniform6(10, (ind14 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind14.X, ind14.Y, ind14.Z)));
                _draw_44238225.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_44238225_20_2_7, EndVec_44238225_20_3_8)));
                _draw_44238225.Uniform2(12, StartVec_44238225_20_2_7);
                _draw_44238225.Uniform2(13, EndVec_44238225_20_3_8);
                _draw_44238225.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[6/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_44c88225.BlendEnabled(true);
                _draw_44c88225.DepthTestEnabled(false);
                _draw_44c88225.CullFace(uPtr(dc)->CullFace());
                _draw_44c88225.BlendSrcRgb(Draw_BlendSrcRgb_44028225_12_4_22);
                _draw_44c88225.BlendSrcAlpha(Draw_BlendSrcAlpha_44028225_12_6_23);
                _draw_44c88225.BlendDstRgb(Draw_BlendDstRgb_44028225_12_5_24);
                _draw_44c88225.BlendDstAlpha(Draw_BlendDstAlpha_44028225_12_7_25);
                _draw_44c88225.Use();
                _draw_44c88225.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_44c88225.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_44c88225.Uniform2(2, center);
                _draw_44c88225.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_44c88225.Uniform(4, radius);
                _draw_44c88225.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_44c88225.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_44c88225.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_44c88225.Uniform(8, 1.0f / smoothness);
                _draw_44c88225.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_44c88225.Uniform6(10, (ind15 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind15.X, ind15.Y, ind15.Z)));
                _draw_44c88225.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
    else if (uIs(cover, ::TYPES[10/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Graphics::Texture2D* Texture_ebd684fc_14_6_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetTexture();
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_ebd684fc_14_5_7 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_ebd684fc_20_2_13 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_ebd684fc_20_3_14 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_ebd684fc.BlendEnabled(true);
                _draw_ebd684fc.DepthTestEnabled(false);
                _draw_ebd684fc.CullFace(uPtr(dc)->CullFace());
                _draw_ebd684fc.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_ebd684fc.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_ebd684fc.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_ebd684fc.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_ebd684fc.Const(0, Texture_ebd684fc_14_6_4 == NULL);
                _draw_ebd684fc.Use();
                _draw_ebd684fc.Attrib1(1, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_ebd684fc.Uniform2(2, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_ebd684fc.Uniform2(3, center);
                _draw_ebd684fc.Uniform12(4, dc->GetLocalToClipTransform(visual));
                _draw_ebd684fc.Uniform2(5, uPtr(visual)->ActualSize());
                _draw_ebd684fc.Uniform2(6, DP_ebd684fc_14_5_7.Origin);
                _draw_ebd684fc.Uniform2(7, DP_ebd684fc_14_5_7.Size);
                _draw_ebd684fc.Uniform2(8, ::g::Uno::Float2__op_Subtraction2((ind16 = DP_ebd684fc_14_5_7.UVClip, ::g::Uno::Float2__New2(ind16.Z, ind16.W)), (ind17 = DP_ebd684fc_14_5_7.UVClip, ::g::Uno::Float2__New2(ind17.X, ind17.Y))));
                _draw_ebd684fc.Uniform2(9, (ind18 = DP_ebd684fc_14_5_7.UVClip, ::g::Uno::Float2__New2(ind18.X, ind18.Y)));
                _draw_ebd684fc.Uniform10(10, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_ebd684fc.Uniform(11, radius);
                _draw_ebd684fc.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_ebd684fc.Uniform(13, 1.0f / smoothness);
                _draw_ebd684fc.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_ebd684fc.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_ebd684fc_20_2_13, EndVec_ebd684fc_20_3_14)));
                _draw_ebd684fc.Uniform2(16, StartVec_ebd684fc_20_2_13);
                _draw_ebd684fc.Uniform2(17, EndVec_ebd684fc_20_3_14);
                _draw_ebd684fc.Sampler2(18, Texture_ebd684fc_14_6_4);
                _draw_ebd684fc.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Graphics::Texture2D* Texture_492f1061_14_6_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetTexture();
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_492f1061_14_5_7 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_492f1061_20_2_13 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_492f1061_20_3_14 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_492f1061.BlendEnabled(true);
                _draw_492f1061.DepthTestEnabled(false);
                _draw_492f1061.CullFace(uPtr(dc)->CullFace());
                _draw_492f1061.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_492f1061.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_492f1061.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_492f1061.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_492f1061.Const(0, Texture_492f1061_14_6_4 == NULL);
                _draw_492f1061.Use();
                _draw_492f1061.Attrib1(1, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_492f1061.Uniform2(2, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_492f1061.Uniform2(3, center);
                _draw_492f1061.Uniform12(4, dc->GetLocalToClipTransform(visual));
                _draw_492f1061.Uniform2(5, uPtr(visual)->ActualSize());
                _draw_492f1061.Uniform2(6, DP_492f1061_14_5_7.Origin);
                _draw_492f1061.Uniform2(7, DP_492f1061_14_5_7.Size);
                _draw_492f1061.Uniform2(8, ::g::Uno::Float2__op_Subtraction2((ind19 = DP_492f1061_14_5_7.UVClip, ::g::Uno::Float2__New2(ind19.Z, ind19.W)), (ind20 = DP_492f1061_14_5_7.UVClip, ::g::Uno::Float2__New2(ind20.X, ind20.Y))));
                _draw_492f1061.Uniform2(9, (ind21 = DP_492f1061_14_5_7.UVClip, ::g::Uno::Float2__New2(ind21.X, ind21.Y)));
                _draw_492f1061.Uniform10(10, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_492f1061.Uniform(11, radius);
                _draw_492f1061.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_492f1061.Uniform(13, 1.0f / smoothness);
                _draw_492f1061.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_492f1061.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_492f1061_20_2_13, EndVec_492f1061_20_3_14)));
                _draw_492f1061.Uniform2(16, StartVec_492f1061_20_2_13);
                _draw_492f1061.Uniform2(17, EndVec_492f1061_20_3_14);
                _draw_492f1061.Sampler2(18, Texture_492f1061_14_6_4);
                _draw_492f1061.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[6/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Graphics::Texture2D* Texture_a6879bc6_14_6_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetTexture();
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_a6879bc6_14_5_7 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_a6879bc6.BlendEnabled(true);
                _draw_a6879bc6.DepthTestEnabled(false);
                _draw_a6879bc6.CullFace(uPtr(dc)->CullFace());
                _draw_a6879bc6.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_a6879bc6.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_a6879bc6.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_a6879bc6.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_a6879bc6.Const(0, Texture_a6879bc6_14_6_4 == NULL);
                _draw_a6879bc6.Use();
                _draw_a6879bc6.Attrib1(1, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_a6879bc6.Uniform2(2, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_a6879bc6.Uniform2(3, center);
                _draw_a6879bc6.Uniform12(4, dc->GetLocalToClipTransform(visual));
                _draw_a6879bc6.Uniform2(5, uPtr(visual)->ActualSize());
                _draw_a6879bc6.Uniform2(6, DP_a6879bc6_14_5_7.Origin);
                _draw_a6879bc6.Uniform2(7, DP_a6879bc6_14_5_7.Size);
                _draw_a6879bc6.Uniform2(8, ::g::Uno::Float2__op_Subtraction2((ind22 = DP_a6879bc6_14_5_7.UVClip, ::g::Uno::Float2__New2(ind22.Z, ind22.W)), (ind23 = DP_a6879bc6_14_5_7.UVClip, ::g::Uno::Float2__New2(ind23.X, ind23.Y))));
                _draw_a6879bc6.Uniform2(9, (ind24 = DP_a6879bc6_14_5_7.UVClip, ::g::Uno::Float2__New2(ind24.X, ind24.Y)));
                _draw_a6879bc6.Uniform10(10, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_a6879bc6.Uniform(11, radius);
                _draw_a6879bc6.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_a6879bc6.Uniform(13, 1.0f / smoothness);
                _draw_a6879bc6.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_a6879bc6.Sampler2(15, Texture_a6879bc6_14_6_4);
                _draw_a6879bc6.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_37e0cc03_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_37e0cc03_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_37e0cc03.BlendEnabled(true);
                _draw_37e0cc03.DepthTestEnabled(false);
                _draw_37e0cc03.CullFace(uPtr(dc)->CullFace());
                _draw_37e0cc03.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_37e0cc03.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_37e0cc03.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_37e0cc03.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_37e0cc03.Use();
                _draw_37e0cc03.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_37e0cc03.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_37e0cc03.Uniform2(2, center);
                _draw_37e0cc03.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_37e0cc03.Uniform(4, radius);
                _draw_37e0cc03.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_37e0cc03.Uniform(6, 1.0f / smoothness);
                _draw_37e0cc03.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_37e0cc03.Uniform6(8, (ind25 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind25.X, ind25.Y, ind25.Z)));
                _draw_37e0cc03.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_37e0cc03.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_37e0cc03_20_2_6, EndVec_37e0cc03_20_3_7)));
                _draw_37e0cc03.Uniform2(11, StartVec_37e0cc03_20_2_6);
                _draw_37e0cc03.Uniform2(12, EndVec_37e0cc03_20_3_7);
                _draw_37e0cc03.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_95395768_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_95395768_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_95395768.BlendEnabled(true);
                _draw_95395768.DepthTestEnabled(false);
                _draw_95395768.CullFace(uPtr(dc)->CullFace());
                _draw_95395768.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_95395768.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_95395768.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_95395768.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_95395768.Use();
                _draw_95395768.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_95395768.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_95395768.Uniform2(2, center);
                _draw_95395768.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_95395768.Uniform(4, radius);
                _draw_95395768.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_95395768.Uniform(6, 1.0f / smoothness);
                _draw_95395768.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_95395768.Uniform6(8, (ind26 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind26.X, ind26.Y, ind26.Z)));
                _draw_95395768.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_95395768.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_95395768_20_2_6, EndVec_95395768_20_3_7)));
                _draw_95395768.Uniform2(11, StartVec_95395768_20_2_6);
                _draw_95395768.Uniform2(12, EndVec_95395768_20_3_7);
                _draw_95395768.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[6/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_22c0272b.BlendEnabled(true);
                _draw_22c0272b.DepthTestEnabled(false);
                _draw_22c0272b.CullFace(uPtr(dc)->CullFace());
                _draw_22c0272b.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_22c0272b.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_22c0272b.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_22c0272b.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_22c0272b.Use();
                _draw_22c0272b.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_22c0272b.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_22c0272b.Uniform2(2, center);
                _draw_22c0272b.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_22c0272b.Uniform(4, radius);
                _draw_22c0272b.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_22c0272b.Uniform(6, 1.0f / smoothness);
                _draw_22c0272b.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_22c0272b.Uniform6(8, (ind27 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind27.X, ind27.Y, ind27.Z)));
                _draw_22c0272b.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_22c0272b.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_49d1aa95_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_49d1aa95_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                ::g::Uno::Float2 StartVec_49d1aa95_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_49d1aa95_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_49d1aa95.BlendEnabled(true);
                _draw_49d1aa95.DepthTestEnabled(false);
                _draw_49d1aa95.CullFace(uPtr(dc)->CullFace());
                _draw_49d1aa95.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_49d1aa95.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_49d1aa95.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_49d1aa95.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_49d1aa95.Use();
                _draw_49d1aa95.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_49d1aa95.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_49d1aa95.Uniform2(2, center);
                _draw_49d1aa95.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_49d1aa95.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_49d1aa95.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_49d1aa95_14_18_6, angleLen_49d1aa95_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_49d1aa95.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_49d1aa95.Uniform(7, radius);
                _draw_49d1aa95.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_49d1aa95.Uniform(9, 1.0f / smoothness);
                _draw_49d1aa95.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_49d1aa95.Uniform2(11, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_49d1aa95_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_49d1aa95.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_49d1aa95_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_49d1aa95.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_49d1aa95_20_2_14, EndVec_49d1aa95_20_3_15)));
                _draw_49d1aa95.Uniform2(14, StartVec_49d1aa95_20_2_14);
                _draw_49d1aa95.Uniform2(15, EndVec_49d1aa95_20_3_15);
                _draw_49d1aa95.Sampler2(16, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_49d1aa95.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_ec791f30_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_ec791f30_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                ::g::Uno::Float2 StartVec_ec791f30_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_ec791f30_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_ec791f30.BlendEnabled(true);
                _draw_ec791f30.DepthTestEnabled(false);
                _draw_ec791f30.CullFace(uPtr(dc)->CullFace());
                _draw_ec791f30.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ec791f30.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ec791f30.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ec791f30.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ec791f30.Use();
                _draw_ec791f30.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_ec791f30.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_ec791f30.Uniform2(2, center);
                _draw_ec791f30.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_ec791f30.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_ec791f30.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_ec791f30_14_18_6, angleLen_ec791f30_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_ec791f30.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_ec791f30.Uniform(7, radius);
                _draw_ec791f30.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_ec791f30.Uniform(9, 1.0f / smoothness);
                _draw_ec791f30.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_ec791f30.Uniform2(11, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_ec791f30_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_ec791f30.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_ec791f30_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_ec791f30.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_ec791f30_20_2_14, EndVec_ec791f30_20_3_15)));
                _draw_ec791f30.Uniform2(14, StartVec_ec791f30_20_2_14);
                _draw_ec791f30.Uniform2(15, EndVec_ec791f30_20_3_15);
                _draw_ec791f30.Sampler2(16, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_ec791f30.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[6/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_8f2093cb_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_8f2093cb_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                _draw_8f2093cb.BlendEnabled(true);
                _draw_8f2093cb.DepthTestEnabled(false);
                _draw_8f2093cb.CullFace(uPtr(dc)->CullFace());
                _draw_8f2093cb.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_8f2093cb.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_8f2093cb.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_8f2093cb.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_8f2093cb.Use();
                _draw_8f2093cb.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_8f2093cb.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_8f2093cb.Uniform2(2, center);
                _draw_8f2093cb.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_8f2093cb.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_8f2093cb.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_8f2093cb_14_18_6, angleLen_8f2093cb_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_8f2093cb.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_8f2093cb.Uniform(7, radius);
                _draw_8f2093cb.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_8f2093cb.Uniform(9, 1.0f / smoothness);
                _draw_8f2093cb.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_8f2093cb.Uniform2(11, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_8f2093cb_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_8f2093cb.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_8f2093cb_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_8f2093cb.Sampler2(13, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_8f2093cb.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_508d0866_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_508d0866_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_508d0866.BlendEnabled(true);
                _draw_508d0866.DepthTestEnabled(false);
                _draw_508d0866.CullFace(uPtr(dc)->CullFace());
                _draw_508d0866.BlendSrcRgb(Draw_BlendSrcRgb_44028225_12_4_22);
                _draw_508d0866.BlendSrcAlpha(Draw_BlendSrcAlpha_44028225_12_6_23);
                _draw_508d0866.BlendDstRgb(Draw_BlendDstRgb_44028225_12_5_24);
                _draw_508d0866.BlendDstAlpha(Draw_BlendDstAlpha_44028225_12_7_25);
                _draw_508d0866.Use();
                _draw_508d0866.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_508d0866.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_508d0866.Uniform2(2, center);
                _draw_508d0866.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_508d0866.Uniform(4, radius);
                _draw_508d0866.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_508d0866.Uniform(6, 1.0f / smoothness);
                _draw_508d0866.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_508d0866.Uniform6(8, (ind28 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind28.X, ind28.Y, ind28.Z)));
                _draw_508d0866.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_508d0866_20_2_6, EndVec_508d0866_20_3_7)));
                _draw_508d0866.Uniform2(10, StartVec_508d0866_20_2_6);
                _draw_508d0866.Uniform2(11, EndVec_508d0866_20_3_7);
                _draw_508d0866.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_f3347d01_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_f3347d01_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[5/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_f3347d01.BlendEnabled(true);
                _draw_f3347d01.DepthTestEnabled(false);
                _draw_f3347d01.CullFace(uPtr(dc)->CullFace());
                _draw_f3347d01.BlendSrcRgb(Draw_BlendSrcRgb_44028225_12_4_22);
                _draw_f3347d01.BlendSrcAlpha(Draw_BlendSrcAlpha_44028225_12_6_23);
                _draw_f3347d01.BlendDstRgb(Draw_BlendDstRgb_44028225_12_5_24);
                _draw_f3347d01.BlendDstAlpha(Draw_BlendDstAlpha_44028225_12_7_25);
                _draw_f3347d01.Use();
                _draw_f3347d01.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_f3347d01.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_f3347d01.Uniform2(2, center);
                _draw_f3347d01.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_f3347d01.Uniform(4, radius);
                _draw_f3347d01.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_f3347d01.Uniform(6, 1.0f / smoothness);
                _draw_f3347d01.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_f3347d01.Uniform6(8, (ind29 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind29.X, ind29.Y, ind29.Z)));
                _draw_f3347d01.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_f3347d01_20_2_6, EndVec_f3347d01_20_3_7)));
                _draw_f3347d01.Uniform2(10, StartVec_f3347d01_20_2_6);
                _draw_f3347d01.Uniform2(11, EndVec_f3347d01_20_3_7);
                _draw_f3347d01.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[6/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_95dbf19c.BlendEnabled(true);
                _draw_95dbf19c.DepthTestEnabled(false);
                _draw_95dbf19c.CullFace(uPtr(dc)->CullFace());
                _draw_95dbf19c.BlendSrcRgb(Draw_BlendSrcRgb_44028225_12_4_22);
                _draw_95dbf19c.BlendSrcAlpha(Draw_BlendSrcAlpha_44028225_12_6_23);
                _draw_95dbf19c.BlendDstRgb(Draw_BlendDstRgb_44028225_12_5_24);
                _draw_95dbf19c.BlendDstAlpha(Draw_BlendDstAlpha_44028225_12_7_25);
                _draw_95dbf19c.Use();
                _draw_95dbf19c.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_95dbf19c.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_95dbf19c.Uniform2(2, center);
                _draw_95dbf19c.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_95dbf19c.Uniform(4, radius);
                _draw_95dbf19c.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_95dbf19c.Uniform(6, 1.0f / smoothness);
                _draw_95dbf19c.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_95dbf19c.Uniform6(8, (ind30 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind30.X, ind30.Y, ind30.Z)));
                _draw_95dbf19c.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness) [instance] :43
void Circle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Fill(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,float2,float)");
    Draw(dc, visual, radius, brush, _fillCoverage, _oneLimitCoverage, ::g::Uno::Float2__New1(smoothness), center, smoothness);
}

// private generated void init_DrawCalls() [instance] :21
void Circle::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "init_DrawCalls()");
    Draw_BlendSrcRgb_44028225_12_4_22 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(0);
    Draw_BlendSrcAlpha_44028225_12_6_23 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(0);
    Draw_BlendDstRgb_44028225_12_5_24 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(0);
    Draw_BlendDstAlpha_44028225_12_7_25 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(0);
    _draw_8cc20e6d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0dcbf8a6());
    _draw_a4b30e6d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle6b9cf8a6());
    _draw_9cb80e6d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef701f8a6());
    _draw_b58e0e6d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle54d7f8a6());
    _draw_ad930e6d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlee03cf8a6());
    _draw_c5840e6d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle3e0df8a6());
    _draw_bdee0e6d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlec977f8a6());
    _draw_c0451d53 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle940fd687());
    _draw_c0451d52 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle940fd686());
    _draw_44028225 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circleecb159f0());
    _draw_44238225 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circleecb259f0());
    _draw_44c88225 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circleecb759f0());
    _draw_ebd684fc = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle65ae6e77());
    _draw_492f1061 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlec306f9dc());
    _draw_a6879bc6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle205f8541());
    _draw_37e0cc03 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle9aeeb57e());
    _draw_95395768 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef84740e3());
    _draw_22c0272b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle85b410a6());
    _draw_49d1aa95 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlec38f9410());
    _draw_ec791f30 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle663708ab());
    _draw_8f2093cb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle08de7d46());
    _draw_508d0866 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circleb380f1e1());
    _draw_f3347d01 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle5628667c());
    _draw_95dbf19c = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef8cfdb17());
}

// private void InitBuffers() [instance] :53
void Circle::InitBuffers()
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "InitBuffers()");
    _bufferVertex = ::g::Fuse::Drawing::Internal::Float2Buffer::New3();
    _bufferIndex = ::g::Fuse::Drawing::Internal::UShortBuffer::New3();
    int numSegments = 16;
    float theta = 1.57079637f - (6.28318548f / (float)numSegments);
    float len = 1.0f / ::g::Uno::Math::Sin1(theta);
    uPtr(_bufferVertex)->Append(0.0, 0.0);

    for (int i = 0; i < numSegments; ++i)
    {
        float r = (((float)i / (float)numSegments) * 3.14159274f) * 2.0f;
        uPtr(_bufferVertex)->Append((double)(::g::Uno::Math::Cos1(r) * len), (double)(::g::Uno::Math::Sin1(r) * len));
        uPtr(_bufferIndex)->Append(0);
        uPtr(_bufferIndex)->Append((i == (numSegments - 1)) ? 1 : i + 2);
        uPtr(_bufferIndex)->Append(i + 1);
    }

    uPtr(_bufferVertex)->InitDeviceVertex(0);
    uPtr(_bufferIndex)->InitDeviceIndex(0);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness) [instance] :27
void Circle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Stroke(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Stroke,float2,float)");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    Draw(dc, visual, radius, stroke->Brush(), sc, _oneLimitCoverage, ::g::Uno::Float2__New1(extend), center, smoothness);
}

// public generated Circle New() [static] :21
Circle* Circle::New1()
{
    Circle* obj31 = (Circle*)uNew(Circle_typeof());
    obj31->ctor_();
    return obj31;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.32.14\$.uno
// -----------------------------------------------------------------

// internal sealed class ConcaveWedgeCoverage :740
// {
static void ConcaveWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConcaveWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConcaveWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConcaveWedgeCoverage", options);
    type->SetBase(::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof());
    type->fp_build_ = ConcaveWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConcaveWedgeCoverage__New1_fn;
    return type;
}

// public generated ConcaveWedgeCoverage() :740
void ConcaveWedgeCoverage__ctor_2_fn(ConcaveWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConcaveWedgeCoverage New() :740
void ConcaveWedgeCoverage__New1_fn(ConcaveWedgeCoverage** __retval)
{
    *__retval = ConcaveWedgeCoverage::New1();
}

// public generated ConcaveWedgeCoverage() [instance] :740
void ConcaveWedgeCoverage::ctor_2()
{
    uStackFrame __("Fuse.Drawing.Primitives.ConcaveWedgeCoverage", ".ctor()");
    ctor_1();
}

// public generated ConcaveWedgeCoverage New() [static] :740
ConcaveWedgeCoverage* ConcaveWedgeCoverage::New1()
{
    ConcaveWedgeCoverage* obj1 = (ConcaveWedgeCoverage*)uNew(ConcaveWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.32.14\$.uno
// -----------------------------------------------------------------

// internal sealed class ConvexWedgeCoverage :735
// {
static void ConvexWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConvexWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConvexWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConvexWedgeCoverage", options);
    type->SetBase(::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof());
    type->fp_build_ = ConvexWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConvexWedgeCoverage__New1_fn;
    return type;
}

// public generated ConvexWedgeCoverage() :735
void ConvexWedgeCoverage__ctor_2_fn(ConvexWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConvexWedgeCoverage New() :735
void ConvexWedgeCoverage__New1_fn(ConvexWedgeCoverage** __retval)
{
    *__retval = ConvexWedgeCoverage::New1();
}

// public generated ConvexWedgeCoverage() [instance] :735
void ConvexWedgeCoverage::ctor_2()
{
    uStackFrame __("Fuse.Drawing.Primitives.ConvexWedgeCoverage", ".ctor()");
    ctor_1();
}

// public generated ConvexWedgeCoverage New() [static] :735
ConvexWedgeCoverage* ConvexWedgeCoverage::New1()
{
    ConvexWedgeCoverage* obj1 = (ConvexWedgeCoverage*)uNew(ConvexWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.32.14\$.uno
// -----------------------------------------------------------------

// internal abstract class Coverage :347
// {
static void Coverage_build(uType* type)
{
}

uType* Coverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Coverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Coverage", options);
    type->fp_build_ = Coverage_build;
    return type;
}

// protected generated Coverage() :347
void Coverage__ctor__fn(Coverage* __this)
{
    __this->ctor_();
}

// protected generated Coverage() [instance] :347
void Coverage::ctor_()
{
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.32.14\$.uno
// -----------------------------------------------------------------

// internal sealed class FillCoverage :351
// {
static void FillCoverage_build(uType* type)
{
}

uType* FillCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(FillCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.FillCoverage", options);
    type->SetBase(::g::Fuse::Drawing::Primitives::Coverage_typeof());
    type->fp_build_ = FillCoverage_build;
    type->fp_ctor_ = (void*)FillCoverage__New1_fn;
    return type;
}

// public generated FillCoverage() :351
void FillCoverage__ctor_1_fn(FillCoverage* __this)
{
    __this->ctor_1();
}

// public generated FillCoverage New() :351
void FillCoverage__New1_fn(FillCoverage** __retval)
{
    *__retval = FillCoverage::New1();
}

// public generated FillCoverage() [instance] :351
void FillCoverage::ctor_1()
{
    uStackFrame __("Fuse.Drawing.Primitives.FillCoverage", ".ctor()");
    ctor_();
}

// public generated FillCoverage New() [static] :351
FillCoverage* FillCoverage::New1()
{
    FillCoverage* obj1 = (FillCoverage*)uNew(FillCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.32.14\$.uno
// -----------------------------------------------------------------

// internal abstract class LimitCoverage :12
// {
static void LimitCoverage_build(uType* type)
{
}

uType* LimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.LimitCoverage", options);
    type->fp_build_ = LimitCoverage_build;
    return type;
}

// protected generated LimitCoverage() :12
void LimitCoverage__ctor__fn(LimitCoverage* __this)
{
    __this->ctor_();
}

// protected generated LimitCoverage() [instance] :12
void LimitCoverage::ctor_()
{
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.32.14\$.uno
// -----------------------------------------------------------------

// internal sealed class OneLimitCoverage :16
// {
static void OneLimitCoverage_build(uType* type)
{
}

uType* OneLimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(OneLimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.OneLimitCoverage", options);
    type->SetBase(::g::Fuse::Drawing::Primitives::LimitCoverage_typeof());
    type->fp_build_ = OneLimitCoverage_build;
    type->fp_ctor_ = (void*)OneLimitCoverage__New1_fn;
    return type;
}

// public generated OneLimitCoverage() :16
void OneLimitCoverage__ctor_1_fn(OneLimitCoverage* __this)
{
    __this->ctor_1();
}

// public generated OneLimitCoverage New() :16
void OneLimitCoverage__New1_fn(OneLimitCoverage** __retval)
{
    *__retval = OneLimitCoverage::New1();
}

// public generated OneLimitCoverage() [instance] :16
void OneLimitCoverage::ctor_1()
{
    uStackFrame __("Fuse.Drawing.Primitives.OneLimitCoverage", ".ctor()");
    ctor_();
}

// public generated OneLimitCoverage New() [static] :16
OneLimitCoverage* OneLimitCoverage::New1()
{
    OneLimitCoverage* obj1 = (OneLimitCoverage*)uNew(OneLimitCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.32.14\$.uno
// -----------------------------------------------------------------

// public sealed class Rectangle :366
// {
// static Rectangle() :366
static void Rectangle__cctor__fn(uType* __type)
{
    Rectangle::Singleton_ = Rectangle::New1();
}

static void Rectangle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("more than two non-zero values!");
    ::TYPES[12] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[13] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    ::TYPES[11] = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    ::TYPES[14] = ::g::Uno::Float_typeof()->Array()->Array();
    ::TYPES[15] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[16] = ::g::Uno::Int_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Drawing::Internal::FloatBuffer_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _bufferDistance), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_9bc467bc), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_9bc467bd), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_9bc467c6), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_9bc467c7), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_bd6c47d6), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_bd6c47d7), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_bd6c47dc), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_bd6c47dd), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _edgeInfo), 0,
        ::g::Fuse::Drawing::Primitives::FillCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _strokeCoverage), 0,
        ::g::Uno::Float_typeof()->Array(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _uniforms), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _vertexInfo), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, Draw_BlendDstAlpha_bd6c47dd_12_7_18), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, Draw_BlendDstRgb_bd6c47dd_12_5_17), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, Draw_BlendSrcAlpha_bd6c47dd_12_6_16), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, Draw_BlendSrcRgb_bd6c47dd_12_4_15), 0,
        Rectangle_typeof(), (uintptr_t)&::g::Fuse::Drawing::Primitives::Rectangle::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 18));
    type->Reflection.SetFunctions(3,
        new uFunction("Fill", NULL, (void*)Rectangle__Fill_fn, 0, false, uVoid_typeof(), 7, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Rectangle__New1_fn, 0, true, Rectangle_typeof(), 0),
        new uFunction("Stroke", NULL, (void*)Rectangle__Stroke_fn, 0, false, uVoid_typeof(), 7, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()));
}

uType* Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Rectangle", options);
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_cctor_ = Rectangle__cctor__fn;
    return type;
}

// public generated Rectangle() :366
void Rectangle__ctor__fn(Rectangle* __this)
{
    __this->ctor_();
}

// private float[] add(float[] a, float[] b) :394
void Rectangle__add_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->add(a, b);
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness) :598
void Rectangle__Draw_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2* extend, ::g::Uno::Float2* position, float* smoothness)
{
    __this->Draw(dc, visual, *Size, *CornerRadius, brush, cover, *extend, *position, *smoothness);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) :387
void Rectangle__Fill_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Fill(dc, visual, *Size, *CornerRadius, brush, *Position, *Smoothness);
}

// private generated void init_DrawCalls() :366
void Rectangle__init_DrawCalls_fn(Rectangle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers() :429
void Rectangle__InitBuffers_fn(Rectangle* __this)
{
    __this->InitBuffers();
}

// private float[] neg(float[] a) :410
void Rectangle__neg_fn(Rectangle* __this, uArray* a, uArray** __retval)
{
    *__retval = __this->neg(a);
}

// public generated Rectangle New() :366
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness]) :371
void Rectangle__Stroke_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Stroke(dc, visual, *Size, *CornerRadius, stroke, *Position, *Smoothness);
}

// private float[] sub(float[] a, float[] b) :402
void Rectangle__sub_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->sub(a, b);
}

uSStrong<Rectangle*> Rectangle::Singleton_;

// public generated Rectangle() [instance] :366
void Rectangle::ctor_()
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", ".ctor()");
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    _uniforms = uArray::New(::TYPES[12/*float[]*/], 10);
    init_DrawCalls();
}

// private float[] add(float[] a, float[] b) [instance] :394
uArray* Rectangle::add(uArray* a, uArray* b)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "add(float[],float[])");
    uArray* r = uArray::New(::TYPES[12/*float[]*/], uPtr(a)->Length());

    for (int i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) + uPtr(b)->Item<float>(i);

    return r;
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness) [instance] :598
void Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2 extend, ::g::Uno::Float2 position, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Draw(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Brush,Fuse.Drawing.Primitives.Coverage,float2,float2,float)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;

    if (_bufferDistance == NULL)
        InitBuffers();

    float mn = ::g::Uno::Math::Min1(Size.X / 2.0f, Size.Y / 2.0f);

    for (int i = 0; i < 4; ++i)
        CornerRadius.Item(i, ::g::Uno::Math::Clamp1(CornerRadius.Item(i), 0.0f, mn));

    uPtr(_uniforms)->Item<float>(0) = 0.0f;
    uPtr(_uniforms)->Item<float>(1) = CornerRadius.Item(3);
    uPtr(_uniforms)->Item<float>(2) = CornerRadius.Item(2);
    uPtr(_uniforms)->Item<float>(3) = CornerRadius.Item(1);
    uPtr(_uniforms)->Item<float>(4) = CornerRadius.Item(0);
    uPtr(_uniforms)->Item<float>(5) = Size.X;
    uPtr(_uniforms)->Item<float>(6) = Size.Y;
    uPtr(_uniforms)->Item<float>(7) = extend.X;
    uPtr(_uniforms)->Item<float>(8) = extend.Y;
    uPtr(_uniforms)->Item<float>(9) = mn;
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(visual, ::TYPES[13/*Fuse.Elements.Element*/]);
    ::g::Uno::Float2 csz = (elm == NULL) ? ::g::Uno::Float2__New1(1.0f) : uPtr(elm)->ActualSize();

    if (uIs(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))
        {
            ::g::Uno::Graphics::Texture2D* Texture_bd6c47d6_14_6_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetTexture();
            ::g::Fuse::Drawing::ImageFill__DrawParams DP_bd6c47d6_14_5_7 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
            _draw_bd6c47d6.BlendEnabled(true);
            _draw_bd6c47d6.DepthTestEnabled(false);
            _draw_bd6c47d6.CullFace(uPtr(dc)->CullFace());
            _draw_bd6c47d6.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
            _draw_bd6c47d6.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
            _draw_bd6c47d6.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
            _draw_bd6c47d6.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
            _draw_bd6c47d6.Const1(0, uPtr(_uniforms)->Length());
            _draw_bd6c47d6.Const(1, Texture_bd6c47d6_14_6_4 == NULL);
            _draw_bd6c47d6.Use();
            _draw_bd6c47d6.Attrib1(2, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
            _draw_bd6c47d6.Attrib1(3, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
            _draw_bd6c47d6.Attrib1(4, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
            _draw_bd6c47d6.Uniform1(5, _uniforms);
            _draw_bd6c47d6.Uniform2(6, position);
            _draw_bd6c47d6.Uniform12(7, dc->GetLocalToClipTransform(visual));
            _draw_bd6c47d6.Uniform2(8, csz);
            _draw_bd6c47d6.Uniform2(9, DP_bd6c47d6_14_5_7.Origin);
            _draw_bd6c47d6.Uniform2(10, DP_bd6c47d6_14_5_7.Size);
            _draw_bd6c47d6.Uniform2(11, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_bd6c47d6_14_5_7.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_bd6c47d6_14_5_7.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
            _draw_bd6c47d6.Uniform2(12, (ind3 = DP_bd6c47d6_14_5_7.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
            _draw_bd6c47d6.Uniform10(13, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Color());
            _draw_bd6c47d6.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
            _draw_bd6c47d6.Uniform(15, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
            _draw_bd6c47d6.Uniform(16, dc->ViewportPixelsPerPoint());
            _draw_bd6c47d6.Uniform(17, 1.0f / smoothness);
            _draw_bd6c47d6.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Opacity());
            _draw_bd6c47d6.Sampler2(19, Texture_bd6c47d6_14_6_4);
            _draw_bd6c47d6.DrawArrays(uPtr(_bufferDistance)->Count());
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))
        {
            _draw_bd6c47d7.BlendEnabled(true);
            _draw_bd6c47d7.DepthTestEnabled(false);
            _draw_bd6c47d7.CullFace(uPtr(dc)->CullFace());
            _draw_bd6c47d7.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
            _draw_bd6c47d7.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
            _draw_bd6c47d7.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
            _draw_bd6c47d7.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
            _draw_bd6c47d7.Const1(0, uPtr(_uniforms)->Length());
            _draw_bd6c47d7.Use();
            _draw_bd6c47d7.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
            _draw_bd6c47d7.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
            _draw_bd6c47d7.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
            _draw_bd6c47d7.Uniform1(4, _uniforms);
            _draw_bd6c47d7.Uniform2(5, position);
            _draw_bd6c47d7.Uniform12(6, dc->GetLocalToClipTransform(visual));
            _draw_bd6c47d7.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
            _draw_bd6c47d7.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
            _draw_bd6c47d7.Uniform(9, dc->ViewportPixelsPerPoint());
            _draw_bd6c47d7.Uniform(10, 1.0f / smoothness);
            _draw_bd6c47d7.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W);
            _draw_bd6c47d7.Uniform6(12, (ind4 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind4.X, ind4.Y, ind4.Z)));
            _draw_bd6c47d7.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
            _draw_bd6c47d7.DrawArrays(uPtr(_bufferDistance)->Count());
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))
        {
            ::g::Uno::Float2 angleSlope_bd6c47dc_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
            float angleLen_bd6c47dc_14_17_7 = ::g::Uno::Math::Abs1(csz.X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(csz.Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
            _draw_bd6c47dc.BlendEnabled(true);
            _draw_bd6c47dc.DepthTestEnabled(false);
            _draw_bd6c47dc.CullFace(uPtr(dc)->CullFace());
            _draw_bd6c47dc.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
            _draw_bd6c47dc.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
            _draw_bd6c47dc.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
            _draw_bd6c47dc.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
            _draw_bd6c47dc.Const1(0, uPtr(_uniforms)->Length());
            _draw_bd6c47dc.Use();
            _draw_bd6c47dc.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
            _draw_bd6c47dc.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
            _draw_bd6c47dc.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
            _draw_bd6c47dc.Uniform1(4, _uniforms);
            _draw_bd6c47dc.Uniform2(5, position);
            _draw_bd6c47dc.Uniform12(6, dc->GetLocalToClipTransform(visual));
            _draw_bd6c47dc.Uniform2(7, csz);
            _draw_bd6c47dc.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(csz, 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_bd6c47dc_14_18_6, angleLen_bd6c47dc_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), csz));
            _draw_bd6c47dc.Uniform2(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
            _draw_bd6c47dc.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
            _draw_bd6c47dc.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
            _draw_bd6c47dc.Uniform(12, dc->ViewportPixelsPerPoint());
            _draw_bd6c47dc.Uniform(13, 1.0f / smoothness);
            _draw_bd6c47dc.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
            _draw_bd6c47dc.Uniform2(15, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_bd6c47dc_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
            _draw_bd6c47dc.Uniform(16, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_bd6c47dc_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
            _draw_bd6c47dc.Sampler2(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
            _draw_bd6c47dc.DrawArrays(uPtr(_bufferDistance)->Count());
        }
        else if (uIs(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))
        {
            _draw_bd6c47dd.BlendEnabled(true);
            _draw_bd6c47dd.DepthTestEnabled(false);
            _draw_bd6c47dd.CullFace(uPtr(dc)->CullFace());
            _draw_bd6c47dd.BlendSrcRgb(Draw_BlendSrcRgb_bd6c47dd_12_4_15);
            _draw_bd6c47dd.BlendSrcAlpha(Draw_BlendSrcAlpha_bd6c47dd_12_6_16);
            _draw_bd6c47dd.BlendDstRgb(Draw_BlendDstRgb_bd6c47dd_12_5_17);
            _draw_bd6c47dd.BlendDstAlpha(Draw_BlendDstAlpha_bd6c47dd_12_7_18);
            _draw_bd6c47dd.Const1(0, uPtr(_uniforms)->Length());
            _draw_bd6c47dd.Use();
            _draw_bd6c47dd.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
            _draw_bd6c47dd.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
            _draw_bd6c47dd.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
            _draw_bd6c47dd.Uniform1(4, _uniforms);
            _draw_bd6c47dd.Uniform2(5, position);
            _draw_bd6c47dd.Uniform12(6, dc->GetLocalToClipTransform(visual));
            _draw_bd6c47dd.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
            _draw_bd6c47dd.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[1/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
            _draw_bd6c47dd.Uniform(9, dc->ViewportPixelsPerPoint());
            _draw_bd6c47dd.Uniform(10, 1.0f / smoothness);
            _draw_bd6c47dd.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
            _draw_bd6c47dd.Uniform6(12, (ind5 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind5.X, ind5.Y, ind5.Z)));
            _draw_bd6c47dd.DrawArrays(uPtr(_bufferDistance)->Count());
        }
    }
    else if (uIs(cover, ::TYPES[10/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))
        {
            ::g::Uno::Graphics::Texture2D* Texture_9bc467c6_14_6_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetTexture();
            ::g::Fuse::Drawing::ImageFill__DrawParams DP_9bc467c6_14_5_7 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
            _draw_9bc467c6.BlendEnabled(true);
            _draw_9bc467c6.DepthTestEnabled(false);
            _draw_9bc467c6.CullFace(uPtr(dc)->CullFace());
            _draw_9bc467c6.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
            _draw_9bc467c6.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
            _draw_9bc467c6.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
            _draw_9bc467c6.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
            _draw_9bc467c6.Const1(0, uPtr(_uniforms)->Length());
            _draw_9bc467c6.Const(1, Texture_9bc467c6_14_6_4 == NULL);
            _draw_9bc467c6.Use();
            _draw_9bc467c6.Attrib1(2, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
            _draw_9bc467c6.Attrib1(3, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
            _draw_9bc467c6.Attrib1(4, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
            _draw_9bc467c6.Uniform1(5, _uniforms);
            _draw_9bc467c6.Uniform2(6, position);
            _draw_9bc467c6.Uniform12(7, dc->GetLocalToClipTransform(visual));
            _draw_9bc467c6.Uniform2(8, csz);
            _draw_9bc467c6.Uniform2(9, DP_9bc467c6_14_5_7.Origin);
            _draw_9bc467c6.Uniform2(10, DP_9bc467c6_14_5_7.Size);
            _draw_9bc467c6.Uniform2(11, ::g::Uno::Float2__op_Subtraction2((ind6 = DP_9bc467c6_14_5_7.UVClip, ::g::Uno::Float2__New2(ind6.Z, ind6.W)), (ind7 = DP_9bc467c6_14_5_7.UVClip, ::g::Uno::Float2__New2(ind7.X, ind7.Y))));
            _draw_9bc467c6.Uniform2(12, (ind8 = DP_9bc467c6_14_5_7.UVClip, ::g::Uno::Float2__New2(ind8.X, ind8.Y)));
            _draw_9bc467c6.Uniform10(13, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Color());
            _draw_9bc467c6.Uniform(14, dc->ViewportPixelsPerPoint());
            _draw_9bc467c6.Uniform(15, 1.0f / smoothness);
            _draw_9bc467c6.Uniform(16, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Opacity());
            _draw_9bc467c6.Sampler2(17, Texture_9bc467c6_14_6_4);
            _draw_9bc467c6.DrawArrays(uPtr(_bufferDistance)->Count());
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))
        {
            _draw_9bc467c7.BlendEnabled(true);
            _draw_9bc467c7.DepthTestEnabled(false);
            _draw_9bc467c7.CullFace(uPtr(dc)->CullFace());
            _draw_9bc467c7.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
            _draw_9bc467c7.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
            _draw_9bc467c7.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
            _draw_9bc467c7.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
            _draw_9bc467c7.Const1(0, uPtr(_uniforms)->Length());
            _draw_9bc467c7.Use();
            _draw_9bc467c7.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
            _draw_9bc467c7.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
            _draw_9bc467c7.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
            _draw_9bc467c7.Uniform1(4, _uniforms);
            _draw_9bc467c7.Uniform2(5, position);
            _draw_9bc467c7.Uniform12(6, dc->GetLocalToClipTransform(visual));
            _draw_9bc467c7.Uniform(7, dc->ViewportPixelsPerPoint());
            _draw_9bc467c7.Uniform(8, 1.0f / smoothness);
            _draw_9bc467c7.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W);
            _draw_9bc467c7.Uniform6(10, (ind9 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind9.X, ind9.Y, ind9.Z)));
            _draw_9bc467c7.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
            _draw_9bc467c7.DrawArrays(uPtr(_bufferDistance)->Count());
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))
        {
            ::g::Uno::Float2 angleSlope_9bc467bc_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
            float angleLen_9bc467bc_14_17_7 = ::g::Uno::Math::Abs1(csz.X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(csz.Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Angle()));
            _draw_9bc467bc.BlendEnabled(true);
            _draw_9bc467bc.DepthTestEnabled(false);
            _draw_9bc467bc.CullFace(uPtr(dc)->CullFace());
            _draw_9bc467bc.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
            _draw_9bc467bc.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
            _draw_9bc467bc.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
            _draw_9bc467bc.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
            _draw_9bc467bc.Const1(0, uPtr(_uniforms)->Length());
            _draw_9bc467bc.Use();
            _draw_9bc467bc.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
            _draw_9bc467bc.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
            _draw_9bc467bc.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
            _draw_9bc467bc.Uniform1(4, _uniforms);
            _draw_9bc467bc.Uniform2(5, position);
            _draw_9bc467bc.Uniform12(6, dc->GetLocalToClipTransform(visual));
            _draw_9bc467bc.Uniform2(7, csz);
            _draw_9bc467bc.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(csz, 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_9bc467bc_14_18_6, angleLen_9bc467bc_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), csz));
            _draw_9bc467bc.Uniform2(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
            _draw_9bc467bc.Uniform(10, dc->ViewportPixelsPerPoint());
            _draw_9bc467bc.Uniform(11, 1.0f / smoothness);
            _draw_9bc467bc.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->Opacity());
            _draw_9bc467bc.Uniform2(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_9bc467bc_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
            _draw_9bc467bc.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_9bc467bc_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
            _draw_9bc467bc.Sampler2(15, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
            _draw_9bc467bc.DrawArrays(uPtr(_bufferDistance)->Count());
        }
        else if (uIs(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))
        {
            _draw_9bc467bd.BlendEnabled(true);
            _draw_9bc467bd.DepthTestEnabled(false);
            _draw_9bc467bd.CullFace(uPtr(dc)->CullFace());
            _draw_9bc467bd.BlendSrcRgb(Draw_BlendSrcRgb_bd6c47dd_12_4_15);
            _draw_9bc467bd.BlendSrcAlpha(Draw_BlendSrcAlpha_bd6c47dd_12_6_16);
            _draw_9bc467bd.BlendDstRgb(Draw_BlendDstRgb_bd6c47dd_12_5_17);
            _draw_9bc467bd.BlendDstAlpha(Draw_BlendDstAlpha_bd6c47dd_12_7_18);
            _draw_9bc467bd.Const1(0, uPtr(_uniforms)->Length());
            _draw_9bc467bd.Use();
            _draw_9bc467bd.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
            _draw_9bc467bd.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
            _draw_9bc467bd.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
            _draw_9bc467bd.Uniform1(4, _uniforms);
            _draw_9bc467bd.Uniform2(5, position);
            _draw_9bc467bd.Uniform12(6, dc->GetLocalToClipTransform(visual));
            _draw_9bc467bd.Uniform(7, dc->ViewportPixelsPerPoint());
            _draw_9bc467bd.Uniform(8, 1.0f / smoothness);
            _draw_9bc467bd.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
            _draw_9bc467bd.Uniform6(10, (ind10 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[9/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind10.X, ind10.Y, ind10.Z)));
            _draw_9bc467bd.DrawArrays(uPtr(_bufferDistance)->Count());
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) [instance] :387
void Rectangle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Fill(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Brush,[float2],[float])");
    Draw(dc, visual, Size, CornerRadius, brush, _fillCoverage, ::g::Uno::Float2__New1(Smoothness), Position, Smoothness);
}

// private generated void init_DrawCalls() [instance] :366
void Rectangle::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "init_DrawCalls()");
    Draw_BlendSrcRgb_bd6c47dd_12_4_15 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(0);
    Draw_BlendSrcAlpha_bd6c47dd_12_6_16 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(0);
    Draw_BlendDstRgb_bd6c47dd_12_5_17 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(0);
    Draw_BlendDstAlpha_bd6c47dd_12_7_18 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(0);
    _draw_bd6c47d6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangledeaca36a());
    _draw_bd6c47d7 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangledeaca36b());
    _draw_bd6c47dc = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangledeaca370());
    _draw_bd6c47dd = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangledeaca371());
    _draw_9bc467c6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle694a75da());
    _draw_9bc467c7 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle694a75db());
    _draw_9bc467bc = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle694a75d0());
    _draw_9bc467bd = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle694a75d1());
}

// private void InitBuffers() [instance] :429
void Rectangle::InitBuffers()
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "InitBuffers()");
    _bufferDistance = ::g::Fuse::Drawing::Internal::FloatBuffer::New3();
    uArray* CornerRadius0 = uArray::Init<double>(::TYPES[12/*float[]*/], 9, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius1 = uArray::Init<double>(::TYPES[12/*float[]*/], 9, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius2 = uArray::Init<double>(::TYPES[12/*float[]*/], 9, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius3 = uArray::Init<double>(::TYPES[12/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeX = uArray::Init<double>(::TYPES[12/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeY = uArray::Init<double>(::TYPES[12/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f);
    uArray* ExtendX = uArray::Init<double>(::TYPES[12/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f);
    uArray* ExtendY = uArray::Init<double>(::TYPES[12/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    uArray* Mn = uArray::Init<double>(::TYPES[12/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
    uArray* vr = uArray::Init<uArray*>(::TYPES[14/*float[][]*/], 56, CornerRadius0, (uArray*)add(SizeY, ExtendY), (uArray*)sub(SizeX, CornerRadius1), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)sub(SizeY, CornerRadius0), CornerRadius0, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, CornerRadius1), (uArray*)add(SizeX, ExtendX), (uArray*)sub(SizeY, CornerRadius1), Mn, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, Mn), Mn, Mn, (uArray*)sub(SizeX, Mn), Mn, (uArray*)neg(ExtendX), CornerRadius3, CornerRadius3, CornerRadius3, (uArray*)sub(SizeX, CornerRadius2), CornerRadius2, (uArray*)add(SizeX, ExtendX), CornerRadius2, CornerRadius3, (uArray*)neg(ExtendY), (uArray*)sub(SizeX, CornerRadius2), (uArray*)neg(ExtendY), (uArray*)neg(ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)neg(ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)neg(ExtendY), Mn, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, CornerRadius1), Mn, CornerRadius3, (uArray*)sub(SizeX, Mn), CornerRadius2, CornerRadius0, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, Mn), CornerRadius3, Mn, (uArray*)sub(SizeX, CornerRadius2), Mn);
    uArray* offsets = uArray::New(::TYPES[15/*float2[]*/], vr->Length());

    for (int i = 0; i < vr->Length(); ++i)
    {
        ::g::Uno::Int2 offset = ::g::Uno::Int2__New2(0, 0);
        uArray* v = uPtr(vr)->Strong<uArray*>(i);

        for (int j = 0; j < uPtr(v)->Length(); ++j)
        {
            float f = uPtr(v)->Item<float>(j);

            if (f != 0.0f)
            {
                if (offset.Y != 0)
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"more than t...*/]));

                int o = 1 + j;
                offset = ::g::Uno::Int2__New2((f < 0.0f) ? -o : o, offset.X);
            }
        }

        uPtr(offsets)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Float2__op_Implicit1(offset);
    }

    uArray* vsr = uArray::Init<int>(::TYPES[16/*int[]*/], 72, 10, 8, 11, 10, 6, 8, 10, 2, 6, 2, 3, 6, 14, 11, 8, 14, 8, 15, 8, 9, 15, 9, 12, 15, 3, 0, 6, 0, 1, 6, 6, 1, 4, 6, 4, 7, 7, 4, 5, 7, 5, 9, 9, 5, 13, 9, 13, 12, 2, 16, 3, 3, 16, 0, 1, 17, 4, 4, 17, 5, 15, 12, 19, 12, 
        13, 19, 11, 18, 10, 14, 18, 11);
    uArray* ptr = uArray::Init<int>(::TYPES[16/*int[]*/], 72, 22, 8, 22, 22, 6, 8, 22, 20, 6, 20, 20, 6, 26, 26, 8, 26, 8, 27, 8, 9, 27, 9, 27, 27, 24, 24, 6, 24, 25, 6, 6, 25, 25, 6, 25, 7, 7, 21, 21, 7, 21, 9, 9, 21, 23, 9, 23, 23, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 12, 12, 12, 12, 
        12, 12, 11, 11, 11, 11, 11, 11);
    ::g::Uno::Buffer* bufferVertex = ::g::Uno::Buffer::New4(vsr->Length() * 16);
    ::g::Uno::Buffer* bufferEdge = ::g::Uno::Buffer::New4(vsr->Length() * 16);
    _vertexInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _vertexInfo.BufferOffset = 0;
    _vertexInfo.BufferStride = 16;
    _vertexInfo.Type = 4;
    _vertexInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(0);
    _edgeInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _edgeInfo.BufferOffset = 0;
    _edgeInfo.BufferStride = 16;
    _edgeInfo.Type = 4;
    _edgeInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(0);

    for (int i1 = 0; i1 < vsr->Length(); ++i1)
    {
        uPtr(bufferVertex)->Set8(i1 * _vertexInfo.BufferStride, ::g::Uno::Float4__New7(uPtr(offsets)->Item< ::g::Uno::Float2>(uPtr(vsr)->Item<int>(i1) * 2), uPtr(offsets)->Item< ::g::Uno::Float2>((uPtr(vsr)->Item<int>(i1) * 2) + 1)), true);
        uPtr(bufferEdge)->Set8(i1 * _edgeInfo.BufferStride, ::g::Uno::Float4__New7(offsets->Item< ::g::Uno::Float2>(uPtr(ptr)->Item<int>(i1) * 2), offsets->Item< ::g::Uno::Float2>((uPtr(ptr)->Item<int>(i1) * 2) + 1)), true);
        uPtr(_bufferDistance)->Append1((float)(uint16_t)(1 + ((i1 < 48) ? 8 : (i1 < 54) ? 0 : (i1 < 60) ? 1 : (i1 < 66) ? 2 : 3)));
    }

    uPtr(_vertexInfo.Buffer)->Update(bufferVertex);
    uPtr(_edgeInfo.Buffer)->Update(bufferEdge);
    uPtr(_bufferDistance)->InitDeviceVertex(0);
}

// private float[] neg(float[] a) [instance] :410
uArray* Rectangle::neg(uArray* a)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "neg(float[])");
    uArray* r = uArray::New(::TYPES[12/*float[]*/], uPtr(a)->Length());

    for (int i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = -uPtr(a)->Item<float>(i);

    return r;
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness]) [instance] :371
void Rectangle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 Position, float Smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Stroke(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Stroke,[float2],[float])");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + Smoothness;
    Draw(dc, visual, Size, CornerRadius, stroke->Brush(), sc, ::g::Uno::Float2__New1(extend), Position, Smoothness);
}

// private float[] sub(float[] a, float[] b) [instance] :402
uArray* Rectangle::sub(uArray* a, uArray* b)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "sub(float[],float[])");
    uArray* r = uArray::New(::TYPES[12/*float[]*/], uPtr(a)->Length());

    for (int i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) - uPtr(b)->Item<float>(i);

    return r;
}

// public generated Rectangle New() [static] :366
Rectangle* Rectangle::New1()
{
    Rectangle* obj11 = (Rectangle*)uNew(Rectangle_typeof());
    obj11->ctor_();
    return obj11;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.32.14\$.uno
// -----------------------------------------------------------------

// internal sealed class StrokeCoverage :357
// {
static void StrokeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::StrokeCoverage, Center), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::StrokeCoverage, Radius), 0);
}

uType* StrokeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StrokeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.StrokeCoverage", options);
    type->SetBase(::g::Fuse::Drawing::Primitives::Coverage_typeof());
    type->fp_build_ = StrokeCoverage_build;
    type->fp_ctor_ = (void*)StrokeCoverage__New1_fn;
    return type;
}

// public generated StrokeCoverage() :357
void StrokeCoverage__ctor_1_fn(StrokeCoverage* __this)
{
    __this->ctor_1();
}

// public generated StrokeCoverage New() :357
void StrokeCoverage__New1_fn(StrokeCoverage** __retval)
{
    *__retval = StrokeCoverage::New1();
}

// public generated StrokeCoverage() [instance] :357
void StrokeCoverage::ctor_1()
{
    uStackFrame __("Fuse.Drawing.Primitives.StrokeCoverage", ".ctor()");
    Radius = 1.0f;
    Center = 0.0f;
    ctor_();
}

// public generated StrokeCoverage New() [static] :357
StrokeCoverage* StrokeCoverage::New1()
{
    StrokeCoverage* obj1 = (StrokeCoverage*)uNew(StrokeCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.32.14\$.uno
// -----------------------------------------------------------------

// public sealed class Wedge :745
// {
// static Wedge() :745
static void Wedge__cctor__fn(uType* __type)
{
    Wedge::Singleton_ = Wedge::New1();
}

static void Wedge_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    ::TYPES[17] = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    type->SetFields(0,
        ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _concaveWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _convexWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::FillCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _strokeCoverage), 0,
        Wedge_typeof(), (uintptr_t)&::g::Fuse::Drawing::Primitives::Wedge::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 4));
    type->Reflection.SetFunctions(3,
        new uFunction("Fill", NULL, (void*)Wedge__Fill_fn, 0, false, uVoid_typeof(), 8, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Wedge__New1_fn, 0, true, Wedge_typeof(), 0),
        new uFunction("Stroke", NULL, (void*)Wedge__Stroke_fn, 0, false, uVoid_typeof(), 8, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()));
}

uType* Wedge_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Wedge);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Wedge", options);
    type->fp_build_ = Wedge_build;
    type->fp_ctor_ = (void*)Wedge__New1_fn;
    type->fp_cctor_ = Wedge__cctor__fn;
    return type;
}

// public generated Wedge() :745
void Wedge__ctor__fn(Wedge* __this)
{
    __this->ctor_();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness) :786
void Wedge__Fill_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Fill(dc, node, *radius, brush, *center, *startAngle, *endAngle, *smoothness);
}

// public generated Wedge New() :745
void Wedge__New1_fn(Wedge** __retval)
{
    *__retval = Wedge::New1();
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle) :752
void Wedge__SetupWedgeCoverage_fn(Wedge* __this, float* startAngle, float* endAngle, ::g::Fuse::Drawing::Primitives::WedgeCoverage** __retval)
{
    *__retval = __this->SetupWedgeCoverage(*startAngle, *endAngle);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness) :769
void Wedge__Stroke_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Stroke(dc, node, *radius, stroke, *center, *startAngle, *endAngle, *smoothness);
}

uSStrong<Wedge*> Wedge::Singleton_;

// public generated Wedge() [instance] :745
void Wedge::ctor_()
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", ".ctor()");
    _convexWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage::New1();
    _concaveWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness) [instance] :786
void Wedge::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "Fill(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,float2,float,float,float)");
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, brush, _fillCoverage, wc, ::g::Uno::Float2__New1(smoothness), center, smoothness);
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle) [instance] :752
::g::Fuse::Drawing::Primitives::WedgeCoverage* Wedge::SetupWedgeCoverage(float startAngle, float endAngle)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "SetupWedgeCoverage(float,float)");
    float pStartAngle = ::g::Uno::Math::Mod1(startAngle, 6.28318548f);
    float pEndAngle = ::g::Uno::Math::Mod1(endAngle, 6.28318548f);

    if (pEndAngle < pStartAngle)
        pEndAngle = pEndAngle + 6.28318548f;

    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = _concaveWedgeCoverage;

    if ((pEndAngle - pStartAngle) < 3.14159274f)
        wc = _convexWedgeCoverage;

    uPtr(wc)->StartAngle = pStartAngle;
    wc->EndAngle = pEndAngle;
    return wc;
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness) [instance] :769
void Wedge::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "Stroke(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Stroke,float2,float,float,float)");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, stroke->Brush(), sc, wc, ::g::Uno::Float2__New1(extend), center, smoothness);
}

// public generated Wedge New() [static] :745
Wedge* Wedge::New1()
{
    Wedge* obj1 = (Wedge*)uNew(Wedge_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.32.14\$.uno
// -----------------------------------------------------------------

// internal abstract class WedgeCoverage :704
// {
static void WedgeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::WedgeCoverage, EndAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::WedgeCoverage, StartAngle), 0);
}

uType* WedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(WedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.WedgeCoverage", options);
    type->SetBase(::g::Fuse::Drawing::Primitives::LimitCoverage_typeof());
    type->fp_build_ = WedgeCoverage_build;
    return type;
}

// protected generated WedgeCoverage() :704
void WedgeCoverage__ctor_1_fn(WedgeCoverage* __this)
{
    __this->ctor_1();
}

// protected generated WedgeCoverage() [instance] :704
void WedgeCoverage::ctor_1()
{
    uStackFrame __("Fuse.Drawing.Primitives.WedgeCoverage", ".ctor()");
    StartAngle = 0.0f;
    EndAngle = 6.28318548f;
    ctor_();
}
// }

}}}} // ::g::Fuse::Drawing::Primitives
