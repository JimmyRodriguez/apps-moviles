// This file was generated based on C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.32.1\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Experimental{namespace TextureLoader{struct TextureLoader;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Experimental{
namespace TextureLoader{

// public static class TextureLoader :32
// {
uClassType* TextureLoader_typeof();
void TextureLoader__ByteArrayToTexture2DContentType_fn(::g::Uno::Buffer* arr, uString* contentType, uDelegate* callback);
void TextureLoader__ByteArrayToTexture2DFilename_fn(::g::Uno::Buffer* arr, uString* filename, uDelegate* callback);
void TextureLoader__EndsWith_fn(uString* str, uString* suffix, bool* __retval);
void TextureLoader__JpegByteArrayToTexture2D_fn(::g::Uno::Buffer* arr, uDelegate* callback);
void TextureLoader__PngByteArrayToTexture2D_fn(::g::Uno::Buffer* arr, uDelegate* callback);

struct TextureLoader : uObject
{
    static void ByteArrayToTexture2DContentType(::g::Uno::Buffer* arr, uString* contentType, uDelegate* callback);
    static void ByteArrayToTexture2DFilename(::g::Uno::Buffer* arr, uString* filename, uDelegate* callback);
    static bool EndsWith(uString* str, uString* suffix);
    static void JpegByteArrayToTexture2D(::g::Uno::Buffer* arr, uDelegate* callback);
    static void PngByteArrayToTexture2D(::g::Uno::Buffer* arr, uDelegate* callback);
};
// }

}}} // ::g::Experimental::TextureLoader
