// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct MessageHandler;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct String;}}}}}
namespace V8Simple { class MessageHandlerProxy; }

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal extern class MessageHandler :1096
// {
struct MessageHandler_type : uType
{
    void(*fp_Handle)(::g::Fuse::Scripting::V8::Simple::MessageHandler*, ::g::Fuse::Scripting::V8::Simple::String*);
};

MessageHandler_type* MessageHandler_typeof();
void MessageHandler__ctor__fn(MessageHandler* __this);
void MessageHandler__Handle_fn(MessageHandler* __this, ::g::Fuse::Scripting::V8::Simple::String* message);

struct MessageHandler : uObject
{
    ::V8Simple::MessageHandlerProxy* _impl;

    void ctor_();
    void Handle(::g::Fuse::Scripting::V8::Simple::String* message) { (((MessageHandler_type*)__type)->fp_Handle)(this, message); }
    static void Handle(MessageHandler* __this, ::g::Fuse::Scripting::V8::Simple::String* message) { MessageHandler__Handle_fn(__this, message); }
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
