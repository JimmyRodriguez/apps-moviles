// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Module.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[3];

namespace g{
namespace Polyfills{
namespace Window{

// /usr/local/share/uno/Packages/Polyfills.Window/0.35.8/$.uno
// -----------------------------------------------------------

// public sealed class WindowModule :13
// {
static void WindowModule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Polyfills/Window");
    ::STRINGS[1] = uString::Const("Polyfills.Window");
    ::STRINGS[2] = uString::Const("js/Window.js");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(WindowModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(WindowModule_type, interface1));
    type->SetFields(5,
        ::g::Uno::UX::FileSource_typeof(), (uintptr_t)&::g::Polyfills::Window::WindowModule::_fileSourceInstance_, uFieldFlagsStatic,
        WindowModule_typeof(), (uintptr_t)&::g::Polyfills::Window::WindowModule::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("GetModule", NULL, (void*)WindowModule__GetModule_fn, 0, false, ::g::Fuse::Scripting::Module_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)WindowModule__New3_fn, 0, true, WindowModule_typeof(), 0));
}

WindowModule_type* WindowModule_typeof()
{
    static uSStrong<WindowModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WindowModule);
    options.TypeSize = sizeof(WindowModule_type);
    type = (WindowModule_type*)uClassType::New("Polyfills.Window.WindowModule", options);
    type->SetBase(::g::Fuse::Scripting::FileModule_typeof());
    type->fp_build_ = WindowModule_build;
    type->fp_ctor_ = (void*)WindowModule__New3_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))WindowModule__GetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public WindowModule() :31
void WindowModule__ctor_3_fn(WindowModule* __this)
{
    __this->ctor_3();
}

// public Fuse.Scripting.Module GetModule() :15
void WindowModule__GetModule_fn(WindowModule* __this, ::g::Fuse::Scripting::Module** __retval)
{
    *__retval = __this->GetModule();
}

// private static Uno.UX.FileSource GetWindow() :23
void WindowModule__GetWindow_fn(::g::Uno::UX::FileSource** __retval)
{
    *__retval = WindowModule::GetWindow();
}

// public WindowModule New() :31
void WindowModule__New3_fn(WindowModule** __retval)
{
    *__retval = WindowModule::New3();
}

uSStrong< ::g::Uno::UX::FileSource*> WindowModule::_fileSourceInstance_;
uSStrong<WindowModule*> WindowModule::_instance_;

// public WindowModule() [instance] :31
void WindowModule::ctor_3()
{
    uStackFrame __("Polyfills.Window.WindowModule", ".ctor()");
    ctor_2(WindowModule::GetWindow());

    if (WindowModule::_instance_ == NULL)
        ::g::Uno::UX::Resource::SetGlobalKey(WindowModule::_instance_ = this, ::STRINGS[0/*"Polyfills/W...*/]);
}

// public Fuse.Scripting.Module GetModule() [instance] :15
::g::Fuse::Scripting::Module* WindowModule::GetModule()
{
    uStackFrame __("Polyfills.Window.WindowModule", "GetModule()");
    return this;
}

// private static Uno.UX.FileSource GetWindow() [static] :23
::g::Uno::UX::FileSource* WindowModule::GetWindow()
{
    uStackFrame __("Polyfills.Window.WindowModule", "GetWindow()");

    if (WindowModule::_fileSourceInstance_ == NULL)
        WindowModule::_fileSourceInstance_ = ::g::Uno::UX::FileSource::op_Implicit(uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[1/*"Polyfills.W...*/]))->GetFile(::STRINGS[2/*"js/Window.js"*/]));

    return WindowModule::_fileSourceInstance_;
}

// public WindowModule New() [static] :31
WindowModule* WindowModule::New3()
{
    WindowModule* obj1 = (WindowModule*)uNew(WindowModule_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Polyfills::Window
