// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.JNI.RefType.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.uweakptr.h>
#include <Android.Base.Types.Bridge.h>
#include <Android.Base.Wrappers.BindingSubclassAttribute.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
//~
        bool __JWrapper_Callbacks_Registered = false;
        void __JWrapper_Finalizer(JNIEnv *env , jclass clazz, jlong ptr)
        {
        uWeakObject* weak = (uWeakObject*)ptr;
        uAutoReleasePool pool;
        ::g::Android::Base::Wrappers::JWrapper* wrapper = (::g::Android::Base::Wrappers::JWrapper*)uLoadWeak(weak);
        uStoreWeak(&weak, 0);
        }
        void __Register_Finalizer()
        {
            JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
            JNINativeMethod nativeFunc = {(char* const)"Finalize", (char* const)"(J)V", (void *)&__JWrapper_Finalizer};
            jclass cls = reinterpret_cast<jclass>(jni->NewGlobalRef(::g::Android::Base::JNI::LoadClass(::g::Android::Base::JNI::GetEnvPtr(), "com.Bindings.UnoHelper")));
            jint attached = ::g::Android::Base::JNI::GetEnvPtr()->RegisterNatives(cls, &nativeFunc, 1);
            if (attached < 0) {
                U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not register the instantiation callback function",54)));
            }
        }
//~
        bool __JWrapper_WeakCallback(uWeakStateIntercept::Event e, uObject* obj)
        {
            ::g::Android::Base::JNI::CheckException();
            ::g::Android::Base::Wrappers::JWrapper* wrapper = (::g::Android::Base::Wrappers::JWrapper*)obj;
            jobject jobj = wrapper->_javaObject;
            if (!jobj) return true;

            bool subclassed = wrapper->_subclassed;

            if (e == uWeakStateIntercept::OnLoad) {
                // retain went from 0 to 1
                if (subclassed) {
                    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
                    wrapper->_javaObject = jni->NewGlobalRef(jobj);
                    jni->DeleteWeakGlobalRef(jobj);
                    return true;
                } else {
                    return true;
                }
            } else {
                // retain went from 1 to 0
                if (subclassed) {
                    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
                    wrapper->_javaObject = jni->NewWeakGlobalRef(jobj);
                    jni->DeleteGlobalRef(jobj);
                    return false;
                } else {
                    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
                    jni->DeleteGlobalRef(jobj);
                    return true;
                }
            }
            return false;
        }
static uType* TYPES[2];

namespace g{
namespace Android{
namespace Base{
namespace Wrappers{

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Targets\Android\Uno\Base\$.uno
// -------------------------------------------------------------------------

// public sealed extern class BindingSubclassAttribute :2616
// {
static void BindingSubclassAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BindingSubclassAttribute__New1_fn, 0, true, BindingSubclassAttribute_typeof(), 0));
}

uType* BindingSubclassAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(BindingSubclassAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Android.Base.Wrappers.BindingSubclassAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_build_ = BindingSubclassAttribute_build;
    type->fp_ctor_ = (void*)BindingSubclassAttribute__New1_fn;
    return type;
}

// public BindingSubclassAttribute() :2618
void BindingSubclassAttribute__ctor_1_fn(BindingSubclassAttribute* __this)
{
    __this->ctor_1();
}

// public BindingSubclassAttribute New() :2618
void BindingSubclassAttribute__New1_fn(BindingSubclassAttribute** __retval)
{
    *__retval = BindingSubclassAttribute::New1();
}

// public BindingSubclassAttribute() [instance] :2618
void BindingSubclassAttribute::ctor_1()
{
    uStackFrame __("Android.Base.Wrappers.BindingSubclassAttribute", ".ctor()");
    ctor_();
}

// public BindingSubclassAttribute New() [static] :2618
BindingSubclassAttribute* BindingSubclassAttribute::New1()
{
    BindingSubclassAttribute* obj1 = (BindingSubclassAttribute*)uNew(BindingSubclassAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Targets\Android\Uno\Base\$.uno
// -------------------------------------------------------------------------

// public abstract extern interface IJWrapper :2622
// {
uInterfaceType* IJWrapper_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.Base.Wrappers.IJWrapper", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("_GetJavaObject", NULL, NULL, offsetof(IJWrapper, fp__GetJavaObject), false, ::g::Android::Base::Primitives::ujobject_typeof(), 0),
        new uFunction("_IsSubclassed", NULL, NULL, offsetof(IJWrapper, fp__IsSubclassed), false, ::g::Uno::Bool_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Targets\Android\Uno\Base\$.uno
// -------------------------------------------------------------------------

// public extern class JWrapper :2629
// {
// ~JWrapper() :2669
static void JWrapper__Finalize_fn(JWrapper* __this)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "Finalize()");
    __this->Dispose(false);
}

static void JWrapper_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
    ::TYPES[1] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(JWrapper_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(JWrapper_type, interface1));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Android::Base::Wrappers::JWrapper, _javaClassName), 0,
        ::g::Android::Base::Primitives::ujobject_typeof(), offsetof(::g::Android::Base::Wrappers::JWrapper, _javaObject), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Android::Base::Wrappers::JWrapper, _subclassed), 0,
        ::g::Android::Base::Primitives::uweakptr_typeof(), offsetof(::g::Android::Base::Wrappers::JWrapper, _weakptr), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Android::Base::Wrappers::JWrapper, disposed), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Base::Wrappers::JWrapper::_jlangObjectClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::Wrappers::JWrapper::_jlangObjectEqualsMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::Wrappers::JWrapper::_jlangObjectHashCodeMid_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("_javaObject", 1),
        new uField("_jlangObjectClass", 5),
        new uField("_jlangObjectEqualsMid", 6),
        new uField("_jlangObjectHashCodeMid", 7),
        new uField("_subclassed", 2));
    type->Reflection.SetFunctions(10,
        new uFunction("_GetJavaObject", NULL, (void*)JWrapper___GetJavaObject_fn, 0, false, ::g::Android::Base::Primitives::ujobject_typeof(), 0),
        new uFunction("_Init", NULL, (void*)JWrapper___Init_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("_InitProxy", NULL, (void*)JWrapper___InitProxy_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("_IsSubclassed", NULL, (void*)JWrapper___IsSubclassed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("_IsThisType", NULL, (void*)JWrapper___IsThisType_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("equals", NULL, (void*)JWrapper__equals_fn, 0, false, ::g::Uno::Bool_typeof(), 1, JWrapper_typeof()),
        new uFunction("hashCode", NULL, (void*)JWrapper__hashCode_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)JWrapper__New1_fn, 0, true, JWrapper_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)JWrapper__New2_fn, 0, true, JWrapper_typeof(), 5, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Wrap", NULL, (void*)JWrapper__Wrap_fn, 0, true, JWrapper_typeof(), 3, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()));
}

JWrapper_type* JWrapper_typeof()
{
    static uSStrong<JWrapper_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(JWrapper);
    options.TypeSize = sizeof(JWrapper_type);
    type = (JWrapper_type*)uClassType::New("Android.Base.Wrappers.JWrapper", options);
    type->SetBase(::g::Java::Object_typeof());
    type->fp_build_ = JWrapper_build;
    type->fp_Finalize = (void(*)(uObject*))JWrapper__Finalize_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))JWrapper___IsSubclassed_fn;
    return type;
}

// public JWrapper(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) :2659
void JWrapper__ctor_1_fn(JWrapper* __this, jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType)
{
    __this->ctor_1(*obj, typePtr, *typeHasFallbackClass, *resolveType);
}

// public JWrapper(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg) :2662
void JWrapper__ctor_2_fn(JWrapper* __this, jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType, bool* stackArg)
{
    __this->ctor_2(*obj, typePtr, *typeHasFallbackClass, *resolveType, *stackArg);
}

// protected extern void _DisposeJavaObject() :2717
void JWrapper___DisposeJavaObject_fn(JWrapper* __this)
{
    __this->_DisposeJavaObject();
}

// public Android.Base.Primitives.ujobject _GetJavaObject() :2689
void JWrapper___GetJavaObject_fn(JWrapper* __this, jobject* __retval)
{
    *__retval = __this->_GetJavaObject();
}

// public static extern void _Init() :2682
void JWrapper___Init_fn()
{
    JWrapper::_Init();
}

// public static void _InitProxy() :2683
void JWrapper___InitProxy_fn()
{
    JWrapper::_InitProxy();
}

// public bool _IsSubclassed() :2694
void JWrapper___IsSubclassed_fn(JWrapper* __this, bool* __retval)
{
    *__retval = __this->_IsSubclassed();
}

// public static bool _IsThisType(Android.Base.Wrappers.IJWrapper obj) :2684
void JWrapper___IsThisType_fn(uObject* obj, bool* __retval)
{
    *__retval = JWrapper::_IsThisType(obj);
}

// protected void Dispose(bool disposing) :2704
void JWrapper__Dispose_fn(JWrapper* __this, bool* disposing)
{
    __this->Dispose(*disposing);
}

// public extern bool equals(Android.Base.Wrappers.JWrapper arg0) :2735
void JWrapper__equals_fn(JWrapper* __this, JWrapper* arg0_, bool* __retval)
{
    *__retval = __this->equals(arg0_);
}

// public extern int hashCode() :2738
void JWrapper__hashCode_fn(JWrapper* __this, int* __retval)
{
    *__retval = __this->hashCode();
}

// public JWrapper New(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) :2659
void JWrapper__New1_fn(jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType, JWrapper** __retval)
{
    *__retval = JWrapper::New1(*obj, typePtr, *typeHasFallbackClass, *resolveType);
}

// public JWrapper New(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg) :2662
void JWrapper__New2_fn(jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType, bool* stackArg, JWrapper** __retval)
{
    *__retval = JWrapper::New2(*obj, typePtr, *typeHasFallbackClass, *resolveType, *stackArg);
}

// public static operator ==(Android.Base.Wrappers.JWrapper a, Android.Base.Wrappers.JWrapper b) :2719
void JWrapper__op_Equality_fn(JWrapper* a, JWrapper* b, bool* __retval)
{
    *__retval = JWrapper::op_Equality(a, b);
}

// public static operator !=(Android.Base.Wrappers.JWrapper a, Android.Base.Wrappers.JWrapper b) :2729
void JWrapper__op_Inequality_fn(JWrapper* a, JWrapper* b, bool* __retval)
{
    *__retval = JWrapper::op_Inequality(a, b);
}

// private void SetInternalObj(Android.Base.Primitives.ujobject obj, bool stackArg) :2642
void JWrapper__SetInternalObj_fn(JWrapper* __this, jobject* obj, bool* stackArg)
{
    __this->SetInternalObj(*obj, *stackArg);
}

// private void Uno.IDisposable.Dispose() :2699
void JWrapper__UnoIDisposableDispose_fn(JWrapper* __this)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "Uno.IDisposable.Dispose()");
    __this->Dispose(true);
}

// public static Android.Base.Wrappers.JWrapper Wrap(Android.Base.Primitives.ujobject obj, [bool resolveType], [bool typeHasFallbackClass]) :2674
void JWrapper__Wrap_fn(jobject* obj, bool* resolveType, bool* typeHasFallbackClass, JWrapper** __retval)
{
    *__retval = JWrapper::Wrap(*obj, *resolveType, *typeHasFallbackClass);
}

jclass JWrapper::_jlangObjectClass_;
jmethodID JWrapper::_jlangObjectEqualsMid_;
jmethodID JWrapper::_jlangObjectHashCodeMid_;

// public JWrapper(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) [instance] :2659
void JWrapper::ctor_1(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_2(obj, typePtr, typeHasFallbackClass, resolveType, false);
}

// public JWrapper(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg) [instance] :2662
void JWrapper::ctor_2(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool,bool)");
    ctor_();
    this->_weakptr = 0;
    ::g::Android::Base::Types::Bridge::SetWrapperType(this, obj, typePtr, typeHasFallbackClass, resolveType);
    SetInternalObj(obj, stackArg);
}

// protected extern void _DisposeJavaObject() [instance] :2717
void JWrapper::_DisposeJavaObject()
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "_DisposeJavaObject()");
    if (!this->_javaObject) return;
    ::g::Android::Base::JNI::DeleteGlobalRef(this->_javaObject);
    this->_javaObject = 0;
}

// public Android.Base.Primitives.ujobject _GetJavaObject() [instance] :2689
jobject JWrapper::_GetJavaObject()
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "_GetJavaObject()");
    return _javaObject;
}

// public bool _IsSubclassed() [instance] :2694
bool JWrapper::_IsSubclassed()
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "_IsSubclassed()");
    return _subclassed;
}

// protected void Dispose(bool disposing) [instance] :2704
void JWrapper::Dispose(bool disposing)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "Dispose(bool)");
    bool disposing_ = disposing;

    if (!disposed)
    {
        if (disposing_)
            _DisposeJavaObject();

        disposed = true;
    }
}

// public extern bool equals(Android.Base.Wrappers.JWrapper arg0) [instance] :2735
bool JWrapper::equals(JWrapper* arg0_)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "equals(Android.Base.Wrappers.JWrapper)");
    INIT_JNI;
    jobject _obArg2 = ((!arg0_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CLASS_INIT(JWrapper::_jlangObjectClass(),JWrapper::_Init());
    CACHE_METHOD(JWrapper::_jlangObjectEqualsMid(),JWrapper::_jlangObjectClass(),"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for method java.lang.Object.equals could not be cached for jwrapper",79);
    bool result = ((bool)U_JNIVAR->CallBooleanMethod(this->_javaObject, JWrapper::_jlangObjectEqualsMid(), _obArg2));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public extern int hashCode() [instance] :2738
int JWrapper::hashCode()
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "hashCode()");
    INIT_JNI;
    CLASS_INIT(JWrapper::_jlangObjectClass(),JWrapper::_Init());
    CACHE_METHOD(JWrapper::_jlangObjectHashCodeMid(),JWrapper::_jlangObjectClass(),"hashCode","()I",GetMethodID,"Id for method java.lang.Object.hashCode could not be cached for jwrapper",81);
    int result = ((int)U_JNIVAR->CallIntMethod(this->_javaObject, JWrapper::_jlangObjectHashCodeMid()));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// private void SetInternalObj(Android.Base.Primitives.ujobject obj, bool stackArg) [instance] :2642
void JWrapper::SetInternalObj(jobject obj, bool stackArg)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "SetInternalObj(Android.Base.Primitives.ujobject,bool)");

    if (!__JWrapper_Callbacks_Registered)
    {
        __JWrapper_Callbacks_Registered = true;
        __Register_Finalizer();
    }

    if (!_weakptr)
    {
        uStoreWeak(&_weakptr, this);
        uWeakStateIntercept::SetCallback(_weakptr, (uWeakStateIntercept::Callback)__JWrapper_WeakCallback);
    }

    if (obj)
    {
        _javaObject = ::g::Android::Base::JNI::NewGlobalRef1(obj);

        if (!stackArg && (::g::Android::Base::JNI::GetRefType1(obj) == 1))
            ::g::Android::Base::JNI::DeleteLocalRef1(obj);
    }
}

// public static extern void _Init() [static] :2682
void JWrapper::_Init()
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "_Init()");
    if (JWrapper::_jlangObjectClass()) { return; }
    INIT_JNI;
    JWrapper::_jlangObjectClass() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Object"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!JWrapper::_jlangObjectClass()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Object' for JWrapper", 53); }
}

// public static void _InitProxy() [static] :2683
void JWrapper::_InitProxy()
{
}

// public static bool _IsThisType(Android.Base.Wrappers.IJWrapper obj) [static] :2684
bool JWrapper::_IsThisType(uObject* obj)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "_IsThisType(Android.Base.Wrappers.IJWrapper)");
    return false;
}

// public JWrapper New(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) [static] :2659
JWrapper* JWrapper::New1(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType)
{
    JWrapper* obj1 = (JWrapper*)uNew(JWrapper_typeof());
    obj1->ctor_1(obj, typePtr, typeHasFallbackClass, resolveType);
    return obj1;
}

// public JWrapper New(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg) [static] :2662
JWrapper* JWrapper::New2(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg)
{
    JWrapper* obj2 = (JWrapper*)uNew(JWrapper_typeof());
    obj2->ctor_2(obj, typePtr, typeHasFallbackClass, resolveType, stackArg);
    return obj2;
}

// public static operator ==(Android.Base.Wrappers.JWrapper a, Android.Base.Wrappers.JWrapper b) [static] :2719
bool JWrapper::op_Equality(JWrapper* a, JWrapper* b)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "==(Android.Base.Wrappers.JWrapper,Android.Base.Wrappers.JWrapper)");

    if ((a == NULL) || (b == NULL))
        return b == a;
    else
        return ::g::Android::Base::JNI::IsSameObject(uPtr(a)->_GetJavaObject(), uPtr(b)->_GetJavaObject());
}

// public static operator !=(Android.Base.Wrappers.JWrapper a, Android.Base.Wrappers.JWrapper b) [static] :2729
bool JWrapper::op_Inequality(JWrapper* a, JWrapper* b)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "!=(Android.Base.Wrappers.JWrapper,Android.Base.Wrappers.JWrapper)");
    return !JWrapper::op_Equality(a, b);
}

// public static Android.Base.Wrappers.JWrapper Wrap(Android.Base.Primitives.ujobject obj, [bool resolveType], [bool typeHasFallbackClass]) [static] :2674
JWrapper* JWrapper::Wrap(jobject obj, bool resolveType, bool typeHasFallbackClass)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "Wrap(Android.Base.Primitives.ujobject,[bool],[bool])");
    return JWrapper::New1(obj, NULL, typeHasFallbackClass, resolveType);
}
// }

}}}} // ::g::Android::Base::Wrappers
