// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.BlendMode.h>
#include <Fuse.Drawing.BlendModeHelpers.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Internal.Drawing.SolidRectangle.h>
#include <Fuse.IViewport.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.Vector.h>
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Internal{
namespace Drawing{

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.32.14\$.uno
// -------------------------------------------------------

// internal sealed class SolidRectangle :89
// {
// static SolidRectangle() :89
static void SolidRectangle__cctor__fn(uType* __type)
{
    SolidRectangle::Impl_ = SolidRectangle::New1();
}

static void SolidRectangle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[1] = ::g::Fuse::IViewport_typeof();
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[6] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_c930343d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_c951343d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_c993343d), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_BlendDstAlpha_c8ee343d_12_7_13), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_BlendDstRgb_c8ee343d_12_5_12), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_BlendSrcAlpha_c8ee343d_12_6_11), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_BlendSrcRgb_c8ee343d_12_4_10), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_c993343d_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_c993343d_4_9_3), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_c993343d_4_9_4), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_c8ee343d_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_c930343d_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_c951343d_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_c993343d_7_2_1), 0,
        SolidRectangle_typeof(), (uintptr_t)&::g::Fuse::Internal::Drawing::SolidRectangle::Impl_, uFieldFlagsStatic);
}

uType* SolidRectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(SolidRectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.Drawing.SolidRectangle", options);
    type->fp_build_ = SolidRectangle_build;
    type->fp_ctor_ = (void*)SolidRectangle__New1_fn;
    type->fp_cctor_ = SolidRectangle__cctor__fn;
    return type;
}

// public generated SolidRectangle() :89
void SolidRectangle__ctor__fn(SolidRectangle* __this)
{
    __this->ctor_();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity) :93
void SolidRectangle__DrawElement_fn(SolidRectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float* opacity)
{
    __this->DrawElement(dc, element, brush, *opacity);
}

// private generated void init_DrawCalls() :89
void SolidRectangle__init_DrawCalls_fn(SolidRectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated SolidRectangle New() :89
void SolidRectangle__New1_fn(SolidRectangle** __retval)
{
    *__retval = SolidRectangle::New1();
}

uSStrong<SolidRectangle*> SolidRectangle::Impl_;

// public generated SolidRectangle() [instance] :89
void SolidRectangle::ctor_()
{
    uStackFrame __("Fuse.Internal.Drawing.SolidRectangle", ".ctor()");
    init_DrawCalls();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity) [instance] :93
void SolidRectangle::DrawElement(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float opacity)
{
    uStackFrame __("Fuse.Internal.Drawing.SolidRectangle", "DrawElement(Fuse.DrawContext,Fuse.Elements.Element,Fuse.Drawing.Brush,float)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;

    if (uIs(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_c993343d_4_9_5 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_c993343d_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_c993343d_4_9_3, DrawElement_LocalTransform_c993343d_4_9_4);
        ::g::Uno::Graphics::Texture2D* Texture_c993343d_14_6_9 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->GetTexture();
        ::g::Fuse::Drawing::ImageFill__DrawParams DP_c993343d_14_5_12 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, element->ActualSize());
        _draw_c993343d.BlendEnabled(true);
        _draw_c993343d.DepthTestEnabled(false);
        _draw_c993343d.CullFace(uPtr(dc)->CullFace());
        _draw_c993343d.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_c993343d.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_c993343d.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_c993343d.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_c993343d.Const(0, Texture_c993343d_14_6_9 == NULL);
        _draw_c993343d.Use();
        _draw_c993343d.Attrib1(1, 2, DrawElement_VertexData_c993343d_7_2_1, 8, 0);
        _draw_c993343d.Uniform12(2, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IViewport*/])));
        _draw_c993343d.Uniform2(3, uPtr(element)->ActualSize());
        _draw_c993343d.Uniform2(4, DP_c993343d_14_5_12.Origin);
        _draw_c993343d.Uniform2(5, DP_c993343d_14_5_12.Size);
        _draw_c993343d.Uniform2(6, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_c993343d_14_5_12.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_c993343d_14_5_12.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
        _draw_c993343d.Uniform2(7, (ind3 = DP_c993343d_14_5_12.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
        _draw_c993343d.Uniform10(8, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Color());
        _draw_c993343d.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Opacity());
        _draw_c993343d.Uniform(10, opacity);
        _draw_c993343d.Uniform12(11, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_c993343d_4_9_5, element->WorldTransform()) : LocalTransform_c993343d_4_9_5);
        _draw_c993343d.Sampler2(12, Texture_c993343d_14_6_9);
        _draw_c993343d.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_c930343d_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_c993343d_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_c993343d_4_9_3, DrawElement_LocalTransform_c993343d_4_9_4);
        _draw_c930343d.BlendEnabled(true);
        _draw_c930343d.DepthTestEnabled(false);
        _draw_c930343d.CullFace(uPtr(dc)->CullFace());
        _draw_c930343d.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_c930343d.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_c930343d.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_c930343d.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_c930343d.Use();
        _draw_c930343d.Attrib1(0, 2, DrawElement_VertexData_c930343d_7_2_1, 8, 0);
        _draw_c930343d.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IViewport*/])));
        _draw_c930343d.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1((ind4 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind4.X, ind4.Y, ind4.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->Opacity()), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->Color().W * uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->Opacity()), opacity));
        _draw_c930343d.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_c930343d_4_9_2, uPtr(element)->WorldTransform()) : LocalTransform_c930343d_4_9_2);
        _draw_c930343d.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_c951343d_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_c993343d_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_c993343d_4_9_3, DrawElement_LocalTransform_c993343d_4_9_4);
        ::g::Uno::Float2 angleSlope_c951343d_14_18_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        float angleLen_c951343d_14_17_9 = ::g::Uno::Math::Abs1(element->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(element->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        _draw_c951343d.BlendEnabled(true);
        _draw_c951343d.DepthTestEnabled(false);
        _draw_c951343d.CullFace(uPtr(dc)->CullFace());
        _draw_c951343d.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_c951343d.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_c951343d.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_c951343d.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_c951343d.Use();
        _draw_c951343d.Attrib1(0, 2, DrawElement_VertexData_c951343d_7_2_1, 8, 0);
        _draw_c951343d.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IViewport*/])));
        _draw_c951343d.Uniform2(2, uPtr(element)->ActualSize());
        _draw_c951343d.Uniform2(3, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(element->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_c951343d_14_18_8, angleLen_c951343d_14_17_9), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), element->ActualSize()));
        _draw_c951343d.Uniform2(4, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
        _draw_c951343d.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->Opacity());
        _draw_c951343d.Uniform(6, opacity);
        _draw_c951343d.Uniform12(7, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_c951343d_4_9_2, element->WorldTransform()) : LocalTransform_c951343d_4_9_2);
        _draw_c951343d.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_c951343d_14_18_8 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), element->ActualSize())));
        _draw_c951343d.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_c951343d_14_17_9 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), element->ActualSize())));
        _draw_c951343d.Sampler2(10, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
        _draw_c951343d.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_c8ee343d_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_c993343d_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_c993343d_4_9_3, DrawElement_LocalTransform_c993343d_4_9_4);
        _draw_c930343d.BlendEnabled(true);
        _draw_c930343d.DepthTestEnabled(false);
        _draw_c930343d.CullFace(uPtr(dc)->CullFace());
        _draw_c930343d.BlendSrcRgb(DrawElement_BlendSrcRgb_c8ee343d_12_4_10);
        _draw_c930343d.BlendSrcAlpha(DrawElement_BlendSrcAlpha_c8ee343d_12_6_11);
        _draw_c930343d.BlendDstRgb(DrawElement_BlendDstRgb_c8ee343d_12_5_12);
        _draw_c930343d.BlendDstAlpha(DrawElement_BlendDstAlpha_c8ee343d_12_7_13);
        _draw_c930343d.Use();
        _draw_c930343d.Attrib1(0, 2, DrawElement_VertexData_c8ee343d_7_2_1, 8, 0);
        _draw_c930343d.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IViewport*/])));
        _draw_c930343d.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind5 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind5.X, ind5.Y, ind5.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), opacity));
        _draw_c930343d.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_c8ee343d_4_9_2, uPtr(element)->WorldTransform()) : LocalTransform_c8ee343d_4_9_2);
        _draw_c930343d.DrawArrays(6);
    }
}

// private generated void init_DrawCalls() [instance] :89
void SolidRectangle::init_DrawCalls()
{
    uStackFrame __("Fuse.Internal.Drawing.SolidRectangle", "init_DrawCalls()");
    uArray* Vertices_c993343d_7_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[6/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    DrawElement_VertexData_c993343d_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_c993343d_7_1_0), 0);
    DrawElement_LocalTransform_c993343d_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_LocalTransform_c993343d_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    DrawElement_LocalTransform_c993343d_4_9_4 = ::g::Uno::Matrix::Translation(::g::Uno::Float2__New1(0.0f).X, ::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_VertexData_c930343d_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_c993343d_7_1_0), 0);
    DrawElement_VertexData_c951343d_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_c993343d_7_1_0), 0);
    DrawElement_VertexData_c8ee343d_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_c993343d_7_1_0), 0);
    DrawElement_BlendSrcRgb_c8ee343d_12_4_10 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(0);
    DrawElement_BlendSrcAlpha_c8ee343d_12_6_11 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(0);
    DrawElement_BlendDstRgb_c8ee343d_12_5_12 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(0);
    DrawElement_BlendDstAlpha_c8ee343d_12_7_13 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(0);
    _draw_c993343d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle5953675f());
    _draw_c930343d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle5950675f());
    _draw_c951343d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle5951675f());
}

// public generated SolidRectangle New() [static] :89
SolidRectangle* SolidRectangle::New1()
{
    SolidRectangle* obj6 = (SolidRectangle*)uNew(SolidRectangle_typeof());
    obj6->ctor_();
    return obj6;
}
// }

}}}} // ::g::Fuse::Internal::Drawing
