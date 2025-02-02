// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Gestures\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct Tapped;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Tapped :1313
// {
::g::Fuse::Triggers::Trigger_type* Tapped_typeof();
void Tapped__ctor_5_fn(Tapped* __this);
void Tapped__ctor_6_fn(Tapped* __this, uDelegate* handler);
void Tapped__add_Handler_fn(Tapped* __this, uDelegate* value);
void Tapped__remove_Handler_fn(Tapped* __this, uDelegate* value);
void Tapped__New2_fn(Tapped** __retval);
void Tapped__New3_fn(uDelegate* handler, Tapped** __retval);
void Tapped__OnRooted_fn(Tapped* __this);
void Tapped__OnTapped_fn(Tapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount);
void Tapped__OnUnrooted_fn(Tapped* __this);

struct Tapped : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_5();
    void ctor_6(uDelegate* handler);
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount);
    static Tapped* New2();
    static Tapped* New3(uDelegate* handler);
};
// }

}}} // ::g::Fuse::Gestures
