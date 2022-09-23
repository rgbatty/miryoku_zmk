// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


// Build Options
#define MIRYOKU_ALPHAS_COLEMAKDHK
#define MIRYOKU_NAV_INVERTEDT

// Layers
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(G_LOWER,   "Game (R)") \
MIRYOKU_X(G_RAISE,   "Game (L)")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_G_BASE 10
#define U_G_LOWER 11
#define U_G_RAISE 12

// Mappings
#define MIRYOKU_LAYERMAPPING_G_BASE MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_G_LOWER MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_G_RAISE MIRYOKU_MAPPING

// Substituted Keymaps
#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \
&u_rgb_hui,        &u_rgb_sai,        &kp C_VOL_UP,      &u_rgb_bri,        &u_rgb_tog,        U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       \
&u_rgb_eff,        &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        &u_ep_tog,         &to U_G_BASE,      &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &to U_MEDIA,       &to U_FUN,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_FLIP \
&u_rgb_eff,        &u_rgb_hui,        &u_rgb_sai,        &u_rgb_bri,        &u_rgb_tog,        U_NA,              &to U_BASE,        &to U_EXTRA,       &to U_TAP,         &bootloader,       \
&kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        &u_ep_tog,         &to U_G_BASE,      &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &to U_MEDIA,       &to U_FUN,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &u_rgb_tog,        &u_rgb_eff,        &kp C_VOL_UP,      &u_rgb_hui,        &u_rgb_sai,        \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &to U_G_BASE,      &u_ep_tog,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        &u_rgb_bri,        \
U_NA,              &kp RALT,          &to U_FUN,         &to U_MEDIA,       U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &u_rgb_eff,        &u_rgb_hui,        &u_rgb_sai,        &u_rgb_bri,        &u_rgb_tog,        \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &to U_G_BASE,      &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        &u_ep_tog,         \
U_NA,              &kp RALT,          &to U_FUN,         &to U_MEDIA,       U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA \
&bootloader,       &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &u_rgb_tog,        &u_rgb_eff,        &u_rgb_hui,        &u_rgb_sai,        &u_rgb_bri,        \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &to U_G_BASE,      &u_ep_tog,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &to U_FUN,         &to U_MEDIA,       U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

// Added Keymaps
#define MIRYOKU_LAYER_G_BASE \
&kp T,             &kp Q,             &kp W,             &kp E,             &kp R,             U_NP,              U_NP,              U_NP,              U_NP,              U_NP,             \
&kp G,             &kp A,             &kp S,             &kp D,             &kp F,             U_NP,              U_NP,              U_NP,              U_NP,              U_NP,             \
&kp B,             &kp Z,             &kp X,             &kp C,             &kp V,             U_NP,              U_NP,              U_NP,              U_NP,              U_NP,             \
U_NP,              U_NP,              &kp ESC,           &kp SPC,           &lt U_G_LOWER TAB, U_NP,              &to U_BASE,        U_NP,              U_NP,              U_NP

#define MIRYOKU_LAYER_G_LOWER \
&kp LALT,          &kp N9,            &kp N0,            &kp MINUS,         &kp UNDER,         U_NP,              U_NP,              U_NP,              U_NP,              U_NP,             \
&kp LCTRL,         &kp N1,            &kp N2,            &kp N3,            &kp N4,            U_NP,              U_NP,              U_NP,              U_NP,              U_NP,             \
&kp LSHFT,         &kp N5,            &kp N6,            &kp N7,            &kp N8,            U_NP,              U_NP,              U_NP,              U_NP,              U_NP,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NP,              &to U_BASE,        U_NP,              U_NP,              U_NP

#define MIRYOKU_LAYER_G_RAISE \
&kp Y,             &kp P,             &kp O,             &kp I,             &kp U,             U_NP,              U_NP,              U_NP,              U_NP,              U_NP,             \
&kp H,             &kp SEMI           &kp L,             &kp K,             &kp J,             U_NP,              U_NP,              U_NP,              U_NP,              U_NP,             \
&kp N,             &kp Z,             &kp X,             &kp C,             &kp V,             U_NP,              U_NP,              U_NP,              U_NP,              U_NP,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NP,              &to U_BASE,        U_NP,              U_NP,              U_NP
