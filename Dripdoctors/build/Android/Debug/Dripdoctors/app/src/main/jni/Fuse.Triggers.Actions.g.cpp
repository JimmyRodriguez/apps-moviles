// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Triggers.Actions.BringIntoView.h>
#include <Fuse.Triggers.Actions.BringToFront.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.CancelInteractions.h>
#include <Fuse.Triggers.Actions.Collapse.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Fuse.Triggers.Actions.DebugProperty-1.h>
#include <Fuse.Triggers.Actions.EvaluateJS.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.Hide.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions.ITaggedDebugProperty.h>
#include <Fuse.Triggers.Actions.JSEventArgs.h>
#include <Fuse.Triggers.Actions.JSEventHandler.h>
#include <Fuse.Triggers.Actions.LoadHtml.h>
#include <Fuse.Triggers.Actions.LoadUrl.h>
#include <Fuse.Triggers.Actions.Pause.h>
#include <Fuse.Triggers.Actions.PlaybackAction.h>
#include <Fuse.Triggers.Actions.PlayTo.h>
#include <Fuse.Triggers.Actions.Pulse.h>
#include <Fuse.Triggers.Actions.PulseBackward.h>
#include <Fuse.Triggers.Actions.PulseForward.h>
#include <Fuse.Triggers.Actions.RaiseUserEvent.h>
#include <Fuse.Triggers.Actions.ReleaseFocus.h>
#include <Fuse.Triggers.Actions.Reload.h>
#include <Fuse.Triggers.Actions.Resume.h>
#include <Fuse.Triggers.Actions.SendToBack.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Show.h>
#include <Fuse.Triggers.Actions.Stop.h>
#include <Fuse.Triggers.Actions.StopLoading.h>
#include <Fuse.Triggers.Actions.TransitionLayout.h>
#include <Fuse.Triggers.Actions.TransitionState.h>
#include <Fuse.Triggers.Actions.TransitionStateType.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerDirection.h>
#include <Fuse.Triggers.Actions.UserEventArg.h>
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.Visual.CancelInteractionsType.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.VisualEventMode.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[6];
static uType* TYPES[24];

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.32.14\Triggers\Actions\$.uno
// ------------------------------------------------------------------------

// public sealed class BringIntoView :41
// {
static void BringIntoView_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(BringIntoView);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringIntoView", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = BringIntoView_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringIntoView__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :43
void BringIntoView__Perform_fn(BringIntoView* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(target, ::TYPES[0/*Fuse.Elements.Element*/]);

    if (elm != NULL)
        uPtr(elm)->BringIntoView();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.32.14\Triggers\$.uno
// ----------------------------------------------------------------

// public sealed class BringToFront :39
// {
static void BringToFront_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(8,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Triggers::Actions::BringToFront, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(BringToFront);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringToFront", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = BringToFront_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringToFront__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :43
void BringToFront__Perform_fn(BringToFront* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1 = __this->Target();
    ::g::Fuse::Visual* elm = (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/]);

    if (elm != NULL)
    {
        ::g::Fuse::Visual* panel = uAs< ::g::Fuse::Visual*>(uPtr(elm)->Parent(), ::TYPES[1/*Fuse.Visual*/]);

        if (panel != NULL)
            uPtr(panel)->BringToFront(elm);
    }
}

// public generated Fuse.Visual get_Target() :41
void BringToFront__get_Target_fn(BringToFront* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :41
void BringToFront__set_Target_fn(BringToFront* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Fuse.Visual get_Target() [instance] :41
::g::Fuse::Visual* BringToFront::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :41
void BringToFront::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class Callback :26
// {
static void Callback_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Delegate_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[4] = ::g::Fuse::VisualEventHandler_typeof();
    type->SetFields(8,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Triggers::Actions::Callback, _Action), 0,
        ::g::Fuse::VisualEventHandler_typeof(), offsetof(::g::Fuse::Triggers::Actions::Callback, Handler1), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Callback", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = Callback_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Callback__Perform_fn;
    return type;
}

// public generated Uno.Action get_Action() :28
void Callback__get_Action_fn(Callback* __this, uDelegate** __retval)
{
    *__retval = __this->Action();
}

// public generated void set_Action(Uno.Action value) :28
void Callback__set_Action_fn(Callback* __this, uDelegate* value)
{
    __this->Action(value);
}

// public generated void add_Handler(Fuse.VisualEventHandler value) :30
void Callback__add_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.VisualEventHandler value) :30
void Callback__remove_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// protected override sealed void Perform(Fuse.Node target) :32
void Callback__Perform_fn(Callback* __this, ::g::Fuse::Node* target)
{
    if (::g::Uno::Delegate::op_Inequality(__this->Action(), NULL))
        uPtr(__this->Action())->InvokeVoid();

    if (::g::Uno::Delegate::op_Inequality(__this->Handler1, NULL))
        uPtr(__this->Handler1)->Invoke(2, target, (::g::Fuse::VisualEventArgs*)::g::Fuse::VisualEventArgs::New2(uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/])));
}

// public generated Uno.Action get_Action() [instance] :28
uDelegate* Callback::Action()
{
    return _Action;
}

// public generated void set_Action(Uno.Action value) [instance] :28
void Callback::Action(uDelegate* value)
{
    _Action = value;
}

// public generated void add_Handler(Fuse.VisualEventHandler value) [instance] :30
void Callback::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[4/*Fuse.VisualEventHandler*/]);
}

// public generated void remove_Handler(Fuse.VisualEventHandler value) [instance] :30
void Callback::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[4/*Fuse.VisualEventHandler*/]);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class CancelInteractions :53
// {
static void CancelInteractions_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(8,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Triggers::Actions::CancelInteractions, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(CancelInteractions);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.CancelInteractions", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = CancelInteractions_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))CancelInteractions__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :57
void CancelInteractions__Perform_fn(CancelInteractions* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1 = __this->Target();
    ::g::Fuse::Visual* t = (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/]);

    if (t != NULL)
        uPtr(t)->CancelInteractions(1);
}

// public generated Fuse.Visual get_Target() :55
void CancelInteractions__get_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :55
void CancelInteractions__set_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Fuse.Visual get_Target() [instance] :55
::g::Fuse::Visual* CancelInteractions::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :55
void CancelInteractions::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class Collapse :911
// {
static void Collapse_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::ICollapse_typeof();
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Collapse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Collapse", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = Collapse_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Collapse__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :913
void Collapse__Perform_fn(Collapse* __this, ::g::Fuse::Node* target)
{
    if (uIs(target, ::TYPES[5/*Fuse.Triggers.Actions.ICollapse*/]))
        ::g::Fuse::Triggers::Actions::ICollapse::Collapse(uInterface(uPtr((uObject*)target), ::TYPES[5/*Fuse.Triggers.Actions.ICollapse*/]));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class DebugAction :88
// {
static void DebugAction_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" = ");
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof());
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof();
    type->SetFields(8,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof()), offsetof(::g::Fuse::Triggers::Actions::DebugAction, _props), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::DebugAction, _Message), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(DebugAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.DebugAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = DebugAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))DebugAction__Perform_fn;
    return type;
}

// public generated string get_Message() :90
void DebugAction__get_Message_fn(DebugAction* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public generated void set_Message(string value) :90
void DebugAction__set_Message_fn(DebugAction* __this, uString* value)
{
    __this->Message(value);
}

// protected override sealed void Perform(Fuse.Node target) :104
void DebugAction__Perform_fn(DebugAction* __this, ::g::Fuse::Node* target)
{
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret3;

    if (::g::Uno::String::op_Inequality(__this->Message(), NULL))
        ::g::Uno::Diagnostics::Debug::Log3(__this->Message());

    if (__this->_props != NULL)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_props), &ret3), ret3); enum1.MoveNext(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]); )
        {
            uObject* prop = enum1.Current(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
            ::g::Uno::Diagnostics::Debug::Log3(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetTag(uInterface(uPtr(prop), ::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/])), ::STRINGS[0/*" = "*/]), ::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetStringValue(uInterface(uPtr(prop), ::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/]))));
        }
}

// public generated string get_Message() [instance] :90
uString* DebugAction::Message()
{
    return _Message;
}

// public generated void set_Message(string value) [instance] :90
void DebugAction::Message(uString* value)
{
    _Message = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class DebugProperty<T> :137
// {
static void DebugProperty_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    ::TYPES[3] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugProperty_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::DebugProperty, _Tag), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::Actions::DebugProperty, _Value), 0);
}

DebugProperty_type* DebugProperty_typeof()
{
    static uSStrong<DebugProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DebugProperty);
    options.TypeSize = sizeof(DebugProperty_type);
    type = (DebugProperty_type*)uClassType::New("Fuse.Triggers.Actions.DebugProperty`1", options);
    type->fp_build_ = DebugProperty_build;
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugProperty__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugProperty__GetStringValue_fn;
    return type;
}

// public string GetStringValue() :153
void DebugProperty__GetStringValue_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag() :148
void DebugProperty__GetTag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public generated string get_Tag() :139
void DebugProperty__get_Tag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->Tag();
}

// public generated void set_Tag(string value) :139
void DebugProperty__set_Tag_fn(DebugProperty* __this, uString* value)
{
    __this->Tag(value);
}

// public generated Uno.UX.Property<T> get_Value() :140
void DebugProperty__get_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(Uno.UX.Property<T> value) :140
void DebugProperty__set_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1* value)
{
    __this->Value(value);
}

// public string GetStringValue() [instance] :153
uString* DebugProperty::GetStringValue()
{
    uType* __types[] = {
        __type->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return ::g::Uno::String::op_Addition1(::STRINGS[1/*""*/], uBoxPtr(__types[0], (uPtr(Value())->Get_ex(&ret2), ret2)));
}

// public string GetTag() [instance] :148
uString* DebugProperty::GetTag()
{
    return Tag();
}

// public generated string get_Tag() [instance] :139
uString* DebugProperty::Tag()
{
    return _Tag;
}

// public generated void set_Tag(string value) [instance] :139
void DebugProperty::Tag(uString* value)
{
    _Tag = value;
}

// public generated Uno.UX.Property<T> get_Value() [instance] :140
::g::Uno::UX::Property1* DebugProperty::Value()
{
    return _Value;
}

// public generated void set_Value(Uno.UX.Property<T> value) [instance] :140
void DebugProperty::Value(::g::Uno::UX::Property1* value)
{
    _Value = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.WebView\0.32.14\$.uno
// ---------------------------------------------------------------

// public sealed class EvaluateJS :860
// {
static void EvaluateJS_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    ::TYPES[8] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::Delegate_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[10] = ::g::Fuse::Triggers::Actions::JSEventHandler_typeof();
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _processedSource), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _rawSource), 0,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _target), 0,
        ::g::Fuse::Triggers::Actions::JSEventHandler_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, Handler1), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(EvaluateJS);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.EvaluateJS", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = EvaluateJS_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))EvaluateJS__Perform_fn;
    return type;
}

// private void Execute() :904
void EvaluateJS__Execute_fn(EvaluateJS* __this)
{
    __this->Execute();
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) :866
void EvaluateJS__add_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) :866
void EvaluateJS__remove_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// protected override sealed void Perform(Fuse.Node target) :891
void EvaluateJS__Perform_fn(EvaluateJS* __this, ::g::Fuse::Node* target)
{
    if ((__this->_target == NULL) && uIs(target, ::TYPES[8/*Fuse.Controls.IWebView*/]))
        __this->_target = uAs<uObject*>(target, ::TYPES[8/*Fuse.Controls.IWebView*/]);

    if ((__this->_target != NULL) && ::g::Uno::String::op_Inequality(__this->_rawSource, ::STRINGS[1/*""*/]))
        __this->Execute();
}

// private void ResultHandler(string result) :909
void EvaluateJS__ResultHandler_fn(EvaluateJS* __this, uString* result)
{
    __this->ResultHandler(result);
}

// public Fuse.Controls.IWebView get_WebView() :869
void EvaluateJS__get_WebView_fn(EvaluateJS* __this, uObject** __retval)
{
    *__retval = __this->WebView();
}

// public void set_WebView(Fuse.Controls.IWebView value) :870
void EvaluateJS__set_WebView_fn(EvaluateJS* __this, uObject* value)
{
    __this->WebView(value);
}

// private void Execute() [instance] :904
void EvaluateJS::Execute()
{
    ::g::Fuse::Controls::IWebView::Eval1(uInterface(uPtr(WebView()), ::TYPES[8/*Fuse.Controls.IWebView*/]), _processedSource, uDelegate::New(::TYPES[9/*Uno.Action<string>*/], (void*)EvaluateJS__ResultHandler_fn, this));
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance] :866
void EvaluateJS::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[10/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance] :866
void EvaluateJS::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[10/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// private void ResultHandler(string result) [instance] :909
void EvaluateJS::ResultHandler(uString* result)
{
    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Triggers::Actions::JSEventArgs*)::g::Fuse::Triggers::Actions::JSEventArgs::New2(result));
}

// public Fuse.Controls.IWebView get_WebView() [instance] :869
uObject* EvaluateJS::WebView()
{
    return _target;
}

// public void set_WebView(Fuse.Controls.IWebView value) [instance] :870
void EvaluateJS::WebView(uObject* value)
{
    _target = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class GiveFocus :212
// {
// static GiveFocus() :212
static void GiveFocus__cctor__fn(uType* __type)
{
    GiveFocus::Singleton_ = GiveFocus::New2();
}

static void GiveFocus_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(8,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Triggers::Actions::GiveFocus, _Target), 0,
        ::g::Fuse::Triggers::Actions::TriggerAction_typeof(), (uintptr_t)&::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(GiveFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.GiveFocus", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = GiveFocus_build;
    type->fp_ctor_ = (void*)GiveFocus__New2_fn;
    type->fp_cctor_ = GiveFocus__cctor__fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))GiveFocus__Perform_fn;
    return type;
}

// public generated GiveFocus() :212
void GiveFocus__ctor_2_fn(GiveFocus* __this)
{
    __this->ctor_2();
}

// public generated GiveFocus New() :212
void GiveFocus__New2_fn(GiveFocus** __retval)
{
    *__retval = GiveFocus::New2();
}

// protected override sealed void Perform(Fuse.Node target) :216
void GiveFocus__Perform_fn(GiveFocus* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Input::Focus::GiveTo((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/])));
}

// public generated Fuse.Visual get_Target() :214
void GiveFocus__get_Target_fn(GiveFocus* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :214
void GiveFocus__set_Target_fn(GiveFocus* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction*> GiveFocus::Singleton_;

// public generated GiveFocus() [instance] :212
void GiveFocus::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Visual get_Target() [instance] :214
::g::Fuse::Visual* GiveFocus::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :214
void GiveFocus::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated GiveFocus New() [static] :212
GiveFocus* GiveFocus::New2()
{
    GiveFocus* obj2 = (GiveFocus*)uNew(GiveFocus_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class Hide :875
// {
static void Hide_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Triggers::Actions::IHide_typeof();
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Hide);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Hide", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = Hide_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Hide__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :877
void Hide__Perform_fn(Hide* __this, ::g::Fuse::Node* target)
{
    if (uIs(target, ::TYPES[12/*Fuse.Triggers.Actions.IHide*/]))
        ::g::Fuse::Triggers::Actions::IHide::Hide(uInterface(uPtr((uObject*)target), ::TYPES[12/*Fuse.Triggers.Actions.IHide*/]));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public abstract interface ICollapse :883
// {
uInterfaceType* ICollapse_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ICollapse", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public abstract interface IHide :847
// {
uInterfaceType* IHide_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IHide", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public abstract interface IShow :805
// {
uInterfaceType* IShow_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IShow", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public abstract interface ITaggedDebugProperty :131
// {
uInterfaceType* ITaggedDebugProperty_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ITaggedDebugProperty", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.WebView\0.32.14\$.uno
// ---------------------------------------------------------------

// public sealed class JSEventArgs :765
// {
static void JSEventArgs_build(uType* type)
{
    ::STRINGS[2] = uString::Const("json");
    ::TYPES[13] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(JSEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::JSEventArgs, ResultJson), 0);
}

JSEventArgs_type* JSEventArgs_typeof()
{
    static uSStrong<JSEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JSEventArgs);
    options.TypeSize = sizeof(JSEventArgs_type);
    type = (JSEventArgs_type*)uClassType::New("Fuse.Triggers.Actions.JSEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_build_ = JSEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))JSEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public JSEventArgs(string resultJson) :768
void JSEventArgs__ctor_1_fn(JSEventArgs* __this, uString* resultJson)
{
    __this->ctor_1(resultJson);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :773
void JSEventArgs__FuseScriptingIScriptEventSerialize_fn(JSEventArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[13/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[2/*"json"*/], __this->ResultJson);
}

// public JSEventArgs New(string resultJson) :768
void JSEventArgs__New2_fn(uString* resultJson, JSEventArgs** __retval)
{
    *__retval = JSEventArgs::New2(resultJson);
}

// public JSEventArgs(string resultJson) [instance] :768
void JSEventArgs::ctor_1(uString* resultJson)
{
    ctor_();
    ResultJson = resultJson;
}

// public JSEventArgs New(string resultJson) [static] :768
JSEventArgs* JSEventArgs::New2(uString* resultJson)
{
    JSEventArgs* obj1 = (JSEventArgs*)uNew(JSEventArgs_typeof());
    obj1->ctor_1(resultJson);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.WebView\0.32.14\$.uno
// ---------------------------------------------------------------

// public delegate void JSEventHandler(object sender, Fuse.Triggers.Actions.JSEventArgs args) :779
uDelegateType* JSEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.Actions.JSEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::Actions::JSEventArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls.WebView\0.32.14\$.uno
// ---------------------------------------------------------------

// public sealed class LoadHtml :674
// {
static void LoadHtml_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    type->SetInterfaces(
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(LoadHtml_type, interface0));
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadHtml, _BaseUrl), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadHtml, _Source), 0);
}

LoadHtml_type* LoadHtml_typeof()
{
    static uSStrong<LoadHtml_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadHtml);
    options.TypeSize = sizeof(LoadHtml_type);
    type = (LoadHtml_type*)uClassType::New("Fuse.Triggers.Actions.LoadHtml", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_build_ = LoadHtml_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))LoadHtml__Execute_fn;
    type->interface0.fp_get_Source = (void(*)(uObject*, uString**))LoadHtml__get_Source_fn;
    type->interface0.fp_set_Source = (void(*)(uObject*, uString*))LoadHtml__set_Source_fn;
    return type;
}

// public generated string get_BaseUrl() :693
void LoadHtml__get_BaseUrl_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :693
void LoadHtml__set_BaseUrl_fn(LoadHtml* __this, uString* value)
{
    __this->BaseUrl(value);
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :695
void LoadHtml__Execute_fn(LoadHtml* __this, ::g::Fuse::Controls::WebView* webview)
{
    if (::g::Uno::String::op_Inequality(__this->Source(), ::STRINGS[1/*""*/]))
        uPtr(webview)->LoadHtml1(__this->Source(), __this->BaseUrl());
}

// public generated string get_Source() :678
void LoadHtml__get_Source_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(string value) :678
void LoadHtml__set_Source_fn(LoadHtml* __this, uString* value)
{
    __this->Source(value);
}

// public generated string get_BaseUrl() [instance] :693
uString* LoadHtml::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :693
void LoadHtml::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public generated string get_Source() [instance] :678
uString* LoadHtml::Source()
{
    return _Source;
}

// public generated void set_Source(string value) [instance] :678
void LoadHtml::Source(uString* value)
{
    _Source = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.WebView\0.32.14\$.uno
// ---------------------------------------------------------------

// public sealed class LoadUrl :641
// {
static void LoadUrl_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadUrl, _Url), 0);
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(LoadUrl);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.LoadUrl", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_build_ = LoadUrl_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))LoadUrl__Execute_fn;
    return type;
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :646
void LoadUrl__Execute_fn(LoadUrl* __this, ::g::Fuse::Controls::WebView* webview)
{
    if (::g::Uno::String::op_Inequality(__this->Url(), ::STRINGS[1/*""*/]))
        uPtr(webview)->LoadUrl(__this->Url());
}

// public generated string get_Url() :644
void LoadUrl__get_Url_fn(LoadUrl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public generated void set_Url(string value) :644
void LoadUrl__set_Url_fn(LoadUrl* __this, uString* value)
{
    __this->Url(value);
}

// public generated string get_Url() [instance] :644
uString* LoadUrl::Url()
{
    return _Url;
}

// public generated void set_Url(string value) [instance] :644
void LoadUrl::Url(uString* value)
{
    _Url = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class Pause :375
// {
static void Pause_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(9);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Pause);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pause", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_build_ = Pause_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pause__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :377
void Pause__Perform_fn(Pause* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[14/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanPause(uInterface(uPtr(t), ::TYPES[14/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::Pause(uInterface(uPtr(t), ::TYPES[14/*Fuse.Triggers.IPlayback*/]));
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public abstract class PlaybackAction :270
// {
static void PlaybackAction_build(uType* type)
{
    type->SetFields(8,
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(::g::Fuse::Triggers::Actions::PlaybackAction, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PlaybackAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlaybackAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = PlaybackAction_build;
    return type;
}

// public generated Fuse.Triggers.IPlayback get_Target() :272
void PlaybackAction__get_Target_fn(PlaybackAction* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) :272
void PlaybackAction__set_Target_fn(PlaybackAction* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.IPlayback get_Target() [instance] :272
uObject* PlaybackAction::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) [instance] :272
void PlaybackAction::Target(uObject* value)
{
    _Target = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class PlayTo :501
// {
static void PlayTo_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(9,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Actions::PlayTo, _Progress), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(PlayTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlayTo", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_build_ = PlayTo_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PlayTo__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :505
void PlayTo__Perform_fn(PlayTo* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[14/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanPlayTo(uInterface(uPtr(t), ::TYPES[14/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::PlayTo(uInterface(uPtr(t), ::TYPES[14/*Fuse.Triggers.IPlayback*/]), __this->Progress());
    }
}

// public generated double get_Progress() :503
void PlayTo__get_Progress_fn(PlayTo* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void set_Progress(double value) :503
void PlayTo__set_Progress_fn(PlayTo* __this, double* value)
{
    __this->Progress(*value);
}

// public generated double get_Progress() [instance] :503
double PlayTo::Progress()
{
    return _Progress;
}

// public generated void set_Progress(double value) [instance] :503
void PlayTo::Progress(double value)
{
    _Progress = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class Pulse :539
// {
static void Pulse_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Triggers::IPulseTrigger_typeof();
    type->SetFields(8,
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::Actions::Pulse, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Pulse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pulse", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = Pulse_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pulse__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :543
void Pulse__Perform_fn(Pulse* __this, ::g::Fuse::Node* target)
{
    uObject* t = __this->Target();

    if (t != NULL)
        ::g::Fuse::Triggers::IPulseTrigger::Pulse(uInterface(uPtr(t), ::TYPES[15/*Fuse.Triggers.IPulseTrigger*/]));
}

// public generated Fuse.Triggers.IPulseTrigger get_Target() :541
void Pulse__get_Target_fn(Pulse* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value) :541
void Pulse__set_Target_fn(Pulse* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.IPulseTrigger get_Target() [instance] :541
uObject* Pulse::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value) [instance] :541
void Pulse::Target(uObject* value)
{
    _Target = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class PulseBackward :554
// {
static void PulseBackward_build(uType* type)
{
    type->SetFields(8,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::Fuse::Triggers::Actions::PulseBackward, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PulseBackward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PulseBackward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseBackward", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = PulseBackward_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseBackward__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :558
void PulseBackward__Perform_fn(PulseBackward* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseBackward1();
}

// public generated Fuse.Triggers.Timeline get_Target() :556
void PulseBackward__get_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value) :556
void PulseBackward__set_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Timeline get_Target() [instance] :556
::g::Fuse::Triggers::Timeline* PulseBackward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance] :556
void PulseBackward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class PulseForward :569
// {
static void PulseForward_build(uType* type)
{
    type->SetFields(8,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::Fuse::Triggers::Actions::PulseForward, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PulseForward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PulseForward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseForward", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = PulseForward_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseForward__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :573
void PulseForward__Perform_fn(PulseForward* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseForward();
}

// public generated Fuse.Triggers.Timeline get_Target() :571
void PulseForward__get_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value) :571
void PulseForward__set_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Timeline get_Target() [instance] :571
::g::Fuse::Triggers::Timeline* PulseForward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance] :571
void PulseForward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.32.14\$.uno
// ---------------------------------------------------------

// public sealed class RaiseUserEvent :146
// {
static void RaiseUserEvent_build(uType* type)
{
    ::STRINGS[3] = uString::Const("no UserEvent found: ");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.UserEvents\\0.32.14\\$.uno");
    ::STRINGS[5] = uString::Const("Perform");
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof());
    ::TYPES[17] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[18] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof());
    ::TYPES[19] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[20] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof());
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[3] = uObject_typeof();
    type->SetFields(8,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof()), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _args), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _event), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _eventName), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _eventTarget), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(RaiseUserEvent);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.RaiseUserEvent", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = RaiseUserEvent_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RaiseUserEvent__Perform_fn;
    return type;
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() :199
void RaiseUserEvent__ConvertArgs_fn(RaiseUserEvent* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->ConvertArgs();
}

// public Uno.UX.Selector get_EventName() :154
void RaiseUserEvent__get_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->EventName();
}

// public void set_EventName(Uno.UX.Selector value) :155
void RaiseUserEvent__set_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* value)
{
    __this->EventName(*value);
}

// protected override sealed void Perform(Fuse.Node target) :181
void RaiseUserEvent__Perform_fn(RaiseUserEvent* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if ((__this->_event == NULL) || (__this->_eventTarget != v))
    {
        ::g::Fuse::Visual* n;
        __this->_event = ::g::Fuse::UserEvent::ScanTree(v, __this->EventName(), &n);
        __this->_eventTarget = v;
    }

    if (__this->_event == NULL)
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[3/*"no UserEven...*/], ::g::Uno::UX::Selector__op_Implicit1(__this->EventName())), __this, ::STRINGS[4/*"C:\\Program...*/], 194, ::STRINGS[5/*"Perform"*/]);
    else
        uPtr(__this->_event)->Raise(__this->ConvertArgs());
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() [instance] :199
::g::Uno::Collections::Dictionary* RaiseUserEvent::ConvertArgs()
{
    ::g::Fuse::Triggers::Actions::UserEventArg* ret3;

    if ((_args == NULL) || (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_args), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/])) == 0))
        return NULL;

    ::g::Uno::Collections::Dictionary* d = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[17/*Uno.Collections.Dictionary<string, object>*/]);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_args), ::TYPES[18/*Uno.Collections.IEnumerable<Fuse.Triggers.Actions.UserEventArg>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[19/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Triggers::Actions::UserEventArg* arg = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[20/*Uno.Collections.IEnumerator<Fuse.Triggers.Actions.UserEventArg>*/]), &ret3), ret3);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(d), uPtr(arg)->Name(), uPtr(arg)->Value());
    }

    return d;
}

// public Uno.UX.Selector get_EventName() [instance] :154
::g::Uno::UX::Selector RaiseUserEvent::EventName()
{
    return _eventName;
}

// public void set_EventName(Uno.UX.Selector value) [instance] :155
void RaiseUserEvent::EventName(::g::Uno::UX::Selector value)
{
    _eventName = value;
    _event = NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class ReleaseFocus :229
// {
static void ReleaseFocus_build(uType* type)
{
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ReleaseFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.ReleaseFocus", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = ReleaseFocus_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ReleaseFocus__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :231
void ReleaseFocus__Perform_fn(ReleaseFocus* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Input::Focus::GiveTo(NULL);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.WebView\0.32.14\$.uno
// ---------------------------------------------------------------

// public sealed class Reload :617
// {
static void Reload_build(uType* type)
{
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Reload);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.Reload", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_build_ = Reload_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))Reload__Execute_fn;
    return type;
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :619
void Reload__Execute_fn(Reload* __this, ::g::Fuse::Controls::WebView* webview)
{
    uPtr(webview)->Reload();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class Resume :444
// {
static void Resume_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(9);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Resume_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Resume);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Resume", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_build_ = Resume_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Resume__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :446
void Resume__Perform_fn(Resume* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[14/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanResume(uInterface(uPtr(t), ::TYPES[14/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::Resume(uInterface(uPtr(t), ::TYPES[14/*Fuse.Triggers.IPlayback*/]));
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.32.14\Triggers\$.uno
// ----------------------------------------------------------------

// public sealed class SendToBack :58
// {
static void SendToBack_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(8,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Triggers::Actions::SendToBack, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(SendToBack);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.SendToBack", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = SendToBack_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SendToBack__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :62
void SendToBack__Perform_fn(SendToBack* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1 = __this->Target();
    ::g::Fuse::Visual* elm = (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/]);

    if (elm != NULL)
    {
        ::g::Fuse::Visual* panel = uAs< ::g::Fuse::Visual*>(uPtr(elm)->Parent(), ::TYPES[1/*Fuse.Visual*/]);

        if (panel != NULL)
            uPtr(panel)->SendToBack(elm);
    }
}

// public generated Fuse.Visual get_Target() :60
void SendToBack__get_Target_fn(SendToBack* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :60
void SendToBack__set_Target_fn(SendToBack* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Fuse.Visual get_Target() [instance] :60
::g::Fuse::Visual* SendToBack::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :60
void SendToBack::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class Set<T> :617
// {
static void Set_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Delegate_typeof();
    type->SetFields(8,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::Actions::Set, _blender), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::Set, _hasIncrement), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::Actions::Set, _Expression), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::Actions::Set, _Target), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Set);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Set`1", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = Set_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Set__Perform_fn;
    return type;
}

// public generated Uno.UX.Expression<T> get_Expression() :621
void Set__get_Expression_fn(Set* __this, uDelegate** __retval)
{
    *__retval = __this->Expression();
}

// public generated void set_Expression(Uno.UX.Expression<T> value) :621
void Set__set_Expression_fn(Set* __this, uDelegate* value)
{
    __this->Expression(value);
}

// protected override sealed void Perform(Fuse.Node target) :636
void Set__Perform_fn(Set* __this, ::g::Fuse::Node* target)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_hasIncrement)
        Set__Update_fn(__this, (uPtr(__this->_blender)->Add_ex((uPtr(__this->Target())->Get_ex(&ret3), ret3), __this->_increment(), &ret2), ret2));
    else if (::g::Uno::Delegate::op_Inequality(__this->Expression(), NULL))
        Set__Update_fn(__this, (uPtr(__this->Expression())->Invoke(&ret4), ret4));
    else
        Set__Update_fn(__this, (Set__get_Value_fn(__this, &ret5), ret5));
}

// public generated Uno.UX.Property<T> get_Target() :619
void Set__get_Target_fn(Set* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :619
void Set__set_Target_fn(Set* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void Update(T value) :631
void Set__Update_fn(Set* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uPtr(__this->Target())->Set_ex(value, NULL);
}

// public generated T get_Value() :620
void Set__get_Value_fn(Set* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// public generated void set_Value(T value) :620
void Set__set_Value_fn(Set* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_Value() = value;
}

// public generated Uno.UX.Expression<T> get_Expression() [instance] :621
uDelegate* Set::Expression()
{
    return _Expression;
}

// public generated void set_Expression(Uno.UX.Expression<T> value) [instance] :621
void Set::Expression(uDelegate* value)
{
    _Expression = value;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :619
::g::Uno::UX::Property1* Set::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :619
void Set::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class Show :839
// {
static void Show_build(uType* type)
{
    ::TYPES[21] = ::g::Fuse::Triggers::Actions::IShow_typeof();
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Show);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Show", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = Show_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Show__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :841
void Show__Perform_fn(Show* __this, ::g::Fuse::Node* target)
{
    if (uIs(target, ::TYPES[21/*Fuse.Triggers.Actions.IShow*/]))
        ::g::Fuse::Triggers::Actions::IShow::Show(uInterface(uPtr((uObject*)target), ::TYPES[21/*Fuse.Triggers.Actions.IShow*/]));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class Stop :342
// {
static void Stop_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(9);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Stop);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Stop", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_build_ = Stop_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Stop__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :344
void Stop__Perform_fn(Stop* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[14/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanStop(uInterface(uPtr(t), ::TYPES[14/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::Stop(uInterface(uPtr(t), ::TYPES[14/*Fuse.Triggers.IPlayback*/]));
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.WebView\0.32.14\$.uno
// ---------------------------------------------------------------

// public sealed class StopLoading :629
// {
static void StopLoading_build(uType* type)
{
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(StopLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.StopLoading", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_build_ = StopLoading_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))StopLoading__Execute_fn;
    return type;
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :631
void StopLoading__Execute_fn(StopLoading* __this, ::g::Fuse::Controls::WebView* webview)
{
    uPtr(webview)->Stop();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.32.14\Triggers\$.uno
// ----------------------------------------------------------------

// public sealed class TransitionLayout :337
// {
static void TransitionLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[22] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(8,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionLayout, _perform), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionLayout, _From), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(TransitionLayout);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionLayout", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = TransitionLayout_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionLayout__Perform_fn;
    return type;
}

// public generated Fuse.Elements.Element get_From() :339
void TransitionLayout__get_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->From();
}

// public generated void set_From(Fuse.Elements.Element value) :339
void TransitionLayout__set_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value)
{
    __this->From(value);
}

// protected override sealed void Perform(Fuse.Node target) :340
void TransitionLayout__Perform_fn(TransitionLayout* __this, ::g::Fuse::Node* target)
{
    __this->_perform = uAs< ::g::Fuse::Elements::Element*>(target, ::TYPES[0/*Fuse.Elements.Element*/]);

    if ((__this->_perform == NULL) || (__this->From() == NULL))
        return;

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[22/*Uno.Action*/], (void*)TransitionLayout__Transition_fn, __this), 1, ::g::Fuse::LayoutPriority::Placement());
}

// private void Transition() :351
void TransitionLayout__Transition_fn(TransitionLayout* __this)
{
    __this->Transition();
}

// public generated Fuse.Elements.Element get_From() [instance] :339
::g::Fuse::Elements::Element* TransitionLayout::From()
{
    return _From;
}

// public generated void set_From(Fuse.Elements.Element value) [instance] :339
void TransitionLayout::From(::g::Fuse::Elements::Element* value)
{
    _From = value;
}

// private void Transition() [instance] :351
void TransitionLayout::Transition()
{
    ::g::Uno::Float4x4 ind1 = uPtr(From())->LocalTransform();
    ::g::Uno::Float2 oldPosition = ::g::Uno::Float2__New2(ind1.M41, ind1.M42);
    ::g::Uno::Float2 oldSize = uPtr(From())->ActualSize();
    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(uPtr(From())->WorldTransform(), uPtr(uPtr(_perform)->Parent())->WorldTransformInverse());
    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New2(m.M41, m.M42, m.M43), ::g::Uno::Float3__New4(uPtr(_perform)->IntendedPosition(), 0.0f));
    ::g::Fuse::Triggers::LayoutTransition::SetWorldPositionChange(_perform, worldChange);
    ::g::Fuse::Triggers::LayoutTransition::SetPositionChange(_perform, oldPosition, uPtr(_perform)->IntendedPosition());
    ::g::Fuse::Triggers::LayoutTransition::SetSizeChange(_perform, oldSize, uPtr(_perform)->IntendedSize());
    uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned())->RaiseWithoutBubble(::g::Fuse::Triggers::LayoutTransitionedArgs::New3(_perform), 0);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public sealed class TransitionState :679
// {
static void TransitionState_build(uType* type)
{
    type->SetFields(8,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionState, _Target), 0,
        ::g::Fuse::Triggers::Actions::TransitionStateType_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionState, _Type), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(TransitionState);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionState", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = TransitionState_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionState__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :685
void TransitionState__Perform_fn(TransitionState* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::StateGroup* t = __this->Target();

    switch (__this->Type())
    {
        case 0:
        {
            uPtr(t)->GotoNextState();
            break;
        }
    }
}

// public generated Fuse.Triggers.StateGroup get_Target() :681
void TransitionState__get_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) :681
void TransitionState__set_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() :683
void TransitionState__get_Type_fn(TransitionState* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) :683
void TransitionState__set_Type_fn(TransitionState* __this, int* value)
{
    __this->Type(*value);
}

// public generated Fuse.Triggers.StateGroup get_Target() [instance] :681
::g::Fuse::Triggers::StateGroup* TransitionState::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) [instance] :681
void TransitionState::Target(::g::Fuse::Triggers::StateGroup* value)
{
    _Target = value;
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() [instance] :683
int TransitionState::Type()
{
    return _Type;
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) [instance] :683
void TransitionState::Type(int value)
{
    _Type = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public enum TransitionStateType :671
uEnumType* TransitionStateType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TransitionStateType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Next", 0LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public abstract class TriggerAction :724
// {
static void TriggerAction_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _delay), 0,
        ::g::Fuse::Triggers::Actions::TriggerDirection_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _direction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _hasDelay), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _hasProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _isActive), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _progress), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _TargetNode), 0);
}

TriggerAction_type* TriggerAction_typeof()
{
    static uSStrong<TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TriggerAction);
    options.TypeSize = sizeof(TriggerAction_type);
    type = (TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TriggerAction", options);
    type->SetBase(::g::Uno::UX::PropertyObject_typeof());
    type->fp_build_ = TriggerAction_build;
    return type;
}

// protected generated TriggerAction() :724
void TriggerAction__ctor_1_fn(TriggerAction* __this)
{
    __this->ctor_1();
}

// public float get_Delay() :758
void TriggerAction__get_Delay_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->Delay();
}

// public void set_Delay(float value) :759
void TriggerAction__set_Delay_fn(TriggerAction* __this, float* value)
{
    __this->Delay(*value);
}

// public Fuse.Triggers.Actions.TriggerDirection get_Direction() :729
void TriggerAction__get_Direction_fn(TriggerAction* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Triggers.Actions.TriggerDirection value) :730
void TriggerAction__set_Direction_fn(TriggerAction* __this, int* value)
{
    __this->Direction(*value);
}

// public bool get_IsActive() :774
void TriggerAction__get_IsActive_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :775
void TriggerAction__set_IsActive_fn(TriggerAction* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsProgressTriggered() :768
void TriggerAction__get_IsProgressTriggered_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsProgressTriggered();
}

// public void PerformFromNode(Fuse.Node target) :787
void TriggerAction__PerformFromNode_fn(TriggerAction* __this, ::g::Fuse::Node* target)
{
    __this->PerformFromNode(target);
}

// public float ProgressWhen(float totalDuration) :778
void TriggerAction__ProgressWhen_fn(TriggerAction* __this, float* totalDuration, float* __retval)
{
    *__retval = __this->ProgressWhen(*totalDuration);
}

// public generated Fuse.Node get_TargetNode() :734
void TriggerAction__get_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->TargetNode();
}

// public generated void set_TargetNode(Fuse.Node value) :734
void TriggerAction__set_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node* value)
{
    __this->TargetNode(value);
}

// protected generated TriggerAction() [instance] :724
void TriggerAction::ctor_1()
{
    _isActive = true;
    ctor_();
}

// public float get_Delay() [instance] :758
float TriggerAction::Delay()
{
    return _delay;
}

// public void set_Delay(float value) [instance] :759
void TriggerAction::Delay(float value)
{
    _hasDelay = true;
    _delay = value;
}

// public Fuse.Triggers.Actions.TriggerDirection get_Direction() [instance] :729
int TriggerAction::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Triggers.Actions.TriggerDirection value) [instance] :730
void TriggerAction::Direction(int value)
{
    _direction = value;
}

// public bool get_IsActive() [instance] :774
bool TriggerAction::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :775
void TriggerAction::IsActive(bool value)
{
    _isActive = value;
}

// public bool get_IsProgressTriggered() [instance] :768
bool TriggerAction::IsProgressTriggered()
{
    return _hasProgress || _hasDelay;
}

// public void PerformFromNode(Fuse.Node target) [instance] :787
void TriggerAction::PerformFromNode(::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1;

    if (IsActive())
        Perform((ind1 = TargetNode(), (ind1 != NULL) ? ind1 : target));
}

// public float ProgressWhen(float totalDuration) [instance] :778
float TriggerAction::ProgressWhen(float totalDuration)
{
    if (_hasProgress)
        return _progress;

    if (_hasDelay)
        return _delay / totalDuration;

    return 0.0f;
}

// public generated Fuse.Node get_TargetNode() [instance] :734
::g::Fuse::Node* TriggerAction::TargetNode()
{
    return _TargetNode;
}

// public generated void set_TargetNode(Fuse.Node value) [instance] :734
void TriggerAction::TargetNode(::g::Fuse::Node* value)
{
    _TargetNode = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno
// ---------------------------------------------------------------

// public enum TriggerDirection :705
uEnumType* TriggerDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TriggerDirection", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL,
        "Both", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.32.14\$.uno
// ---------------------------------------------------------

// public sealed class UserEventArg :221
// {
static void UserEventArg_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::UserEventArg, _Name), 0,
        uObject_typeof(), offsetof(::g::Fuse::Triggers::Actions::UserEventArg, _Value), 0);
}

uType* UserEventArg_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UserEventArg);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.Actions.UserEventArg", options);
    type->SetBase(::g::Uno::UX::PropertyObject_typeof());
    type->fp_build_ = UserEventArg_build;
    return type;
}

// public generated string get_Name() :226
void UserEventArg__get_Name_fn(UserEventArg* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :226
void UserEventArg__set_Name_fn(UserEventArg* __this, uString* value)
{
    __this->Name(value);
}

// public generated object get_Value() :237
void UserEventArg__get_Value_fn(UserEventArg* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(object value) :237
void UserEventArg__set_Value_fn(UserEventArg* __this, uObject* value)
{
    __this->Value(value);
}

// public generated string get_Name() [instance] :226
uString* UserEventArg::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :226
void UserEventArg::Name(uString* value)
{
    _Name = value;
}

// public generated object get_Value() [instance] :237
uObject* UserEventArg::Value()
{
    return _Value;
}

// public generated void set_Value(object value) [instance] :237
void UserEventArg::Value(uObject* value)
{
    _Value = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls.WebView\0.32.14\$.uno
// ---------------------------------------------------------------

// internal abstract class WebViewNavAction :597
// {
static void WebViewNavAction_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[23] = ::g::Fuse::Visual_typeof()->MakeMethod(1, ::g::Fuse::Controls::WebView_typeof());
    type->SetFields(8);
}

WebViewNavAction_type* WebViewNavAction_typeof()
{
    static uSStrong<WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(WebViewNavAction);
    options.TypeSize = sizeof(WebViewNavAction_type);
    type = (WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.WebViewNavAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_build_ = WebViewNavAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))WebViewNavAction__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :599
void WebViewNavAction__Perform_fn(WebViewNavAction* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(target, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    ::g::Fuse::Controls::WebView* webView = (::g::Fuse::Controls::WebView*)uPtr(v)->FindByType(::TYPES[23/*Fuse.Visual.FindByType<Fuse.Controls.WebView>*/]);

    if (webView != NULL)
        __this->Execute(webView);
}
// }

}}}} // ::g::Fuse::Triggers::Actions
