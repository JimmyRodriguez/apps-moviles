// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Reactive\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Operation;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class Observable.Operation :2091
// {
struct Observable__Operation_type : uType
{
    void(*fp_OnPerform)(::g::Fuse::Reactive::Observable__Operation*);
    void(*fp_SendMessage)(::g::Fuse::Reactive::Observable__Operation*, ::g::Fuse::Reactive::Observable__Subscription*);
    void(*fp_Unsubscribe)(::g::Fuse::Reactive::Observable__Operation*);
};

Observable__Operation_type* Observable__Operation_typeof();
void Observable__Operation__ctor__fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable* observable);
void Observable__Operation__get_Observable_fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable** __retval);
void Observable__Operation__Perform_fn(Observable__Operation* __this);
void Observable__Operation__Unsubscribe_fn(Observable__Operation* __this);

struct Observable__Operation : uObject
{
    bool _isPerformed;
    uStrong< ::g::Fuse::Reactive::Observable*> _observable;

    void ctor_(::g::Fuse::Reactive::Observable* observable);
    ::g::Fuse::Reactive::Observable* Observable();
    void OnPerform() { (((Observable__Operation_type*)__type)->fp_OnPerform)(this); }
    void Perform();
    void SendMessage(::g::Fuse::Reactive::Observable__Subscription* sub) { (((Observable__Operation_type*)__type)->fp_SendMessage)(this, sub); }
    void Unsubscribe() { (((Observable__Operation_type*)__type)->fp_Unsubscribe)(this); }
    static void Unsubscribe(Observable__Operation* __this) { Observable__Operation__Unsubscribe_fn(__this); }
};
// }

}}} // ::g::Fuse::Reactive
