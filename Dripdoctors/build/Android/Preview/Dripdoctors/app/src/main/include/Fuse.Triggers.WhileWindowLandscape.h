// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileWindowAspect.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileWindowLandscape;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileWindowLandscape :3006
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowLandscape_typeof();
void WhileWindowLandscape__ctor_7_fn(WhileWindowLandscape* __this);
void WhileWindowLandscape__get_IsActive_fn(WhileWindowLandscape* __this, bool* __retval);
void WhileWindowLandscape__New2_fn(WhileWindowLandscape** __retval);

struct WhileWindowLandscape : ::g::Fuse::Triggers::WhileWindowAspect
{
    void ctor_7();
    static WhileWindowLandscape* New2();
};
// }

}}} // ::g::Fuse::Triggers
