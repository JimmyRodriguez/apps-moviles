// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.35.8/Android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct View;}}}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal abstract extern interface IViewParent :3150
// {
uInterfaceType* IViewParent_typeof();

struct IViewParent
{
    void(*fp_SetChildSize)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*);
    static void SetChildSize(const uInterface& __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2 size);
};

}}}}} // ::g::Fuse::Controls::Native::Android

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

inline void IViewParent::SetChildSize(const uInterface& __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2 size) { __this.VTable<IViewParent>()->fp_SetChildSize(__this, view, &size); }
// }

}}}}} // ::g::Fuse::Controls::Native::Android
