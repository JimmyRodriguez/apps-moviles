// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Exceptions\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Uno{

// public class Exception :130
// {
struct Exception_type : uType
{
    void(*fp_get_Message)(::g::Uno::Exception*, uString**);
};

Exception_type* Exception_typeof();
void Exception__ctor__fn(Exception* __this);
void Exception__ctor_1_fn(Exception* __this, uString* message);
void Exception__ctor_2_fn(Exception* __this, uString* message, Exception* inner);
void Exception__get_InnerException_fn(Exception* __this, Exception** __retval);
void Exception__get_Message_fn(Exception* __this, uString** __retval);
void Exception__New1_fn(Exception** __retval);
void Exception__New2_fn(uString* message, Exception** __retval);
void Exception__New3_fn(uString* message, Exception* inner, Exception** __retval);
void Exception__get_StackTrace_fn(Exception* __this, uString** __retval);
void Exception__ToString_fn(Exception* __this, uString** __retval);

struct Exception : uObject
{
    uStrong<Exception*> _inner;
    uStrong<uString*> _message;
    uStrong<uString*> _trace;

    void ctor_();
    void ctor_1(uString* message);
    void ctor_2(uString* message, Exception* inner);
    Exception* InnerException();
    uString* Message() { uString* __retval; return (((Exception_type*)__type)->fp_get_Message)(this, &__retval), __retval; }
    uString* StackTrace();
    static Exception* New1();
    static Exception* New2(uString* message);
    static Exception* New3(uString* message, Exception* inner);
    static uString* Message(Exception* __this) { uString* __retval; return Exception__get_Message_fn(__this, &__retval), __retval; }
};
// }

}} // ::g::Uno
