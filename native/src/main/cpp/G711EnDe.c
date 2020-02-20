#include <string.h>
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include "g711.h"

jint Java_com_yuriyshea_g711_encodeG711u(JNIEnv *env,
                                         jobject thiz, jbyteArray SpeechData,
                                         jbyteArray BitstreamData,
                                         jint srclen) {
    jbyte *speech = (jbyte *) (*env)->GetByteArrayElements(env, SpeechData, 0);
    jbyte *bitstream = (jbyte *) (*env)->GetByteArrayElements(env, BitstreamData, 0);

    int dstlen = 0;
    g711u_Encode((unsigned char *) speech, (unsigned char *) bitstream,
                 (unsigned int) srclen, (unsigned int *) &dstlen);

    (*env)->ReleaseByteArrayElements(env, SpeechData, speech, 0);
    (*env)->ReleaseByteArrayElements(env, BitstreamData, bitstream, 0);
    return dstlen;
}

jint Java_com_yuriyshea_g711_decodeG711u(JNIEnv *env,
                                         jobject thiz, jbyteArray BitstreamData,
                                         jbyteArray SpeechData,
                                         jint srclen) {
    jbyte *bitstream = (jbyte *) (*env)->GetByteArrayElements(env, BitstreamData, 0);
    jbyte *speech = (jbyte *) (*env)->GetByteArrayElements(env, SpeechData, 0);

    int dstlen = 0;
    g711u_Decode((unsigned char *) bitstream, (unsigned char *) speech,
                 (unsigned int) srclen, (unsigned int *) &dstlen);

    (*env)->ReleaseByteArrayElements(env, BitstreamData, bitstream, 0);
    (*env)->ReleaseByteArrayElements(env, SpeechData, speech, 0);
    return dstlen;
}

jint Java_com_yuriyshea_g711_encodeG711a(JNIEnv *env,
                                         jobject thiz, jbyteArray SpeechData,
                                         jbyteArray BitstreamData,
                                         jint srclen) {
    jbyte *speech = (jbyte *) (*env)->GetByteArrayElements(env, SpeechData, 0);
    jbyte *bitstream = (jbyte *) (*env)->GetByteArrayElements(env, BitstreamData, 0);

    int dstlen = 0;
    g711a_Encode((unsigned char *) speech, (unsigned char *) bitstream,
                 (unsigned int) srclen, (unsigned int *) &dstlen);

    (*env)->ReleaseByteArrayElements(env, SpeechData, speech, 0);
    (*env)->ReleaseByteArrayElements(env, BitstreamData, bitstream, 0);
    return dstlen;
}

jint Java_com_yuriyshea_g711_decodeG711a(JNIEnv *env,
                                         jobject thiz, jbyteArray BitstreamData,
                                         jbyteArray SpeechData,
                                         jint srclen) {
    jbyte *bitstream = (jbyte *) (*env)->GetByteArrayElements(env, BitstreamData, 0);
    jbyte *speech = (jbyte *) (*env)->GetByteArrayElements(env, SpeechData, 0);

    int dstlen = 0;
    g711a_Decode((unsigned char *) bitstream, (unsigned char *) speech,
                 (unsigned int) srclen, (unsigned int *) &dstlen);

    (*env)->ReleaseByteArrayElements(env, BitstreamData, bitstream, 0);
    (*env)->ReleaseByteArrayElements(env, SpeechData, speech, 0);
    return dstlen;
}