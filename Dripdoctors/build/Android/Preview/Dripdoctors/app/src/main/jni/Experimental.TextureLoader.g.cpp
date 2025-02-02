// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.TextureLoader.Callback.h>
#include <Experimental.TextureLoader.InvalidContentTypeException.h>
#include <Experimental.TextureLoader.TextureLoader.h>
#include <Experimental.TextureLoader.TextureLoaderImpl.h>
#include <uBase/Buffer.h>
#include <uBase/BufferStream.h>
#include <uBase/Memory.h>
#include <uImage/Jpeg.h>
#include <uImage/Png.h>
#include <uImage/Texture.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno/Support.h>
#include <XliPlatform/GL.h>
static uString* STRINGS[6];
static uType* TYPES[1];

namespace g{
namespace Experimental{
namespace TextureLoader{

// C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.32.1\$.uno
// -------------------------------------------------------------------

// internal sealed class Callback :11
// {
static void Callback_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof()), offsetof(::g::Experimental::TextureLoader::Callback, _action), 0);
}

uType* Callback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.TextureLoader.Callback", options);
    type->fp_build_ = Callback_build;
    return type;
}

// public Callback(Uno.Action<texture2D> action) :16
void Callback__ctor__fn(Callback* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public void Execute(texture2D arg) :21
void Callback__Execute_fn(Callback* __this, ::g::Uno::Graphics::Texture2D* arg)
{
    __this->Execute(arg);
}

// public Callback New(Uno.Action<texture2D> action) :16
void Callback__New1_fn(uDelegate* action, Callback** __retval)
{
    *__retval = Callback::New1(action);
}

// public Callback(Uno.Action<texture2D> action) [instance] :16
void Callback::ctor_(uDelegate* action)
{
    uStackFrame __("Experimental.TextureLoader.Callback", ".ctor(Uno.Action<texture2D>)");
    _action = action;
}

// public void Execute(texture2D arg) [instance] :21
void Callback::Execute(::g::Uno::Graphics::Texture2D* arg)
{
    uStackFrame __("Experimental.TextureLoader.Callback", "Execute(texture2D)");
    uPtr(_action)->InvokeVoid(arg);
}

// public Callback New(Uno.Action<texture2D> action) [static] :16
Callback* Callback::New1(uDelegate* action)
{
    Callback* obj1 = (Callback*)uNew(Callback_typeof());
    obj1->ctor_(action);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.32.1\$.uno
// -------------------------------------------------------------------

// public sealed class InvalidContentTypeException :27
// {
static void InvalidContentTypeException_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)InvalidContentTypeException__New4_fn, 0, true, InvalidContentTypeException_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* InvalidContentTypeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidContentTypeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Experimental.TextureLoader.InvalidContentTypeException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_build_ = InvalidContentTypeException_build;
    return type;
}

// public InvalidContentTypeException(string reason) :29
void InvalidContentTypeException__ctor_3_fn(InvalidContentTypeException* __this, uString* reason)
{
    __this->ctor_3(reason);
}

// public InvalidContentTypeException New(string reason) :29
void InvalidContentTypeException__New4_fn(uString* reason, InvalidContentTypeException** __retval)
{
    *__retval = InvalidContentTypeException::New4(reason);
}

// public InvalidContentTypeException(string reason) [instance] :29
void InvalidContentTypeException::ctor_3(uString* reason)
{
    ctor_1(reason);
}

// public InvalidContentTypeException New(string reason) [static] :29
InvalidContentTypeException* InvalidContentTypeException::New4(uString* reason)
{
    InvalidContentTypeException* obj1 = (InvalidContentTypeException*)uNew(InvalidContentTypeException_typeof());
    obj1->ctor_3(reason);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.32.1\$.uno
// -------------------------------------------------------------------

// public static class TextureLoader :32
// {
static void TextureLoader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("image/jpeg");
    ::STRINGS[1] = uString::Const("image/png");
    ::STRINGS[2] = uString::Const("application/octet-stream");
    ::STRINGS[3] = uString::Const(".png");
    ::STRINGS[4] = uString::Const(".jpg");
    ::STRINGS[5] = uString::Const(".jpeg");
    ::TYPES[0] = ::g::Uno::Exception_typeof();
    type->Reflection.SetFunctions(4,
        new uFunction("ByteArrayToTexture2DContentType", NULL, (void*)TextureLoader__ByteArrayToTexture2DContentType_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Buffer_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof())),
        new uFunction("ByteArrayToTexture2DFilename", NULL, (void*)TextureLoader__ByteArrayToTexture2DFilename_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Buffer_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof())),
        new uFunction("JpegByteArrayToTexture2D", NULL, (void*)TextureLoader__JpegByteArrayToTexture2D_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Buffer_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof())),
        new uFunction("PngByteArrayToTexture2D", NULL, (void*)TextureLoader__PngByteArrayToTexture2D_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Buffer_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof())));
}

uClassType* TextureLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.TextureLoader.TextureLoader", options);
    type->fp_build_ = TextureLoader_build;
    return type;
}

// public static void ByteArrayToTexture2DContentType(Uno.Buffer arr, string contentType, Uno.Action<texture2D> callback) :100
void TextureLoader__ByteArrayToTexture2DContentType_fn(::g::Uno::Buffer* arr, uString* contentType, uDelegate* callback)
{
    TextureLoader::ByteArrayToTexture2DContentType(arr, contentType, callback);
}

// public static void ByteArrayToTexture2DFilename(Uno.Buffer arr, string filename, Uno.Action<texture2D> callback) :74
void TextureLoader__ByteArrayToTexture2DFilename_fn(::g::Uno::Buffer* arr, uString* filename, uDelegate* callback)
{
    TextureLoader::ByteArrayToTexture2DFilename(arr, filename, callback);
}

// private static bool EndsWith(string str, string suffix) :85
void TextureLoader__EndsWith_fn(uString* str, uString* suffix, bool* __retval)
{
    *__retval = TextureLoader::EndsWith(str, suffix);
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) :34
void TextureLoader__JpegByteArrayToTexture2D_fn(::g::Uno::Buffer* arr, uDelegate* callback)
{
    TextureLoader::JpegByteArrayToTexture2D(arr, callback);
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) :54
void TextureLoader__PngByteArrayToTexture2D_fn(::g::Uno::Buffer* arr, uDelegate* callback)
{
    TextureLoader::PngByteArrayToTexture2D(arr, callback);
}

// public static void ByteArrayToTexture2DContentType(Uno.Buffer arr, string contentType, Uno.Action<texture2D> callback) [static] :100
void TextureLoader::ByteArrayToTexture2DContentType(::g::Uno::Buffer* arr, uString* contentType, uDelegate* callback)
{
    uStackFrame __("Experimental.TextureLoader.TextureLoader", "ByteArrayToTexture2DContentType(Uno.Buffer,string,Uno.Action<texture2D>)");

    if (::g::Uno::String::IndexOf1(uPtr(contentType), ::STRINGS[0/*"image/jpeg"*/], 0) != -1)
        TextureLoader::JpegByteArrayToTexture2D(arr, callback);
    else if (::g::Uno::String::IndexOf1(uPtr(contentType), ::STRINGS[1/*"image/png"*/], 0) != -1)
        TextureLoader::PngByteArrayToTexture2D(arr, callback);
    else if (::g::Uno::String::IndexOf1(uPtr(contentType), ::STRINGS[2/*"application...*/], 0) != -1)
        TextureLoader::JpegByteArrayToTexture2D(arr, callback);
    else
        U_THROW(::g::Experimental::TextureLoader::InvalidContentTypeException::New4(contentType));
}

// public static void ByteArrayToTexture2DFilename(Uno.Buffer arr, string filename, Uno.Action<texture2D> callback) [static] :74
void TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer* arr, uString* filename, uDelegate* callback)
{
    uStackFrame __("Experimental.TextureLoader.TextureLoader", "ByteArrayToTexture2DFilename(Uno.Buffer,string,Uno.Action<texture2D>)");
    filename = ::g::Uno::String::ToLower(uPtr(filename));

    if (TextureLoader::EndsWith(filename, ::STRINGS[3/*".png"*/]))
        TextureLoader::PngByteArrayToTexture2D(arr, callback);
    else if (TextureLoader::EndsWith(filename, ::STRINGS[4/*".jpg"*/]) || TextureLoader::EndsWith(filename, ::STRINGS[5/*".jpeg"*/]))
        TextureLoader::JpegByteArrayToTexture2D(arr, callback);
    else
        U_THROW(::g::Experimental::TextureLoader::InvalidContentTypeException::New4(filename));
}

// private static bool EndsWith(string str, string suffix) [static] :85
bool TextureLoader::EndsWith(uString* str, uString* suffix)
{
    uStackFrame __("Experimental.TextureLoader.TextureLoader", "EndsWith(string,string)");
    int strAt = uPtr(str)->Length() - 1;
    int suffixAt = uPtr(suffix)->Length() - 1;

    while ((strAt >= 0) && (suffixAt >= 0))
    {
        if (uPtr(str)->Item(strAt) != uPtr(suffix)->Item(suffixAt))
            return false;

        strAt--;
        suffixAt--;
    }

    return suffixAt < 0;
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) [static] :34
void TextureLoader::JpegByteArrayToTexture2D(::g::Uno::Buffer* arr, uDelegate* callback)
{
    uStackFrame __("Experimental.TextureLoader.TextureLoader", "JpegByteArrayToTexture2D(Uno.Buffer,Uno.Action<texture2D>)");

    try
    {
        ::g::Experimental::TextureLoader::TextureLoaderImpl::JpegByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* jpegException = __t.Exception;

        try
        {
            ::g::Experimental::TextureLoader::TextureLoaderImpl::PngByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* pngException = __t.Exception;
            U_THROW(jpegException);
        }
    }
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) [static] :54
void TextureLoader::PngByteArrayToTexture2D(::g::Uno::Buffer* arr, uDelegate* callback)
{
    uStackFrame __("Experimental.TextureLoader.TextureLoader", "PngByteArrayToTexture2D(Uno.Buffer,Uno.Action<texture2D>)");

    try
    {
        ::g::Experimental::TextureLoader::TextureLoaderImpl::PngByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* pngException = __t.Exception;

        try
        {
            ::g::Experimental::TextureLoader::TextureLoaderImpl::JpegByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* jpegException = __t.Exception;
            U_THROW(pngException);
        }
    }
}
// }

// C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.32.1\$.uno
// -------------------------------------------------------------------

// internal static class TextureLoaderImpl :122
// {
static void TextureLoaderImpl_build(uType* type)
{
}

uClassType* TextureLoaderImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.TextureLoader.TextureLoaderImpl", options);
    type->fp_build_ = TextureLoaderImpl_build;
    return type;
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) :125
void TextureLoaderImpl__JpegByteArrayToTexture2D_fn(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    TextureLoaderImpl::JpegByteArrayToTexture2D(arr_, callback_);
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) :134
void TextureLoaderImpl__PngByteArrayToTexture2D_fn(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    TextureLoaderImpl::PngByteArrayToTexture2D(arr_, callback_);
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) [static] :125
void TextureLoaderImpl::JpegByteArrayToTexture2D(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    uStackFrame __("Experimental.TextureLoader.TextureLoaderImpl", "JpegByteArrayToTexture2D(Uno.Buffer,Experimental.TextureLoader.Callback)");
    try
    {
        uBase::Auto<uBase::BufferPtr> bp = new uBase::BufferPtr(U_BUFFER_PTR(arr_), U_BUFFER_SIZE(arr_), false);
        uBase::Auto<uBase::BufferStream> bs = new uBase::BufferStream(bp, true, false);
        uBase::Auto<uImage::ImageReader> ir = uImage::Jpeg::CreateReader(bs);
        uBase::Auto<uImage::Bitmap> bmp = ir->ReadBitmap();
        uBase::Auto<uImage::Texture> tex = uImage::Texture::Create(bmp);
        uGLTextureInfo info;
        GLuint handle = uCreateGLTexture(tex, false, &info);
    
        callback_->Execute(::g::Uno::Graphics::Texture2D::New2(handle, ::g::Uno::Int2__New2(info.Width, info.Height), info.MipCount, 0));
    }
    catch (const uBase::Exception &e)
    {
        throw uThrowable(::g::Uno::Exception::New2(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) [static] :134
void TextureLoaderImpl::PngByteArrayToTexture2D(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    uStackFrame __("Experimental.TextureLoader.TextureLoaderImpl", "PngByteArrayToTexture2D(Uno.Buffer,Experimental.TextureLoader.Callback)");
    try
    {
        uBase::Auto<uBase::BufferPtr> bp = new uBase::BufferPtr(U_BUFFER_PTR(arr_), U_BUFFER_SIZE(arr_), false);
        uBase::Auto<uBase::BufferStream> bs = new uBase::BufferStream(bp, true, false);
        uBase::Auto<uImage::ImageReader> ir = uImage::Png::CreateReader(bs);
        uBase::Auto<uImage::Bitmap> bmp = ir->ReadBitmap();
        uBase::Auto<uImage::Texture> tex = uImage::Texture::Create(bmp);
        uGLTextureInfo info;
        GLuint handle = uCreateGLTexture(tex, false, &info);
    
        callback_->Execute(::g::Uno::Graphics::Texture2D::New2(handle, ::g::Uno::Int2__New2(info.Width, info.Height), info.MipCount, 0));
    }
    catch (const uBase::Exception &e)
    {
        throw uThrowable(::g::Uno::Exception::New2(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}
// }

}}} // ::g::Experimental::TextureLoader
