#pragma once

#include <dt-bindings/zmk/keys.h>

/* * JIS配列用のキーコードエイリアス
 * 左側があなたがkeymapに書く名前、右側が実際にPCに送信されるZMK標準（US）のキーコードです
 */

// --- 記号（Shiftなし） ---
#define JA_MINS MINUS // -
#define JA_CARET EQUAL // ^
#define JA_YEN  INT4  // ¥
#define JA_AT   LBKT  // @
#define JA_LBKT RBKT  // [
#define JA_RBKT NON_US_HASH // ]
#define JA_SCLN SEMI  // ;
#define JA_COLN APOS  // :
#define JA_BSLS INT3  // \ (バックスラッシュ)
#define JA_COMMA COMMA // ,
#define JA_DOT  DOT   // .
#define JA_SLSH FSLH  // /
#define JA_RO   INT1  // \ (ろ)

// --- 記号（Shiftあり） ---
#define JA_EXCL LS(N1) // !
#define JA_DQT  LS(N2) // "
#define JA_HASH LS(N3) // #
#define JA_DLLR LS(N4) // $
#define JA_PRCT LS(N5) // %
#define JA_AMPS LS(N6) // &
#define JA_SQT  LS(N7) // '
#define JA_LPAR LS(N8) // (
#define JA_RPAR LS(N9) // )
#define JA_EQL  LS(MINUS) // =
#define JA_TILDE LS(EQUAL) // ~
#define JA_PIPE LS(INT4) // |
#define JA_GRAVE LS(LBKT) // `
#define JA_LBRC LS(RBKT) // {
#define JA_RBRC LS(NON_US_HASH) // }
#define JA_PLUS LS(SEMI) // +
#define JA_ASTR LS(APOS) // *
#define JA_UNDS LS(INT3) // _
#define JA_LT   LS(COMMA) // <
#define JA_GT   LS(DOT) // >
#define JA_QUES LS(FSLH) // ?
