package com.wangjunjian.class_parameter;

import android.graphics.Rect;

import java.util.ArrayList;

/* Terminal Window
cd app/src/main/
javah -d jni -classpath /Users/wjj/Library/Android/sdk/platforms/android-21/android.jar:java com.wangjunjian.class_parameter.ClassParameter
 */
public class ClassParameter {
    public native String hello();
    public native Rect faceDetect();
    public native ArrayList<Rect> facesDetect();
}
