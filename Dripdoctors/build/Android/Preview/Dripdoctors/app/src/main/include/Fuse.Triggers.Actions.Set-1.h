// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Set;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Set<T> :617
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof();
void Set__ctor_2_fn(Set* __this, ::g::Uno::UX::Property1* target);
void Set__get_Expression_fn(Set* __this, uDelegate** __retval);
void Set__set_Expression_fn(Set* __this, uDelegate* value);
void Set__get_Increment_fn(Set* __this, uTRef __retval);
void Set__set_Increment_fn(Set* __this, void* value);
void Set__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, Set** __retval);
void Set__Perform_fn(Set* __this, ::g::Fuse::Node* target);
void Set__get_Target_fn(Set* __this, ::g::Uno::UX::Property1** __retval);
void Set__set_Target_fn(Set* __this, ::g::Uno::UX::Property1* value);
void Set__Update_fn(Set* __this, void* value);
void Set__get_Value_fn(Set* __this, uTRef __retval);
void Set__set_Value_fn(Set* __this, void* value);

struct Set : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Internal::Blender*> _blender;
    bool _hasIncrement;
    uTField _increment() { return __type->Field(this, 10); }
    uStrong<uDelegate*> _Expression;
    uStrong< ::g::Uno::UX::Property1*> _Target;
    uTField _Value() { return __type->Field(this, 13); }

    void ctor_2(::g::Uno::UX::Property1* target);
    uDelegate* Expression();
    void Expression(uDelegate* value);
    template<class T>
    T Increment() { T __retval; return Set__get_Increment_fn(this, &__retval), __retval; }
    template<class T>
    void Increment(T value) { Set__set_Increment_fn(this, uConstrain(__type->T(0), value)); }
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
    template<class T>
    void Update(T value) { Set__Update_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    T Value() { T __retval; return Set__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { Set__set_Value_fn(this, uConstrain(__type->T(0), value)); }
    static Set* New2(uType* __type, ::g::Uno::UX::Property1* target);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
