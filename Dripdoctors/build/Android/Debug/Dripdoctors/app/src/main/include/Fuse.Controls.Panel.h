// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Controls.Panels\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class Panel :1356
// {
::g::Fuse::Controls::Control_type* Panel_typeof();
void Panel__ctor_6_fn(Panel* __this);
void Panel__FastTrackDrawWithOpacity_fn(Panel* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Panel__New3_fn(Panel** __retval);

struct Panel : ::g::Fuse::Controls::LayoutControl
{
    static ::g::Uno::UX::Selector _colorName_;
    static ::g::Uno::UX::Selector& _colorName() { return Panel_typeof()->Init(), _colorName_; }

    void ctor_6();
    static Panel* New3();
};
// }

}}} // ::g::Fuse::Controls
