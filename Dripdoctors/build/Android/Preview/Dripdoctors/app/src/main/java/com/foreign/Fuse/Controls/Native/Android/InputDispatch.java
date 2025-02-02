package com.foreign.Fuse.Controls.Native.Android;

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

public class InputDispatch
{
    static void debug_log(Object message)
    {
        android.util.Log.d("Dripdoctors", (message==null ? "null" : message.toString()));
    }

    public static void ClearOnTouchListener49(final Object viewHandle)
    {
        ((android.view.View)viewHandle).setOnTouchListener(null);
    }
    
    public static Object CreateTouchListener50()
    {
        return new android.view.View.OnTouchListener() {
        		public boolean onTouch(android.view.View view, android.view.MotionEvent e) {
        			return ExternedBlockHost.callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch51(view,e,UnoHelper.GetUnoObjectRef(view),UnoHelper.GetUnoObjectRef(e));
        		}
        	};
    }
    
    public static void SetOnTouchListener52(final Object viewHandle,final Object listenerHandle)
    {
        ((android.view.View)viewHandle).setOnTouchListener(((android.view.View.OnTouchListener)listenerHandle));
    }
    
}
