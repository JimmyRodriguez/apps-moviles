// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.35.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.Future-1.h>
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Uno{
namespace Threading{

// public class Promise<T> :366
// {
::g::Uno::Threading::Future_type* Promise_typeof();
void Promise__ctor_3_fn(Promise* __this);
void Promise__ctor_4_fn(Promise* __this, void* result);
void Promise__ctor_5_fn(Promise* __this, uObject* dispatcher);
void Promise__ctor_6_fn(Promise* __this, uObject* dispatcher, void* result);
void Promise__Cancel_fn(Promise* __this, bool* shutdownGracefully);
void Promise__New1_fn(uType* __type, Promise** __retval);
void Promise__New2_fn(uType* __type, void* result, Promise** __retval);
void Promise__New3_fn(uType* __type, uObject* dispatcher, Promise** __retval);
void Promise__New4_fn(uType* __type, uObject* dispatcher, void* result, Promise** __retval);
void Promise__Reject_fn(Promise* __this, ::g::Uno::Exception* reason);
void Promise__Resolve_fn(Promise* __this, void* result);
void Promise__Run_fn(uType* __type, uDelegate* func, ::g::Uno::Threading::Future1** __retval);
void Promise__Run1_fn(uType* __type, uObject* dispatcher, uDelegate* func, ::g::Uno::Threading::Future1** __retval);
void Promise__Wait_fn(Promise* __this);

struct Promise : ::g::Uno::Threading::Future1
{
    void ctor_3();
    template<class T>
    void ctor_4(T result) { Promise__ctor_4_fn(this, uConstrain(__type->GetBase(Promise_typeof())->T(0), result)); }
    void ctor_5(uObject* dispatcher);
    template<class T>
    void ctor_6(uObject* dispatcher, T result) { Promise__ctor_6_fn(this, dispatcher, uConstrain(__type->GetBase(Promise_typeof())->T(0), result)); }
    void Reject(::g::Uno::Exception* reason);
    template<class T>
    void Resolve(T result) { Promise__Resolve_fn(this, uConstrain(__type->GetBase(Promise_typeof())->T(0), result)); }
    static Promise* New1(uType* __type);
    template<class T>
    static Promise* New2(uType* __type, T result) { Promise* __retval; return Promise__New2_fn(__type, uConstrain(__type->T(0), result), &__retval), __retval; }
    static Promise* New3(uType* __type, uObject* dispatcher);
    template<class T>
    static Promise* New4(uType* __type, uObject* dispatcher, T result) { Promise* __retval; return Promise__New4_fn(__type, dispatcher, uConstrain(__type->T(0), result), &__retval), __retval; }
    static ::g::Uno::Threading::Future1* Run(uType* __type, uDelegate* func);
    static ::g::Uno::Threading::Future1* Run1(uType* __type, uObject* dispatcher, uDelegate* func);
};
// }

}}} // ::g::Uno::Threading
