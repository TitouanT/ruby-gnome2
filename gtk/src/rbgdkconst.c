/* -*- c-file-style: "ruby"; indent-tabs-mode: nil -*- */
/************************************************

  rbgdkconst.c -

  $Author: mutoh $
  $Date: 2002/10/15 15:41:59 $

  Copyright (C) 1998-2000 Yukihiro Matsumoto,
                          Daisuke Kanda,
                          Hiroshi Igarashi
************************************************/

#include "global.h"

/*
 * Gdk module constants
 */
void
Init_gtk_gdk_const()
{
    rb_define_const(mGdk, "CURRENT_TIME", INT2FIX(GDK_CURRENT_TIME));
    rb_define_const(mGdk, "PRIORITY_EVENTS", INT2FIX(GDK_PRIORITY_EVENTS));
    rb_define_const(mGdk, "NONE", INT2FIX(GDK_NONE));
    rb_define_const(mGdk, "PARENT_RELATIVE", INT2FIX(GDK_PARENT_RELATIVE));

    /* GdkWindowType */
    rb_define_const(mGdk, "WINDOW_ROOT", INT2FIX(GDK_WINDOW_ROOT));
    rb_define_const(mGdk, "WINDOW_TOPLEVEL", INT2FIX(GDK_WINDOW_TOPLEVEL));
    rb_define_const(mGdk, "WINDOW_CHILD", INT2FIX(GDK_WINDOW_CHILD));
    rb_define_const(mGdk, "WINDOW_DIALOG", INT2FIX(GDK_WINDOW_DIALOG));
    rb_define_const(mGdk, "WINDOW_TEMP", INT2FIX(GDK_WINDOW_TEMP));
    rb_define_const(mGdk, "WINDOW_FOREIGN", INT2FIX(GDK_WINDOW_FOREIGN));

    /* GdkWindowClass */
    rb_define_const(mGdk, "INPUT_OUTPUT", INT2FIX(GDK_INPUT_OUTPUT));
    rb_define_const(mGdk, "INPUT_ONLY", INT2FIX(GDK_INPUT_ONLY));

    /* GdkVisualType */
    rb_define_const(mGdk, "VISUAL_STATIC_GRAY", INT2FIX(GDK_VISUAL_STATIC_GRAY));
    rb_define_const(mGdk, "VISUAL_GRAYSCALE", INT2FIX(GDK_VISUAL_GRAYSCALE));
    rb_define_const(mGdk, "VISUAL_STATIC_COLOR", INT2FIX(GDK_VISUAL_STATIC_COLOR));
    rb_define_const(mGdk, "VISUAL_PSEUDO_COLOR", INT2FIX(GDK_VISUAL_PSEUDO_COLOR));
    rb_define_const(mGdk, "VISUAL_TRUE_COLOR", INT2FIX(GDK_VISUAL_TRUE_COLOR));
    rb_define_const(mGdk, "VISUAL_DIRECT_COLOR", INT2FIX(GDK_VISUAL_DIRECT_COLOR));

    /* GdkFontType */
    rb_define_const(mGdk, "FONT_FONT", INT2FIX(GDK_FONT_FONT));
    rb_define_const(mGdk, "FONT_FONTSET", INT2FIX(GDK_FONT_FONTSET));

    /* GdkWindowAttibutesType */
    rb_define_const(mGdk, "WA_TITLE", INT2FIX(GDK_WA_TITLE));
    rb_define_const(mGdk, "WA_X", INT2FIX(GDK_WA_X));
    rb_define_const(mGdk, "WA_Y", INT2FIX(GDK_WA_Y));
    rb_define_const(mGdk, "WA_CURSOR", INT2FIX(GDK_WA_CURSOR));
    rb_define_const(mGdk, "WA_COLORMAP", INT2FIX(GDK_WA_COLORMAP));
    rb_define_const(mGdk, "WA_VISUAL", INT2FIX(GDK_WA_VISUAL));
    rb_define_const(mGdk, "WA_WMCLASS", INT2FIX(GDK_WA_WMCLASS));
    rb_define_const(mGdk, "WA_NOREDIR", INT2FIX(GDK_WA_NOREDIR));

    /* GdkFilterReturn */
    rb_define_const(mGdk, "FILTER_CONTINUE", INT2FIX(GDK_FILTER_CONTINUE));
    rb_define_const(mGdk, "FILTER_TRANSLATE", INT2FIX(GDK_FILTER_TRANSLATE));
    rb_define_const(mGdk, "FILTER_REMOVE", INT2FIX(GDK_FILTER_REMOVE));

    /* GdkModifierType */
    rb_define_const(mGdk, "SHIFT_MASK", INT2FIX(GDK_SHIFT_MASK));
    rb_define_const(mGdk, "LOCK_MASK", INT2FIX(GDK_LOCK_MASK));
    rb_define_const(mGdk, "CONTROL_MASK", INT2FIX(GDK_CONTROL_MASK));
    rb_define_const(mGdk, "MOD1_MASK", INT2FIX(GDK_MOD1_MASK));
    rb_define_const(mGdk, "MOD2_MASK", INT2FIX(GDK_MOD2_MASK));
    rb_define_const(mGdk, "MOD3_MASK", INT2FIX(GDK_MOD3_MASK));
    rb_define_const(mGdk, "MOD4_MASK", INT2FIX(GDK_MOD4_MASK));
    rb_define_const(mGdk, "MOD5_MASK", INT2FIX(GDK_MOD5_MASK));
    rb_define_const(mGdk, "BUTTON1_MASK", INT2FIX(GDK_BUTTON1_MASK));
    rb_define_const(mGdk, "BUTTON2_MASK", INT2FIX(GDK_BUTTON2_MASK));
    rb_define_const(mGdk, "BUTTON3_MASK", INT2FIX(GDK_BUTTON3_MASK));
    rb_define_const(mGdk, "BUTTON4_MASK", INT2FIX(GDK_BUTTON4_MASK));
    rb_define_const(mGdk, "BUTTON5_MASK", INT2FIX(GDK_BUTTON5_MASK));

    /* GdkInputCondition */
    rb_define_const(mGdk, "INPUT_READ", INT2FIX(GDK_INPUT_READ));
    rb_define_const(mGdk, "INPUT_WRITE", INT2FIX(GDK_INPUT_WRITE));
    rb_define_const(mGdk, "INPUT_EXCEPTION", INT2FIX(GDK_INPUT_EXCEPTION));

    /* GdkStatus */
    rb_define_const(mGdk, "OK", INT2FIX(GDK_OK));
    rb_define_const(mGdk, "ERROR", INT2FIX(GDK_ERROR));
    rb_define_const(mGdk, "ERROR_PARAM", INT2FIX(GDK_ERROR_PARAM));
    rb_define_const(mGdk, "ERROR_FILE", INT2FIX(GDK_ERROR_FILE));
    rb_define_const(mGdk, "ERROR_MEM", INT2FIX(GDK_ERROR_MEM));

    /* GdkPropMode */
    rb_define_const(mGdk, "PROP_MODE_REPLACE", INT2FIX(GDK_PROP_MODE_REPLACE));
    rb_define_const(mGdk, "PROP_MODE_PREPEND", INT2FIX(GDK_PROP_MODE_PREPEND));
    rb_define_const(mGdk, "PROP_MODE_APPEND", INT2FIX(GDK_PROP_MODE_APPEND));

    /* GdkInputSource */
    rb_define_const(mGdk, "SOURCE_MOUSE", INT2FIX(GDK_SOURCE_MOUSE));
    rb_define_const(mGdk, "SOURCE_PEN", INT2FIX(GDK_SOURCE_PEN));
    rb_define_const(mGdk, "SOURCE_ERASER", INT2FIX(GDK_SOURCE_ERASER));
    rb_define_const(mGdk, "SOURCE_CURSOR", INT2FIX(GDK_SOURCE_CURSOR));

    /* GdkInputMode */
    rb_define_const(mGdk, "MODE_DISABLED", INT2FIX(GDK_MODE_DISABLED));
    rb_define_const(mGdk, "MODE_SCREEN", INT2FIX(GDK_MODE_SCREEN));
    rb_define_const(mGdk, "MODE_WINDOW", INT2FIX(GDK_MODE_WINDOW));

    /* GdkAxisUse */
    rb_define_const(mGdk, "AXIS_IGNORE", INT2FIX(GDK_AXIS_IGNORE));
    rb_define_const(mGdk, "AXIS_X", INT2FIX(GDK_AXIS_X));
    rb_define_const(mGdk, "AXIS_Y", INT2FIX(GDK_AXIS_Y));
    rb_define_const(mGdk, "AXIS_PRESSURE", INT2FIX(GDK_AXIS_PRESSURE));
    rb_define_const(mGdk, "AXIS_XTILT", INT2FIX(GDK_AXIS_XTILT));
    rb_define_const(mGdk, "AXIS_YTILT", INT2FIX(GDK_AXIS_YTILT));
    rb_define_const(mGdk, "AXIS_LAST", INT2FIX(GDK_AXIS_LAST));

    /* GdkExtensionMode */
    rb_define_const(mGdk, "EXTENSION_EVENTS_NONE", INT2FIX(GDK_EXTENSION_EVENTS_NONE));
    rb_define_const(mGdk, "EXTENSION_EVENTS_ALL", INT2FIX(GDK_EXTENSION_EVENTS_ALL));
    rb_define_const(mGdk, "EXTENSION_EVENTS_CURSOR", INT2FIX(GDK_EXTENSION_EVENTS_CURSOR));

    /* GdkWMDecoration */
    rb_define_const(mGdk, "DECOR_ALL", INT2FIX(GDK_DECOR_ALL));
    rb_define_const(mGdk, "DECOR_BORDER", INT2FIX(GDK_DECOR_BORDER));
    rb_define_const(mGdk, "DECOR_RESIZEH", INT2FIX(GDK_DECOR_RESIZEH));
    rb_define_const(mGdk, "DECOR_TITLE", INT2FIX(GDK_DECOR_TITLE));
    rb_define_const(mGdk, "DECOR_MENU", INT2FIX(GDK_DECOR_MENU));
    rb_define_const(mGdk, "DECOR_MINIMIZE", INT2FIX(GDK_DECOR_MINIMIZE));
    rb_define_const(mGdk, "DECOR_MAXIMIZE", INT2FIX(GDK_DECOR_MAXIMIZE));

    /* GdkWMFunction */
    rb_define_const(mGdk, "FUNC_ALL", INT2FIX(GDK_FUNC_ALL));
    rb_define_const(mGdk, "FUNC_RESIZE", INT2FIX(GDK_FUNC_RESIZE));
    rb_define_const(mGdk, "FUNC_MOVE", INT2FIX(GDK_FUNC_MOVE));
    rb_define_const(mGdk, "FUNC_MINIMIZE", INT2FIX(GDK_FUNC_MINIMIZE));
    rb_define_const(mGdk, "FUNC_MAXIMIZE", INT2FIX(GDK_FUNC_MAXIMIZE));
    rb_define_const(mGdk, "FUNC_CLOSE", INT2FIX(GDK_FUNC_CLOSE));

    /* GdkOverlapType */
    rb_define_const(mGdk, "OVERLAP_RACTANGLE_IN", INT2FIX(GDK_OVERLAP_RECTANGLE_IN));
    rb_define_const(mGdk, "OVERLAP_RACTANGLE_OUT", INT2FIX(GDK_OVERLAP_RECTANGLE_OUT));
    rb_define_const(mGdk, "OVERLAP_RACTANGLE_PART", INT2FIX(GDK_OVERLAP_RECTANGLE_PART));
}


