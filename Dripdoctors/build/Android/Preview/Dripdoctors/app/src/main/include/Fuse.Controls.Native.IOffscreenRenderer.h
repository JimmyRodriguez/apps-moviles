// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Controls.Native\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IOffscreenRenderer :162
// {
uInterfaceType* IOffscreenRenderer_typeof();

struct IOffscreenRenderer
{
    void(*fp_DisableOffscreen)(uObject*);
    void(*fp_EnableOffscreen)(uObject*);
    static void DisableOffscreen(const uInterface& __this) { __this.VTable<IOffscreenRenderer>()->fp_DisableOffscreen(__this); }
    static void EnableOffscreen(const uInterface& __this) { __this.VTable<IOffscreenRenderer>()->fp_EnableOffscreen(__this); }
};
// }

}}}} // ::g::Fuse::Controls::Native
