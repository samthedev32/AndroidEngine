package com.samthedev.androidengine

import android.os.Bundle
import android.view.View
import android.view.Window
import android.view.WindowManager
import com.google.androidgamesdk.GameActivity


class MainActivity : GameActivity() {
  companion object {
    init {
      System.loadLibrary("androidengine")
    }
  }

  override fun onWindowFocusChanged(hasFocus: Boolean) {
    super.onWindowFocusChanged(hasFocus)
    if (hasFocus) {
      hideSystemUi()
    }
  }

  private fun hideSystemUi() {
    val decorView = window.decorView
    decorView.systemUiVisibility = (View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY
      or View.SYSTEM_UI_FLAG_LAYOUT_STABLE
      or View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
      or View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
      or View.SYSTEM_UI_FLAG_HIDE_NAVIGATION
      or View.SYSTEM_UI_FLAG_FULLSCREEN)
  }
}