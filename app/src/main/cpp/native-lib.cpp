#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_rezeptapp_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */) {
    const char* msg = "NDK OK";
    return env->NewStringUTF(msg);
}
