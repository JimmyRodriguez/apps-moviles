// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.35.6/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct TextReader;}}}

namespace g{
namespace Uno{
namespace IO{

// public abstract class TextReader :3001
// {
struct TextReader_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose1)(::g::Uno::IO::TextReader*, bool*);
    void(*fp_Peek)(::g::Uno::IO::TextReader*, int*);
    void(*fp_Read)(::g::Uno::IO::TextReader*, int*);
    void(*fp_Read1)(::g::Uno::IO::TextReader*, uArray*, int*, int*, int*);
};

TextReader_type* TextReader_typeof();
void TextReader__ctor__fn(TextReader* __this);
void TextReader__Dispose_fn(TextReader* __this);
void TextReader__Dispose1_fn(TextReader* __this, bool* disposing);
void TextReader__Peek_fn(TextReader* __this, int* __retval);
void TextReader__Read_fn(TextReader* __this, int* __retval);
void TextReader__Read1_fn(TextReader* __this, uArray* buffer, int* index, int* count, int* __retval);
void TextReader__ReadLine_fn(TextReader* __this, uString** __retval);

struct TextReader : uObject
{
    void ctor_();
    void Dispose();
    void Dispose1(bool disposing) { (((TextReader_type*)__type)->fp_Dispose1)(this, &disposing); }
    int Peek() { int __retval; return (((TextReader_type*)__type)->fp_Peek)(this, &__retval), __retval; }
    int Read() { int __retval; return (((TextReader_type*)__type)->fp_Read)(this, &__retval), __retval; }
    int Read1(uArray* buffer, int index, int count) { int __retval; return (((TextReader_type*)__type)->fp_Read1)(this, buffer, &index, &count, &__retval), __retval; }
    uString* ReadLine();
    static void Dispose1(TextReader* __this, bool disposing) { TextReader__Dispose1_fn(__this, &disposing); }
    static int Peek(TextReader* __this) { int __retval; return TextReader__Peek_fn(__this, &__retval), __retval; }
    static int Read(TextReader* __this) { int __retval; return TextReader__Read_fn(__this, &__retval), __retval; }
    static int Read1(TextReader* __this, uArray* buffer, int index, int count) { int __retval; return TextReader__Read1_fn(__this, buffer, &index, &count, &__retval), __retval; }
};
// }

}}} // ::g::Uno::IO
