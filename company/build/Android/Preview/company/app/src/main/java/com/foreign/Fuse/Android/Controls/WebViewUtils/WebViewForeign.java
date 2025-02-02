package com.foreign.Fuse.Android.Controls.WebViewUtils;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import com.fusetools.webview.JsInterface;
import com.fusetools.webview.FuseWebViewClient;
import com.fusetools.webview.FuseWebChromeClient;
import android.util.Log;
import android.webkit.WebView;

public class WebViewForeign
{
    static void debug_log(Object message)
    {
        android.util.Log.d("company", (message==null ? "null" : message.toString()));
    }

    public static void AddJavascriptInterface194(final Object handle,final String name,final com.foreign.Uno.Action_String resultHandler)
    {
        WebView wv = (WebView)handle;
        				JsInterface jsi = new JsInterface(resultHandler);
        				wv.addJavascriptInterface(jsi, name);
    }
    
    public static boolean CanGoBack195(final Object handle)
    {
        WebView wv = (WebView)handle;
        			return wv.canGoBack();
    }
    
    public static boolean CanGoForward196(final Object handle)
    {
        WebView wv = (WebView)handle;
        			return wv.canGoForward();
    }
    
    public static Object CreateAndSetWebChromeClient197(final Object webViewHandle,final com.foreign.Uno.Action_int onProgress)
    {
        FuseWebChromeClient client = new FuseWebChromeClient(onProgress);
        			((WebView)webViewHandle).setWebChromeClient(client);
        			return client;
    }
    
    public static Object CreateAndSetWebViewClient198(final Object webViewHandle,final com.foreign.Uno.Action loaded,final com.foreign.Uno.Action started,final com.foreign.Uno.Action changed)
    {
        FuseWebViewClient client = new FuseWebViewClient(loaded, started, changed);
        			((WebView)webViewHandle).setWebViewClient(client);
        			return client;
    }
    
    public static Object CreateWebView199()
    {
        WebView wv = new WebView(com.fuse.Activity.getRootActivity());
        			wv.getSettings().setJavaScriptEnabled(true);
        			wv.getSettings().setDomStorageEnabled(true);
        			return wv;
    }
    
    public static double GetProgress200(final Object handle)
    {
        WebView wv = (WebView)handle;
        				return wv.getProgress();
    }
    
    public static String GetTitle201(final Object handle)
    {
        WebView wv = (WebView)handle;
        			return wv.getTitle();
    }
    
    public static String GetUrl202(final Object handle)
    {
        WebView wv = (WebView)handle;
        			return wv.getUrl();
    }
    
    public static void GoBack203(final Object handle)
    {
        WebView wv = (WebView)handle;
        			wv.goBack();
    }
    
    public static void GoForward204(final Object handle)
    {
        WebView wv = (WebView)handle;
        			wv.goForward();
    }
    
    public static void LoadHtml205(final Object handle,final String html,final String baseUrl)
    {
        WebView wv = (WebView)handle;
        			wv.loadDataWithBaseURL(baseUrl, html, "text/html", "UTF-8", null);
    }
    
    public static void LoadUrl206(final Object handle,final String url)
    {
        WebView wv = (WebView)handle;
        			wv.loadUrl(url);
    }
    
    public static void Reload207(final Object handle)
    {
        WebView wv = (WebView)handle;
        			wv.reload();
    }
    
    public static void StopLoading208(final Object handle)
    {
        WebView wv = (WebView)handle;
        			wv.stopLoading();
    }
    
}
