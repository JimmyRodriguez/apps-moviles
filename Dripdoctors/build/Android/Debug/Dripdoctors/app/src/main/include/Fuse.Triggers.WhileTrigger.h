// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileTrigger;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WhileTrigger :2723
// {
::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof();
void WhileTrigger__ctor_4_fn(WhileTrigger* __this);
void WhileTrigger__get_Invert_fn(WhileTrigger* __this, bool* __retval);
void WhileTrigger__set_Invert_fn(WhileTrigger* __this, bool* value);
void WhileTrigger__SetActive_fn(WhileTrigger* __this, bool* on);

struct WhileTrigger : ::g::Fuse::Triggers::Trigger
{
    bool _Invert;

    void ctor_4();
    bool Invert();
    void Invert(bool value);
    void SetActive(bool on);
};
// }

}}} // ::g::Fuse::Triggers
