// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Entities\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{struct Skinner;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal sealed class Skinner :2101
// {
uType* Skinner_typeof();
void Skinner__ctor__fn(Skinner* __this);
void Skinner__New1_fn(Skinner** __retval);

struct Skinner : uObject
{
    uStrong<uArray*> BoneListData;

    void ctor_();
    static Skinner* New1();
};
// }

}}} // ::g::Fuse::Entities
