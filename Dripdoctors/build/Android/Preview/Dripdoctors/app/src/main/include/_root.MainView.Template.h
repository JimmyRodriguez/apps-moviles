// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\build\Android\Preview\cache\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Template;}

namespace g{

// public partial sealed class MainView.Template :5
// {
::g::Uno::UX::Template_type* MainView__Template_typeof();
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent);
void MainView__Template__New1_fn(MainView__Template* __this, uObject** __retval);
void MainView__Template__New2_fn(::g::MainView* parent, MainView__Template** __retval);

struct MainView__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::MainView*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::MainView* parent);
    static MainView__Template* New2(::g::MainView* parent);
};
// }

} // ::g
