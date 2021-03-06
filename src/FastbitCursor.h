/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_globalpark_fastbit_FastbitCursor */

#ifndef _Included_com_globalpark_fastbit_FastbitCursor
#define _Included_com_globalpark_fastbit_FastbitCursor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_globalpark_fastbit_FastbitCursor
 * Method:    getCursor_native
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_globalpark_fastbit_FastbitCursor_getCursor_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_globalpark_fastbit_FastbitCursor
 * Method:    next_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_globalpark_fastbit_FastbitCursor_next_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_globalpark_fastbit_FastbitCursor
 * Method:    hasNext_native
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_globalpark_fastbit_FastbitCursor_hasNext_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_globalpark_fastbit_FastbitCursor
 * Method:    deleteCppObject
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_globalpark_fastbit_FastbitCursor_deleteCppObject
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
