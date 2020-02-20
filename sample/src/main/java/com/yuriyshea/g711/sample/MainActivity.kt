package com.yuriyshea.g711.sample

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.yuriyshea.g711.G711
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        btnEncodeG711U.setOnClickListener {
            encodeG711U()
        }

        btnDecodeG711U.setOnClickListener {
            decodeG711U()
        }

        btnEncodeG711A.setOnClickListener {
            encodeG711A()
        }

        btnDecodeG711A.setOnClickListener {
            decodeG711A()
        }
    }

    private fun encodeG711U() {
        val src = ByteArray(256)
        val dst = ByteArray(256)
        G711.codec.encodeG711U(src, dst, src.size)
    }

    private fun decodeG711U() {
        val src = ByteArray(256)
        val dst = ByteArray(256)
        G711.codec.decodeG711U(src, dst, src.size)
    }

    private fun encodeG711A() {
        val src = ByteArray(256)
        val dst = ByteArray(256)
        G711.codec.encodeG711A(src, dst, src.size)
    }

    private fun decodeG711A() {
        val src = ByteArray(256)
        val dst = ByteArray(256)
        G711.codec.decodeG711A(src, dst, src.size)
    }
}