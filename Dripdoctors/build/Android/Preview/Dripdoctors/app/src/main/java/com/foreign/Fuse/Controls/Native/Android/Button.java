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

public class Button
{
    static void debug_log(Object message)
    {
        android.util.Log.d("Dripdoctors", (message==null ? "null" : message.toString()));
    }

    public static Object Create32()
    {
        return new android.widget.Button(Fuse.Preview.Dripdoctors.GetRootActivity());
    }
    
    public static void SetText33(final Object handle,final String text)
    {
        ((android.widget.Button)handle).setText(text);
    }
    
}
