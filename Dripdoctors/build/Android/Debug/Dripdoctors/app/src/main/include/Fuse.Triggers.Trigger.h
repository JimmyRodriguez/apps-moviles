// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Animations{struct Animator;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimation;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimationState;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction;}}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class Trigger :1555
// {
struct Trigger_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Animations::IPlayerFeedback interface4;
    void(*fp_OnProgressChanged)(::g::Fuse::Triggers::Trigger*);
};

Trigger_type* Trigger_typeof();
void Trigger__ctor_3_fn(Trigger* __this);
void Trigger__get_Actions_fn(Trigger* __this, uObject** __retval);
void Trigger__Activate_fn(Trigger* __this, uDelegate* done);
void Trigger__AddContent_fn(Trigger* __this, ::g::Fuse::Node* target);
void Trigger__get_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval);
void Trigger__set_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value);
void Trigger__get_Animators_fn(Trigger* __this, uObject** __retval);
void Trigger__get_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval);
void Trigger__set_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value);
void Trigger__get_Bypass_fn(Trigger* __this, int* __retval);
void Trigger__set_Bypass_fn(Trigger* __this, int* value);
void Trigger__BypassActivate_fn(Trigger* __this);
void Trigger__BypassDeactivate_fn(Trigger* __this);
void Trigger__BypassSeek_fn(Trigger* __this, double* progress, int* direction);
void Trigger__CleanupStableState_fn(Trigger* __this);
void Trigger__CleanupState_fn(Trigger* __this);
void Trigger__CreateState_fn(Trigger* __this);
void Trigger__Deactivate_fn(Trigger* __this);
void Trigger__DirectActivate_fn(Trigger* __this, uDelegate* done);
void Trigger__DirectDeactivate_fn(Trigger* __this);
void Trigger__DirectSeek_fn(Trigger* __this, double* progress, int* direction);
void Trigger__EnsureAnimationLength_fn(Trigger* __this);
void Trigger__EnsureState_fn(Trigger* __this, double* progress, bool* __retval);
void Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn(Trigger* __this, uObject* s);
void Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn(Trigger* __this, uObject* s);
void Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn(Trigger* __this, uObject* s);
void Trigger__get_HasActions_fn(Trigger* __this, bool* __retval);
void Trigger__get_HasAnimators_fn(Trigger* __this, bool* __retval);
void Trigger__InversePulse_fn(Trigger* __this);
void Trigger__get_Nodes_fn(Trigger* __this, uObject** __retval);
void Trigger__OnNodeAdded_fn(Trigger* __this, ::g::Fuse::Node* n);
void Trigger__OnNodeRemoved_fn(Trigger* __this, ::g::Fuse::Node* n);
void Trigger__OnProgressChanged_fn(Trigger* __this);
void Trigger__OnRooted_fn(Trigger* __this);
void Trigger__OnUnrooted_fn(Trigger* __this);
void Trigger__add_PlaybackDone_fn(Trigger* __this, uDelegate* value);
void Trigger__remove_PlaybackDone_fn(Trigger* __this, uDelegate* value);
void Trigger__PlayEnd_fn(Trigger* __this, bool* on, uDelegate* done);
void Trigger__PlayOn_fn(Trigger* __this);
void Trigger__PlayTo_fn(Trigger* __this, double* progress, int* variant);
void Trigger__get_Progress_fn(Trigger* __this, double* __retval);
void Trigger__Pulse_fn(Trigger* __this);
void Trigger__RemoveContent_fn(Trigger* __this, ::g::Fuse::Node* target);
void Trigger__Seek_fn(Trigger* __this, double* progress, int* direction);
void Trigger__SeekImpl_fn(Trigger* __this, double* progress, int* direction, int* flags);
void Trigger__SetDone_fn(Trigger* __this, uDelegate* done, bool* on);
void Trigger__SetPlayDirection_fn(Trigger* __this, int* next);
void Trigger__get_ShouldBypass_fn(Trigger* __this, bool* __retval);
void Trigger__get_ShouldIgnore_fn(Trigger* __this, bool* __retval);
void Trigger__Start_fn(Trigger* __this);
void Trigger__Stop_fn(Trigger* __this, bool* force);
void Trigger__StopAction_fn(Trigger* __this);

struct Trigger : ::g::Fuse::Behavior
{
    uStrong< ::g::Uno::Collections::List*> _actions;
    uStrong< ::g::Fuse::Animations::TriggerAnimation*> _animation;
    uStrong< ::g::Fuse::Animations::TriggerAnimationState*> _animState;
    uStrong<uDelegate*> _doneAction;
    bool _doneOn;
    bool _isStarted;
    int _lastPlayDirection;
    uStrong<uObject*> _nodes;
    int _rootFrame;
    int _rootPlayDirection;
    double _rootProgress;
    bool _startAtZero;
    int _Bypass;
    uStrong<uDelegate*> PlaybackDone1;

    void ctor_3();
    uObject* Actions();
    void Activate(uDelegate* done);
    void AddContent(::g::Fuse::Node* target);
    ::g::Fuse::Animations::TriggerAnimation* Animation();
    void Animation(::g::Fuse::Animations::TriggerAnimation* value);
    uObject* Animators();
    ::g::Fuse::Animations::TriggerAnimation* BackwardAnimation();
    void BackwardAnimation(::g::Fuse::Animations::TriggerAnimation* value);
    int Bypass();
    void Bypass(int value);
    void BypassActivate();
    void BypassDeactivate();
    void BypassSeek(double progress, int direction);
    void CleanupStableState();
    void CleanupState();
    void CreateState();
    void Deactivate();
    void DirectActivate(uDelegate* done);
    void DirectDeactivate();
    void DirectSeek(double progress, int direction);
    void EnsureAnimationLength();
    bool EnsureState(double progress);
    bool HasActions();
    bool HasAnimators();
    void InversePulse();
    uObject* Nodes();
    void OnNodeAdded(::g::Fuse::Node* n);
    void OnNodeRemoved(::g::Fuse::Node* n);
    void OnProgressChanged() { (((Trigger_type*)__type)->fp_OnProgressChanged)(this); }
    void add_PlaybackDone(uDelegate* value);
    void remove_PlaybackDone(uDelegate* value);
    void PlayEnd(bool on, uDelegate* done);
    void PlayOn();
    void PlayTo(double progress, int variant);
    double Progress();
    void Pulse();
    void RemoveContent(::g::Fuse::Node* target);
    void Seek(double progress, int direction);
    void SeekImpl(double progress, int direction, int flags);
    void SetDone(uDelegate* done, bool on);
    void SetPlayDirection(int next);
    bool ShouldBypass();
    bool ShouldIgnore();
    void Start();
    void Stop(bool force);
    void StopAction();
    static void OnProgressChanged(Trigger* __this) { Trigger__OnProgressChanged_fn(__this); }
};
// }

}}} // ::g::Fuse::Triggers
