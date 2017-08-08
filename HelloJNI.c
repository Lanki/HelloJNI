#include "HelloJNI.h"
#include "jni.h"
#include <stdio.h>

/*
 * Class:     HelloJNI
 * Method:    printHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_HelloJNI_printHello(JNIEnv *env, jobject obj){
	printf("Hello World!\n");
	return;
}

/*
 * Class:     HelloJNI
 * Method:    printString
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_HelloJNI_printString(JNIEnv *env, jobject obj, jstring string){
	const char *str = (*env)->GetStringUTFChars(env, string, 0);
	printf("%s!\n", str);
	return;
}
