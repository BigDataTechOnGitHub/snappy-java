/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_xerial_snappy_Snappy */

#ifndef _Included_org_xerial_snappy_Snappy
#define _Included_org_xerial_snappy_Snappy
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_xerial_snappy_Snappy
 * Method:    compress
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_xerial_snappy_Snappy_compress
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     org_xerial_snappy_Snappy
 * Method:    uncompress
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xerial_snappy_Snappy_uncompress
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     org_xerial_snappy_Snappy
 * Method:    maxCompressedLength
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_xerial_snappy_Snappy_maxCompressedLength
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_xerial_snappy_Snappy
 * Method:    getUncompressedLength
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_xerial_snappy_Snappy_getUncompressedLength
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
