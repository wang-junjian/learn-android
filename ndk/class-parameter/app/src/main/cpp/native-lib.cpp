#include <jni.h>
#include <vector>
#include <android/rect.h>
#include "../jni/com_wangjunjian_class_parameter_ClassParameter.h"

using namespace std;

JNIEXPORT jstring JNICALL Java_com_wangjunjian_class_1parameter_ClassParameter_hello
        (JNIEnv *env, jobject clazz)
{
    return env->NewStringUTF("hello");
}

JNIEXPORT jobject JNICALL Java_com_wangjunjian_class_1parameter_ClassParameter_faceDetect
        (JNIEnv *env, jobject clazz)
{
    jclass rectClass = env->FindClass("android/graphics/Rect");
    jmethodID rectInitFunc = env->GetMethodID(rectClass, "<init>", "()V");
    jobject objRect = env->NewObject(rectClass, rectInitFunc, "");
    jfieldID fidLeft = env->GetFieldID(rectClass, "left", "I");
    env->SetIntField(objRect, fidLeft, 1);
    jfieldID fidTop = env->GetFieldID(rectClass, "top", "I");
    env->SetIntField(objRect, fidTop, 2);
    jfieldID fidRight = env->GetFieldID(rectClass, "right", "I");
    env->SetIntField(objRect, fidRight, 3);
    jfieldID fidBottom = env->GetFieldID(rectClass, "bottom", "I");
    env->SetIntField(objRect, fidBottom, 4);

    return objRect;
}

JNIEXPORT jobject JNICALL Java_com_wangjunjian_class_1parameter_ClassParameter_facesDetect
        (JNIEnv *env, jobject clazz)
{
    jclass arrayListClass = env->FindClass("java/util/ArrayList");
    jmethodID arrayListInitFunc = env->GetMethodID(arrayListClass, "<init>", "()V");
    jobject objArrayList = env->NewObject(arrayListClass, arrayListInitFunc, "");
    jmethodID arrayListAddFunc = env->GetMethodID(arrayListClass, "add", "(Ljava/lang/Object;)Z");

    jclass rectClass = env->FindClass("android/graphics/Rect");
    jmethodID rectInitFunc = env->GetMethodID(rectClass, "<init>", "()V");

    jobject objRect = env->NewObject(rectClass, rectInitFunc, "");
    jfieldID fidLeft = env->GetFieldID(rectClass, "left", "I");
    env->SetIntField(objRect, fidLeft, 1);
    jfieldID fidTop = env->GetFieldID(rectClass, "top", "I");
    env->SetIntField(objRect, fidTop, 2);
    jfieldID fidRight = env->GetFieldID(rectClass, "right", "I");
    env->SetIntField(objRect, fidRight, 3);
    jfieldID fidBottom = env->GetFieldID(rectClass, "bottom", "I");
    env->SetIntField(objRect, fidBottom, 4);
    env->CallBooleanMethod(objArrayList, arrayListAddFunc, objRect);

    objRect = env->NewObject(rectClass, rectInitFunc, "");
    fidLeft = env->GetFieldID(rectClass, "left", "I");
    env->SetIntField(objRect, fidLeft, 5);
    fidTop = env->GetFieldID(rectClass, "top", "I");
    env->SetIntField(objRect, fidTop, 6);
    fidRight = env->GetFieldID(rectClass, "right", "I");
    env->SetIntField(objRect, fidRight, 7);
    fidBottom = env->GetFieldID(rectClass, "bottom", "I");
    env->SetIntField(objRect, fidBottom, 8);
    env->CallBooleanMethod(objArrayList, arrayListAddFunc, objRect);

    return objArrayList;
}
