// This file was generated based on C:\ProgramData\Uno\Packages\FuseCore\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{

// public abstract interface INameListener :8322
// {
uInterfaceType* INameListener_typeof();

struct INameListener
{
    void(*fp_OnNameChanged)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*);
    static void OnNameChanged(const uInterface& __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector name);
};

}} // ::g::Fuse

#include <Uno.UX.Selector.h>

namespace g{
namespace Fuse{

inline void INameListener::OnNameChanged(const uInterface& __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector name) { __this.VTable<INameListener>()->fp_OnNameChanged(__this, obj, &name); }
// }

}} // ::g::Fuse
