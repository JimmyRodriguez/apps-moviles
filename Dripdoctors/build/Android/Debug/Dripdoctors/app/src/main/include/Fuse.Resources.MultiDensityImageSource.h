// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Elements\0.32.14\Resources\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ImageSource.h>
namespace g{namespace Fuse{namespace Resources{struct MultiDensityImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ProxyImageSource;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class MultiDensityImageSource :731
// {
::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof();
void MultiDensityImageSource__GetTexture_fn(MultiDensityImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void MultiDensityImageSource__OnPinChanged_fn(MultiDensityImageSource* __this);
void MultiDensityImageSource__get_PixelSize_fn(MultiDensityImageSource* __this, ::g::Uno::Int2* __retval);
void MultiDensityImageSource__SelectActive_fn(MultiDensityImageSource* __this);
void MultiDensityImageSource__get_Size_fn(MultiDensityImageSource* __this, ::g::Uno::Float2* __retval);
void MultiDensityImageSource__get_SizeDensity_fn(MultiDensityImageSource* __this, float* __retval);
void MultiDensityImageSource__get_Sources_fn(MultiDensityImageSource* __this, uObject** __retval);
void MultiDensityImageSource__get_State_fn(MultiDensityImageSource* __this, int* __retval);
void MultiDensityImageSource__SwapActive_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* use);

struct MultiDensityImageSource : ::g::Fuse::Resources::ImageSource
{
    uStrong< ::g::Fuse::Resources::ImageSource*> _active;
    bool _hasMatchDensity;
    float _matchDensity;
    uStrong< ::g::Fuse::Resources::ProxyImageSource*> _proxy;
    uStrong< ::g::Uno::Collections::ObservableList*> _sources;

    void SelectActive();
    uObject* Sources();
    void SwapActive(::g::Fuse::Resources::ImageSource* use);
};
// }

}}} // ::g::Fuse::Resources
