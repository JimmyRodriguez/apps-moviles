// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Android.Controls.WebView.h>
#include <Fuse.Android.Controls.WebViewUtils.JSEvalRequestManager.h>
#include <Fuse.Android.Controls.WebViewUtils.WebViewForeign.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Java.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[2];
static uType* TYPES[10];

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// C:\ProgramData\Uno\Packages\Fuse.Controls.WebView\0.32.14\Android\$.uno
// -----------------------------------------------------------------------

// public sealed extern class WebView :91
// {
static void WebView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("about:blank");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    ::TYPES[4] = ::g::Uno::Delegate_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[7] = ::g::Uno::EventHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    ::TYPES[9] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(WebView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface3),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface5),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface6));
    type->SetFields(6,
        ::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _evalRequestMgr), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _file), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _source), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _webChromeClientHandle), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _webViewClientHandle), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _webViewHandle), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _webViewHost), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _BaseUrl), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, BeginLoading1), 0,
        ::g::Fuse::Navigation::HistoryChangedHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, HistoryChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, PageLoaded1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Android::Controls::WebView, ProgressChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, UrlChanged1), 0);
    type->Reflection.SetFunctions(32,
        new uFunction("get_BaseUrl", NULL, (void*)WebView__get_BaseUrl_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BaseUrl", NULL, (void*)WebView__set_BaseUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_BeginLoading", NULL, (void*)WebView__add_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_BeginLoading", NULL, (void*)WebView__remove_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_CanGoBack", NULL, (void*)WebView__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, (void*)WebView__get_CanGoForward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Create", NULL, (void*)WebView__Create_fn, 0, true, WebView_typeof(), 1, ::g::Fuse::Controls::WebView_typeof()),
        new uFunction("get_DocumentTitle", NULL, (void*)WebView__get_DocumentTitle_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Eval", NULL, (void*)WebView__Eval_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Eval", NULL, (void*)WebView__Eval1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("get_File", NULL, (void*)WebView__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)WebView__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("GoBack", NULL, (void*)WebView__GoBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, (void*)WebView__GoForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_HistoryChanged", NULL, (void*)WebView__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, (void*)WebView__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LoadUrl", NULL, (void*)WebView__LoadUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_PageLoaded", NULL, (void*)WebView__add_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_PageLoaded", NULL, (void*)WebView__remove_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_Progress", NULL, (void*)WebView__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_ProgressChanged", NULL, (void*)WebView__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("remove_ProgressChanged", NULL, (void*)WebView__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("Reload", NULL, (void*)WebView__Reload_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WebView__get_Source_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)WebView__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Stop", NULL, (void*)WebView__Stop_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Url", NULL, (void*)WebView__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)WebView__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_UrlChanged", NULL, (void*)WebView__add_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_UrlChanged", NULL, (void*)WebView__remove_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()));
}

WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.Android.Controls.WebView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::LeafView_typeof());
    type->fp_build_ = WebView_build;
    type->interface3.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface3.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface3.fp_LoadHtml = (void(*)(uObject*, uString*))WebView__LoadHtml_fn;
    type->interface3.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface3.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface3.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface3.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface3.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface3.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface3.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface3.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface3.fp_get_DocumentTitle = (void(*)(uObject*, uString**))WebView__get_DocumentTitle_fn;
    type->interface3.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface3.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface3.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface3.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface3.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface3.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface3.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__add_UrlChanged_fn;
    type->interface3.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__remove_UrlChanged_fn;
    type->interface4.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface4.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface4.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface5.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface5.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface5.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface5.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface5.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))WebView__add_HistoryChanged_fn;
    type->interface5.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))WebView__remove_HistoryChanged_fn;
    type->interface6.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface6.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// private WebView(Fuse.Controls.WebView host, Java.Object handle) :113
void WebView__ctor_2_fn(WebView* __this, ::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle)
{
    __this->ctor_2(host, handle);
}

// public generated string get_BaseUrl() :154
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :154
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) :100
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) :100
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :176
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :181
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public static Fuse.Android.Controls.WebView Create(Fuse.Controls.WebView webViewHost) :107
void WebView__Create_fn(::g::Fuse::Controls::WebView* webViewHost, WebView** __retval)
{
    *__retval = WebView::Create(webViewHost);
}

// public string get_DocumentTitle() :171
void WebView__get_DocumentTitle_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->DocumentTitle();
}

// public void Eval(string js) :149
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> resultHandler) :144
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler)
{
    __this->Eval1(js, resultHandler);
}

// public Uno.UX.FileSource get_File() :251
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :252
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :184
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :189
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :204
void WebView__add_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :204
void WebView__remove_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// private void LoadFile(Uno.UX.FileSource file) :260
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file)
{
    __this->LoadFile(file);
}

// public void LoadHtml(string html) :214
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :219
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// public void LoadUrl(string url) :228
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// private WebView New(Fuse.Controls.WebView host, Java.Object handle) :113
void WebView__New1_fn(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, WebView** __retval)
{
    *__retval = WebView::New1(host, handle);
}

// private void OnBeginloading() :132
void WebView__OnBeginloading_fn(WebView* __this)
{
    __this->OnBeginloading();
}

// private void OnHistoryChanged() :206
void WebView__OnHistoryChanged_fn(WebView* __this)
{
    __this->OnHistoryChanged();
}

// private void OnPageLoaded() :126
void WebView__OnPageLoaded_fn(WebView* __this)
{
    __this->OnPageLoaded();
}

// private void OnProgressChanged(int newProgress) :237
void WebView__OnProgressChanged_fn(WebView* __this, int* newProgress)
{
    __this->OnProgressChanged(*newProgress);
}

// private void OnUrlChanged() :138
void WebView__OnUrlChanged_fn(WebView* __this)
{
    __this->OnUrlChanged();
}

// public generated void add_PageLoaded(Uno.EventHandler value) :102
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :102
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :245
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :99
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :99
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :194
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public string get_Source() :159
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :160
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// public void Stop() :199
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public string get_Url() :165
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :166
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) :101
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) :101
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// private WebView(Fuse.Controls.WebView host, Java.Object handle) [instance] :113
void WebView::ctor_2(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Android.Controls.WebView", ".ctor(Fuse.Controls.WebView,Java.Object)");
    ctor_1(handle);
    _webViewHost = host;
    _webViewHandle = handle;
    _evalRequestMgr = ::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager::New1(_webViewHandle);
    _webChromeClientHandle = ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CreateAndSetWebChromeClient(_webViewHandle, uDelegate::New(::TYPES[0/*Uno.Action<int>*/], (void*)WebView__OnProgressChanged_fn, this));
    _webViewClientHandle = ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CreateAndSetWebViewClient(_webViewHandle, uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)WebView__OnPageLoaded_fn, this), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)WebView__OnBeginloading_fn, this), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)WebView__OnUrlChanged_fn, this));
    uPtr(_webViewHost)->WebViewClient((uObject*)this);
}

// public generated string get_BaseUrl() [instance] :154
uString* WebView::BaseUrl()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_BaseUrl()");
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :154
void WebView::BaseUrl(uString* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_BaseUrl(string)");
    _BaseUrl = value;
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance] :100
void WebView::add_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_BeginLoading(Uno.EventHandler)");
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance] :100
void WebView::remove_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_BeginLoading(Uno.EventHandler)");
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance] :176
bool WebView::CanGoBack()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_CanGoBack()");
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CanGoBack(_webViewHandle);
}

// public bool get_CanGoForward() [instance] :181
bool WebView::CanGoForward()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_CanGoForward()");
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CanGoForward(_webViewHandle);
}

// public string get_DocumentTitle() [instance] :171
uString* WebView::DocumentTitle()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_DocumentTitle()");
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GetTitle(_webViewHandle);
}

// public void Eval(string js) [instance] :149
void WebView::Eval(uString* js)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Eval(string)");
    uPtr(_evalRequestMgr)->EvaluateJs(js, NULL);
}

// public void Eval(string js, Uno.Action<string> resultHandler) [instance] :144
void WebView::Eval1(uString* js, uDelegate* resultHandler)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Eval(string,Uno.Action<string>)");
    uPtr(_evalRequestMgr)->EvaluateJs(js, resultHandler);
}

// public Uno.UX.FileSource get_File() [instance] :251
::g::Uno::UX::FileSource* WebView::File()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_File()");
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :252
void WebView::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_File(Uno.UX.FileSource)");
    _file = value;

    if (_file != NULL)
        LoadFile(_file);
}

// public void GoBack() [instance] :184
void WebView::GoBack()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "GoBack()");
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GoBack(_webViewHandle);
}

// public void GoForward() [instance] :189
void WebView::GoForward()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "GoForward()");
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GoForward(_webViewHandle);
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :204
void WebView::add_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[8/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :204
void WebView::remove_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[8/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// private void LoadFile(Uno.UX.FileSource file) [instance] :260
void WebView::LoadFile(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadFile(Uno.UX.FileSource)");
    uString* data = ::STRINGS[0/*""*/];

    {
        const auto __finally_fun = [&]()
        {
            LoadHtml(data);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            data = uPtr(file)->ReadAllText();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            data = uPtr(e)->ToString();
        }
    }
}

// public void LoadHtml(string html) [instance] :214
void WebView::LoadHtml(uString* html)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadHtml(string)");
    LoadHtml1(html, NULL);
}

// public void LoadHtml(string html, string baseUrl) [instance] :219
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadHtml(string,string)");
    uString* ind1;

    if (::g::Uno::String::op_Equality(html, NULL) || ::g::Uno::String::op_Equality(html, ::STRINGS[0/*""*/]))
        return;

    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::LoadHtml(_webViewHandle, html, (ind1 = (baseUrl != NULL) ? baseUrl : (uString*)BaseUrl(), (ind1 != NULL) ? ind1 : ::STRINGS[0/*""*/]));
    OnHistoryChanged();
}

// public void LoadUrl(string url) [instance] :228
void WebView::LoadUrl(uString* url)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadUrl(string)");

    if (::g::Uno::String::op_Equality(url, NULL) || ::g::Uno::String::op_Equality(url, ::STRINGS[0/*""*/]))
        url = ::STRINGS[1/*"about:blank"*/];

    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::LoadUrl(_webViewHandle, url);
    OnHistoryChanged();
}

// private void OnBeginloading() [instance] :132
void WebView::OnBeginloading()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "OnBeginloading()");

    if (::g::Uno::Delegate::op_Inequality(BeginLoading1, NULL))
        uPtr(BeginLoading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnHistoryChanged() [instance] :206
void WebView::OnHistoryChanged()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "OnHistoryChanged()");

    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(_webViewHost);
}

// private void OnPageLoaded() [instance] :126
void WebView::OnPageLoaded()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "OnPageLoaded()");

    if (::g::Uno::Delegate::op_Inequality(PageLoaded1, NULL))
        uPtr(PageLoaded1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnProgressChanged(int newProgress) [instance] :237
void WebView::OnProgressChanged(int newProgress)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "OnProgressChanged(int)");
    ::g::Uno::UX::ValueChangedArgs* ret3;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[6/*Uno.UX.ValueChangedArgs<double>*/], uCRef((double)newProgress / 100.0), &ret3), ret3));
}

// private void OnUrlChanged() [instance] :138
void WebView::OnUrlChanged()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "OnUrlChanged()");

    if (::g::Uno::Delegate::op_Inequality(UrlChanged1, NULL))
        uPtr(UrlChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :102
void WebView::add_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :102
void WebView::remove_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :245
double WebView::Progress()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_Progress()");
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GetProgress(_webViewHandle) / 100.0;
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :99
void WebView::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[9/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :99
void WebView::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[9/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reload() [instance] :194
void WebView::Reload()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Reload()");
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::Reload(_webViewHandle);
}

// public string get_Source() [instance] :159
uString* WebView::Source()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_Source()");
    return _source;
}

// public void set_Source(string value) [instance] :160
void WebView::Source(uString* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_Source(string)");
    LoadHtml(_source = value);
}

// public void Stop() [instance] :199
void WebView::Stop()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Stop()");
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::StopLoading(_webViewHandle);
}

// public string get_Url() [instance] :165
uString* WebView::Url()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_Url()");
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GetUrl(_webViewHandle);
}

// public void set_Url(string value) [instance] :166
void WebView::Url(uString* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_Url(string)");
    LoadUrl(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance] :101
void WebView::add_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance] :101
void WebView::remove_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public static Fuse.Android.Controls.WebView Create(Fuse.Controls.WebView webViewHost) [static] :107
WebView* WebView::Create(::g::Fuse::Controls::WebView* webViewHost)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Create(Fuse.Controls.WebView)");
    ::g::Java::Object* handle = ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CreateWebView();
    return WebView::New1(webViewHost, handle);
}

// private WebView New(Fuse.Controls.WebView host, Java.Object handle) [static] :113
WebView* WebView::New1(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle)
{
    WebView* obj2 = (WebView*)uNew(WebView_typeof());
    obj2->ctor_2(host, handle);
    return obj2;
}
// }

}}}} // ::g::Fuse::Android::Controls
