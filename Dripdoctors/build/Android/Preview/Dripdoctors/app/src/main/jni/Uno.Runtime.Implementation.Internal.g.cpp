// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.FormatException.h>
#include <Uno.Graphics.GraphicsContext.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.NotSupportedException.h>
#include <Uno.Object.h>
#include <Uno.Platform.EventModifiers.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.MouseButton.h>
#include <Uno.Platform.PointerEventArgs.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.TextInputEventArgs.h>
#include <Uno.Platform.WheelDeltaMode.h>
#include <Uno.Platform.Window.h>
#include <Uno.Runtime.Implementation.ClockImpl.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayList-1.h>
#include <Uno.Runtime.Implementation.Internal.BootstrapHints.h>
#include <Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.Internal.BufferReader.h>
#include <Uno.Runtime.Implementation.Internal.FormatSpecifier.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringItem.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringLiteral.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State.h>
#include <Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <Uno.Runtime.Implementation.Internal.WindowHelpers.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UShort.h>
static uString* STRINGS[14];
static uType* TYPES[23];

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public sealed class ArrayEnumerable<T> :68
// {
static void ArrayEnumerable_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[1] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)),
        ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(ArrayEnumerable_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable, _source), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("GetEnumerator", NULL, (void*)ArrayEnumerable__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction(".ctor", type, (void*)ArrayEnumerable__New1_fn, 0, true, type, 1, type->T(0)->Array()));
}

ArrayEnumerable_type* ArrayEnumerable_typeof()
{
    static uSStrong<ArrayEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ArrayEnumerable);
    options.TypeSize = sizeof(ArrayEnumerable_type);
    type = (ArrayEnumerable_type*)uClassType::New("Uno.Runtime.Implementation.Internal.ArrayEnumerable`1", options);
    type->fp_build_ = ArrayEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))ArrayEnumerable__GetEnumerator_fn;
    return type;
}

// public ArrayEnumerable(T[] source) :72
void ArrayEnumerable__ctor__fn(ArrayEnumerable* __this, uArray* source)
{
    __this->ctor_(source);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :77
void ArrayEnumerable__GetEnumerator_fn(ArrayEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public ArrayEnumerable New(T[] source) :72
void ArrayEnumerable__New1_fn(uType* __type, uArray* source, ArrayEnumerable** __retval)
{
    *__retval = ArrayEnumerable::New1(__type, source);
}

// public ArrayEnumerable(T[] source) [instance] :72
void ArrayEnumerable::ctor_(uArray* source)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayEnumerable`1", ".ctor(T[])");
    _source = source;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :77
uObject* ArrayEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Runtime.Implementation.Internal.ArrayEnumerator<T>*/),
    };
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayEnumerable`1", "GetEnumerator()");
    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator::New1(__types[2], _source));
}

// public ArrayEnumerable New(T[] source) [static] :72
ArrayEnumerable* ArrayEnumerable::New1(uType* __type, uArray* source)
{
    ArrayEnumerable* obj1 = (ArrayEnumerable*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public sealed class ArrayEnumerator<T> :26
// {
static void ArrayEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(ArrayEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ArrayEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(ArrayEnumerator_type, interface2));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator, _iterator), 0,
        type->T(0)->Array(), offsetof(::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator, _source), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Current", NULL, (void*)ArrayEnumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", NULL, (void*)ArrayEnumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", NULL, (void*)ArrayEnumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", type, (void*)ArrayEnumerator__New1_fn, 0, true, type, 1, type->T(0)->Array()));
}

ArrayEnumerator_type* ArrayEnumerator_typeof()
{
    static uSStrong<ArrayEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ArrayEnumerator);
    options.TypeSize = sizeof(ArrayEnumerator_type);
    type = (ArrayEnumerator_type*)uClassType::New("Uno.Runtime.Implementation.Internal.ArrayEnumerator`1", options);
    type->fp_build_ = ArrayEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))ArrayEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ArrayEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))ArrayEnumerator__MoveNext_fn;
    return type;
}

// public ArrayEnumerator(T[] source) :32
void ArrayEnumerator__ctor__fn(ArrayEnumerator* __this, uArray* source)
{
    __this->ctor_(source);
}

// public T get_Current() :40
void ArrayEnumerator__get_Current_fn(ArrayEnumerator* __this, uTRef __retval)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayEnumerator`1", "get_Current()");
    return __retval.Store(__this->_current()), void();
}

// public void Dispose() :43
void ArrayEnumerator__Dispose_fn(ArrayEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :54
void ArrayEnumerator__MoveNext_fn(ArrayEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public ArrayEnumerator New(T[] source) :32
void ArrayEnumerator__New1_fn(uType* __type, uArray* source, ArrayEnumerator** __retval)
{
    *__retval = ArrayEnumerator::New1(__type, source);
}

// public ArrayEnumerator(T[] source) [instance] :32
void ArrayEnumerator::ctor_(uArray* source)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayEnumerator`1", ".ctor(T[])");
    _source = source;
    _iterator = -1;
}

// public void Dispose() [instance] :43
void ArrayEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :54
bool ArrayEnumerator::MoveNext()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayEnumerator`1", "MoveNext()");
    _iterator++;

    if (_iterator < uPtr(_source)->Length())
    {
        _current() = uPtr(_source)->TItem(_iterator);
        return true;
    }

    return false;
}

// public ArrayEnumerator New(T[] source) [static] :32
ArrayEnumerator* ArrayEnumerator::New1(uType* __type, uArray* source)
{
    ArrayEnumerator* obj1 = (ArrayEnumerator*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public sealed class ArrayList<T> :83
// {
static void ArrayList_build(uType* type)
{
    ::TYPES[2] = uObject_typeof();
    ::TYPES[0] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[1] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)),
        ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0)), offsetof(ArrayList_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0)), offsetof(ArrayList_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(ArrayList_type, interface2));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Uno::Runtime::Implementation::Internal::ArrayList, _source), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("Add", NULL, (void*)ArrayList__Add_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Clear", NULL, (void*)ArrayList__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)ArrayList__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)ArrayList__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)ArrayList__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("Insert", NULL, (void*)ArrayList__Insert_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction("get_Item", NULL, (void*)ArrayList__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)ArrayList__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction(".ctor", type, (void*)ArrayList__New1_fn, 0, true, type, 1, type->T(0)->Array()),
        new uFunction("Remove", NULL, (void*)ArrayList__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("RemoveAt", NULL, (void*)ArrayList__RemoveAt_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
}

ArrayList_type* ArrayList_typeof()
{
    static uSStrong<ArrayList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ArrayList);
    options.TypeSize = sizeof(ArrayList_type);
    type = (ArrayList_type*)uClassType::New("Uno.Runtime.Implementation.Internal.ArrayList`1", options);
    type->fp_build_ = ArrayList_build;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))ArrayList__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))ArrayList__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))ArrayList__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))ArrayList__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))ArrayList__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))ArrayList__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))ArrayList__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))ArrayList__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ArrayList__GetEnumerator_fn;
    return type;
}

// public ArrayList(T[] source) :87
void ArrayList__ctor__fn(ArrayList* __this, uArray* source)
{
    __this->ctor_(source);
}

// public void Add(T item) :131
void ArrayList__Add_fn(ArrayList* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayList`1", "Add(T)");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public void Clear() :126
void ArrayList__Clear_fn(ArrayList* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :105
void ArrayList__Contains_fn(ArrayList* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayList`1", "Contains(T)");
    uT t(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uArray* array1;
    int index2;
    int length3;

    for (array1 = __this->_source, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        t = uPtr(array1)->TItem(index2);

        if (::g::Uno::Object::Equals(uBoxPtr(__types[0], uPtr(t), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], item)))
            return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public int get_Count() :97
void ArrayList__get_Count_fn(ArrayList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :92
void ArrayList__GetEnumerator_fn(ArrayList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public void Insert(int index, T item) :116
void ArrayList__Insert_fn(ArrayList* __this, int* index, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayList`1", "Insert(int,T)");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public T get_Item(int index) :101
void ArrayList__get_Item_fn(ArrayList* __this, int* index, uTRef __retval)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayList`1", "get_Item(int)");
    int index_ = *index;
    return __retval.Store(uPtr(__this->_source)->TItem(index_)), void();
}

// public void set_Item(int index, T value) :102
void ArrayList__set_Item_fn(ArrayList* __this, int* index, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayList`1", "set_Item(int,T)");
    int index_ = *index;
    uPtr(__this->_source)->TItem(index_) = value;
}

// public ArrayList New(T[] source) :87
void ArrayList__New1_fn(uType* __type, uArray* source, ArrayList** __retval)
{
    *__retval = ArrayList::New1(__type, source);
}

// public bool Remove(T item) :136
void ArrayList__Remove_fn(ArrayList* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayList`1", "Remove(T)");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public void RemoveAt(int index) :121
void ArrayList__RemoveAt_fn(ArrayList* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public ArrayList(T[] source) [instance] :87
void ArrayList::ctor_(uArray* source)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayList`1", ".ctor(T[])");
    _source = source;
}

// public void Clear() [instance] :126
void ArrayList::Clear()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayList`1", "Clear()");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public int get_Count() [instance] :97
int ArrayList::Count()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayList`1", "get_Count()");
    return uPtr(_source)->Length();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :92
uObject* ArrayList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Runtime.Implementation.Internal.ArrayEnumerator<T>*/),
    };
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayList`1", "GetEnumerator()");
    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator::New1(__types[2], _source));
}

// public void RemoveAt(int index) [instance] :121
void ArrayList::RemoveAt(int index)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.ArrayList`1", "RemoveAt(int)");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public ArrayList New(T[] source) [static] :87
ArrayList* ArrayList::New1(uType* __type, uArray* source)
{
    ArrayList* obj1 = (ArrayList*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public static class BootstrapHints :444
// {
static void BootstrapHints_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::Internal::BootstrapHints::_MaxFps_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("get_MaxFps", NULL, (void*)BootstrapHints__get_MaxFps_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_MaxFps", NULL, (void*)BootstrapHints__set_MaxFps_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
}

uClassType* BootstrapHints_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.BootstrapHints", options);
    type->fp_build_ = BootstrapHints_build;
    return type;
}

// public static generated int get_MaxFps() :454
void BootstrapHints__get_MaxFps_fn(int* __retval)
{
    *__retval = BootstrapHints::MaxFps();
}

// public static generated void set_MaxFps(int value) :455
void BootstrapHints__set_MaxFps_fn(int* value)
{
    BootstrapHints::MaxFps(*value);
}

int BootstrapHints::_MaxFps_;

// public static generated int get_MaxFps() [static] :454
int BootstrapHints::MaxFps()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BootstrapHints", "get_MaxFps()");
    return BootstrapHints::_MaxFps_;
}

// public static generated void set_MaxFps(int value) [static] :455
void BootstrapHints::MaxFps(int value)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BootstrapHints", "set_MaxFps(int)");
    BootstrapHints::_MaxFps_ = value;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public static class Bootstrapper :154
// {
// static Bootstrapper() :166
static void Bootstrapper__cctor__fn(uType* __type)
{
    Bootstrapper::_lastPrimaryFingerId_ = -1;
    double currentTime = ::g::Uno::Runtime::Implementation::ClockImpl::GetSeconds();
    Bootstrapper::_startTime_ = currentTime;
    Bootstrapper::_lastTime_ = currentTime;
}

static void Bootstrapper_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Platform::EventModifiers_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[5] = ::g::Uno::Platform::WheelDeltaMode_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::Internal::Bootstrapper::_fingerCount_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::Internal::Bootstrapper::_lastMouseX_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::Internal::Bootstrapper::_lastMouseY_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::Internal::Bootstrapper::_lastPrimaryFingerId_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::Internal::Bootstrapper::_lastTime_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::Internal::Bootstrapper::_startTime_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(15,
        new uFunction("OnDraw", NULL, (void*)Bootstrapper__OnDraw_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("OnKeyboardResized", NULL, (void*)Bootstrapper__OnKeyboardResized_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof()),
        new uFunction("OnKeyDown", NULL, (void*)Bootstrapper__OnKeyDown_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Platform::Key_typeof()),
        new uFunction("OnKeyUp", NULL, (void*)Bootstrapper__OnKeyUp_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Platform::Key_typeof()),
        new uFunction("OnMouseDown", NULL, (void*)Bootstrapper__OnMouseDown_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Platform::MouseButton_typeof()),
        new uFunction("OnMouseMove", NULL, (void*)Bootstrapper__OnMouseMove_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("OnMouseUp", NULL, (void*)Bootstrapper__OnMouseUp_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Platform::MouseButton_typeof()),
        new uFunction("OnMouseWheel", NULL, (void*)Bootstrapper__OnMouseWheel_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("OnTextInput", NULL, (void*)Bootstrapper__OnTextInput_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::String_typeof()),
        new uFunction("OnTouchDown", NULL, (void*)Bootstrapper__OnTouchDown_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("OnTouchMove", NULL, (void*)Bootstrapper__OnTouchMove_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("OnTouchUp", NULL, (void*)Bootstrapper__OnTouchUp_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("OnUpdate", NULL, (void*)Bootstrapper__OnUpdate_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("OnWindowClosed", NULL, (void*)Bootstrapper__OnWindowClosed_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof()),
        new uFunction("OnWindowSizeChanged", NULL, (void*)Bootstrapper__OnWindowSizeChanged_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof()));
}

uClassType* Bootstrapper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.Bootstrapper", options);
    type->fp_build_ = Bootstrapper_build;
    type->fp_cctor_ = Bootstrapper__cctor__fn;
    return type;
}

// private static Uno.Platform.EventModifiers GetEventModifiers(Uno.Runtime.Implementation.PlatformWindowHandle handle) :180
void Bootstrapper__GetEventModifiers_fn(::Xli::Window** handle, int* __retval)
{
    *__retval = Bootstrapper::GetEventModifiers(*handle);
}

// private static float2 GetPointerScale() :192
void Bootstrapper__GetPointerScale_fn(::g::Uno::Float2* __retval)
{
    *__retval = Bootstrapper::GetPointerScale();
}

// private static bool IsPrimaryFinger(Uno.Runtime.Implementation.PlatformWindowHandle handle, int fingerId) :175
void Bootstrapper__IsPrimaryFinger_fn(::Xli::Window** handle, int* fingerId, bool* __retval)
{
    *__retval = Bootstrapper::IsPrimaryFinger(*handle, *fingerId);
}

// public static void OnDraw() :226
void Bootstrapper__OnDraw_fn()
{
    Bootstrapper::OnDraw();
}

// public static bool OnKeyboardResized(Uno.Runtime.Implementation.PlatformWindowHandle handle) :249
void Bootstrapper__OnKeyboardResized_fn(::Xli::Window** handle, bool* __retval)
{
    *__retval = Bootstrapper::OnKeyboardResized(*handle);
}

// public static bool OnKeyDown(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.Key key) :237
void Bootstrapper__OnKeyDown_fn(::Xli::Window** handle, int* key, bool* __retval)
{
    *__retval = Bootstrapper::OnKeyDown(*handle, *key);
}

// public static bool OnKeyUp(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.Key key) :260
void Bootstrapper__OnKeyUp_fn(::Xli::Window** handle, int* key, bool* __retval)
{
    *__retval = Bootstrapper::OnKeyUp(*handle, *key);
}

// public static bool OnMouseDown(Uno.Runtime.Implementation.PlatformWindowHandle handle, int x, int y, Uno.Platform.MouseButton button) :284
void Bootstrapper__OnMouseDown_fn(::Xli::Window** handle, int* x, int* y, int* button, bool* __retval)
{
    *__retval = Bootstrapper::OnMouseDown(*handle, *x, *y, *button);
}

// public static bool OnMouseMove(Uno.Runtime.Implementation.PlatformWindowHandle handle, int x, int y) :310
void Bootstrapper__OnMouseMove_fn(::Xli::Window** handle, int* x, int* y, bool* __retval)
{
    *__retval = Bootstrapper::OnMouseMove(*handle, *x, *y);
}

// public static bool OnMouseUp(Uno.Runtime.Implementation.PlatformWindowHandle handle, int x, int y, Uno.Platform.MouseButton button) :297
void Bootstrapper__OnMouseUp_fn(::Xli::Window** handle, int* x, int* y, int* button, bool* __retval)
{
    *__retval = Bootstrapper::OnMouseUp(*handle, *x, *y, *button);
}

// public static bool OnMouseWheel(Uno.Runtime.Implementation.PlatformWindowHandle handle, float dHori, float dVert, int wheelDeltaMode) :342
void Bootstrapper__OnMouseWheel_fn(::Xli::Window** handle, float* dHori, float* dVert, int* wheelDeltaMode, bool* __retval)
{
    *__retval = Bootstrapper::OnMouseWheel(*handle, *dHori, *dVert, *wheelDeltaMode);
}

// public static bool OnTextInput(Uno.Runtime.Implementation.PlatformWindowHandle handle, string text) :272
void Bootstrapper__OnTextInput_fn(::Xli::Window** handle, uString* text, bool* __retval)
{
    *__retval = Bootstrapper::OnTextInput(*handle, text);
}

// public static bool OnTouchDown(Uno.Runtime.Implementation.PlatformWindowHandle handle, float x, float y, int id) :355
void Bootstrapper__OnTouchDown_fn(::Xli::Window** handle, float* x, float* y, int* id, bool* __retval)
{
    *__retval = Bootstrapper::OnTouchDown(*handle, *x, *y, *id);
}

// public static bool OnTouchMove(Uno.Runtime.Implementation.PlatformWindowHandle handle, float x, float y, int id) :373
void Bootstrapper__OnTouchMove_fn(::Xli::Window** handle, float* x, float* y, int* id, bool* __retval)
{
    *__retval = Bootstrapper::OnTouchMove(*handle, *x, *y, *id);
}

// public static bool OnTouchUp(Uno.Runtime.Implementation.PlatformWindowHandle handle, float x, float y, int id) :389
void Bootstrapper__OnTouchUp_fn(::Xli::Window** handle, float* x, float* y, int* id, bool* __retval)
{
    *__retval = Bootstrapper::OnTouchUp(*handle, *x, *y, *id);
}

// public static void OnUpdate() :211
void Bootstrapper__OnUpdate_fn()
{
    Bootstrapper::OnUpdate();
}

// public static void OnWindowClosed(Uno.Runtime.Implementation.PlatformWindowHandle handle) :429
void Bootstrapper__OnWindowClosed_fn(::Xli::Window** handle)
{
    Bootstrapper::OnWindowClosed(*handle);
}

// public static void OnWindowSizeChanged(Uno.Runtime.Implementation.PlatformWindowHandle handle) :407
void Bootstrapper__OnWindowSizeChanged_fn(::Xli::Window** handle)
{
    Bootstrapper::OnWindowSizeChanged(*handle);
}

int Bootstrapper::_fingerCount_;
int Bootstrapper::_lastMouseX_;
int Bootstrapper::_lastMouseY_;
int Bootstrapper::_lastPrimaryFingerId_;
double Bootstrapper::_lastTime_;
double Bootstrapper::_startTime_;

// private static Uno.Platform.EventModifiers GetEventModifiers(Uno.Runtime.Implementation.PlatformWindowHandle handle) [static] :180
int Bootstrapper::GetEventModifiers(::Xli::Window* handle)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "GetEventModifiers(Uno.Runtime.Implementation.PlatformWindowHandle)");
    Bootstrapper_typeof()->Init();
    return ((((((::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetKeyState(handle, 17) ? 2 : 0) | (::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetKeyState(handle, 16) ? 4 : 0)) | (::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetKeyState(handle, 18) ? 8 : 0)) | (::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetKeyState(handle, 203) ? 1 : 0)) | (::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetMouseButtonState(handle, 1) ? 16 : 0)) | (::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetMouseButtonState(handle, 2) ? 32 : 0)) | (::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetMouseButtonState(handle, 3) ? 64 : 0);
}

// private static float2 GetPointerScale() [static] :192
::g::Uno::Float2 Bootstrapper::GetPointerScale()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "GetPointerScale()");
    Bootstrapper_typeof()->Init();
    return ::g::Uno::Float2__New1(1.0f);
}

// private static bool IsPrimaryFinger(Uno.Runtime.Implementation.PlatformWindowHandle handle, int fingerId) [static] :175
bool Bootstrapper::IsPrimaryFinger(::Xli::Window* handle, int fingerId)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "IsPrimaryFinger(Uno.Runtime.Implementation.PlatformWindowHandle,int)");
    Bootstrapper_typeof()->Init();
    return (Bootstrapper::_lastPrimaryFingerId() == fingerId) && true;
}

// public static void OnDraw() [static] :226
void Bootstrapper::OnDraw()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnDraw()");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();
    ::g::Uno::Graphics::GraphicsContext* gc = uPtr(app)->GraphicsContext();
    uPtr(gc)->SetRenderTarget(uPtr(gc)->Backbuffer());
    gc->Clear(app->ClearColor(), app->ClearDepth());
    app->Draw();
}

// public static bool OnKeyboardResized(Uno.Runtime.Implementation.PlatformWindowHandle handle) [static] :249
bool Bootstrapper::OnKeyboardResized(::Xli::Window* handle)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnKeyboardResized(Uno.Runtime.Implementation.PlatformWindowHandle)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();

    if (app == NULL)
        return false;

    uPtr(uPtr(app)->Window())->OnKeyboardResized();
    return true;
}

// public static bool OnKeyDown(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.Key key) [static] :237
bool Bootstrapper::OnKeyDown(::Xli::Window* handle, int key)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnKeyDown(Uno.Runtime.Implementation.PlatformWindowHandle,Uno.Platform.Key)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();

    if (app == NULL)
        return false;

    ::g::Uno::Platform::KeyEventArgs* args = ::g::Uno::Platform::KeyEventArgs::New2(key, Bootstrapper::GetEventModifiers(handle));
    uPtr(uPtr(app)->Window())->OnKeyPressed(args);
    return args->Handled();
}

// public static bool OnKeyUp(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.Key key) [static] :260
bool Bootstrapper::OnKeyUp(::Xli::Window* handle, int key)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnKeyUp(Uno.Runtime.Implementation.PlatformWindowHandle,Uno.Platform.Key)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();

    if (app == NULL)
        return false;

    ::g::Uno::Platform::KeyEventArgs* args = ::g::Uno::Platform::KeyEventArgs::New2(key, Bootstrapper::GetEventModifiers(handle));
    uPtr(uPtr(app)->Window())->OnKeyReleased(args);
    return args->Handled();
}

// public static bool OnMouseDown(Uno.Runtime.Implementation.PlatformWindowHandle handle, int x, int y, Uno.Platform.MouseButton button) [static] :284
bool Bootstrapper::OnMouseDown(::Xli::Window* handle, int x, int y, int button)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnMouseDown(Uno.Runtime.Implementation.PlatformWindowHandle,int,int,Uno.Platform.MouseButton)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();

    if (app == NULL)
        return false;

    ::g::Uno::Platform::PointerEventArgs* args = ::g::Uno::Platform::PointerEventArgs::New2(1, Bootstrapper::GetEventModifiers(handle), button == 1, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New2((float)x, (float)y), Bootstrapper::GetPointerScale()), 0, button, ::g::Uno::Float2__New2(0.0f, 0.0f), 0);
    uPtr(uPtr(app)->Window())->OnPointerPressed(args);
    return args->Handled();
}

// public static bool OnMouseMove(Uno.Runtime.Implementation.PlatformWindowHandle handle, int x, int y) [static] :310
bool Bootstrapper::OnMouseMove(::Xli::Window* handle, int x, int y)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnMouseMove(Uno.Runtime.Implementation.PlatformWindowHandle,int,int)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();

    if (app == NULL)
        return false;

    int modifiers = Bootstrapper::GetEventModifiers(handle);
    ::g::Uno::Platform::PointerEventArgs* args = ::g::Uno::Platform::PointerEventArgs::New2(1, modifiers, (modifiers & 16) == 16, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New2((float)x, (float)y), Bootstrapper::GetPointerScale()), 0, 0, ::g::Uno::Float2__New2(0.0f, 0.0f), 0);
    uPtr(uPtr(app)->Window())->OnPointerMoved(args);
    Bootstrapper::_lastMouseX() = x;
    Bootstrapper::_lastMouseY() = y;
    return args->Handled();
}

// public static bool OnMouseUp(Uno.Runtime.Implementation.PlatformWindowHandle handle, int x, int y, Uno.Platform.MouseButton button) [static] :297
bool Bootstrapper::OnMouseUp(::Xli::Window* handle, int x, int y, int button)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnMouseUp(Uno.Runtime.Implementation.PlatformWindowHandle,int,int,Uno.Platform.MouseButton)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();

    if (app == NULL)
        return false;

    ::g::Uno::Platform::PointerEventArgs* args = ::g::Uno::Platform::PointerEventArgs::New2(1, Bootstrapper::GetEventModifiers(handle), button == 1, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New2((float)x, (float)y), Bootstrapper::GetPointerScale()), 0, button, ::g::Uno::Float2__New2(0.0f, 0.0f), 0);
    uPtr(uPtr(app)->Window())->OnPointerReleased(args);
    return args->Handled();
}

// public static bool OnMouseWheel(Uno.Runtime.Implementation.PlatformWindowHandle handle, float dHori, float dVert, int wheelDeltaMode) [static] :342
bool Bootstrapper::OnMouseWheel(::Xli::Window* handle, float dHori, float dVert, int wheelDeltaMode)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnMouseWheel(Uno.Runtime.Implementation.PlatformWindowHandle,float,float,int)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();

    if (app == NULL)
        return false;

    ::g::Uno::Platform::PointerEventArgs* args = ::g::Uno::Platform::PointerEventArgs::New2(1, Bootstrapper::GetEventModifiers(handle), false, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New2((float)Bootstrapper::_lastMouseX(), (float)Bootstrapper::_lastMouseY()), Bootstrapper::GetPointerScale()), 0, 0, ::g::Uno::Float2__New2(dHori, dVert), wheelDeltaMode);
    uPtr(uPtr(app)->Window())->OnPointerWheelChanged(args);
    return args->Handled();
}

// public static bool OnTextInput(Uno.Runtime.Implementation.PlatformWindowHandle handle, string text) [static] :272
bool Bootstrapper::OnTextInput(::Xli::Window* handle, uString* text)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnTextInput(Uno.Runtime.Implementation.PlatformWindowHandle,string)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();

    if (app == NULL)
        return false;

    ::g::Uno::Platform::TextInputEventArgs* args = ::g::Uno::Platform::TextInputEventArgs::New2(text, Bootstrapper::GetEventModifiers(handle));
    uPtr(uPtr(app)->Window())->OnTextInput(args);
    return args->Handled();
}

// public static bool OnTouchDown(Uno.Runtime.Implementation.PlatformWindowHandle handle, float x, float y, int id) [static] :355
bool Bootstrapper::OnTouchDown(::Xli::Window* handle, float x, float y, int id)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnTouchDown(Uno.Runtime.Implementation.PlatformWindowHandle,float,float,int)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();
    Bootstrapper::_fingerCount()++;

    if (Bootstrapper::_fingerCount() == 1)
        Bootstrapper::_lastPrimaryFingerId() = id;

    if (app == NULL)
        return false;

    ::g::Uno::Platform::PointerEventArgs* args = ::g::Uno::Platform::PointerEventArgs::New2(2, Bootstrapper::GetEventModifiers(handle), Bootstrapper::IsPrimaryFinger(handle, id), ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New2(x, y), Bootstrapper::GetPointerScale()), id, 0, ::g::Uno::Float2__New2(0.0f, 0.0f), 0);
    uPtr(uPtr(app)->Window())->OnPointerPressed(args);
    return args->Handled();
}

// public static bool OnTouchMove(Uno.Runtime.Implementation.PlatformWindowHandle handle, float x, float y, int id) [static] :373
bool Bootstrapper::OnTouchMove(::Xli::Window* handle, float x, float y, int id)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnTouchMove(Uno.Runtime.Implementation.PlatformWindowHandle,float,float,int)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();

    if (Bootstrapper::_fingerCount() == 1)
        Bootstrapper::_lastPrimaryFingerId() = id;

    if (app == NULL)
        return false;

    ::g::Uno::Platform::PointerEventArgs* args = ::g::Uno::Platform::PointerEventArgs::New2(2, Bootstrapper::GetEventModifiers(handle), Bootstrapper::IsPrimaryFinger(handle, id), ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New2(x, y), Bootstrapper::GetPointerScale()), id, 0, ::g::Uno::Float2__New2(0.0f, 0.0f), 0);
    uPtr(uPtr(app)->Window())->OnPointerMoved(args);
    return args->Handled();
}

// public static bool OnTouchUp(Uno.Runtime.Implementation.PlatformWindowHandle handle, float x, float y, int id) [static] :389
bool Bootstrapper::OnTouchUp(::Xli::Window* handle, float x, float y, int id)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnTouchUp(Uno.Runtime.Implementation.PlatformWindowHandle,float,float,int)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();
    Bootstrapper::_fingerCount()--;

    if (Bootstrapper::_lastPrimaryFingerId() == id)
        Bootstrapper::_lastPrimaryFingerId() = -1;

    if (app == NULL)
        return false;

    ::g::Uno::Platform::PointerEventArgs* args = ::g::Uno::Platform::PointerEventArgs::New2(2, Bootstrapper::GetEventModifiers(handle), Bootstrapper::IsPrimaryFinger(handle, id), ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New2(x, y), Bootstrapper::GetPointerScale()), id, 0, ::g::Uno::Float2__New2(0.0f, 0.0f), 0);
    uPtr(uPtr(app)->Window())->OnPointerReleased(args);
    return args->Handled();
}

// public static void OnUpdate() [static] :211
void Bootstrapper::OnUpdate()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnUpdate()");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();
    uPtr(uPtr(app)->Window())->OnUpdating(::g::Uno::EventArgs::Empty());
    app->Update();
}

// public static void OnWindowClosed(Uno.Runtime.Implementation.PlatformWindowHandle handle) [static] :429
void Bootstrapper::OnWindowClosed(::Xli::Window* handle)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnWindowClosed(Uno.Runtime.Implementation.PlatformWindowHandle)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();

    if (app != NULL)
        uPtr(uPtr(app)->Window())->OnClosed(::g::Uno::EventArgs::Empty());
}

// public static void OnWindowSizeChanged(Uno.Runtime.Implementation.PlatformWindowHandle handle) [static] :407
void Bootstrapper::OnWindowSizeChanged(::Xli::Window* handle)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.Bootstrapper", "OnWindowSizeChanged(Uno.Runtime.Implementation.PlatformWindowHandle)");
    Bootstrapper_typeof()->Init();
    ::g::Uno::Application* app = ::g::Uno::Application::Current();

    if (app != NULL)
    {
        uPtr(uPtr(app)->GraphicsContext())->UpdateBackbuffer();
        uPtr(app->Window())->OnResized(::g::Uno::EventArgs::Empty());
    }
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public static class BufferConverters :465
// {
static void BufferConverters_build(uType* type)
{
    type->Reflection.SetFunctions(5,
        new uFunction("ToBuffer", NULL, (void*)BufferConverters__ToBuffer3_fn, 0, true, ::g::Uno::Buffer_typeof(), 1, ::g::Uno::Float2_typeof()->Array()),
        new uFunction("ToBuffer", NULL, (void*)BufferConverters__ToBuffer4_fn, 0, true, ::g::Uno::Buffer_typeof(), 1, ::g::Uno::Float3_typeof()->Array()),
        new uFunction("ToBuffer", NULL, (void*)BufferConverters__ToBuffer5_fn, 0, true, ::g::Uno::Buffer_typeof(), 1, ::g::Uno::Float4_typeof()->Array()),
        new uFunction("ToBuffer", NULL, (void*)BufferConverters__ToBuffer8_fn, 0, true, ::g::Uno::Buffer_typeof(), 1, ::g::Uno::UInt_typeof()->Array()),
        new uFunction("ToBuffer", NULL, (void*)BufferConverters__ToBuffer9_fn, 0, true, ::g::Uno::Buffer_typeof(), 1, ::g::Uno::UShort_typeof()->Array()));
}

uClassType* BufferConverters_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.BufferConverters", options);
    type->fp_build_ = BufferConverters_build;
    return type;
}

// public static Uno.Buffer ToBuffer(float2[] data) :477
void BufferConverters__ToBuffer3_fn(uArray* data, ::g::Uno::Buffer** __retval)
{
    *__retval = BufferConverters::ToBuffer3(data);
}

// public static Uno.Buffer ToBuffer(float3[] data) :487
void BufferConverters__ToBuffer4_fn(uArray* data, ::g::Uno::Buffer** __retval)
{
    *__retval = BufferConverters::ToBuffer4(data);
}

// public static Uno.Buffer ToBuffer(float4[] data) :497
void BufferConverters__ToBuffer5_fn(uArray* data, ::g::Uno::Buffer** __retval)
{
    *__retval = BufferConverters::ToBuffer5(data);
}

// public static Uno.Buffer ToBuffer(uint[] data) :537
void BufferConverters__ToBuffer8_fn(uArray* data, ::g::Uno::Buffer** __retval)
{
    *__retval = BufferConverters::ToBuffer8(data);
}

// public static Uno.Buffer ToBuffer(ushort[] data) :527
void BufferConverters__ToBuffer9_fn(uArray* data, ::g::Uno::Buffer** __retval)
{
    *__retval = BufferConverters::ToBuffer9(data);
}

// public static Uno.Buffer ToBuffer(float2[] data) [static] :477
::g::Uno::Buffer* BufferConverters::ToBuffer3(uArray* data)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferConverters", "ToBuffer(float2[])");
    ::g::Uno::Buffer* result = ::g::Uno::Buffer::New4(uPtr(data)->Length() * 8);

    for (int i = 0; i < data->Length(); i++)
        uPtr(result)->Set5(i * 8, uPtr(data)->Item< ::g::Uno::Float2>(i), true);

    return result;
}

// public static Uno.Buffer ToBuffer(float3[] data) [static] :487
::g::Uno::Buffer* BufferConverters::ToBuffer4(uArray* data)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferConverters", "ToBuffer(float3[])");
    ::g::Uno::Buffer* result = ::g::Uno::Buffer::New4(uPtr(data)->Length() * 12);

    for (int i = 0; i < data->Length(); i++)
        uPtr(result)->Set6(i * 12, uPtr(data)->Item< ::g::Uno::Float3>(i), true);

    return result;
}

// public static Uno.Buffer ToBuffer(float4[] data) [static] :497
::g::Uno::Buffer* BufferConverters::ToBuffer5(uArray* data)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferConverters", "ToBuffer(float4[])");
    ::g::Uno::Buffer* result = ::g::Uno::Buffer::New4(uPtr(data)->Length() * 16);

    for (int i = 0; i < data->Length(); i++)
        uPtr(result)->Set8(i * 16, uPtr(data)->Item< ::g::Uno::Float4>(i), true);

    return result;
}

// public static Uno.Buffer ToBuffer(uint[] data) [static] :537
::g::Uno::Buffer* BufferConverters::ToBuffer8(uArray* data)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferConverters", "ToBuffer(uint[])");
    ::g::Uno::Buffer* result = ::g::Uno::Buffer::New4(uPtr(data)->Length() * 4);

    for (int i = 0; i < data->Length(); i++)
        uPtr(result)->Set21(i * 4, uPtr(data)->Item<uint32_t>(i), true);

    return result;
}

// public static Uno.Buffer ToBuffer(ushort[] data) [static] :527
::g::Uno::Buffer* BufferConverters::ToBuffer9(uArray* data)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferConverters", "ToBuffer(ushort[])");
    ::g::Uno::Buffer* result = ::g::Uno::Buffer::New4(uPtr(data)->Length() * 2);

    for (int i = 0; i < data->Length(); i++)
        uPtr(result)->Set23(i * 2, uPtr(data)->Item<uint16_t>(i), true);

    return result;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public sealed class BufferReader :574
// {
static void BufferReader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Invalid 7 bit encoded int");
    ::TYPES[6] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Uno::Runtime::Implementation::Internal::BufferReader, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Runtime::Implementation::Internal::BufferReader, _position), 0);
    type->Reflection.SetFunctions(8,
        new uFunction(".ctor", NULL, (void*)BufferReader__New1_fn, 0, true, BufferReader_typeof(), 1, ::g::Uno::Buffer_typeof()),
        new uFunction("ReadByte", NULL, (void*)BufferReader__ReadByte_fn, 0, false, ::g::Uno::Byte_typeof(), 0),
        new uFunction("ReadBytes", NULL, (void*)BufferReader__ReadBytes_fn, 0, false, ::g::Uno::Byte_typeof()->Array(), 1, ::g::Uno::Int_typeof()),
        new uFunction("ReadCompressedInt", NULL, (void*)BufferReader__ReadCompressedInt_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("ReadFloat", NULL, (void*)BufferReader__ReadFloat_fn, 0, false, ::g::Uno::Float_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("ReadFloat2", NULL, (void*)BufferReader__ReadFloat2_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("ReadString", NULL, (void*)BufferReader__ReadString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("ReadUInt", NULL, (void*)BufferReader__ReadUInt_fn, 0, false, ::g::Uno::UInt_typeof(), 1, ::g::Uno::Bool_typeof()));
}

uType* BufferReader_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(BufferReader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.BufferReader", options);
    type->fp_build_ = BufferReader_build;
    return type;
}

// public BufferReader(Uno.Buffer buffer) :579
void BufferReader__ctor__fn(BufferReader* __this, ::g::Uno::Buffer* buffer)
{
    __this->ctor_(buffer);
}

// public BufferReader New(Uno.Buffer buffer) :579
void BufferReader__New1_fn(::g::Uno::Buffer* buffer, BufferReader** __retval)
{
    *__retval = BufferReader::New1(buffer);
}

// public byte ReadByte() :595
void BufferReader__ReadByte_fn(BufferReader* __this, uint8_t* __retval)
{
    *__retval = __this->ReadByte();
}

// public byte[] ReadBytes(int count) :739
void BufferReader__ReadBytes_fn(BufferReader* __this, int* count, uArray** __retval)
{
    *__retval = __this->ReadBytes(*count);
}

// public int ReadCompressedInt() :749
void BufferReader__ReadCompressedInt_fn(BufferReader* __this, int* __retval)
{
    *__retval = __this->ReadCompressedInt();
}

// public float ReadFloat([bool littleEndian]) :619
void BufferReader__ReadFloat_fn(BufferReader* __this, bool* littleEndian, float* __retval)
{
    *__retval = __this->ReadFloat(*littleEndian);
}

// public float2 ReadFloat2([bool littleEndian]) :625
void BufferReader__ReadFloat2_fn(BufferReader* __this, bool* littleEndian, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ReadFloat2(*littleEndian);
}

// public string ReadString() :767
void BufferReader__ReadString_fn(BufferReader* __this, uString** __retval)
{
    *__retval = __this->ReadString();
}

// public uint ReadUInt([bool littleEndian]) :715
void BufferReader__ReadUInt_fn(BufferReader* __this, bool* littleEndian, uint32_t* __retval)
{
    *__retval = __this->ReadUInt(*littleEndian);
}

// public BufferReader(Uno.Buffer buffer) [instance] :579
void BufferReader::ctor_(::g::Uno::Buffer* buffer)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferReader", ".ctor(Uno.Buffer)");
    _buffer = buffer;
}

// public byte ReadByte() [instance] :595
uint8_t BufferReader::ReadByte()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferReader", "ReadByte()");
    _position = (_position + 1);
    return uPtr(_buffer)->GetByte(_position - 1);
}

// public byte[] ReadBytes(int count) [instance] :739
uArray* BufferReader::ReadBytes(int count)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferReader", "ReadBytes(int)");
    uArray* result = uArray::New(::TYPES[6/*byte[]*/], count);

    for (int i = 0; i < count; i++)
        uPtr(result)->Item<uint8_t>(i) = ReadByte();

    return result;
}

// public int ReadCompressedInt() [instance] :749
int BufferReader::ReadCompressedInt()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferReader", "ReadCompressedInt()");
    int count = 0;
    int shift = 0;

    while (shift != 35)
    {
        uint8_t b = ReadByte();
        count = count | ((int)(b & 127) << shift);
        shift = shift + 7;

        if ((b & 128) == 0)
            return count;
    }

    U_THROW(::g::Uno::FormatException::New4(::STRINGS[0/*"Invalid 7 b...*/]));
}

// public float ReadFloat([bool littleEndian]) [instance] :619
float BufferReader::ReadFloat(bool littleEndian)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferReader", "ReadFloat([bool])");
    _position = (_position + 4);
    return uPtr(_buffer)->GetFloat(_position - 4, littleEndian);
}

// public float2 ReadFloat2([bool littleEndian]) [instance] :625
::g::Uno::Float2 BufferReader::ReadFloat2(bool littleEndian)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferReader", "ReadFloat2([bool])");
    _position = (_position + 8);
    return uPtr(_buffer)->GetFloat2(_position - 8, littleEndian);
}

// public string ReadString() [instance] :767
uString* BufferReader::ReadString()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferReader", "ReadString()");
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8(ReadBytes(ReadCompressedInt()));
}

// public uint ReadUInt([bool littleEndian]) [instance] :715
uint32_t BufferReader::ReadUInt(bool littleEndian)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.BufferReader", "ReadUInt([bool])");
    _position = (_position + 4);
    return uPtr(_buffer)->GetUInt(_position - 4, littleEndian);
}

// public BufferReader New(Uno.Buffer buffer) [static] :579
BufferReader* BufferReader::New1(::g::Uno::Buffer* buffer)
{
    BufferReader* obj1 = (BufferReader*)uNew(BufferReader_typeof());
    obj1->ctor_(buffer);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// internal enum FormatSpecifier :1144
uEnumType* FormatSpecifier_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Runtime.Implementation.Internal.FormatSpecifier", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Decimal", 0LL,
        "FixedPoint", 1LL,
        "Hexadecimal", 2LL,
        "Exponential", 3LL,
        "General", 4LL,
        "Percent", 5LL,
        "Number", 6LL,
        "Custom", 7LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public sealed class FormatStringItem :896
// {
static void FormatStringItem_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Index (zero based) must be greater than or equal to zero and less than the size of the argument list.");
    ::STRINGS[2] = uString::Const("Format specifier was invalid");
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = ::g::Uno::Char_typeof();
    ::TYPES[9] = ::g::Uno::SByte_typeof();
    ::TYPES[10] = ::g::Uno::Byte_typeof();
    ::TYPES[11] = ::g::Uno::Short_typeof();
    ::TYPES[12] = ::g::Uno::UShort_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[13] = ::g::Uno::UInt_typeof();
    ::TYPES[14] = ::g::Uno::Long_typeof();
    ::TYPES[15] = ::g::Uno::ULong_typeof();
    ::TYPES[16] = ::g::Uno::Float_typeof();
    ::TYPES[17] = ::g::Uno::Double_typeof();
    type->SetFields(1);
    type->Reflection.SetFunctions(3,
        new uFunction("get_FormatString", NULL, (void*)FormatStringItem__get_FormatString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)FormatStringItem__New1_fn, 0, true, FormatStringItem_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Number", NULL, (void*)FormatStringItem__get_Number_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringItem_typeof()
{
    static uSStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FormatStringItem);
    options.TypeSize = sizeof(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type);
    type = (::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*)uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringItem", options);
    type->SetBase(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof());
    type->fp_build_ = FormatStringItem_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))FormatStringItem__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))FormatStringItem__GetHashCode_fn;
    type->fp_ToString1 = (void(*)(::g::Uno::Runtime::Implementation::Internal::FormatStringToken*, uArray*, uString**))FormatStringItem__ToString1_fn;
    return type;
}

// public FormatStringItem(string lexeme) :898
void FormatStringItem__ctor_1_fn(FormatStringItem* __this, uString* lexeme)
{
    __this->ctor_1(lexeme);
}

// public override sealed bool Equals(object obj) :929
void FormatStringItem__Equals_fn(FormatStringItem* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringItem", "Equals(object)");

    if (obj == NULL)
        return *__retval = false, void();

    FormatStringItem* token = uAs<FormatStringItem*>(obj, FormatStringItem_typeof());

    if (token == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::String::op_Equality(__this->Lexeme(), uPtr(token)->Lexeme()), void();
}

// public string get_FormatString() :917
void FormatStringItem__get_FormatString_fn(FormatStringItem* __this, uString** __retval)
{
    *__retval = __this->FormatString();
}

// public override sealed int GetHashCode() :941
void FormatStringItem__GetHashCode_fn(FormatStringItem* __this, int* __retval)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringItem", "GetHashCode()");
    return *__retval = uPtr(__this->Lexeme())->GetHashCode(), void();
}

// public FormatStringItem New(string lexeme) :898
void FormatStringItem__New1_fn(uString* lexeme, FormatStringItem** __retval)
{
    *__retval = FormatStringItem::New1(lexeme);
}

// public int get_Number() :904
void FormatStringItem__get_Number_fn(FormatStringItem* __this, int* __retval)
{
    *__retval = __this->Number();
}

// public override sealed string ToString(object[] objs) :946
void FormatStringItem__ToString1_fn(FormatStringItem* __this, uArray* objs, uString** __retval)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringItem", "ToString(object[])");

    if ((__this->Number() < 0) || (__this->Number() > (uPtr(objs)->Length() - 1)))
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Index (zero...*/]));

    uObject* o = uPtr(objs)->Strong<uObject*>(__this->Number());
    uString* formatString = __this->FormatString();

    if (::g::Uno::String::IsNullOrEmpty(formatString))
        return *__retval = ::g::Uno::Object::ToString(uPtr(o)), void();
    else
    {
        if (uIs(o, ::TYPES[7/*bool*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format(formatString, uUnbox<bool>(::TYPES[7/*bool*/], o)), void();

        if (uIs(o, ::TYPES[8/*char*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format3(formatString, (int)uUnbox<uChar>(::TYPES[8/*char*/], o)), void();

        if (uIs(o, ::TYPES[9/*sbyte*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format5(formatString, uUnbox<int8_t>(::TYPES[9/*sbyte*/], o)), void();

        if (uIs(o, ::TYPES[10/*byte*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format6(formatString, (int16_t)uUnbox<uint8_t>(::TYPES[10/*byte*/], o)), void();

        if (uIs(o, ::TYPES[11/*short*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format6(formatString, uUnbox<int16_t>(::TYPES[11/*short*/], o)), void();

        if (uIs(o, ::TYPES[12/*ushort*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format3(formatString, (int)uUnbox<uint16_t>(::TYPES[12/*ushort*/], o)), void();

        if (uIs(o, ::TYPES[4/*int*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format3(formatString, uUnbox<int>(::TYPES[4/*int*/], o)), void();

        if (uIs(o, ::TYPES[13/*uint*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format4(formatString, (int64_t)uUnbox<uint32_t>(::TYPES[13/*uint*/], o)), void();

        if (uIs(o, ::TYPES[14/*long*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format4(formatString, uUnbox<int64_t>(::TYPES[14/*long*/], o)), void();

        if (uIs(o, ::TYPES[15/*ulong*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format7(formatString, uUnbox<uint64_t>(::TYPES[15/*ulong*/], o)), void();

        if (uIs(o, ::TYPES[16/*float*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format2(formatString, uUnbox<float>(::TYPES[16/*float*/], o)), void();

        if (uIs(o, ::TYPES[17/*double*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format1(formatString, uUnbox<double>(::TYPES[17/*double*/], o)), void();
    }

    return *__retval = ::g::Uno::Object::ToString(uPtr(o)), void();
}

// public FormatStringItem(string lexeme) [instance] :898
void FormatStringItem::ctor_1(uString* lexeme)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringItem", ".ctor(string)");
    ctor_(lexeme);
}

// public string get_FormatString() [instance] :917
uString* FormatStringItem::FormatString()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringItem", "get_FormatString()");
    int colon = ::g::Uno::String::IndexOf(uPtr(Lexeme()), ':', 0);

    if (colon == -1)
        return NULL;

    int end = ::g::Uno::String::IndexOf(uPtr(Lexeme()), '}', 0);

    if (end == -1)
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[2/*"Format spec...*/]));

    return ::g::Uno::String::Substring1(uPtr(Lexeme()), colon + 1, (end - colon) - 1);
}

// public int get_Number() [instance] :904
int FormatStringItem::Number()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringItem", "get_Number()");
    int index = ::g::Uno::String::IndexOf(uPtr(Lexeme()), ',', 0);

    if (index == -1)
        index = ::g::Uno::String::IndexOf(uPtr(Lexeme()), ':', 0);

    if (index == -1)
        index = ::g::Uno::String::IndexOf(uPtr(Lexeme()), '}', 0);

    return ::g::Uno::Int::Parse(::g::Uno::String::Substring1(uPtr(Lexeme()), 1, index - 1));
}

// public FormatStringItem New(string lexeme) [static] :898
FormatStringItem* FormatStringItem::New1(uString* lexeme)
{
    FormatStringItem* obj1 = (FormatStringItem*)uNew(FormatStringItem_typeof());
    obj1->ctor_1(lexeme);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public sealed class FormatStringLiteral :981
// {
static void FormatStringLiteral_build(uType* type)
{
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FormatStringLiteral__New1_fn, 0, true, FormatStringLiteral_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringLiteral_typeof()
{
    static uSStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FormatStringLiteral);
    options.TypeSize = sizeof(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type);
    type = (::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*)uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringLiteral", options);
    type->SetBase(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof());
    type->fp_build_ = FormatStringLiteral_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))FormatStringLiteral__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))FormatStringLiteral__GetHashCode_fn;
    type->fp_ToString1 = (void(*)(::g::Uno::Runtime::Implementation::Internal::FormatStringToken*, uArray*, uString**))FormatStringLiteral__ToString1_fn;
    return type;
}

// public FormatStringLiteral(string lexeme) :983
void FormatStringLiteral__ctor_1_fn(FormatStringLiteral* __this, uString* lexeme)
{
    __this->ctor_1(lexeme);
}

// public override sealed bool Equals(object obj) :985
void FormatStringLiteral__Equals_fn(FormatStringLiteral* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringLiteral", "Equals(object)");

    if (obj == NULL)
        return *__retval = false, void();

    FormatStringLiteral* token = uAs<FormatStringLiteral*>(obj, FormatStringLiteral_typeof());

    if (token == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::String::op_Equality(__this->Lexeme(), uPtr(token)->Lexeme()), void();
}

// public override sealed int GetHashCode() :997
void FormatStringLiteral__GetHashCode_fn(FormatStringLiteral* __this, int* __retval)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringLiteral", "GetHashCode()");
    return *__retval = uPtr(__this->Lexeme())->GetHashCode(), void();
}

// public FormatStringLiteral New(string lexeme) :983
void FormatStringLiteral__New1_fn(uString* lexeme, FormatStringLiteral** __retval)
{
    *__retval = FormatStringLiteral::New1(lexeme);
}

// public override sealed string ToString(object[] objs) :1002
void FormatStringLiteral__ToString1_fn(FormatStringLiteral* __this, uArray* objs, uString** __retval)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringLiteral", "ToString(object[])");
    return *__retval = __this->Lexeme(), void();
}

// public FormatStringLiteral(string lexeme) [instance] :983
void FormatStringLiteral::ctor_1(uString* lexeme)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringLiteral", ".ctor(string)");
    ctor_(lexeme);
}

// public FormatStringLiteral New(string lexeme) [static] :983
FormatStringLiteral* FormatStringLiteral::New1(uString* lexeme)
{
    FormatStringLiteral* obj1 = (FormatStringLiteral*)uNew(FormatStringLiteral_typeof());
    obj1->ctor_1(lexeme);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public abstract class FormatStringToken :1014
// {
static void FormatStringToken_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Runtime::Implementation::Internal::FormatStringToken, _Lexeme), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Lexeme", NULL, (void*)FormatStringToken__get_Lexeme_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("ToString", NULL, NULL, offsetof(FormatStringToken_type, fp_ToString1), false, ::g::Uno::String_typeof(), 1, uObject_typeof()->Array()));
}

FormatStringToken_type* FormatStringToken_typeof()
{
    static uSStrong<FormatStringToken_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FormatStringToken);
    options.TypeSize = sizeof(FormatStringToken_type);
    type = (FormatStringToken_type*)uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringToken", options);
    type->fp_build_ = FormatStringToken_build;
    return type;
}

// protected FormatStringToken(string lexeme) :1018
void FormatStringToken__ctor__fn(FormatStringToken* __this, uString* lexeme)
{
    __this->ctor_(lexeme);
}

// public generated string get_Lexeme() :1016
void FormatStringToken__get_Lexeme_fn(FormatStringToken* __this, uString** __retval)
{
    *__retval = __this->Lexeme();
}

// private generated void set_Lexeme(string value) :1016
void FormatStringToken__set_Lexeme_fn(FormatStringToken* __this, uString* value)
{
    __this->Lexeme(value);
}

// protected FormatStringToken(string lexeme) [instance] :1018
void FormatStringToken::ctor_(uString* lexeme)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringToken", ".ctor(string)");
    Lexeme(lexeme);
}

// public generated string get_Lexeme() [instance] :1016
uString* FormatStringToken::Lexeme()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringToken", "get_Lexeme()");
    return _Lexeme;
}

// private generated void set_Lexeme(string value) [instance] :1016
void FormatStringToken::Lexeme(uString* value)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringToken", "set_Lexeme(string)");
    _Lexeme = value;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public sealed class FormatStringTokenizer :1033
// {
static void FormatStringTokenizer_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Input string was not in a correct format");
    ::TYPES[18] = ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof();
    ::TYPES[19] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer, _format), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer, _index), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer, _prevIndex), 0,
        FormatStringTokenizer__State_typeof(), offsetof(::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer, _state), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof()), offsetof(::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer, _tokens), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)FormatStringTokenizer__New1_fn, 0, true, FormatStringTokenizer_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("TokenizeFormatString", NULL, (void*)FormatStringTokenizer__TokenizeFormatString_fn, 0, true, ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof()), 1, ::g::Uno::String_typeof()));
}

uType* FormatStringTokenizer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FormatStringTokenizer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringTokenizer", options);
    type->fp_build_ = FormatStringTokenizer_build;
    return type;
}

// public FormatStringTokenizer(string format) :1042
void FormatStringTokenizer__ctor__fn(FormatStringTokenizer* __this, uString* format)
{
    __this->ctor_(format);
}

// private void AddFormatItemAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) :1104
void FormatStringTokenizer__AddFormatItemAndGoTo_fn(FormatStringTokenizer* __this, int* state)
{
    __this->AddFormatItemAndGoTo(*state);
}

// private void AddLiteralAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) :1111
void FormatStringTokenizer__AddLiteralAndGoTo_fn(FormatStringTokenizer* __this, int* state)
{
    __this->AddLiteralAndGoTo(*state);
}

// private bool AtEnd() :1129
void FormatStringTokenizer__AtEnd_fn(FormatStringTokenizer* __this, bool* __retval)
{
    *__retval = __this->AtEnd();
}

// private void DiscardCharacterAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) :1118
void FormatStringTokenizer__DiscardCharacterAndGoTo_fn(FormatStringTokenizer* __this, int* state)
{
    __this->DiscardCharacterAndGoTo(*state);
}

// public FormatStringTokenizer New(string format) :1042
void FormatStringTokenizer__New1_fn(uString* format, FormatStringTokenizer** __retval)
{
    *__retval = FormatStringTokenizer::New1(format);
}

// private void Throw() :1124
void FormatStringTokenizer__Throw_fn(FormatStringTokenizer* __this)
{
    __this->Throw();
}

// public static Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatString(string format) :1047
void FormatStringTokenizer__TokenizeFormatString_fn(uString* format, ::g::Uno::Collections::List** __retval)
{
    *__retval = FormatStringTokenizer::TokenizeFormatString(format);
}

// private Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatStringInternal() :1052
void FormatStringTokenizer__TokenizeFormatStringInternal_fn(FormatStringTokenizer* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->TokenizeFormatStringInternal();
}

// public FormatStringTokenizer(string format) [instance] :1042
void FormatStringTokenizer::ctor_(uString* format)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringTokenizer", ".ctor(string)");
    _format = format;
}

// private void AddFormatItemAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) [instance] :1104
void FormatStringTokenizer::AddFormatItemAndGoTo(int state)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringTokenizer", "AddFormatItemAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_tokens), ::g::Uno::Runtime::Implementation::Internal::FormatStringItem::New1(::g::Uno::String::Substring1(uPtr(_format), _prevIndex, (_index - _prevIndex) + 1)));
    _prevIndex = (_index + 1);
    _state = state;
}

// private void AddLiteralAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) [instance] :1111
void FormatStringTokenizer::AddLiteralAndGoTo(int state)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringTokenizer", "AddLiteralAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_tokens), ::g::Uno::Runtime::Implementation::Internal::FormatStringLiteral::New1(::g::Uno::String::Substring1(uPtr(_format), _prevIndex, _index - _prevIndex)));
    _prevIndex = _index;
    _state = state;
}

// private bool AtEnd() [instance] :1129
bool FormatStringTokenizer::AtEnd()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringTokenizer", "AtEnd()");
    return _index == uPtr(_format)->Length();
}

// private void DiscardCharacterAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) [instance] :1118
void FormatStringTokenizer::DiscardCharacterAndGoTo(int state)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringTokenizer", "DiscardCharacterAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State)");
    _prevIndex++;
    _state = state;
}

// private void Throw() [instance] :1124
void FormatStringTokenizer::Throw()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringTokenizer", "Throw()");
    U_THROW(::g::Uno::FormatException::New4(::STRINGS[3/*"Input strin...*/]));
}

// private Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatStringInternal() [instance] :1052
::g::Uno::Collections::List* FormatStringTokenizer::TokenizeFormatStringInternal()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringTokenizer", "TokenizeFormatStringInternal()");
    _index = 0;
    _prevIndex = 0;
    _state = 0;
    _tokens = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[19/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>*/]));

    while (_index <= uPtr(_format)->Length())
    {
        switch (_state)
        {
            case 0:
            {
                if (AtEnd())
                    _state = 4;
                else if (uPtr(_format)->Item(_index) == '{')
                    _state = 2;
                else if (uPtr(_format)->Item(_index) == '}')
                    Throw();
                else
                    _state = 1;

                break;
            }
            case 2:
            {
                if (AtEnd())
                    Throw();
                else if (uPtr(_format)->Item(_index) == '{')
                    DiscardCharacterAndGoTo(1);
                else if (uPtr(_format)->Item(_index) == '}')
                    Throw();
                else
                    _state = 3;

                break;
            }
            case 3:
            {
                if (AtEnd())
                    Throw();
                else if (uPtr(_format)->Item(_index) == '}')
                    AddFormatItemAndGoTo(0);
                else if (uPtr(_format)->Item(_index) == '{')
                    Throw();

                break;
            }
            case 1:
            {
                if (AtEnd())
                    AddLiteralAndGoTo(4);
                else if (uPtr(_format)->Item(_index) == '{')
                    AddLiteralAndGoTo(2);
                else if (uPtr(_format)->Item(_index) == '}')
                    Throw();

                break;
            }
        }

        _index++;
    }

    return _tokens;
}

// public FormatStringTokenizer New(string format) [static] :1042
FormatStringTokenizer* FormatStringTokenizer::New1(uString* format)
{
    FormatStringTokenizer* obj1 = (FormatStringTokenizer*)uNew(FormatStringTokenizer_typeof());
    obj1->ctor_(format);
    return obj1;
}

// public static Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatString(string format) [static] :1047
::g::Uno::Collections::List* FormatStringTokenizer::TokenizeFormatString(uString* format)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.FormatStringTokenizer", "TokenizeFormatString(string)");
    return FormatStringTokenizer::New1(format)->TokenizeFormatStringInternal();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public static class NumericFormatter :1156
// {
// static NumericFormatter() :1156
static void NumericFormatter__cctor__fn(uType* __type)
{
    NumericFormatter::NumberDecimalDigits_ = 2;
    NumericFormatter::ExponentialDigits_ = 6;
}

static void NumericFormatter_build(uType* type)
{
    ::STRINGS[4] = uString::Const("0");
    ::STRINGS[5] = uString::Const(" %");
    ::STRINGS[2] = uString::Const("Format specifier was invalid");
    ::STRINGS[6] = uString::Const("-");
    ::STRINGS[7] = uString::Const(".");
    ::STRINGS[8] = uString::Const("E");
    ::STRINGS[9] = uString::Const("+");
    ::STRINGS[10] = uString::Const("");
    ::STRINGS[11] = uString::Const("E+");
    ::STRINGS[12] = uString::Const("8000000000000000");
    ::STRINGS[13] = uString::Const(",");
    ::TYPES[20] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[17] = ::g::Uno::Double_typeof();
    ::TYPES[21] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Char_typeof());
    ::TYPES[15] = ::g::Uno::ULong_typeof();
    ::TYPES[16] = ::g::Uno::Float_typeof();
    ::TYPES[22] = ::g::Uno::Exception_typeof();
    ::TYPES[8] = ::g::Uno::Char_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::Internal::NumericFormatter::_decimalPoint_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::Internal::NumericFormatter::ExponentialDigits_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::Internal::NumericFormatter::NumberDecimalDigits_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("Format", NULL, (void*)NumericFormatter__Format_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Format", NULL, (void*)NumericFormatter__Format1_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Format", NULL, (void*)NumericFormatter__Format2_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Format", NULL, (void*)NumericFormatter__Format3_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Format", NULL, (void*)NumericFormatter__Format4_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Long_typeof()),
        new uFunction("Format", NULL, (void*)NumericFormatter__Format5_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::SByte_typeof()),
        new uFunction("Format", NULL, (void*)NumericFormatter__Format6_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Short_typeof()),
        new uFunction("Format", NULL, (void*)NumericFormatter__Format7_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::ULong_typeof()));
}

uClassType* NumericFormatter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.NumericFormatter", options);
    type->fp_build_ = NumericFormatter_build;
    type->fp_cctor_ = NumericFormatter__cctor__fn;
    return type;
}

// private static void CalculateExponential(double d, double& significand, int& exponent) :1546
void NumericFormatter__CalculateExponential_fn(double* d, double* significand, int* exponent)
{
    NumericFormatter::CalculateExponential(*d, significand, exponent);
}

// private static string get_DecimalPoint() :1164
void NumericFormatter__get_DecimalPoint_fn(uString** __retval)
{
    *__retval = NumericFormatter::DecimalPoint();
}

// private static int Digits(string formatString) :1562
void NumericFormatter__Digits_fn(uString* formatString, int* __retval)
{
    *__retval = NumericFormatter::Digits(formatString);
}

// private static string DoFormatHex(string formatString, ulong l, int maxLength) :1321
void NumericFormatter__DoFormatHex_fn(uString* formatString, uint64_t* l, int* maxLength, uString** __retval)
{
    *__retval = NumericFormatter::DoFormatHex(formatString, *l, *maxLength);
}

// public static string Format(string formatString, bool i) :1174
void NumericFormatter__Format_fn(uString* formatString, bool* i, uString** __retval)
{
    *__retval = NumericFormatter::Format(formatString, *i);
}

// public static string Format(string formatString, double d) :1240
void NumericFormatter__Format1_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::Format1(formatString, *d);
}

// public static string Format(string formatString, float f) :1233
void NumericFormatter__Format2_fn(uString* formatString, float* f, uString** __retval)
{
    *__retval = NumericFormatter::Format2(formatString, *f);
}

// public static string Format(string formatString, int i) :1193
void NumericFormatter__Format3_fn(uString* formatString, int* i, uString** __retval)
{
    *__retval = NumericFormatter::Format3(formatString, *i);
}

// public static string Format(string formatString, long i) :1200
void NumericFormatter__Format4_fn(uString* formatString, int64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::Format4(formatString, *i);
}

// public static string Format(string formatString, sbyte b) :1179
void NumericFormatter__Format5_fn(uString* formatString, int8_t* b, uString** __retval)
{
    *__retval = NumericFormatter::Format5(formatString, *b);
}

// public static string Format(string formatString, short s) :1186
void NumericFormatter__Format6_fn(uString* formatString, int16_t* s, uString** __retval)
{
    *__retval = NumericFormatter::Format6(formatString, *s);
}

// public static string Format(string formatString, ulong i) :1210
void NumericFormatter__Format7_fn(uString* formatString, uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::Format7(formatString, *i);
}

// private static string FormatCustom(string formatString, double value) :1455
void NumericFormatter__FormatCustom_fn(uString* formatString, double* value, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustom(formatString, *value);
}

// private static string FormatCustom(string formatString, ulong value) :1443
void NumericFormatter__FormatCustom1_fn(uString* formatString, uint64_t* value, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustom1(formatString, *value);
}

// private static string FormatCustomDoublePart(string doubleFormat, double d, bool& decimalPoint) :1468
void NumericFormatter__FormatCustomDoublePart_fn(uString* doubleFormat, double* d, bool* decimalPoint, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustomDoublePart(doubleFormat, *d, decimalPoint);
}

// private static string FormatCustomIntegerPart(string integerFormat, ulong value) :1509
void NumericFormatter__FormatCustomIntegerPart_fn(uString* integerFormat, uint64_t* value, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustomIntegerPart(integerFormat, *value);
}

// private static string FormatDecimal(string formatString, ulong l) :1261
void NumericFormatter__FormatDecimal_fn(uString* formatString, uint64_t* l, uString** __retval)
{
    *__retval = NumericFormatter::FormatDecimal(formatString, *l);
}

// private static string FormatExponential(string formatString, double d) :1344
void NumericFormatter__FormatExponential_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatExponential(formatString, *d);
}

// private static string FormatFixedPoint(string formatString, double d) :1271
void NumericFormatter__FormatFixedPoint_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatFixedPoint(formatString, *d);
}

// private static string FormatFixedPoint(string formatString, ulong d) :1266
void NumericFormatter__FormatFixedPoint1_fn(uString* formatString, uint64_t* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatFixedPoint1(formatString, *d);
}

// private static string FormatFloatGeneral(string formatString, float f) :1373
void NumericFormatter__FormatFloatGeneral_fn(uString* formatString, float* f, uString** __retval)
{
    *__retval = NumericFormatter::FormatFloatGeneral(formatString, *f);
}

// private static string FormatGeneral(string formatString, double d) :1380
void NumericFormatter__FormatGeneral_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatGeneral(formatString, *d);
}

// private static string FormatGeneral(string formatString, ulong i) :1360
void NumericFormatter__FormatGeneral1_fn(uString* formatString, uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::FormatGeneral1(formatString, *i);
}

// private static string FormatHex(string formatString, int i) :1300
void NumericFormatter__FormatHex_fn(uString* formatString, int* i, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex(formatString, *i);
}

// private static string FormatHex(string formatString, long l) :1307
void NumericFormatter__FormatHex1_fn(uString* formatString, int64_t* l, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex1(formatString, *l);
}

// private static string FormatHex(string formatString, sbyte b) :1286
void NumericFormatter__FormatHex2_fn(uString* formatString, int8_t* b, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex2(formatString, *b);
}

// private static string FormatHex(string formatString, short s) :1293
void NumericFormatter__FormatHex3_fn(uString* formatString, int16_t* s, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex3(formatString, *s);
}

// private static string FormatHex(string formatString, ulong l) :1316
void NumericFormatter__FormatHex4_fn(uString* formatString, uint64_t* l, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex4(formatString, *l);
}

// private static string FormatNumber(double d) :1418
void NumericFormatter__FormatNumber_fn(double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber(*d);
}

// private static string FormatNumber(string formatString, double d) :1407
void NumericFormatter__FormatNumber1_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber1(formatString, *d);
}

// private static string FormatNumber(string formatString, ulong i) :1399
void NumericFormatter__FormatNumber2_fn(uString* formatString, uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber2(formatString, *i);
}

// private static string FormatNumber(ulong i) :1425
void NumericFormatter__FormatNumber3_fn(uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber3(*i);
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetFormatSpecifier(string formatString) :1592
void NumericFormatter__GetFormatSpecifier_fn(uString* formatString, int* __retval)
{
    *__retval = NumericFormatter::GetFormatSpecifier(formatString);
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetStandartFormat(char symbol) :1612
void NumericFormatter__GetStandartFormat_fn(uChar* symbol, int* __retval)
{
    *__retval = NumericFormatter::GetStandartFormat(*symbol);
}

// private static bool IsLetter(char symbol) :1567
void NumericFormatter__IsLetter_fn(uChar* symbol, bool* __retval)
{
    *__retval = NumericFormatter::IsLetter(*symbol);
}

// private static string Pad(string unmodified, string formatString) :1572
void NumericFormatter__Pad_fn(uString* unmodified, uString* formatString, uString** __retval)
{
    *__retval = NumericFormatter::Pad(unmodified, formatString);
}

// private static string Padding(int length) :1582
void NumericFormatter__Padding_fn(int* length, uString** __retval)
{
    *__retval = NumericFormatter::Padding(*length);
}

uSStrong<uString*> NumericFormatter::_decimalPoint_;
int NumericFormatter::ExponentialDigits_;
int NumericFormatter::NumberDecimalDigits_;

// private static void CalculateExponential(double d, double& significand, int& exponent) [static] :1546
void NumericFormatter::CalculateExponential(double d, double* significand, int* exponent)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "CalculateExponential(double,double&,int&)");
    NumericFormatter_typeof()->Init();
    *significand = d;
    *exponent = 0;

    while (*significand < 1.0)
    {
        *exponent = *exponent - 1;
        *significand = *significand * 10.0;
    }

    while (*significand >= 10.0)
    {
        *exponent = *exponent + 1;
        *significand = *significand / 10.0;
    }
}

// private static int Digits(string formatString) [static] :1562
int NumericFormatter::Digits(uString* formatString)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "Digits(string)");
    NumericFormatter_typeof()->Init();
    return ::g::Uno::Int::Parse(::g::Uno::String::Substring(uPtr(formatString), 1));
}

// private static string DoFormatHex(string formatString, ulong l, int maxLength) [static] :1321
uString* NumericFormatter::DoFormatHex(uString* formatString, uint64_t l, int maxLength)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "DoFormatHex(string,ulong,int)");
    NumericFormatter_typeof()->Init();

    if (l == 0ULL)
        return NumericFormatter::Pad(::STRINGS[4/*"0"*/], formatString);

    uArray* hexChars = uArray::Init<int>(::TYPES[20/*char[]*/], 16, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F');
    uArray* buffer = uArray::New(::TYPES[20/*char[]*/], maxLength);
    int index = maxLength;

    while (l != 0ULL)
    {
        uPtr(buffer)->Item<uChar>(--index) = uPtr(hexChars)->Item<uChar>((int)(l % 16ULL));
        l = l / 16ULL;
    }

    uArray* result = uArray::New(::TYPES[20/*char[]*/], maxLength - index);

    for (int i = 0; i < result->Length(); i++)
        uPtr(result)->Item<uChar>(i) = uPtr(buffer)->Item<uChar>(i + index);

    uString* returnString = uString::CharArray(result);

    if (uPtr(formatString)->Item(0) == 'x')
        returnString = ::g::Uno::String::ToLower(uPtr(returnString));

    return NumericFormatter::Pad(returnString, formatString);
}

// public static string Format(string formatString, bool i) [static] :1174
uString* NumericFormatter::Format(uString* formatString, bool i)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "Format(string,bool)");
    NumericFormatter_typeof()->Init();
    return ::g::Uno::Bool::ToString(i, ::TYPES[7/*bool*/]);
}

// public static string Format(string formatString, double d) [static] :1240
uString* NumericFormatter::Format1(uString* formatString, double d)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "Format(string,double)");
    NumericFormatter_typeof()->Init();

    switch (NumericFormatter::GetFormatSpecifier(formatString))
    {
        case 1:
            return NumericFormatter::FormatFixedPoint(formatString, d);
        case 3:
            return NumericFormatter::FormatExponential(formatString, d);
        case 4:
            return NumericFormatter::FormatGeneral(formatString, d);
        case 5:
            return ::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber1(formatString, 100.0 * d), ::STRINGS[5/*" %"*/]);
        case 6:
            return NumericFormatter::FormatNumber1(formatString, d);
        case 7:
            return NumericFormatter::FormatCustom(formatString, d);
        default:
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[2/*"Format spec...*/]));
    }
}

// public static string Format(string formatString, float f) [static] :1233
uString* NumericFormatter::Format2(uString* formatString, float f)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "Format(string,float)");
    NumericFormatter_typeof()->Init();

    if (NumericFormatter::GetFormatSpecifier(formatString) == 4)
        return NumericFormatter::FormatFloatGeneral(formatString, f);

    return NumericFormatter::Format1(formatString, (double)f);
}

// public static string Format(string formatString, int i) [static] :1193
uString* NumericFormatter::Format3(uString* formatString, int i)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "Format(string,int)");
    NumericFormatter_typeof()->Init();

    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex(formatString, i);

    return NumericFormatter::Format4(formatString, (int64_t)i);
}

// public static string Format(string formatString, long i) [static] :1200
uString* NumericFormatter::Format4(uString* formatString, int64_t i)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "Format(string,long)");
    NumericFormatter_typeof()->Init();

    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex1(formatString, i);
    else if (i >= 0LL)
        return NumericFormatter::Format7(formatString, (uint64_t)i);
    else
        return ::g::Uno::String::op_Addition2(::STRINGS[6/*"-"*/], NumericFormatter::Format7(formatString, (uint64_t)(i * -1LL)));
}

// public static string Format(string formatString, sbyte b) [static] :1179
uString* NumericFormatter::Format5(uString* formatString, int8_t b)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "Format(string,sbyte)");
    NumericFormatter_typeof()->Init();

    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex2(formatString, b);

    return NumericFormatter::Format4(formatString, (int64_t)b);
}

// public static string Format(string formatString, short s) [static] :1186
uString* NumericFormatter::Format6(uString* formatString, int16_t s)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "Format(string,short)");
    NumericFormatter_typeof()->Init();

    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex3(formatString, s);

    return NumericFormatter::Format4(formatString, (int64_t)s);
}

// public static string Format(string formatString, ulong i) [static] :1210
uString* NumericFormatter::Format7(uString* formatString, uint64_t i)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "Format(string,ulong)");
    NumericFormatter_typeof()->Init();

    switch (NumericFormatter::GetFormatSpecifier(formatString))
    {
        case 0:
            return NumericFormatter::FormatDecimal(formatString, i);
        case 1:
            return NumericFormatter::FormatFixedPoint1(formatString, i);
        case 2:
            return NumericFormatter::FormatHex4(formatString, i);
        case 3:
            return NumericFormatter::FormatExponential(formatString, (double)i);
        case 4:
            return NumericFormatter::FormatGeneral1(formatString, i);
        case 5:
            return ::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber2(formatString, 100ULL * i), ::STRINGS[5/*" %"*/]);
        case 6:
            return NumericFormatter::FormatNumber2(formatString, i);
        default:
            return NumericFormatter::FormatCustom1(formatString, i);
    }
}

// private static string FormatCustom(string formatString, double value) [static] :1455
uString* NumericFormatter::FormatCustom(uString* formatString, double value)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatCustom(string,double)");
    NumericFormatter_typeof()->Init();
    double absoluteValue = ::g::Uno::Math::Abs(value);
    int decimalPoint = ::g::Uno::String::IndexOf(uPtr(formatString), '.', 0);

    if (decimalPoint == -1)
        return NumericFormatter::FormatCustomIntegerPart(formatString, (uint64_t)absoluteValue);

    bool hasDecimalPoint;
    uString* integerPart = NumericFormatter::FormatCustomIntegerPart(::g::Uno::String::Substring1(formatString, 0, decimalPoint), (uint64_t)absoluteValue);
    uString* doublePart = NumericFormatter::FormatCustomDoublePart(::g::Uno::String::Substring(formatString, decimalPoint + 1), absoluteValue, &hasDecimalPoint);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((value < 0.0) ? ::STRINGS[6/*"-"*/] : (uString*)::g::Uno::String::Empty(), integerPart), hasDecimalPoint ? ::STRINGS[7/*"."*/] : (uString*)::g::Uno::String::Empty()), doublePart);
}

// private static string FormatCustom(string formatString, ulong value) [static] :1443
uString* NumericFormatter::FormatCustom1(uString* formatString, uint64_t value)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatCustom(string,ulong)");
    NumericFormatter_typeof()->Init();
    int decimalPoint = ::g::Uno::String::IndexOf(uPtr(formatString), '.', 0);

    if (decimalPoint == -1)
        return NumericFormatter::FormatCustomIntegerPart(formatString, value);

    bool hasDecimalPoint;
    uString* integerPart = NumericFormatter::FormatCustomIntegerPart(::g::Uno::String::Substring1(formatString, 0, decimalPoint), value);
    uString* doublePart = NumericFormatter::FormatCustomDoublePart(::g::Uno::String::Substring(formatString, decimalPoint + 1), 0.0, &hasDecimalPoint);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(integerPart, hasDecimalPoint ? ::STRINGS[7/*"."*/] : (uString*)::g::Uno::String::Empty()), doublePart);
}

// private static string FormatCustomDoublePart(string doubleFormat, double d, bool& decimalPoint) [static] :1468
uString* NumericFormatter::FormatCustomDoublePart(uString* doubleFormat, double d, bool* decimalPoint)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatCustomDoublePart(string,double,bool&)");
    NumericFormatter_typeof()->Init();
    int precision = 0;
    bool hasZero = false;
    uArray* processedFormat = ::g::Uno::String::ToCharArray(uPtr(doubleFormat));

    for (int i = uPtr(processedFormat)->Length() - 1; i >= 0; i--)
    {
        if (uPtr(processedFormat)->Item<uChar>(i) == '0')
            hasZero = true;

        if ((uPtr(processedFormat)->Item<uChar>(i) == '0') || (uPtr(processedFormat)->Item<uChar>(i) == '#'))
        {
            uPtr(processedFormat)->Item<uChar>(i) = hasZero ? '0' : uPtr(processedFormat)->Item<uChar>(i);
            precision++;
        }
    }

    uString* raw = ::g::Uno::Double::ToString(::g::Uno::Math::Round1(d, precision), ::TYPES[17/*double*/]);
    int index = ::g::Uno::String::IndexOf1(uPtr(raw), NumericFormatter::DecimalPoint(), 0) + 1;
    *decimalPoint = (index != 0) || hasZero;

    if (index == 0)
        index = uPtr(raw)->Length();

    ::g::Uno::Collections::List* formatted = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[21/*Uno.Collections.List<char>*/], processedFormat->Length());

    for (int i1 = 0; i1 < processedFormat->Length(); i1++)

        switch (uPtr(processedFormat)->Item<uChar>(i1))
        {
            case '0':
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(formatted), uCRef<uChar>((index >= uPtr(raw)->Length()) ? '0' : uPtr(raw)->Item(index++)));
                break;
            }
            case '#':
            {
                if (index < uPtr(raw)->Length())
                    ::g::Uno::Collections::List__Add_fn(uPtr(formatted), uCRef<uChar>(uPtr(raw)->Item(index++)));

                break;
            }
            case '.':
                break;
            default:
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(formatted), uCRef<uChar>(uPtr(processedFormat)->Item<uChar>(i1)));
                break;
            }
        }

    return uString::CharArray((uArray*)formatted->ToArray());
}

// private static string FormatCustomIntegerPart(string integerFormat, ulong value) [static] :1509
uString* NumericFormatter::FormatCustomIntegerPart(uString* integerFormat, uint64_t value)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatCustomIntegerPart(string,ulong)");
    NumericFormatter_typeof()->Init();
    uString* raw = ::g::Uno::ULong::ToString(value, ::TYPES[15/*ulong*/]);
    int rawIndex = (value == 0ULL) ? -1 : uPtr(raw)->Length() - 1;
    uArray* formatted = uArray::New(::TYPES[20/*char[]*/], uPtr(integerFormat)->Length());
    int index = integerFormat->Length() - 1;
    int lastNumber = 0;

    for (int i = integerFormat->Length() - 1; i >= 0; i--)

        switch (uPtr(integerFormat)->Item(i))
        {
            case '0':
            {
                lastNumber = i;
                uPtr(formatted)->Item<uChar>(index--) = (rawIndex < 0) ? '0' : uPtr(raw)->Item(rawIndex--);
                break;
            }
            case '#':
            {
                lastNumber = i;

                if (rawIndex >= 0)
                    uPtr(formatted)->Item<uChar>(index--) = uPtr(raw)->Item(rawIndex--);

                break;
            }
            default:
            {
                uPtr(formatted)->Item<uChar>(index--) = uPtr(integerFormat)->Item(i);
                break;
            }
        }

    uString* formattedString = uString::CharArray(formatted);

    if (index != -1)
        formattedString = ::g::Uno::String::Substring(uPtr(formattedString), index + 1);

    if (rawIndex >= 0)
        return ::g::Uno::String::Insert(uPtr(formattedString), lastNumber, ::g::Uno::String::Substring1(uPtr(raw), 0, rawIndex + 1));

    return formattedString;
}

// private static string FormatDecimal(string formatString, ulong l) [static] :1261
uString* NumericFormatter::FormatDecimal(uString* formatString, uint64_t l)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatDecimal(string,ulong)");
    NumericFormatter_typeof()->Init();
    return NumericFormatter::Pad(::g::Uno::ULong::ToString(l, ::TYPES[15/*ulong*/]), formatString);
}

// private static string FormatExponential(string formatString, double d) [static] :1344
uString* NumericFormatter::FormatExponential(uString* formatString, double d)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatExponential(string,double)");
    NumericFormatter_typeof()->Init();
    double raw;
    int offset;
    NumericFormatter::CalculateExponential(d, &raw, &offset);
    int desiredDigits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::ExponentialDigits();
    uString* rounded = ::g::Uno::Double::ToString(::g::Uno::Math::Round1(raw, desiredDigits), ::TYPES[17/*double*/]);

    if (::g::Uno::String::IndexOf1(uPtr(rounded), NumericFormatter::DecimalPoint(), 0) == -1)
        rounded = ::g::Uno::String::op_Addition2(rounded, NumericFormatter::DecimalPoint());

    uString* padding = NumericFormatter::Padding((desiredDigits + 2) - uPtr(rounded)->Length());
    uString* exponent = ::g::Uno::Int::ToString(::g::Uno::Math::Abs5(offset), ::TYPES[4/*int*/]);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(rounded, padding), ::STRINGS[8/*"E"*/]), (offset < 0) ? ::STRINGS[6/*"-"*/] : ::STRINGS[9/*"+"*/]), NumericFormatter::Padding(3 - uPtr(exponent)->Length())), exponent);
}

// private static string FormatFixedPoint(string formatString, double d) [static] :1271
uString* NumericFormatter::FormatFixedPoint(uString* formatString, double d)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatFixedPoint(string,double)");
    NumericFormatter_typeof()->Init();
    int desiredDigits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits();
    uString* rounded = ::g::Uno::Double::ToString(::g::Uno::Math::Round1(d, desiredDigits), ::TYPES[17/*double*/]);
    int decimalPointPos = uPtr(::g::Uno::Int::ToString((int)d, ::TYPES[4/*int*/]))->Length();
    int actualDigits = ::g::Uno::Math::Max8((uPtr(rounded)->Length() - decimalPointPos) - 1, 0);

    if (desiredDigits <= actualDigits)
        return rounded;

    uString* padding = NumericFormatter::Padding(desiredDigits - actualDigits);
    bool hasDecimalPoint = ::g::Uno::String::IndexOf1(rounded, NumericFormatter::DecimalPoint(), 0) != -1;
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(rounded, hasDecimalPoint ? ::STRINGS[10/*""*/] : (uString*)NumericFormatter::DecimalPoint()), padding);
}

// private static string FormatFixedPoint(string formatString, ulong d) [static] :1266
uString* NumericFormatter::FormatFixedPoint1(uString* formatString, uint64_t d)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatFixedPoint(string,ulong)");
    NumericFormatter_typeof()->Init();
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::ULong::ToString(d, ::TYPES[15/*ulong*/]), NumericFormatter::DecimalPoint()), NumericFormatter::Padding((uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits()));
}

// private static string FormatFloatGeneral(string formatString, float f) [static] :1373
uString* NumericFormatter::FormatFloatGeneral(uString* formatString, float f)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatFloatGeneral(string,float)");
    NumericFormatter_typeof()->Init();

    if (uPtr(formatString)->Length() == 1)
        return ::g::Uno::Float::ToString(f, ::TYPES[16/*float*/]);

    return NumericFormatter::FormatGeneral(formatString, (double)f);
}

// private static string FormatGeneral(string formatString, double d) [static] :1380
uString* NumericFormatter::FormatGeneral(uString* formatString, double d)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatGeneral(string,double)");
    NumericFormatter_typeof()->Init();

    if (uPtr(formatString)->Length() == 1)
        return ::g::Uno::Double::ToString(d, ::TYPES[17/*double*/]);

    int desiredDigits = NumericFormatter::Digits(formatString);
    uString* str = ::g::Uno::Double::ToString(d, ::TYPES[17/*double*/]);

    if ((desiredDigits >= uPtr(str)->Length()) || (desiredDigits == 0))
        return str;

    double significand;
    int exponent;
    NumericFormatter::CalculateExponential(::g::Uno::Math::Abs(d), &significand, &exponent);
    significand = ::g::Uno::Math::Round1(significand, desiredDigits - 1);

    if (exponent > desiredDigits)
        return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Double::ToString(significand, ::TYPES[17/*double*/]), ::STRINGS[11/*"E+"*/]), NumericFormatter::Padding(2 - uPtr(::g::Uno::Int::ToString(exponent, ::TYPES[4/*int*/]))->Length())), ::g::Uno::Int::ToString(exponent, ::TYPES[4/*int*/]));

    return ::g::Uno::String::op_Addition2((d < 0.0) ? ::STRINGS[6/*"-"*/] : (uString*)::g::Uno::String::Empty(), ::g::Uno::Double::ToString(significand * (double)::g::Uno::Math::Pow1(10.0f, (float)exponent), ::TYPES[17/*double*/]));
}

// private static string FormatGeneral(string formatString, ulong i) [static] :1360
uString* NumericFormatter::FormatGeneral1(uString* formatString, uint64_t i)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatGeneral(string,ulong)");
    NumericFormatter_typeof()->Init();

    if (uPtr(formatString)->Length() == 1)
        return ::g::Uno::ULong::ToString(i, ::TYPES[15/*ulong*/]);

    int desiredDigits = NumericFormatter::Digits(formatString);
    uString* str = ::g::Uno::ULong::ToString(i, ::TYPES[15/*ulong*/]);

    if ((desiredDigits >= uPtr(str)->Length()) || (desiredDigits == 0))
        return str;

    uString* rounded = ::g::Uno::Double::ToString(::g::Uno::Math::Round1((double)i / (double)::g::Uno::Math::Pow1(10.0f, (float)(uPtr(str)->Length() - 1)), desiredDigits - 1), ::TYPES[17/*double*/]);
    uString* exponent = ::g::Uno::Int::ToString(str->Length() - 1, ::TYPES[4/*int*/]);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(rounded, ::STRINGS[11/*"E+"*/]), NumericFormatter::Padding(2 - uPtr(exponent)->Length())), exponent);
}

// private static string FormatHex(string formatString, int i) [static] :1300
uString* NumericFormatter::FormatHex(uString* formatString, int i)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatHex(string,int)");
    NumericFormatter_typeof()->Init();

    if (i < 0)
        return NumericFormatter::DoFormatHex(formatString, (uint64_t)((4294967295U - (uint32_t)-i) + 1U), 8);

    return NumericFormatter::DoFormatHex(formatString, (uint64_t)i, 8);
}

// private static string FormatHex(string formatString, long l) [static] :1307
uString* NumericFormatter::FormatHex1(uString* formatString, int64_t l)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatHex(string,long)");
    NumericFormatter_typeof()->Init();

    if (l == (-9223372036854775807LL - 1))
        return ::STRINGS[12/*"80000000000...*/];

    if (l < 0LL)
        return NumericFormatter::DoFormatHex(formatString, (18446744073709551615ULL - (uint64_t)-l) + 1ULL, 16);

    return NumericFormatter::DoFormatHex(formatString, (uint64_t)l, 16);
}

// private static string FormatHex(string formatString, sbyte b) [static] :1286
uString* NumericFormatter::FormatHex2(uString* formatString, int8_t b)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatHex(string,sbyte)");
    NumericFormatter_typeof()->Init();

    if (b < 0)
        return NumericFormatter::DoFormatHex(formatString, (uint64_t)((255 - (uint8_t)-b) + 1), 8);

    return NumericFormatter::DoFormatHex(formatString, (uint64_t)b, 8);
}

// private static string FormatHex(string formatString, short s) [static] :1293
uString* NumericFormatter::FormatHex3(uString* formatString, int16_t s)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatHex(string,short)");
    NumericFormatter_typeof()->Init();

    if (s < 0)
        return NumericFormatter::DoFormatHex(formatString, (uint64_t)((65535 - (uint16_t)-s) + 1), 8);

    return NumericFormatter::DoFormatHex(formatString, (uint64_t)s, 8);
}

// private static string FormatHex(string formatString, ulong l) [static] :1316
uString* NumericFormatter::FormatHex4(uString* formatString, uint64_t l)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatHex(string,ulong)");
    NumericFormatter_typeof()->Init();
    return NumericFormatter::DoFormatHex(formatString, l, 16);
}

// private static string FormatNumber(double d) [static] :1418
uString* NumericFormatter::FormatNumber(double d)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatNumber(double)");
    NumericFormatter_typeof()->Init();

    if (d < 0.0)
        return ::g::Uno::String::op_Addition2(::STRINGS[6/*"-"*/], NumericFormatter::FormatNumber3((uint64_t)-d));

    return NumericFormatter::FormatNumber3((uint64_t)d);
}

// private static string FormatNumber(string formatString, double d) [static] :1407
uString* NumericFormatter::FormatNumber1(uString* formatString, double d)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatNumber(string,double)");
    NumericFormatter_typeof()->Init();
    int desiredDigits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits();
    double rounded = ::g::Uno::Math::Round1(d, desiredDigits);

    if (desiredDigits == 0)
        return NumericFormatter::FormatNumber(rounded);

    uString* str = ::g::Uno::Double::ToString(rounded, ::TYPES[17/*double*/]);
    uString* residue = (::g::Uno::String::IndexOf1(uPtr(str), NumericFormatter::DecimalPoint(), 0) == -1) ? (uString*)::g::Uno::String::Empty() : (uString*)::g::Uno::String::Substring(uPtr(str), ::g::Uno::String::IndexOf1(uPtr(str), NumericFormatter::DecimalPoint(), 0) + 1);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber(rounded), NumericFormatter::DecimalPoint()), residue), NumericFormatter::Padding(desiredDigits - uPtr(residue)->Length()));
}

// private static string FormatNumber(string formatString, ulong i) [static] :1399
uString* NumericFormatter::FormatNumber2(uString* formatString, uint64_t i)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatNumber(string,ulong)");
    NumericFormatter_typeof()->Init();
    int desiredDigits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits();

    if (desiredDigits == 0)
        return NumericFormatter::FormatNumber3(i);

    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber3(i), ::STRINGS[7/*"."*/]), NumericFormatter::Padding(desiredDigits));
}

// private static string FormatNumber(ulong i) [static] :1425
uString* NumericFormatter::FormatNumber3(uint64_t i)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "FormatNumber(ulong)");
    NumericFormatter_typeof()->Init();
    uString* str = ::g::Uno::ULong::ToString(i, ::TYPES[15/*ulong*/]);

    if (uPtr(str)->Length() <= 3)
        return str;

    int start = ((uPtr(str)->Length() % 3) == 0) ? 3 : uPtr(str)->Length() % 3;
    ::g::Uno::Text::StringBuilder* result = ::g::Uno::Text::StringBuilder::New1();
    result->Append2(::g::Uno::String::Substring1(str, 0, start));

    for (int index = start; index < str->Length(); index = index + 3)
    {
        uPtr(result)->Append2(::STRINGS[13/*","*/]);
        result->Append2(::g::Uno::String::Substring1(uPtr(str), index, 3));
    }

    return result->ToString();
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetFormatSpecifier(string formatString) [static] :1592
int NumericFormatter::GetFormatSpecifier(uString* formatString)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "GetFormatSpecifier(string)");
    NumericFormatter_typeof()->Init();
    uChar symbol = ::g::Uno::Char::ToUpper(uPtr(formatString)->Item(0));

    if ((formatString->Length() == 1) && NumericFormatter::IsLetter(symbol))
        return NumericFormatter::GetStandartFormat(symbol);

    try
    {
        int decimals = NumericFormatter::Digits(formatString);

        if (decimals > 99)
            return 7;

        if (uPtr(::g::Uno::String::Trim1(uPtr(formatString), uArray::Init<int>(::TYPES[20/*char[]*/], 1, '0')))->Length() == 0)
            return 7;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* __exception1 = __t.Exception;
        return 7;
    }

    return NumericFormatter::GetStandartFormat(symbol);
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetStandartFormat(char symbol) [static] :1612
int NumericFormatter::GetStandartFormat(uChar symbol)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "GetStandartFormat(char)");
    NumericFormatter_typeof()->Init();

    switch (symbol)
    {
        case 'X':
            return 2;
        case 'D':
            return 0;
        case 'F':
            return 1;
        case 'G':
            return 4;
        case 'N':
            return 6;
        case 'E':
            return 3;
        case 'P':
            return 5;
        default:
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[2/*"Format spec...*/]));
    }
}

// private static bool IsLetter(char symbol) [static] :1567
bool NumericFormatter::IsLetter(uChar symbol)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "IsLetter(char)");
    NumericFormatter_typeof()->Init();
    return (symbol >= 'A') && (symbol <= 'Z');
}

// private static string Pad(string unmodified, string formatString) [static] :1572
uString* NumericFormatter::Pad(uString* unmodified, uString* formatString)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "Pad(string,string)");
    NumericFormatter_typeof()->Init();
    int actualLength = uPtr(unmodified)->Length();
    int desiredLength = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : actualLength;

    if (desiredLength <= actualLength)
        return unmodified;

    uString* padding = NumericFormatter::Padding(desiredLength - actualLength);
    return ::g::Uno::String::op_Addition2(padding, unmodified);
}

// private static string Padding(int length) [static] :1582
uString* NumericFormatter::Padding(int length)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "Padding(int)");
    NumericFormatter_typeof()->Init();

    if (length <= 0)
        return ::STRINGS[10/*""*/];

    uArray* padding = uArray::New(::TYPES[20/*char[]*/], length);

    for (int i = 0; i < length; i++)
        uPtr(padding)->Item<uChar>(i) = '0';

    return uString::CharArray(padding);
}

// private static string get_DecimalPoint() [static] :1164
uString* NumericFormatter::DecimalPoint()
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.NumericFormatter", "get_DecimalPoint()");
    NumericFormatter_typeof()->Init();

    if (::g::Uno::String::op_Equality(NumericFormatter::_decimalPoint(), NULL))
        NumericFormatter::_decimalPoint() = ::g::Uno::Char::ToString(uPtr(::g::Uno::Double::ToString(1.1, ::TYPES[17/*double*/]))->Item(1), ::TYPES[8/*char*/]);

    return NumericFormatter::_decimalPoint();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// private enum FormatStringTokenizer.State :1035
uEnumType* FormatStringTokenizer__State_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Beginning", 0LL,
        "Literal", 1LL,
        "FirstCurly", 2LL,
        "FormatItem", 3LL,
        "End", 4LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Runtime\Implementation\Internal\$.uno
// -------------------------------------------------------------------------------------------

// public static class WindowHelpers :1717
// {
static void WindowHelpers_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("GetPlatformWindowHandle", NULL, (void*)WindowHelpers__GetPlatformWindowHandle_fn, 0, true, ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), 1, ::g::Uno::Platform::Window_typeof()));
}

uClassType* WindowHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.WindowHelpers", options);
    type->fp_build_ = WindowHelpers_build;
    return type;
}

// public static Uno.Runtime.Implementation.PlatformWindowHandle GetPlatformWindowHandle(Uno.Platform.Window wnd) :1719
void WindowHelpers__GetPlatformWindowHandle_fn(::g::Uno::Platform::Window* wnd, ::Xli::Window** __retval)
{
    *__retval = WindowHelpers::GetPlatformWindowHandle(wnd);
}

// public static Uno.Runtime.Implementation.PlatformWindowHandle GetPlatformWindowHandle(Uno.Platform.Window wnd) [static] :1719
::Xli::Window* WindowHelpers::GetPlatformWindowHandle(::g::Uno::Platform::Window* wnd)
{
    uStackFrame __("Uno.Runtime.Implementation.Internal.WindowHelpers", "GetPlatformWindowHandle(Uno.Platform.Window)");
    return uPtr(wnd)->_handle;
}
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
