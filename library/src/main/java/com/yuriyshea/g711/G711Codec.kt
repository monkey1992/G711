package com.yuriyshea.g711

class G711Codec internal constructor() {

    init {
        System.loadLibrary("g711")
    }

    /**
     * 编码g711u
     *
     * @param src    编码之前的数据
     * @param dst    编码之后的数据
     * @param srcLen 编码之前的数据长度
     * @return 编码之后的数据长度
     */
    fun encodeG711U(src: ByteArray, dst: ByteArray, srcLen: Int): Int {
        return encodeG711u(src, dst, srcLen)
    }

    /**
     * 解码g711u
     *
     * @param src    解码之前的数据
     * @param dst    解码之后的数据
     * @param srcLen 解码之前的数据长度
     * @return 解码之后的数据长度
     */
    fun decodeG711U(src: ByteArray, dst: ByteArray, srcLen: Int): Int {
        return decodeG711u(src, dst, srcLen)
    }

    /**
     * 编码g711a
     *
     * @param src    编码之前的数据
     * @param dst    编码之后的数据
     * @param srcLen 编码之前的数据长度
     * @return 编码之后的数据长度
     */
    fun encodeG711A(src: ByteArray, dst: ByteArray, srcLen: Int): Int {
        return encodeG711a(src, dst, srcLen)
    }

    /**
     * 解码g711a
     *
     * @param src    解码之前的数据
     * @param dst    解码之后的数据
     * @param srcLen 解码之前的数据长度
     * @return 解码之后的数据长度
     */
    fun decodeG711A(src: ByteArray, dst: ByteArray, srcLen: Int): Int {
        return decodeG711a(src, dst, srcLen)
    }

    private external fun encodeG711u(src: ByteArray, dst: ByteArray, srcLen: Int): Int

    private external fun decodeG711u(src: ByteArray, dst: ByteArray, srcLen: Int): Int

    private external fun encodeG711a(src: ByteArray, dst: ByteArray, srcLen: Int): Int

    private external fun decodeG711a(src: ByteArray, dst: ByteArray, srcLen: Int): Int
}