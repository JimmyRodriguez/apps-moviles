// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ContextBinding.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding__CallClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class EventBinding :1017
// {
::g::Fuse::Reactive::ContextBinding_type* EventBinding_typeof();
void EventBinding__ctor_2_fn(EventBinding* __this, uString* key);
void EventBinding__New1_fn(uString* key, EventBinding** __retval);
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj);
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args);
void EventBinding__OnUnrooted_fn(EventBinding* __this);
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this);

struct EventBinding : ::g::Fuse::Reactive::ContextBinding
{
    uStrong< ::g::Fuse::Scripting::Function*> _function;
    uStrong< ::g::Uno::Collections::List*> _queuedEvents;

    void ctor_2(uString* key);
    void OnEvent(uObject* sender, ::g::Uno::EventArgs* args);
    void ProcessQueuedEvents();
    static EventBinding* New1(uString* key);
};
// }

}}} // ::g::Fuse::Reactive
