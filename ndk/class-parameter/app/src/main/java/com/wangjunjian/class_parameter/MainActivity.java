package com.wangjunjian.class_parameter;

import android.graphics.Rect;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    private ClassParameter classParameter = new ClassParameter();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Rect rect = classParameter.faceDetect();
        ArrayList<Rect> rects = classParameter.facesDetect();

        StringBuilder sb = new StringBuilder();
        sb.append("call hello: ").append(classParameter.hello()).append("\n");
        sb.append("call faceDetect: ").append(rectDesc(rect)).append("\n");

        sb.append("call facesDetect: \n");
        for (Rect r:rects)
            sb.append(rectDesc(r)).append("\n");

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(sb.toString());
    }

    private String rectDesc(Rect rect) {
        return String.format("(%d, %d, %d, %d)", rect.left, rect.top, rect.right, rect.bottom);
    }
}
