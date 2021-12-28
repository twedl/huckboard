/* Copyright 2020 tominabox1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers{
  _BASE,
  _SYM,
  _NUM
};

#define KC_NUM_SPC LT(_NUM, KC_SPC)
#define KC_SYM_ENT LT(_SYM, KC_ENT)
#define KC_CA LCTL_T(KC_A)
#define KC_AS LALT_T(KC_S)
#define KC_GD LGUI_T(KC_D)
#define KC_SF LSFT_T(KC_F)
#define KC_SJ RSFT_T(KC_J)
#define KC_GK RGUI_T(KC_K)
#define KC_AL RALT_T(KC_L)
#define KC_CSCLN RCTL_T(KC_SCLN)

#define KC_C1 LCTL_T(KC_1)
#define KC_A2 LALT_T(KC_2)
#define KC_G3 LGUI_T(KC_3)
#define KC_S4 LSFT_T(KC_4)
#define KC_S7 RSFT_T(KC_7)
#define KC_G8 RGUI_T(KC_8)
#define KC_A9 RALT_T(KC_9)
#define KC_C0 RCTL_T(KC_0)

#define xxx KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_33_split_space(
    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,     KC_P,
   KC_CA,  KC_AS,  KC_GD,  KC_SF,   KC_G,   KC_H,  KC_SJ,   KC_GK,  KC_AL, KC_CSCLN,
    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMM, KC_DOT,  KC_SLSH,
                 KC_ESC, KC_TAB, KC_SYM_ENT, KC_NUM_SPC, KC_BSPC, KC_F5
  ),

  [_SYM] = LAYOUT_33_split_space(
 	KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_BSLS, KC_PIPE, 
	KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_UNDS, KC_MINS, KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK, 
	KC_TILD,  KC_GRV, KC_SCLN, KC_COLN,    KC_0,    KC_1, KC_DQUO, KC_QUOT, KC_PLUS,  KC_EQL,
								  xxx, xxx, xxx, xxx, xxx, xxx
  ),

  [_NUM] = LAYOUT_33_split_space(
	KC_DEL,   xxx, KC_ESC,    xxx,   xxx,    xxx,     xxx, KC_TAB,    xxx,  RESET, 
	 KC_C1,	KC_A2,	KC_G3,	KC_S4,	KC_5,	KC_6,	KC_S7,	KC_G8,	KC_A9,	KC_C0,
	 KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10,
							 xxx, xxx, xxx, xxx, xxx, xxx
  ),

};


