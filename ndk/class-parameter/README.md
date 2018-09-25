# JNI复杂参数的传递

## JNI方法
```java
public native String hello();
public native Rect faceDetect();
public native ArrayList<Rect> facesDetect();
```

## 参考资料
* [convert vector to jobject in C++/JNI?](https://stackoverflow.com/questions/7776800/convert-vector-to-jobject-in-c-jni)
* [JNI Types and Data Structures](https://docs.oracle.com/javase/1.5.0/docs/guide/jni/spec/types.html#wp276)
* [Java JNI由浅入深(包括：Java和C++互传ArrayList泛型对象参数)](https://blog.csdn.net/u_xtian/article/details/6033963)
