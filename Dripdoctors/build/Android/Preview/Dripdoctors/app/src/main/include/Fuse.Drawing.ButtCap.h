// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.LineCapImpl.h>
namespace g{namespace Fuse{namespace Drawing{struct ButtCap;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class ButtCap :84
// {
::g::Fuse::Drawing::LineCapImpl_type* ButtCap_typeof();
void ButtCap__ctor_1_fn(ButtCap* __this);
void ButtCap__Create_fn(ButtCap* __this, ::g::Uno::Float2* from, ::g::Uno::Float2* to, uObject** __retval);
void ButtCap__New1_fn(ButtCap** __retval);

struct ButtCap : ::g::Fuse::Drawing::LineCapImpl
{
    void ctor_1();
    static ButtCap* New1();
};
// }

}}} // ::g::Fuse::Drawing
