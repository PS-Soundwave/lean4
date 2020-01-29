// Lean compiler output
// Module: Init.Data.String.Basic
// Imports: Init.Data.List.Basic Init.Data.Char.Basic Init.Data.Option.Basic
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_string_data(lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Substring_takeWhileAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_prev___boxed(lean_object*, lean_object*);
lean_object* l_String_Iterator_curr___boxed(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_String_anyAux___main___at_String_all___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_splitOnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_trim(lean_object*);
lean_object* l_String_contains___boxed(lean_object*, lean_object*);
lean_object* l_String_Iterator_remainingToString(lean_object*);
lean_object* l_String_splitOnAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_splitOn(lean_object*, lean_object*);
lean_object* l_String_toList(lean_object*);
lean_object* l_List_intercalate___rarg(lean_object*, lean_object*);
uint8_t l_String_Iterator_isPrefixOfRemaining(lean_object*, lean_object*);
lean_object* l_String_revPosOfAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_get___boxed(lean_object*, lean_object*);
lean_object* l_Substring_extract___closed__1;
lean_object* l_String_length___boxed(lean_object*);
lean_object* l_String_Iterator_remainingBytes___boxed(lean_object*);
lean_object* l_String_foldrAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_take___boxed(lean_object*, lean_object*);
lean_object* l_Substring_extract___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_4__utf8SetAux(uint32_t, lean_object*, lean_object*, lean_object*);
lean_object* l_String_trimRight___boxed(lean_object*);
lean_object* l_Substring_takeWhileAux___main___at_Substring_trimLeft___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_nextWhile___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_posOfAux___main(lean_object*, uint32_t, lean_object*, lean_object*);
uint8_t l_String_anyAux___main___at_Substring_all___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_drop(lean_object*, lean_object*);
lean_object* l_String_mk___boxed(lean_object*);
lean_object* l_String_Iterator_extract___boxed(lean_object*, lean_object*);
lean_object* l_Substring_takeRight___boxed(lean_object*, lean_object*);
lean_object* l_String_revPosOf(lean_object*, uint32_t);
lean_object* l_Substring_toString___boxed(lean_object*);
lean_object* l_Substring_takeWhileAux___main___at_String_nextUntil___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_takeRightWhileAux___main___at_Substring_trimRight___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_String_offsetOfPosAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_anyAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_modify(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___main___at_String_join___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_String_str___boxed(lean_object*, lean_object*);
uint8_t l_Substring_any(lean_object*, lean_object*);
lean_object* l_Substring_splitOn___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082___main(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toNat(lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* l_String_isPrefixOfAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_isEmpty___boxed(lean_object*);
lean_object* l_Nat_repeatAux___main___at_String_pushn___spec__1(uint32_t, lean_object*, lean_object*);
lean_object* l_String_back___boxed(lean_object*);
uint8_t l_Char_isDigit(uint32_t);
lean_object* l_String_nextUntil(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toSubstring(lean_object*);
lean_object* l_Substring_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_String_append___boxed(lean_object*, lean_object*);
lean_object* l_String_Iterator_hasPrev___boxed(lean_object*);
uint8_t l_String_any(lean_object*, lean_object*);
lean_object* l_String_foldl___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_foldlAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_splitOnAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_DecidableEq___boxed(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_String_set___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_String_splitAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Char_isWhitespace(uint32_t);
lean_object* l_String_splitAux___main___closed__1;
lean_object* l_String_Iterator_toEnd(lean_object*);
lean_object* l_List_map___main___at_String_intercalate___spec__1(lean_object*);
uint8_t l_String_anyAux___main___at_String_contains___spec__1(uint32_t, lean_object*, lean_object*, lean_object*);
lean_object* l_String_split___boxed(lean_object*, lean_object*);
lean_object* l_String_splitOn(lean_object*, lean_object*);
lean_object* l_String_dropWhile(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_trimLeft___boxed(lean_object*);
lean_object* l_String_dropRight___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_7__utf8ExtractAux_u2081___main(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_String_isPrefixOfAux(lean_object*, lean_object*, lean_object*);
lean_object* l_String_anyAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_takeRightWhileAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repeatAux___main___at_String_pushn___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_trim___boxed(lean_object*);
lean_object* l_String_foldrAux___main(lean_object*);
lean_object* l___private_Init_Data_String_Basic_5__utf8PrevAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_String_foldlAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_offsetOfPosAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_HasAppend;
lean_object* l_String_foldlAux___main___at_String_toNat___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t l_Substring_all(lean_object*, lean_object*);
lean_object* l_Substring_dropRight___boxed(lean_object*, lean_object*);
lean_object* l_String_trimRight(lean_object*);
lean_object* l_String_next___boxed(lean_object*, lean_object*);
lean_object* l_String_isNat___boxed(lean_object*);
lean_object* l_String_offsetOfPosAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_foldlAux___main___at_String_toNat___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_dropWhile(lean_object*, lean_object*);
lean_object* l_Substring_all___boxed(lean_object*, lean_object*);
lean_object* l_String_takeWhile(lean_object*, lean_object*);
lean_object* l_String_drop___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Substring_next___boxed(lean_object*, lean_object*);
uint8_t l_String_contains(lean_object*, uint32_t);
lean_object* l_Substring_next(lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_atEnd___boxed(lean_object*, lean_object*);
lean_object* l_String_Iterator_forward(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_HasLess;
lean_object* l_String_drop___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_5__utf8PrevAux___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_foldl___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_4__utf8SetAux___main(uint32_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_takeRight(lean_object*, lean_object*);
lean_object* l_String_Iterator_extract(lean_object*, lean_object*);
lean_object* l_String_pushn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_take(lean_object*, lean_object*);
uint8_t l_Substring_isNat(lean_object*);
lean_object* l_Substring_foldr___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Substring_contains(lean_object*, uint32_t);
lean_object* l___private_Init_Data_String_Basic_7__utf8ExtractAux_u2081___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Iterator_pos___boxed(lean_object*);
lean_object* l___private_Init_Data_String_Basic_3__utf8GetAux___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_join(lean_object*);
lean_object* l_String_foldlAux___main(lean_object*);
lean_object* l_String_revPosOfAux(lean_object*, uint32_t, lean_object*);
lean_object* l_String_HasSizeof___closed__1;
lean_object* l___private_Init_Data_String_Basic_5__utf8PrevAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Iterator_nextn(lean_object*, lean_object*);
lean_object* l_String_foldrAux___main___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Iterator_isPrefixOfRemaining___boxed(lean_object*, lean_object*);
lean_object* l_Substring_takeWhile(lean_object*, lean_object*);
lean_object* l_String_bsize___boxed(lean_object*);
lean_object* l_String_Iterator_forward___main(lean_object*, lean_object*);
lean_object* l_String_singleton(uint32_t);
lean_object* l_String_Iterator_pos(lean_object*);
lean_object* l_String_Iterator_prev(lean_object*);
uint32_t l_String_back(lean_object*);
uint8_t l_String_all(lean_object*, lean_object*);
lean_object* l_Substring_foldl(lean_object*);
uint32_t l_Substring_get(lean_object*, lean_object*);
lean_object* l_Substring_any___boxed(lean_object*, lean_object*);
lean_object* l_Substring_take___boxed(lean_object*, lean_object*);
lean_object* l_String_takeRight(lean_object*, lean_object*);
lean_object* l_Substring_toIterator(lean_object*);
lean_object* l_Substring_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Iterator_toString___boxed(lean_object*);
uint8_t l_String_isNat(lean_object*);
lean_object* l_Substring_takeWhileAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_posOfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_4__utf8SetAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_front___boxed(lean_object*);
lean_object* l_String_Iterator_remainingToString___boxed(lean_object*);
lean_object* l_Substring_trimRight(lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_takeRightWhileAux(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_coeDecidableEq(uint8_t);
lean_object* l_String_splitOn___boxed(lean_object*, lean_object*);
lean_object* l_String_Iterator_prevn(lean_object*, lean_object*);
lean_object* l_String_foldl(lean_object*);
lean_object* l___private_Init_Data_String_Basic_7__utf8ExtractAux_u2081(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_foldr___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_anyAux___main___at_Substring_all___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Iterator_next(lean_object*);
lean_object* l_String_nextUntil___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_front___boxed(lean_object*);
lean_object* l_String_trimLeft(lean_object*);
uint8_t l_String_posOfAux___main___closed__2;
lean_object* l_String_join___boxed(lean_object*);
lean_object* l_String_posOfAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_data___boxed(lean_object*);
uint8_t l_String_posOfAux___main___closed__1;
lean_object* l_String_dropRight(lean_object*, lean_object*);
lean_object* l_String_offsetOfPos___boxed(lean_object*, lean_object*);
lean_object* l_String_toNat___boxed(lean_object*);
lean_object* l_String_splitAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_String_Iterator_hasNext(lean_object*);
lean_object* l_String_Iterator_nextn___main(lean_object*, lean_object*);
lean_object* l_String_decEq___boxed(lean_object*, lean_object*);
lean_object* l_String_takeRight___boxed(lean_object*, lean_object*);
uint32_t l_String_front(lean_object*);
lean_object* l_String_mapAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_String_dropWhile___boxed(lean_object*, lean_object*);
lean_object* l_String_anyAux___main___at_Substring_contains___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_atEnd___boxed(lean_object*, lean_object*);
lean_object* l_Substring_posOf___boxed(lean_object*, lean_object*);
lean_object* l_Substring_takeWhileAux___main___at_String_nextUntil___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_drop___closed__1;
lean_object* l_String_nextWhile(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Iterator_hasNext___boxed(lean_object*);
lean_object* l_String_Iterator_prevn___main(lean_object*, lean_object*);
lean_object* l_String_offsetOfPosAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_revPosOf___boxed(lean_object*, lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_String_posOfAux(lean_object*, uint32_t, lean_object*, lean_object*);
lean_object* l_String_splitAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_drop___closed__2;
uint8_t l_String_isEmpty(lean_object*);
lean_object* l_Substring_drop___boxed(lean_object*, lean_object*);
uint32_t l___private_Init_Data_String_Basic_3__utf8GetAux(lean_object*, lean_object*, lean_object*);
lean_object* l_String_foldrAux(lean_object*);
uint8_t l_String_DecidableEq(lean_object*, lean_object*);
lean_object* l_String_bsize(lean_object*);
lean_object* l___private_Init_Data_String_Basic_1__csize___boxed(lean_object*);
lean_object* l_Substring_takeRightWhile(lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_2__utf8ByteSizeAux___main(lean_object*, lean_object*);
uint8_t l_String_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Substring_foldl___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_foldlAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Substring_take(lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_3__utf8GetAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_foldr___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_isNat___boxed(lean_object*);
lean_object* l_String_split(lean_object*, lean_object*);
lean_object* l_String_any___boxed(lean_object*, lean_object*);
uint32_t l_String_Iterator_curr(lean_object*);
lean_object* l_Substring_foldr(lean_object*);
lean_object* l_String_extract___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_takeWhile___boxed(lean_object*, lean_object*);
lean_object* l_String_mapAux(lean_object*, lean_object*, lean_object*);
lean_object* l_String_str(lean_object*, uint32_t);
uint8_t l_String_Iterator_hasPrev(lean_object*);
lean_object* l_String_decLt___boxed(lean_object*, lean_object*);
lean_object* l_String_foldrAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_trimLeft(lean_object*);
lean_object* l_String_Iterator_setCurr(lean_object*, uint32_t);
uint32_t l_Char_utf8Size(uint32_t);
uint32_t l_Substring_front(lean_object*);
lean_object* l___private_Init_Data_String_Basic_4__utf8SetAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Char_toString(uint32_t);
lean_object* l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082(lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_toIterator___boxed(lean_object*);
lean_object* l_Substring_dropRight(lean_object*, lean_object*);
lean_object* l_String_splitAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_String_anyAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Substring_takeWhileAux___main___at_Substring_trimLeft___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_String_anyAux___main___at_String_all___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_String_anyAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_splitOnAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_HasAppend___closed__1;
lean_object* l_String_foldlAux(lean_object*);
lean_object* l_Substring_takeRightWhileAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_takeWhileAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_takeRightWhileAux___main___at_Substring_trimRight___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_5__utf8PrevAux(lean_object*, lean_object*, lean_object*);
lean_object* l_String_posOf___boxed(lean_object*, lean_object*);
uint8_t l_String_anyAux___main___at_String_isNat___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_String_isPrefixOfAux___main(lean_object*, lean_object*, lean_object*);
uint8_t l_Substring_atEnd(lean_object*, lean_object*);
lean_object* l_Substring_takeRightWhileAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_isPrefixOf___boxed(lean_object*, lean_object*);
lean_object* l_String_trim(lean_object*);
lean_object* l_String_mkIterator(lean_object*);
uint32_t l___private_Init_Data_String_Basic_3__utf8GetAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_String_map(lean_object*, lean_object*);
lean_object* l_String_Iterator_toString(lean_object*);
lean_object* l_List_asString(lean_object*);
lean_object* l_String_all___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_7__utf8ExtractAux_u2081___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_anyAux___main___at_String_isNat___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Substring_takeWhileAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_revPosOfAux___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Substring_splitOnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_foldr(lean_object*);
lean_object* l_String_Iterator_setCurr___boxed(lean_object*, lean_object*);
lean_object* l_Substring_posOf(lean_object*, uint32_t);
lean_object* l_String_Iterator_remainingBytes(lean_object*);
lean_object* l_Substring_toString(lean_object*);
lean_object* l_String_utf8ByteSize___boxed(lean_object*);
lean_object* l_Substring_foldr___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_String_anyAux___main___at_Substring_contains___spec__1(uint32_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_2__utf8ByteSizeAux(lean_object*, lean_object*);
lean_object* l_String_foldrAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_push___boxed(lean_object*, lean_object*);
lean_object* l_String_drop(lean_object*, lean_object*);
lean_object* l_String_isPrefixOfAux___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_pushn(lean_object*, uint32_t, lean_object*);
lean_object* l_String_splitOnAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_singleton___boxed(lean_object*);
lean_object* l_String_Inhabited;
lean_object* l_String_revPosOfAux___main(lean_object*, uint32_t, lean_object*);
lean_object* l_Substring_prev___boxed(lean_object*, lean_object*);
lean_object* l_Substring_get___boxed(lean_object*, lean_object*);
lean_object* l_String_posOf(lean_object*, uint32_t);
lean_object* l_Substring_dropRightWhile(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* l_String_modify___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_anyAux___main___at_String_contains___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Substring_contains___boxed(lean_object*, lean_object*);
lean_object* l_List_foldl___main___at_String_join___spec__1(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* l___private_Init_Data_String_Basic_1__csize(uint32_t);
lean_object* l_Substring_prev(lean_object*, lean_object*);
lean_object* l_Substring_toNat(lean_object*);
lean_object* l_String_foldlAux___main___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_offsetOfPos(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_HasSizeof;
lean_object* l_Char_toString___boxed(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_String_mk___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_string_mk(x_1);
return x_2;
}
}
lean_object* l_String_data___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_string_data(x_1);
return x_2;
}
}
lean_object* l_String_decEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_string_dec_eq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_String_DecidableEq(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_string_dec_eq(x_1, x_2);
return x_3;
}
}
lean_object* l_String_DecidableEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_String_DecidableEq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_List_asString(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_string_mk(x_1);
return x_2;
}
}
lean_object* _init_l_String_HasLess() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_String_decLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_string_dec_lt(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_String_length___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_string_length(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_String_push___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = lean_string_push(x_1, x_3);
return x_4;
}
}
lean_object* l_String_append___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_string_append(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_String_toList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_string_data(x_1);
return x_2;
}
}
lean_object* l___private_Init_Data_String_Basic_1__csize(uint32_t x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = l_Char_utf8Size(x_1);
x_3 = lean_uint32_to_nat(x_2);
return x_3;
}
}
lean_object* l___private_Init_Data_String_Basic_1__csize___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l___private_Init_Data_String_Basic_1__csize(x_2);
return x_3;
}
}
lean_object* l___private_Init_Data_String_Basic_2__utf8ByteSizeAux___main(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; uint32_t x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_6 = l___private_Init_Data_String_Basic_1__csize(x_5);
x_7 = lean_nat_add(x_2, x_6);
lean_dec(x_6);
lean_dec(x_2);
x_1 = x_4;
x_2 = x_7;
goto _start;
}
}
}
lean_object* l___private_Init_Data_String_Basic_2__utf8ByteSizeAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Data_String_Basic_2__utf8ByteSizeAux___main(x_1, x_2);
return x_3;
}
}
lean_object* l_String_utf8ByteSize___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_string_utf8_byte_size(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_String_bsize(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* l_String_bsize___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_bsize(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_String_toSubstring(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set(x_4, 2, x_2);
return x_4;
}
}
uint32_t l___private_Init_Data_String_Basic_3__utf8GetAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint32_t x_4; 
lean_dec(x_2);
x_4 = 65;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_nat_dec_eq(x_2, x_3);
if (x_7 == 0)
{
uint32_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_unbox_uint32(x_5);
lean_dec(x_5);
x_9 = l___private_Init_Data_String_Basic_1__csize(x_8);
x_10 = lean_nat_add(x_2, x_9);
lean_dec(x_9);
lean_dec(x_2);
x_1 = x_6;
x_2 = x_10;
goto _start;
}
else
{
uint32_t x_12; 
lean_dec(x_6);
lean_dec(x_2);
x_12 = lean_unbox_uint32(x_5);
lean_dec(x_5);
return x_12;
}
}
}
}
lean_object* l___private_Init_Data_String_Basic_3__utf8GetAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = l___private_Init_Data_String_Basic_3__utf8GetAux___main(x_1, x_2, x_3);
lean_dec(x_3);
x_5 = lean_box_uint32(x_4);
return x_5;
}
}
uint32_t l___private_Init_Data_String_Basic_3__utf8GetAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; 
x_4 = l___private_Init_Data_String_Basic_3__utf8GetAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l___private_Init_Data_String_Basic_3__utf8GetAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = l___private_Init_Data_String_Basic_3__utf8GetAux(x_1, x_2, x_3);
lean_dec(x_3);
x_5 = lean_box_uint32(x_4);
return x_5;
}
}
lean_object* l_String_get___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_string_utf8_get(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box_uint32(x_3);
return x_4;
}
}
lean_object* l___private_Init_Data_String_Basic_4__utf8SetAux___main(uint32_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_2;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_nat_dec_eq(x_3, x_4);
if (x_8 == 0)
{
uint32_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_unbox_uint32(x_6);
x_10 = l___private_Init_Data_String_Basic_1__csize(x_9);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_10);
x_12 = l___private_Init_Data_String_Basic_4__utf8SetAux___main(x_1, x_7, x_11, x_4);
lean_dec(x_11);
lean_ctor_set(x_2, 1, x_12);
return x_2;
}
else
{
lean_object* x_13; 
lean_dec(x_6);
x_13 = lean_box_uint32(x_1);
lean_ctor_set(x_2, 0, x_13);
return x_2;
}
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_16 = lean_nat_dec_eq(x_3, x_4);
if (x_16 == 0)
{
uint32_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_unbox_uint32(x_14);
x_18 = l___private_Init_Data_String_Basic_1__csize(x_17);
x_19 = lean_nat_add(x_3, x_18);
lean_dec(x_18);
x_20 = l___private_Init_Data_String_Basic_4__utf8SetAux___main(x_1, x_15, x_19, x_4);
lean_dec(x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_14);
x_22 = lean_box_uint32(x_1);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_15);
return x_23;
}
}
}
}
}
lean_object* l___private_Init_Data_String_Basic_4__utf8SetAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; lean_object* x_6; 
x_5 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_6 = l___private_Init_Data_String_Basic_4__utf8SetAux___main(x_5, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l___private_Init_Data_String_Basic_4__utf8SetAux(uint32_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Data_String_Basic_4__utf8SetAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Init_Data_String_Basic_4__utf8SetAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; lean_object* x_6; 
x_5 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_6 = l___private_Init_Data_String_Basic_4__utf8SetAux(x_5, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_String_set___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_5 = lean_string_utf8_set(x_1, x_2, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_String_modify(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; lean_object* x_6; uint32_t x_7; lean_object* x_8; 
x_4 = lean_string_utf8_get(x_1, x_2);
x_5 = lean_box_uint32(x_4);
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_unbox_uint32(x_6);
lean_dec(x_6);
x_8 = lean_string_utf8_set(x_1, x_2, x_7);
return x_8;
}
}
lean_object* l_String_modify___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_String_modify(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_String_next___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Init_Data_String_Basic_5__utf8PrevAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_unsigned_to_nat(0u);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint32_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_unbox_uint32(x_5);
lean_dec(x_5);
x_8 = l___private_Init_Data_String_Basic_1__csize(x_7);
x_9 = lean_nat_add(x_2, x_8);
lean_dec(x_8);
x_10 = lean_nat_dec_eq(x_9, x_3);
if (x_10 == 0)
{
lean_dec(x_2);
x_1 = x_6;
x_2 = x_9;
goto _start;
}
else
{
lean_dec(x_9);
lean_dec(x_6);
return x_2;
}
}
}
}
lean_object* l___private_Init_Data_String_Basic_5__utf8PrevAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_String_Basic_5__utf8PrevAux___main(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l___private_Init_Data_String_Basic_5__utf8PrevAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_String_Basic_5__utf8PrevAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l___private_Init_Data_String_Basic_5__utf8PrevAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_String_Basic_5__utf8PrevAux(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_String_prev___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_string_utf8_prev(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint32_t l_String_front(lean_object* x_1) {
_start:
{
lean_object* x_2; uint32_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_string_utf8_get(x_1, x_2);
return x_3;
}
}
lean_object* l_String_front___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = l_String_front(x_1);
lean_dec(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
uint32_t l_String_back(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint32_t x_4; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = lean_string_utf8_prev(x_1, x_2);
lean_dec(x_2);
x_4 = lean_string_utf8_get(x_1, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_String_back___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = l_String_back(x_1);
lean_dec(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
lean_object* l_String_atEnd___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_string_utf8_at_end(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t _init_l_String_posOfAux___main___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 0;
x_2 = l_coeDecidableEq(x_1);
return x_2;
}
}
uint8_t _init_l_String_posOfAux___main___closed__2() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 1;
x_2 = l_coeDecidableEq(x_1);
return x_2;
}
}
lean_object* l_String_posOfAux___main(lean_object* x_1, uint32_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; 
x_5 = lean_nat_dec_eq(x_4, x_3);
x_6 = l_coeDecidableEq(x_5);
if (x_6 == 0)
{
uint32_t x_7; uint8_t x_8; 
x_7 = lean_string_utf8_get(x_1, x_4);
x_8 = x_7 == x_2;
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_String_posOfAux___main___closed__1;
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_string_utf8_next(x_1, x_4);
lean_dec(x_4);
x_4 = x_10;
goto _start;
}
else
{
return x_4;
}
}
else
{
uint8_t x_12; 
x_12 = l_String_posOfAux___main___closed__2;
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_string_utf8_next(x_1, x_4);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
else
{
return x_4;
}
}
}
else
{
return x_4;
}
}
}
lean_object* l_String_posOfAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; lean_object* x_6; 
x_5 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_6 = l_String_posOfAux___main(x_1, x_5, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_String_posOfAux(lean_object* x_1, uint32_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_String_posOfAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_String_posOfAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; lean_object* x_6; 
x_5 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_6 = l_String_posOfAux(x_1, x_5, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_String_posOf(lean_object* x_1, uint32_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_string_utf8_byte_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_String_posOfAux___main(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_String_posOf___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = l_String_posOf(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_String_revPosOfAux___main(lean_object* x_1, uint32_t x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; uint8_t x_5; 
x_4 = lean_string_utf8_get(x_1, x_3);
x_5 = x_4 == x_2;
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l_String_posOfAux___main___closed__1;
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; uint8_t x_9; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_3, x_7);
x_9 = l_coeDecidableEq(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_string_utf8_prev(x_1, x_3);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
lean_dec(x_3);
x_12 = lean_box(0);
return x_12;
}
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_3);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = l_String_posOfAux___main___closed__2;
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; uint8_t x_17; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_3, x_15);
x_17 = l_coeDecidableEq(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_string_utf8_prev(x_1, x_3);
lean_dec(x_3);
x_3 = x_18;
goto _start;
}
else
{
lean_object* x_20; 
lean_dec(x_3);
x_20 = lean_box(0);
return x_20;
}
}
else
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_3);
return x_21;
}
}
}
}
lean_object* l_String_revPosOfAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = l_String_revPosOfAux___main(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_String_revPosOfAux(lean_object* x_1, uint32_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_String_revPosOfAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_String_revPosOfAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = l_String_revPosOfAux(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_String_revPosOf(lean_object* x_1, uint32_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; uint8_t x_6; 
x_3 = lean_string_utf8_byte_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
x_6 = l_coeDecidableEq(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_string_utf8_prev(x_1, x_3);
lean_dec(x_3);
x_8 = l_String_revPosOfAux___main(x_1, x_2, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
}
}
lean_object* l_String_revPosOf___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = l_String_revPosOf(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_1;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_nat_dec_eq(x_2, x_3);
if (x_7 == 0)
{
uint32_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_unbox_uint32(x_5);
x_9 = l___private_Init_Data_String_Basic_1__csize(x_8);
x_10 = lean_nat_add(x_2, x_9);
lean_dec(x_9);
x_11 = l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082___main(x_6, x_10, x_3);
lean_dec(x_10);
lean_ctor_set(x_1, 1, x_11);
return x_1;
}
else
{
lean_object* x_12; 
lean_free_object(x_1);
lean_dec(x_6);
lean_dec(x_5);
x_12 = lean_box(0);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
x_15 = lean_nat_dec_eq(x_2, x_3);
if (x_15 == 0)
{
uint32_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_unbox_uint32(x_13);
x_17 = l___private_Init_Data_String_Basic_1__csize(x_16);
x_18 = lean_nat_add(x_2, x_17);
lean_dec(x_17);
x_19 = l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082___main(x_14, x_18, x_3);
lean_dec(x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
else
{
lean_object* x_21; 
lean_dec(x_14);
lean_dec(x_13);
x_21 = lean_box(0);
return x_21;
}
}
}
}
}
lean_object* l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082___main(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Init_Data_String_Basic_7__utf8ExtractAux_u2081___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_nat_dec_eq(x_2, x_3);
if (x_7 == 0)
{
uint32_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_1);
x_8 = lean_unbox_uint32(x_5);
lean_dec(x_5);
x_9 = l___private_Init_Data_String_Basic_1__csize(x_8);
x_10 = lean_nat_add(x_2, x_9);
lean_dec(x_9);
lean_dec(x_2);
x_1 = x_6;
x_2 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_5);
x_12 = l___private_Init_Data_String_Basic_6__utf8ExtractAux_u2082___main(x_1, x_2, x_4);
lean_dec(x_2);
return x_12;
}
}
}
}
lean_object* l___private_Init_Data_String_Basic_7__utf8ExtractAux_u2081___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Data_String_Basic_7__utf8ExtractAux_u2081___main(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Init_Data_String_Basic_7__utf8ExtractAux_u2081(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Data_String_Basic_7__utf8ExtractAux_u2081___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Init_Data_String_Basic_7__utf8ExtractAux_u2081___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Data_String_Basic_7__utf8ExtractAux_u2081(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_String_extract___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_string_utf8_extract(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l_String_splitAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
lean_object* l_String_splitAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; 
x_6 = lean_string_utf8_at_end(x_1, x_4);
x_7 = l_coeDecidableEq(x_6);
if (x_7 == 0)
{
uint32_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; 
x_8 = lean_string_utf8_get(x_1, x_4);
x_9 = lean_box_uint32(x_8);
lean_inc(x_2);
x_10 = lean_apply_1(x_2, x_9);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
x_12 = l_coeDecidableEq(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_string_utf8_next(x_1, x_4);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_string_utf8_next(x_1, x_4);
lean_dec(x_4);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_15, x_16);
x_18 = lean_string_utf8_extract(x_1, x_3, x_17);
lean_dec(x_17);
lean_dec(x_3);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_5);
lean_inc(x_15);
x_3 = x_15;
x_4 = x_15;
x_5 = x_19;
goto _start;
}
}
else
{
uint32_t x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; 
x_21 = lean_string_utf8_get(x_1, x_4);
x_22 = lean_box_uint32(x_21);
x_23 = lean_apply_1(x_2, x_22);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
x_25 = l_coeDecidableEq(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_string_utf8_extract(x_1, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_5);
x_28 = l_List_reverse___rarg(x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_sub(x_4, x_29);
lean_dec(x_4);
x_31 = lean_string_utf8_extract(x_1, x_3, x_30);
lean_dec(x_30);
lean_dec(x_3);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_5);
x_33 = l_String_splitAux___main___closed__1;
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = l_List_reverse___rarg(x_34);
return x_35;
}
}
}
}
lean_object* l_String_splitAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_String_splitAux___main(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_String_splitAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_String_splitAux___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_String_splitAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_String_splitAux(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_String_split(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_String_splitAux___main(x_1, x_2, x_4, x_4, x_3);
return x_5;
}
}
lean_object* l_String_split___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_split(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_String_splitOnAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; 
x_7 = lean_string_utf8_at_end(x_1, x_4);
x_8 = l_coeDecidableEq(x_7);
if (x_8 == 0)
{
uint32_t x_9; uint32_t x_10; uint8_t x_11; 
x_9 = lean_string_utf8_get(x_1, x_4);
x_10 = lean_string_utf8_get(x_2, x_5);
x_11 = x_9 == x_10;
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = l_String_posOfAux___main___closed__1;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
x_13 = lean_string_utf8_next(x_1, x_4);
lean_dec(x_4);
x_14 = lean_unsigned_to_nat(0u);
x_4 = x_13;
x_5 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; 
x_16 = lean_string_utf8_next(x_1, x_4);
lean_dec(x_4);
x_17 = lean_string_utf8_next(x_2, x_5);
lean_dec(x_5);
x_18 = lean_string_utf8_at_end(x_2, x_17);
x_19 = l_coeDecidableEq(x_18);
if (x_19 == 0)
{
x_4 = x_16;
x_5 = x_17;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_nat_sub(x_16, x_17);
lean_dec(x_17);
x_22 = lean_string_utf8_extract(x_1, x_3, x_21);
lean_dec(x_21);
lean_dec(x_3);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_6);
x_24 = lean_unsigned_to_nat(0u);
lean_inc(x_16);
x_3 = x_16;
x_4 = x_16;
x_5 = x_24;
x_6 = x_23;
goto _start;
}
}
}
else
{
uint8_t x_26; 
x_26 = l_String_posOfAux___main___closed__2;
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_5);
x_27 = lean_string_utf8_next(x_1, x_4);
lean_dec(x_4);
x_28 = lean_unsigned_to_nat(0u);
x_4 = x_27;
x_5 = x_28;
goto _start;
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; uint8_t x_33; 
x_30 = lean_string_utf8_next(x_1, x_4);
lean_dec(x_4);
x_31 = lean_string_utf8_next(x_2, x_5);
lean_dec(x_5);
x_32 = lean_string_utf8_at_end(x_2, x_31);
x_33 = l_coeDecidableEq(x_32);
if (x_33 == 0)
{
x_4 = x_30;
x_5 = x_31;
goto _start;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_nat_sub(x_30, x_31);
lean_dec(x_31);
x_36 = lean_string_utf8_extract(x_1, x_3, x_35);
lean_dec(x_35);
lean_dec(x_3);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_6);
x_38 = lean_unsigned_to_nat(0u);
lean_inc(x_30);
x_3 = x_30;
x_4 = x_30;
x_5 = x_38;
x_6 = x_37;
goto _start;
}
}
}
}
else
{
uint8_t x_40; uint8_t x_41; 
x_40 = lean_string_utf8_at_end(x_2, x_5);
x_41 = l_coeDecidableEq(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_5);
x_42 = lean_string_utf8_extract(x_1, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_6);
x_44 = l_List_reverse___rarg(x_43);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_nat_sub(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
x_46 = lean_string_utf8_extract(x_1, x_3, x_45);
lean_dec(x_45);
lean_dec(x_3);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_6);
x_48 = l_String_splitAux___main___closed__1;
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
x_50 = l_List_reverse___rarg(x_49);
return x_50;
}
}
}
}
lean_object* l_String_splitOnAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_String_splitOnAux___main(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_String_splitOnAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_String_splitOnAux___main(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_String_splitOnAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_String_splitOnAux(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_String_splitOn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; uint8_t x_5; 
x_3 = l_String_splitAux___main___closed__1;
x_4 = lean_string_dec_eq(x_2, x_3);
x_5 = l_coeDecidableEq(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_box(0);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_String_splitOnAux___main(x_1, x_2, x_7, x_7, x_7, x_6);
lean_dec(x_1);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
lean_object* l_String_splitOn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_splitOn(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* _init_l_String_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_String_splitAux___main___closed__1;
return x_1;
}
}
lean_object* _init_l_String_HasSizeof___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_String_length___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_String_HasSizeof() {
_start:
{
lean_object* x_1; 
x_1 = l_String_HasSizeof___closed__1;
return x_1;
}
}
lean_object* _init_l_String_HasAppend___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_String_append___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_String_HasAppend() {
_start:
{
lean_object* x_1; 
x_1 = l_String_HasAppend___closed__1;
return x_1;
}
}
lean_object* l_String_str(lean_object* x_1, uint32_t x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_string_push(x_1, x_2);
return x_3;
}
}
lean_object* l_String_str___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = l_String_str(x_1, x_3);
return x_4;
}
}
lean_object* l_Nat_repeatAux___main___at_String_pushn___spec__1(uint32_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
lean_dec(x_2);
x_8 = lean_string_push(x_3, x_1);
x_2 = x_7;
x_3 = x_8;
goto _start;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
lean_object* l_String_pushn(lean_object* x_1, uint32_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Nat_repeatAux___main___at_String_pushn___spec__1(x_2, x_3, x_1);
return x_4;
}
}
lean_object* l_Nat_repeatAux___main___at_String_pushn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_5 = l_Nat_repeatAux___main___at_String_pushn___spec__1(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_String_pushn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = l_String_pushn(x_1, x_4, x_3);
return x_5;
}
}
uint8_t l_String_isEmpty(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_String_isEmpty___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_String_isEmpty(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_List_foldl___main___at_String_join___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_string_append(x_1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
lean_object* l_String_join(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_String_splitAux___main___closed__1;
x_3 = l_List_foldl___main___at_String_join___spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_List_foldl___main___at_String_join___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___main___at_String_join___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_String_join___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_join(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_String_singleton(uint32_t x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_String_splitAux___main___closed__1;
x_3 = lean_string_push(x_2, x_1);
return x_3;
}
}
lean_object* l_String_singleton___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_String_singleton(x_2);
return x_3;
}
}
lean_object* l_List_map___main___at_String_intercalate___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_string_data(x_4);
x_7 = l_List_map___main___at_String_intercalate___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_string_data(x_8);
x_11 = l_List_map___main___at_String_intercalate___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_String_intercalate(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_string_data(x_1);
x_4 = l_List_map___main___at_String_intercalate___spec__1(x_2);
x_5 = l_List_intercalate___rarg(x_3, x_4);
x_6 = lean_string_mk(x_5);
return x_6;
}
}
lean_object* l_String_mkIterator(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_String_Iterator_toString(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_String_Iterator_toString___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_Iterator_toString(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_String_Iterator_remainingBytes(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_string_utf8_byte_size(x_2);
x_5 = lean_nat_sub(x_4, x_3);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_String_Iterator_remainingBytes___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_Iterator_remainingBytes(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_String_Iterator_pos(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_String_Iterator_pos___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_Iterator_pos(x_1);
lean_dec(x_1);
return x_2;
}
}
uint32_t l_String_Iterator_curr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint32_t x_4; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_string_utf8_get(x_2, x_3);
return x_4;
}
}
lean_object* l_String_Iterator_curr___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = l_String_Iterator_curr(x_1);
lean_dec(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
lean_object* l_String_Iterator_next(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_string_utf8_next(x_3, x_4);
lean_dec(x_4);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_8 = lean_string_utf8_next(x_6, x_7);
lean_dec(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
lean_object* l_String_Iterator_prev(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_string_utf8_prev(x_3, x_4);
lean_dec(x_4);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_8 = lean_string_utf8_prev(x_6, x_7);
lean_dec(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
uint8_t l_String_Iterator_hasNext(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_string_utf8_byte_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_String_Iterator_hasNext___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_String_Iterator_hasNext(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_String_Iterator_hasPrev(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
return x_4;
}
}
lean_object* l_String_Iterator_hasPrev___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_String_Iterator_hasPrev(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_String_Iterator_setCurr(lean_object* x_1, uint32_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_string_utf8_set(x_4, x_5, x_2);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_9 = lean_string_utf8_set(x_7, x_8, x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
}
lean_object* l_String_Iterator_setCurr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = l_String_Iterator_setCurr(x_1, x_3);
return x_4;
}
}
lean_object* l_String_Iterator_toEnd(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_dec(x_4);
x_5 = lean_string_utf8_byte_size(x_3);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_string_utf8_byte_size(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
lean_object* l_String_Iterator_extract(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_string_dec_eq(x_3, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_String_posOfAux___main___closed__2;
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_string_utf8_extract(x_3, x_4, x_6);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l_String_splitAux___main___closed__1;
return x_10;
}
}
else
{
uint8_t x_11; uint8_t x_12; 
x_11 = lean_nat_dec_lt(x_6, x_4);
x_12 = l_coeDecidableEq(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_string_utf8_extract(x_3, x_4, x_6);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = l_String_splitAux___main___closed__1;
return x_14;
}
}
}
}
lean_object* l_String_Iterator_extract___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_Iterator_extract(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_String_Iterator_forward___main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_2, x_5);
lean_dec(x_2);
x_7 = l_String_Iterator_next(x_1);
x_1 = x_7;
x_2 = x_6;
goto _start;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_String_Iterator_forward(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_Iterator_forward___main(x_1, x_2);
return x_3;
}
}
lean_object* l_String_Iterator_remainingToString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_string_utf8_byte_size(x_2);
x_5 = lean_string_utf8_extract(x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_String_Iterator_remainingToString___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_Iterator_remainingToString(x_1);
lean_dec(x_1);
return x_2;
}
}
uint8_t l_String_Iterator_isPrefixOfRemaining(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_string_utf8_byte_size(x_3);
x_8 = lean_string_utf8_extract(x_3, x_4, x_7);
x_9 = lean_nat_sub(x_7, x_4);
lean_dec(x_7);
x_10 = lean_nat_add(x_6, x_9);
lean_dec(x_9);
x_11 = lean_string_utf8_extract(x_5, x_6, x_10);
lean_dec(x_10);
x_12 = lean_string_dec_eq(x_8, x_11);
lean_dec(x_11);
lean_dec(x_8);
return x_12;
}
}
lean_object* l_String_Iterator_isPrefixOfRemaining___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_String_Iterator_isPrefixOfRemaining(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_String_Iterator_nextn___main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_2, x_5);
lean_dec(x_2);
x_7 = l_String_Iterator_next(x_1);
x_1 = x_7;
x_2 = x_6;
goto _start;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_String_Iterator_nextn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_Iterator_nextn___main(x_1, x_2);
return x_3;
}
}
lean_object* l_String_Iterator_prevn___main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_2, x_5);
lean_dec(x_2);
x_7 = l_String_Iterator_prev(x_1);
x_1 = x_7;
x_2 = x_6;
goto _start;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_String_Iterator_prevn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_Iterator_prevn___main(x_1, x_2);
return x_3;
}
}
lean_object* l_String_offsetOfPosAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_eq(x_3, x_2);
if (x_5 == 0)
{
uint8_t x_6; uint8_t x_7; 
x_6 = lean_string_utf8_at_end(x_1, x_3);
x_7 = l_coeDecidableEq(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_string_utf8_next(x_1, x_3);
lean_dec(x_3);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
x_3 = x_8;
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_4;
}
}
else
{
uint8_t x_12; 
x_12 = l_String_posOfAux___main___closed__2;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_string_utf8_next(x_1, x_3);
lean_dec(x_3);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_4, x_14);
lean_dec(x_4);
x_3 = x_13;
x_4 = x_15;
goto _start;
}
else
{
lean_dec(x_3);
return x_4;
}
}
}
}
lean_object* l_String_offsetOfPosAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_String_offsetOfPosAux___main(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_String_offsetOfPosAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_String_offsetOfPosAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_String_offsetOfPosAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_String_offsetOfPosAux(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_String_offsetOfPos(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_String_offsetOfPosAux___main(x_1, x_2, x_3, x_3);
return x_4;
}
}
lean_object* l_String_offsetOfPos___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_offsetOfPos(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_String_foldlAux___main___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; 
x_6 = lean_nat_dec_eq(x_4, x_3);
x_7 = l_coeDecidableEq(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint32_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_string_utf8_next(x_2, x_4);
x_9 = lean_string_utf8_get(x_2, x_4);
lean_dec(x_4);
x_10 = lean_box_uint32(x_9);
lean_inc(x_1);
x_11 = lean_apply_2(x_1, x_5, x_10);
x_4 = x_8;
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_String_foldlAux___main(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_String_foldlAux___main___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_String_foldlAux___main___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_String_foldlAux___main___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_String_foldlAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_String_foldlAux___main___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_String_foldlAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_String_foldlAux___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_String_foldlAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_String_foldlAux___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_String_foldl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_string_utf8_byte_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_String_foldlAux___main___rarg(x_1, x_3, x_4, x_5, x_2);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_String_foldl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_String_foldl___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_String_foldl___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_String_foldl___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_String_foldrAux___main___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; 
x_6 = lean_nat_dec_eq(x_5, x_4);
x_7 = l_coeDecidableEq(x_6);
if (x_7 == 0)
{
uint32_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_string_utf8_get(x_3, x_5);
x_9 = lean_string_utf8_next(x_3, x_5);
lean_inc(x_1);
x_10 = l_String_foldrAux___main___rarg(x_1, x_2, x_3, x_4, x_9);
lean_dec(x_9);
x_11 = lean_box_uint32(x_8);
x_12 = lean_apply_2(x_1, x_11, x_10);
return x_12;
}
else
{
lean_dec(x_1);
lean_inc(x_2);
return x_2;
}
}
}
lean_object* l_String_foldrAux___main(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_String_foldrAux___main___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_String_foldrAux___main___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_String_foldrAux___main___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_String_foldrAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_String_foldrAux___main___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_String_foldrAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_String_foldrAux___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_String_foldrAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_String_foldrAux___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_String_foldr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_string_utf8_byte_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_String_foldrAux___main___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_String_foldr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_String_foldr___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_String_foldr___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_String_foldr___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
uint8_t l_String_anyAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; 
x_5 = lean_nat_dec_eq(x_4, x_2);
x_6 = l_coeDecidableEq(x_5);
if (x_6 == 0)
{
uint32_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; 
x_7 = lean_string_utf8_get(x_1, x_4);
x_8 = lean_box_uint32(x_7);
lean_inc(x_3);
x_9 = lean_apply_1(x_3, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
x_11 = l_coeDecidableEq(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_string_utf8_next(x_1, x_4);
lean_dec(x_4);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
lean_dec(x_3);
x_14 = 1;
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_4);
lean_dec(x_3);
x_15 = 0;
return x_15;
}
}
}
lean_object* l_String_anyAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_String_anyAux___main(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_String_anyAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_String_anyAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_String_anyAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_String_anyAux(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_String_any(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_string_utf8_byte_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_String_anyAux___main(x_1, x_3, x_2, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_String_any___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_String_any(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_String_anyAux___main___at_String_all___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; 
x_5 = lean_nat_dec_eq(x_4, x_3);
x_6 = l_coeDecidableEq(x_5);
if (x_6 == 0)
{
uint32_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_string_utf8_get(x_2, x_4);
x_8 = lean_box_uint32(x_7);
lean_inc(x_1);
x_9 = lean_apply_1(x_1, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_String_posOfAux___main___closed__2;
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_string_utf8_next(x_2, x_4);
lean_dec(x_4);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
lean_dec(x_1);
x_14 = 1;
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = l_String_posOfAux___main___closed__1;
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_string_utf8_next(x_2, x_4);
lean_dec(x_4);
x_4 = x_16;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_4);
lean_dec(x_1);
x_18 = 1;
return x_18;
}
}
}
else
{
uint8_t x_19; 
lean_dec(x_4);
lean_dec(x_1);
x_19 = 0;
return x_19;
}
}
}
uint8_t l_String_all(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_string_utf8_byte_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_String_anyAux___main___at_String_all___spec__1(x_2, x_1, x_3, x_4);
lean_dec(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
lean_object* l_String_anyAux___main___at_String_all___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_String_anyAux___main___at_String_all___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_String_all___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_String_all(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_String_anyAux___main___at_String_contains___spec__1(uint32_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; 
x_5 = lean_nat_dec_eq(x_4, x_3);
x_6 = l_coeDecidableEq(x_5);
if (x_6 == 0)
{
uint32_t x_7; uint8_t x_8; 
x_7 = lean_string_utf8_get(x_2, x_4);
x_8 = x_7 == x_1;
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_String_posOfAux___main___closed__1;
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_string_utf8_next(x_2, x_4);
lean_dec(x_4);
x_4 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_4);
x_12 = 1;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = l_String_posOfAux___main___closed__2;
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_string_utf8_next(x_2, x_4);
lean_dec(x_4);
x_4 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_4);
x_16 = 1;
return x_16;
}
}
}
else
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = 0;
return x_17;
}
}
}
uint8_t l_String_contains(lean_object* x_1, uint32_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_string_utf8_byte_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_String_anyAux___main___at_String_contains___spec__1(x_2, x_1, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_String_anyAux___main___at_String_contains___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_6 = l_String_anyAux___main___at_String_contains___spec__1(x_5, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_String_contains___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = l_String_contains(x_1, x_3);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_String_mapAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; 
x_4 = lean_string_utf8_at_end(x_3, x_2);
x_5 = l_coeDecidableEq(x_4);
if (x_5 == 0)
{
uint32_t x_6; lean_object* x_7; lean_object* x_8; uint32_t x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_string_utf8_get(x_3, x_2);
x_7 = lean_box_uint32(x_6);
lean_inc(x_1);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_unbox_uint32(x_8);
lean_dec(x_8);
x_10 = lean_string_utf8_set(x_3, x_2, x_9);
x_11 = lean_string_utf8_next(x_10, x_2);
lean_dec(x_2);
x_2 = x_11;
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
}
lean_object* l_String_mapAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_String_mapAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_String_map(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_String_mapAux___main(x_1, x_3, x_2);
return x_4;
}
}
lean_object* l_String_foldlAux___main___at_String_toNat___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; 
x_5 = lean_nat_dec_eq(x_3, x_2);
x_6 = l_coeDecidableEq(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint32_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_string_utf8_next(x_1, x_3);
x_8 = lean_string_utf8_get(x_1, x_3);
lean_dec(x_3);
x_9 = lean_unsigned_to_nat(10u);
x_10 = lean_nat_mul(x_4, x_9);
lean_dec(x_4);
x_11 = lean_uint32_to_nat(x_8);
x_12 = lean_unsigned_to_nat(48u);
x_13 = lean_nat_sub(x_11, x_12);
lean_dec(x_11);
x_14 = lean_nat_add(x_10, x_13);
lean_dec(x_13);
lean_dec(x_10);
x_3 = x_7;
x_4 = x_14;
goto _start;
}
else
{
lean_dec(x_3);
return x_4;
}
}
}
lean_object* l_String_toNat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_String_foldlAux___main___at_String_toNat___spec__1(x_1, x_2, x_3, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_String_foldlAux___main___at_String_toNat___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_String_foldlAux___main___at_String_toNat___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_String_toNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_toNat(x_1);
lean_dec(x_1);
return x_2;
}
}
uint8_t l_String_anyAux___main___at_String_isNat___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; 
x_4 = lean_nat_dec_eq(x_3, x_2);
x_5 = l_coeDecidableEq(x_4);
if (x_5 == 0)
{
uint32_t x_6; uint8_t x_7; 
x_6 = lean_string_utf8_get(x_1, x_3);
x_7 = l_Char_isDigit(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_String_posOfAux___main___closed__2;
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_string_utf8_next(x_1, x_3);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
else
{
uint8_t x_11; 
lean_dec(x_3);
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = l_String_posOfAux___main___closed__1;
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_string_utf8_next(x_1, x_3);
lean_dec(x_3);
x_3 = x_13;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_3);
x_15 = 1;
return x_15;
}
}
}
else
{
uint8_t x_16; 
lean_dec(x_3);
x_16 = 0;
return x_16;
}
}
}
uint8_t l_String_isNat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_String_anyAux___main___at_String_isNat___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
lean_object* l_String_anyAux___main___at_String_isNat___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_String_anyAux___main___at_String_isNat___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_String_isNat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_String_isNat(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_String_isPrefixOfAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; 
x_4 = lean_string_utf8_at_end(x_1, x_3);
x_5 = l_coeDecidableEq(x_4);
if (x_5 == 0)
{
uint32_t x_6; uint32_t x_7; uint8_t x_8; 
x_6 = lean_string_utf8_get(x_1, x_3);
x_7 = lean_string_utf8_get(x_2, x_3);
x_8 = x_6 == x_7;
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_3);
x_9 = 0;
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_string_utf8_next(x_2, x_3);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
}
else
{
uint8_t x_12; 
lean_dec(x_3);
x_12 = 1;
return x_12;
}
}
}
lean_object* l_String_isPrefixOfAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_String_isPrefixOfAux___main(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
uint8_t l_String_isPrefixOfAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_String_isPrefixOfAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_String_isPrefixOfAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_String_isPrefixOfAux(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
uint8_t l_String_isPrefixOf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_string_length(x_1);
x_4 = lean_string_length(x_2);
x_5 = lean_nat_dec_le(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_String_isPrefixOfAux___main(x_1, x_2, x_7);
return x_8;
}
}
}
lean_object* l_String_isPrefixOf___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_String_isPrefixOf(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Substring_toString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_string_utf8_extract(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Substring_toString___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Substring_toString(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Substring_toIterator(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* l_Substring_toIterator___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Substring_toIterator(x_1);
lean_dec(x_1);
return x_2;
}
}
uint32_t l_Substring_get(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint32_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_nat_add(x_4, x_2);
x_6 = lean_string_utf8_get(x_3, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Substring_get___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = l_Substring_get(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box_uint32(x_3);
return x_4;
}
}
lean_object* l_Substring_next(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = lean_nat_add(x_4, x_2);
x_7 = lean_string_utf8_next(x_3, x_6);
lean_dec(x_6);
x_8 = lean_nat_dec_lt(x_5, x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_nat_sub(x_7, x_4);
lean_dec(x_7);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_7);
x_10 = lean_nat_sub(x_5, x_4);
return x_10;
}
}
}
lean_object* l_Substring_next___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Substring_next(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Substring_prev(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_nat_add(x_4, x_2);
x_7 = lean_string_utf8_prev(x_3, x_6);
lean_dec(x_6);
x_8 = lean_nat_sub(x_7, x_4);
lean_dec(x_7);
return x_8;
}
else
{
lean_inc(x_2);
return x_2;
}
}
}
lean_object* l_Substring_prev___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Substring_prev(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint32_t l_Substring_front(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint32_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_add(x_3, x_4);
x_6 = lean_string_utf8_get(x_2, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Substring_front___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = l_Substring_front(x_1);
lean_dec(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
lean_object* l_Substring_posOf(lean_object* x_1, uint32_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_4);
x_6 = l_String_posOfAux___main(x_3, x_2, x_5, x_4);
lean_dec(x_5);
lean_dec(x_3);
x_7 = lean_nat_sub(x_6, x_4);
lean_dec(x_4);
lean_dec(x_6);
return x_7;
}
}
lean_object* l_Substring_posOf___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = l_Substring_posOf(x_1, x_3);
return x_4;
}
}
lean_object* _init_l_Substring_drop___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_String_splitAux___main___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l_Substring_drop___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_String_splitAux___main___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Substring_drop___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Substring_drop(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_nat_add(x_5, x_2);
lean_dec(x_5);
x_8 = lean_nat_dec_le(x_6, x_7);
if (x_8 == 0)
{
lean_ctor_set(x_1, 1, x_7);
return x_1;
}
else
{
lean_object* x_9; 
lean_dec(x_7);
lean_free_object(x_1);
lean_dec(x_6);
lean_dec(x_4);
x_9 = l_Substring_drop___closed__2;
return x_9;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_13 = lean_nat_add(x_11, x_2);
lean_dec(x_11);
x_14 = lean_nat_dec_le(x_12, x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_15, 2, x_12);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
x_16 = l_Substring_drop___closed__2;
return x_16;
}
}
}
}
lean_object* l_Substring_drop___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Substring_drop(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Substring_dropRight(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_nat_sub(x_6, x_2);
x_8 = lean_nat_dec_le(x_7, x_6);
lean_dec(x_6);
if (x_8 == 0)
{
lean_ctor_set(x_1, 2, x_7);
return x_1;
}
else
{
lean_object* x_9; 
lean_dec(x_7);
lean_free_object(x_1);
lean_dec(x_5);
lean_dec(x_4);
x_9 = l_Substring_drop___closed__2;
return x_9;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_13 = lean_nat_sub(x_12, x_2);
x_14 = lean_nat_dec_le(x_13, x_12);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_13);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
x_16 = l_Substring_drop___closed__2;
return x_16;
}
}
}
}
lean_object* l_Substring_dropRight___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Substring_dropRight(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Substring_take(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = lean_nat_add(x_4, x_2);
x_7 = lean_nat_dec_le(x_5, x_6);
if (x_7 == 0)
{
lean_dec(x_5);
lean_ctor_set(x_1, 2, x_6);
return x_1;
}
else
{
lean_dec(x_6);
return x_1;
}
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_11 = lean_nat_add(x_9, x_2);
x_12 = lean_nat_dec_le(x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_9);
lean_ctor_set(x_13, 2, x_11);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_10);
return x_14;
}
}
}
}
lean_object* l_Substring_take___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Substring_take(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Substring_takeRight(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = lean_nat_sub(x_5, x_2);
x_7 = lean_nat_dec_le(x_6, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_dec(x_6);
return x_1;
}
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_11 = lean_nat_sub(x_10, x_2);
x_12 = lean_nat_dec_le(x_11, x_9);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_11);
lean_ctor_set(x_13, 2, x_10);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_10);
return x_14;
}
}
}
}
lean_object* l_Substring_takeRight___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Substring_takeRight(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
uint8_t l_Substring_atEnd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_nat_add(x_3, x_2);
x_6 = lean_nat_dec_eq(x_5, x_4);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Substring_atEnd___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Substring_atEnd(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* _init_l_Substring_extract___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_String_splitAux___main___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Substring_extract(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
lean_dec(x_7);
x_8 = lean_nat_dec_le(x_3, x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_nat_add(x_6, x_2);
x_10 = lean_nat_add(x_6, x_3);
lean_dec(x_6);
lean_ctor_set(x_1, 2, x_10);
lean_ctor_set(x_1, 1, x_9);
return x_1;
}
else
{
lean_object* x_11; 
lean_free_object(x_1);
lean_dec(x_6);
lean_dec(x_5);
x_11 = l_Substring_extract___closed__1;
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_nat_dec_le(x_3, x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_nat_add(x_13, x_2);
x_16 = lean_nat_add(x_13, x_3);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
return x_17;
}
else
{
lean_object* x_18; 
lean_dec(x_13);
lean_dec(x_12);
x_18 = l_Substring_extract___closed__1;
return x_18;
}
}
}
}
lean_object* l_Substring_extract___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Substring_extract(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Substring_splitOnAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; 
x_8 = lean_nat_dec_eq(x_5, x_3);
x_9 = l_coeDecidableEq(x_8);
if (x_9 == 0)
{
uint32_t x_10; uint32_t x_11; uint8_t x_12; 
x_10 = lean_string_utf8_get(x_1, x_5);
x_11 = lean_string_utf8_get(x_2, x_6);
x_12 = x_10 == x_11;
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = l_String_posOfAux___main___closed__1;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
x_14 = lean_string_utf8_next(x_1, x_5);
lean_dec(x_5);
x_15 = lean_unsigned_to_nat(0u);
x_5 = x_14;
x_6 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; 
x_17 = lean_string_utf8_next(x_1, x_5);
lean_dec(x_5);
x_18 = lean_string_utf8_next(x_2, x_6);
lean_dec(x_6);
x_19 = lean_string_utf8_at_end(x_2, x_18);
x_20 = l_coeDecidableEq(x_19);
if (x_20 == 0)
{
x_5 = x_17;
x_6 = x_18;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_nat_sub(x_17, x_18);
lean_dec(x_18);
lean_inc(x_1);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_4);
lean_ctor_set(x_23, 2, x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_7);
x_25 = lean_unsigned_to_nat(0u);
lean_inc(x_17);
x_4 = x_17;
x_5 = x_17;
x_6 = x_25;
x_7 = x_24;
goto _start;
}
}
}
else
{
uint8_t x_27; 
x_27 = l_String_posOfAux___main___closed__2;
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_6);
x_28 = lean_string_utf8_next(x_1, x_5);
lean_dec(x_5);
x_29 = lean_unsigned_to_nat(0u);
x_5 = x_28;
x_6 = x_29;
goto _start;
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; 
x_31 = lean_string_utf8_next(x_1, x_5);
lean_dec(x_5);
x_32 = lean_string_utf8_next(x_2, x_6);
lean_dec(x_6);
x_33 = lean_string_utf8_at_end(x_2, x_32);
x_34 = l_coeDecidableEq(x_33);
if (x_34 == 0)
{
x_5 = x_31;
x_6 = x_32;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_nat_sub(x_31, x_32);
lean_dec(x_32);
lean_inc(x_1);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_1);
lean_ctor_set(x_37, 1, x_4);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_7);
x_39 = lean_unsigned_to_nat(0u);
lean_inc(x_31);
x_4 = x_31;
x_5 = x_31;
x_6 = x_39;
x_7 = x_38;
goto _start;
}
}
}
}
else
{
uint8_t x_41; uint8_t x_42; 
x_41 = lean_string_utf8_at_end(x_2, x_6);
x_42 = l_coeDecidableEq(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_6);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_1);
lean_ctor_set(x_43, 1, x_4);
lean_ctor_set(x_43, 2, x_5);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_7);
x_45 = l_List_reverse___rarg(x_44);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_nat_sub(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_1);
lean_ctor_set(x_47, 1, x_4);
lean_ctor_set(x_47, 2, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_7);
x_49 = l_Substring_drop___closed__2;
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_List_reverse___rarg(x_50);
return x_51;
}
}
}
}
lean_object* l_Substring_splitOnAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Substring_splitOnAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Substring_splitOnAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Substring_splitOnAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Substring_splitOnAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Substring_splitOnAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Substring_splitOn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; uint8_t x_5; 
x_3 = l_String_splitAux___main___closed__1;
x_4 = lean_string_dec_eq(x_2, x_3);
x_5 = l_coeDecidableEq(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_unsigned_to_nat(0u);
lean_inc(x_8);
x_11 = l_Substring_splitOnAux___main(x_6, x_2, x_7, x_8, x_8, x_10, x_9);
lean_dec(x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
lean_object* l_Substring_splitOn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Substring_splitOn(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Substring_foldl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_String_foldlAux___main___rarg(x_1, x_4, x_6, x_5, x_2);
lean_dec(x_6);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Substring_foldl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Substring_foldl___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Substring_foldr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 2);
x_7 = l_String_foldrAux___main___rarg(x_1, x_2, x_4, x_6, x_5);
return x_7;
}
}
lean_object* l_Substring_foldr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Substring_foldr___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Substring_foldr___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Substring_foldr___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
uint8_t l_Substring_any(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_String_anyAux___main(x_3, x_5, x_2, x_4);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Substring_any___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Substring_any(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_String_anyAux___main___at_Substring_all___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; 
x_5 = lean_nat_dec_eq(x_4, x_3);
x_6 = l_coeDecidableEq(x_5);
if (x_6 == 0)
{
uint32_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_string_utf8_get(x_2, x_4);
x_8 = lean_box_uint32(x_7);
lean_inc(x_1);
x_9 = lean_apply_1(x_1, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_String_posOfAux___main___closed__2;
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_string_utf8_next(x_2, x_4);
lean_dec(x_4);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
lean_dec(x_1);
x_14 = 1;
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = l_String_posOfAux___main___closed__1;
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_string_utf8_next(x_2, x_4);
lean_dec(x_4);
x_4 = x_16;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_4);
lean_dec(x_1);
x_18 = 1;
return x_18;
}
}
}
else
{
uint8_t x_19; 
lean_dec(x_4);
lean_dec(x_1);
x_19 = 0;
return x_19;
}
}
}
uint8_t l_Substring_all(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_String_anyAux___main___at_Substring_all___spec__1(x_2, x_3, x_5, x_4);
lean_dec(x_5);
lean_dec(x_3);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
}
lean_object* l_String_anyAux___main___at_Substring_all___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_String_anyAux___main___at_Substring_all___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Substring_all___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Substring_all(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_String_anyAux___main___at_Substring_contains___spec__1(uint32_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; 
x_5 = lean_nat_dec_eq(x_4, x_3);
x_6 = l_coeDecidableEq(x_5);
if (x_6 == 0)
{
uint32_t x_7; uint8_t x_8; 
x_7 = lean_string_utf8_get(x_2, x_4);
x_8 = x_7 == x_1;
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_String_posOfAux___main___closed__1;
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_string_utf8_next(x_2, x_4);
lean_dec(x_4);
x_4 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_4);
x_12 = 1;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = l_String_posOfAux___main___closed__2;
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_string_utf8_next(x_2, x_4);
lean_dec(x_4);
x_4 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_4);
x_16 = 1;
return x_16;
}
}
}
else
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = 0;
return x_17;
}
}
}
uint8_t l_Substring_contains(lean_object* x_1, uint32_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_String_anyAux___main___at_Substring_contains___spec__1(x_2, x_3, x_5, x_4);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_String_anyAux___main___at_Substring_contains___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_6 = l_String_anyAux___main___at_Substring_contains___spec__1(x_5, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Substring_contains___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = l_Substring_contains(x_1, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Substring_takeWhileAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; 
x_5 = lean_nat_dec_eq(x_4, x_2);
x_6 = l_coeDecidableEq(x_5);
if (x_6 == 0)
{
uint32_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; 
x_7 = lean_string_utf8_get(x_1, x_4);
x_8 = lean_box_uint32(x_7);
lean_inc(x_3);
x_9 = lean_apply_1(x_3, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
x_11 = l_coeDecidableEq(x_10);
if (x_11 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_12; 
x_12 = lean_string_utf8_next(x_1, x_4);
lean_dec(x_4);
x_4 = x_12;
goto _start;
}
}
else
{
lean_dec(x_3);
return x_4;
}
}
}
lean_object* l_Substring_takeWhileAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Substring_takeWhileAux___main(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Substring_takeWhileAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Substring_takeWhileAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Substring_takeWhileAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Substring_takeWhileAux(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Substring_takeWhile(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_7 = l_Substring_takeWhileAux___main(x_4, x_6, x_2, x_5);
lean_dec(x_6);
lean_ctor_set(x_1, 2, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
lean_inc(x_9);
x_11 = l_Substring_takeWhileAux___main(x_8, x_10, x_2, x_9);
lean_dec(x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_9);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
}
lean_object* l_Substring_dropWhile(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = l_Substring_takeWhileAux___main(x_4, x_6, x_2, x_5);
lean_ctor_set(x_1, 1, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_11 = l_Substring_takeWhileAux___main(x_8, x_10, x_2, x_9);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_10);
return x_12;
}
}
}
lean_object* l_Substring_takeRightWhileAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; 
x_5 = lean_nat_dec_eq(x_4, x_2);
x_6 = l_coeDecidableEq(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint32_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_string_utf8_prev(x_1, x_4);
x_8 = lean_string_utf8_get(x_1, x_7);
x_9 = lean_box_uint32(x_8);
lean_inc(x_3);
x_10 = lean_apply_1(x_3, x_9);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = l_String_posOfAux___main___closed__2;
if (x_12 == 0)
{
lean_dec(x_4);
x_4 = x_7;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_3);
return x_4;
}
}
else
{
uint8_t x_14; 
x_14 = l_String_posOfAux___main___closed__1;
if (x_14 == 0)
{
lean_dec(x_4);
x_4 = x_7;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_3);
return x_4;
}
}
}
else
{
lean_dec(x_3);
return x_4;
}
}
}
lean_object* l_Substring_takeRightWhileAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Substring_takeRightWhileAux___main(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Substring_takeRightWhileAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Substring_takeRightWhileAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Substring_takeRightWhileAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Substring_takeRightWhileAux(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Substring_takeRightWhile(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = l_Substring_takeRightWhileAux___main(x_4, x_5, x_2, x_6);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
lean_inc(x_10);
x_11 = l_Substring_takeRightWhileAux___main(x_8, x_9, x_2, x_10);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
lean_ctor_set(x_12, 2, x_10);
return x_12;
}
}
}
lean_object* l_Substring_dropRightWhile(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = l_Substring_takeRightWhileAux___main(x_4, x_5, x_2, x_6);
lean_ctor_set(x_1, 2, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_11 = l_Substring_takeRightWhileAux___main(x_8, x_9, x_2, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_9);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
}
lean_object* l_Substring_takeWhileAux___main___at_Substring_trimLeft___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; 
x_4 = lean_nat_dec_eq(x_3, x_2);
x_5 = l_coeDecidableEq(x_4);
if (x_5 == 0)
{
uint32_t x_6; uint8_t x_7; uint8_t x_8; 
x_6 = lean_string_utf8_get(x_1, x_3);
x_7 = l_Char_isWhitespace(x_6);
x_8 = l_coeDecidableEq(x_7);
if (x_8 == 0)
{
return x_3;
}
else
{
lean_object* x_9; 
x_9 = lean_string_utf8_next(x_1, x_3);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
}
else
{
return x_3;
}
}
}
lean_object* l_Substring_trimLeft(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = l_Substring_takeWhileAux___main___at_Substring_trimLeft___spec__1(x_3, x_5, x_4);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_10 = l_Substring_takeWhileAux___main___at_Substring_trimLeft___spec__1(x_7, x_9, x_8);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 2, x_9);
return x_11;
}
}
}
lean_object* l_Substring_takeWhileAux___main___at_Substring_trimLeft___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Substring_takeWhileAux___main___at_Substring_trimLeft___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Substring_takeRightWhileAux___main___at_Substring_trimRight___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; 
x_4 = lean_nat_dec_eq(x_3, x_2);
x_5 = l_coeDecidableEq(x_4);
if (x_5 == 0)
{
lean_object* x_6; uint32_t x_7; uint8_t x_8; 
x_6 = lean_string_utf8_prev(x_1, x_3);
x_7 = lean_string_utf8_get(x_1, x_6);
x_8 = l_Char_isWhitespace(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_String_posOfAux___main___closed__2;
if (x_9 == 0)
{
lean_dec(x_3);
x_3 = x_6;
goto _start;
}
else
{
lean_dec(x_6);
return x_3;
}
}
else
{
uint8_t x_11; 
x_11 = l_String_posOfAux___main___closed__1;
if (x_11 == 0)
{
lean_dec(x_3);
x_3 = x_6;
goto _start;
}
else
{
lean_dec(x_6);
return x_3;
}
}
}
else
{
return x_3;
}
}
}
lean_object* l_Substring_trimRight(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = l_Substring_takeRightWhileAux___main___at_Substring_trimRight___spec__1(x_3, x_4, x_5);
lean_ctor_set(x_1, 2, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_10 = l_Substring_takeRightWhileAux___main___at_Substring_trimRight___spec__1(x_7, x_8, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
}
}
lean_object* l_Substring_takeRightWhileAux___main___at_Substring_trimRight___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Substring_takeRightWhileAux___main___at_Substring_trimRight___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Substring_trim(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = l_Substring_takeWhileAux___main___at_Substring_trimLeft___spec__1(x_3, x_5, x_4);
x_7 = l_Substring_takeRightWhileAux___main___at_Substring_trimRight___spec__1(x_3, x_6, x_5);
lean_ctor_set(x_1, 2, x_7);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_11 = l_Substring_takeWhileAux___main___at_Substring_trimLeft___spec__1(x_8, x_10, x_9);
x_12 = l_Substring_takeRightWhileAux___main___at_Substring_trimRight___spec__1(x_8, x_11, x_10);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_11);
lean_ctor_set(x_13, 2, x_12);
return x_13;
}
}
}
lean_object* l_Substring_toNat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_String_foldlAux___main___at_String_toNat___spec__1(x_2, x_4, x_3, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
uint8_t l_Substring_isNat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_String_anyAux___main___at_String_isNat___spec__1(x_2, x_4, x_3);
lean_dec(x_4);
lean_dec(x_2);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
lean_object* l_Substring_isNat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Substring_isNat(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* _init_l_String_drop___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_String_splitAux___main___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Substring_drop___closed__1;
x_4 = lean_string_utf8_extract(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_String_drop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_string_utf8_byte_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_add(x_4, x_2);
x_6 = lean_nat_dec_le(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_string_utf8_extract(x_1, x_5, x_3);
lean_dec(x_3);
lean_dec(x_5);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_3);
x_8 = l_String_drop___closed__1;
return x_8;
}
}
}
lean_object* l_String_drop___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_drop(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_String_dropRight(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_string_utf8_byte_size(x_1);
x_4 = lean_nat_sub(x_3, x_2);
x_5 = lean_nat_dec_le(x_4, x_3);
lean_dec(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_string_utf8_extract(x_1, x_6, x_4);
lean_dec(x_4);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = l_String_drop___closed__1;
return x_8;
}
}
}
lean_object* l_String_dropRight___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_dropRight(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_String_take(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_string_utf8_byte_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_add(x_4, x_2);
x_6 = lean_nat_dec_le(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_string_utf8_extract(x_1, x_4, x_5);
lean_dec(x_5);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_string_utf8_extract(x_1, x_4, x_3);
lean_dec(x_3);
return x_8;
}
}
}
lean_object* l_String_take___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_take(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_String_takeRight(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_string_utf8_byte_size(x_1);
x_4 = lean_nat_sub(x_3, x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_le(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_string_utf8_extract(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_4);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_string_utf8_extract(x_1, x_5, x_3);
lean_dec(x_3);
return x_8;
}
}
}
lean_object* l_String_takeRight___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_takeRight(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_String_takeWhile(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_string_utf8_byte_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Substring_takeWhileAux___main(x_1, x_3, x_2, x_4);
lean_dec(x_3);
x_6 = lean_string_utf8_extract(x_1, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_String_takeWhile___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_takeWhile(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_String_dropWhile(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_string_utf8_byte_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Substring_takeWhileAux___main(x_1, x_3, x_2, x_4);
x_6 = lean_string_utf8_extract(x_1, x_5, x_3);
lean_dec(x_3);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_String_dropWhile___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_dropWhile(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_String_trimRight(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Substring_takeRightWhileAux___main___at_Substring_trimRight___spec__1(x_1, x_3, x_2);
x_5 = lean_string_utf8_extract(x_1, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_String_trimRight___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_trimRight(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_String_trimLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Substring_takeWhileAux___main___at_Substring_trimLeft___spec__1(x_1, x_2, x_3);
x_5 = lean_string_utf8_extract(x_1, x_4, x_2);
lean_dec(x_2);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_String_trimLeft___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_trimLeft(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_String_trim(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Substring_takeWhileAux___main___at_Substring_trimLeft___spec__1(x_1, x_2, x_3);
x_5 = l_Substring_takeRightWhileAux___main___at_Substring_trimRight___spec__1(x_1, x_4, x_2);
x_6 = lean_string_utf8_extract(x_1, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_String_trim___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_trim(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_String_nextWhile(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_string_utf8_byte_size(x_1);
x_5 = l_Substring_takeWhileAux___main(x_1, x_4, x_2, x_3);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_String_nextWhile___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_String_nextWhile(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Substring_takeWhileAux___main___at_String_nextUntil___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; 
x_5 = lean_nat_dec_eq(x_4, x_3);
x_6 = l_coeDecidableEq(x_5);
if (x_6 == 0)
{
uint32_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_string_utf8_get(x_2, x_4);
x_8 = lean_box_uint32(x_7);
lean_inc(x_1);
x_9 = lean_apply_1(x_1, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_String_posOfAux___main___closed__2;
if (x_11 == 0)
{
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_12; 
x_12 = lean_string_utf8_next(x_2, x_4);
lean_dec(x_4);
x_4 = x_12;
goto _start;
}
}
else
{
uint8_t x_14; 
x_14 = l_String_posOfAux___main___closed__1;
if (x_14 == 0)
{
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_15; 
x_15 = lean_string_utf8_next(x_2, x_4);
lean_dec(x_4);
x_4 = x_15;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_4;
}
}
}
lean_object* l_String_nextUntil(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_string_utf8_byte_size(x_1);
x_5 = l_Substring_takeWhileAux___main___at_String_nextUntil___spec__1(x_2, x_1, x_4, x_3);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Substring_takeWhileAux___main___at_String_nextUntil___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Substring_takeWhileAux___main___at_String_nextUntil___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_String_nextUntil___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_String_nextUntil(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Char_toString(uint32_t x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_String_splitAux___main___closed__1;
x_3 = lean_string_push(x_2, x_1);
return x_3;
}
}
lean_object* l_Char_toString___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Char_toString(x_2);
return x_3;
}
}
lean_object* initialize_Init_Data_List_Basic(lean_object*);
lean_object* initialize_Init_Data_Char_Basic(lean_object*);
lean_object* initialize_Init_Data_Option_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_String_Basic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_List_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_String_HasLess = _init_l_String_HasLess();
lean_mark_persistent(l_String_HasLess);
l_String_posOfAux___main___closed__1 = _init_l_String_posOfAux___main___closed__1();
l_String_posOfAux___main___closed__2 = _init_l_String_posOfAux___main___closed__2();
l_String_splitAux___main___closed__1 = _init_l_String_splitAux___main___closed__1();
lean_mark_persistent(l_String_splitAux___main___closed__1);
l_String_Inhabited = _init_l_String_Inhabited();
lean_mark_persistent(l_String_Inhabited);
l_String_HasSizeof___closed__1 = _init_l_String_HasSizeof___closed__1();
lean_mark_persistent(l_String_HasSizeof___closed__1);
l_String_HasSizeof = _init_l_String_HasSizeof();
lean_mark_persistent(l_String_HasSizeof);
l_String_HasAppend___closed__1 = _init_l_String_HasAppend___closed__1();
lean_mark_persistent(l_String_HasAppend___closed__1);
l_String_HasAppend = _init_l_String_HasAppend();
lean_mark_persistent(l_String_HasAppend);
l_Substring_drop___closed__1 = _init_l_Substring_drop___closed__1();
lean_mark_persistent(l_Substring_drop___closed__1);
l_Substring_drop___closed__2 = _init_l_Substring_drop___closed__2();
lean_mark_persistent(l_Substring_drop___closed__2);
l_Substring_extract___closed__1 = _init_l_Substring_extract___closed__1();
lean_mark_persistent(l_Substring_extract___closed__1);
l_String_drop___closed__1 = _init_l_String_drop___closed__1();
lean_mark_persistent(l_String_drop___closed__1);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
