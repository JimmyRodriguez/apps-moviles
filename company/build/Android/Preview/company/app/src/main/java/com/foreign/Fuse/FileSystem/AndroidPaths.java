package com.foreign.Fuse.FileSystem;

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

public class AndroidPaths
{
    static void debug_log(Object message)
    {
        android.util.Log.d("company", (message==null ? "null" : message.toString()));
    }

    public static String GetCacheDirectory240()
    {
        return com.fuse.Activity.getRootActivity().getCacheDir().getAbsolutePath();
    }
    
    public static String GetExternalCacheDirectory241()
    {
        return com.fuse.Activity.getRootActivity().getExternalCacheDir().getAbsolutePath();
    }
    
    public static String GetExternalFilesDirectory242()
    {
        return com.fuse.Activity.getRootActivity().getExternalFilesDir(null).getAbsolutePath();
    }
    
    public static String GetFilesDirectory243()
    {
        return com.fuse.Activity.getRootActivity().getFilesDir().getAbsolutePath();
    }
    
}
