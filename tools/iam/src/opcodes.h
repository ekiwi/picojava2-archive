/****************************************************************
 ***
 ***    Copyright 1999 Sun Microsystems, Inc., 901 San Antonio
 ***    Road, Palo Alto, CA 94303, U.S.A.  All Rights Reserved.
 ***    The contents of this file are subject to the current
 ***    version of the Sun Community Source License, picoJava-II
 ***    Core ("the License").  You may not use this file except
 ***    in compliance with the License.  You may obtain a copy
 ***    of the License by searching for "Sun Community Source
 ***    License" on the World Wide Web at http://www.sun.com.
 ***    See the License for the rights, obligations, and
 ***    limitations governing use of the contents of this file.
 ***
 ***    Sun, Sun Microsystems, the Sun logo, and all Sun-based
 ***    trademarks and logos, Java, picoJava, and all Java-based
 ***    trademarks and logos are trademarks or registered trademarks
 ***    of Sun Microsystems, Inc. in the United States and other
 ***    countries.
 ***
 *****************************************************************/




#ifndef _OPCODES_H_
#define _OPCODES_H_

#pragma ident "@(#)opcodes.h 1.5 Last modified 10/07/98 14:29:39 SMI"

typedef enum {
  opc_nop = 0,
  opc_aconst_null = 1,
  opc_iconst_m1 = 2,
  opc_iconst_0 = 3,
  opc_iconst_1 = 4,
  opc_iconst_2 = 5,
  opc_iconst_3 = 6,
  opc_iconst_4 = 7,
  opc_iconst_5 = 8,
  opc_lconst_0 = 9,
  opc_lconst_1 = 10,
  opc_fconst_0 = 11,
  opc_fconst_1 = 12,
  opc_fconst_2 = 13,
  opc_dconst_0 = 14,
  opc_dconst_1 = 15,
  opc_bipush = 16,
  opc_sipush = 17,
  opc_ldc = 18,
  opc_ldc_w = 19,
  opc_ldc2_w = 20,
  opc_iload = 21,
  opc_lload = 22,
  opc_fload = 23,
  opc_dload = 24,
  opc_aload = 25,
  opc_iload_0 = 26,
  opc_iload_1 = 27,
  opc_iload_2 = 28,
  opc_iload_3 = 29,
  opc_lload_0 = 30,
  opc_lload_1 = 31,
  opc_lload_2 = 32,
  opc_lload_3 = 33,
  opc_fload_0 = 34,
  opc_fload_1 = 35,
  opc_fload_2 = 36,
  opc_fload_3 = 37,
  opc_dload_0 = 38,
  opc_dload_1 = 39,
  opc_dload_2 = 40,
  opc_dload_3 = 41,
  opc_aload_0 = 42,
  opc_aload_1 = 43,
  opc_aload_2 = 44,
  opc_aload_3 = 45,
  opc_iaload = 46,
  opc_laload = 47,
  opc_faload = 48,
  opc_daload = 49,
  opc_aaload = 50,
  opc_baload = 51,
  opc_caload = 52,
  opc_saload = 53,
  opc_istore = 54,
  opc_lstore = 55,
  opc_fstore = 56,
  opc_dstore = 57,
  opc_astore = 58,
  opc_istore_0 = 59,
  opc_istore_1 = 60,
  opc_istore_2 = 61,
  opc_istore_3 = 62,
  opc_lstore_0 = 63,
  opc_lstore_1 = 64,
  opc_lstore_2 = 65,
  opc_lstore_3 = 66,
  opc_fstore_0 = 67,
  opc_fstore_1 = 68,
  opc_fstore_2 = 69,
  opc_fstore_3 = 70,
  opc_dstore_0 = 71,
  opc_dstore_1 = 72,
  opc_dstore_2 = 73,
  opc_dstore_3 = 74,
  opc_astore_0 = 75,
  opc_astore_1 = 76,
  opc_astore_2 = 77,
  opc_astore_3 = 78,
  opc_iastore = 79,
  opc_lastore = 80,
  opc_fastore = 81,
  opc_dastore = 82,
  opc_aastore = 83,
  opc_bastore = 84,
  opc_castore = 85,
  opc_sastore = 86,
  opc_pop = 87,
  opc_pop2 = 88,
  opc_dup = 89,
  opc_dup_x1 = 90,
  opc_dup_x2 = 91,
  opc_dup2 = 92,
  opc_dup2_x1 = 93,
  opc_dup2_x2 = 94,
  opc_swap = 95,
  opc_iadd = 96,
  opc_ladd = 97,
  opc_fadd = 98,
  opc_dadd = 99,
  opc_isub = 100,
  opc_lsub = 101,
  opc_fsub = 102,
  opc_dsub = 103,
  opc_imul = 104,
  opc_lmul = 105,
  opc_fmul = 106,
  opc_dmul = 107,
  opc_idiv = 108,
  opc_ldiv = 109,
  opc_fdiv = 110,
  opc_ddiv = 111,
  opc_irem = 112,
  opc_lrem = 113,
  opc_frem = 114,
  opc_drem = 115,
  opc_ineg = 116,
  opc_lneg = 117,
  opc_fneg = 118,
  opc_dneg = 119,
  opc_ishl = 120,
  opc_lshl = 121,
  opc_ishr = 122,
  opc_lshr = 123,
  opc_iushr = 124,
  opc_lushr = 125,
  opc_iand = 126,
  opc_land = 127,
  opc_ior = 128,
  opc_lor = 129,
  opc_ixor = 130,
  opc_lxor = 131,
  opc_iinc = 132,
  opc_i2l = 133,
  opc_i2f = 134,
  opc_i2d = 135,
  opc_l2i = 136,
  opc_l2f = 137,
  opc_l2d = 138,
  opc_f2i = 139,
  opc_f2l = 140,
  opc_f2d = 141,
  opc_d2i = 142,
  opc_d2l = 143,
  opc_d2f = 144,
  opc_int2byte = 145,
  opc_int2char = 146,
  opc_int2short = 147,
  opc_lcmp = 148,
  opc_fcmpl = 149,
  opc_fcmpg = 150,
  opc_dcmpl = 151,
  opc_dcmpg = 152,
  opc_ifeq = 153,
  opc_ifne = 154,
  opc_iflt = 155,
  opc_ifge = 156,
  opc_ifgt = 157,
  opc_ifle = 158,
  opc_if_icmpeq = 159,
  opc_if_icmpne = 160,
  opc_if_icmplt = 161,
  opc_if_icmpge = 162,
  opc_if_icmpgt = 163,
  opc_if_icmple = 164,
  opc_if_acmpeq = 165,
  opc_if_acmpne = 166,
  opc_goto = 167,
  opc_jsr = 168,
  opc_ret = 169,
  opc_tableswitch = 170,
  opc_lookupswitch = 171,
  opc_ireturn = 172,
  opc_lreturn = 173,
  opc_freturn = 174,
  opc_dreturn = 175,
  opc_areturn = 176,
  opc_return = 177,
  opc_getstatic = 178,
  opc_putstatic = 179,
  opc_getfield = 180,
  opc_putfield = 181,
  opc_invokevirtual = 182,
  opc_invokespecial = 183,
  opc_invokestatic = 184,
  opc_invokeinterface = 185,
  opc_xxxunusedxxx = 186,
  opc_new = 187,
  opc_newarray = 188,
  opc_anewarray = 189,
  opc_arraylength = 190,
  opc_athrow = 191,
  opc_checkcast = 192,
  opc_instanceof = 193,
  opc_monitorenter = 194,
  opc_monitorexit = 195,
  opc_wide = 196,
  opc_multianewarray = 197,
  opc_ifnull = 198,
  opc_ifnonnull = 199,
  opc_goto_w = 200,
  opc_jsr_w = 201,
  opc_breakpoint = 202,
  opc_ldc_quick = 203,
  opc_ldc_w_quick = 204,
  opc_ldc2_w_quick = 205,
  opc_getfield_quick = 206,
  opc_putfield_quick = 207,
  opc_getfield2_quick = 208,
  opc_putfield2_quick = 209,
  opc_getstatic_quick = 210,
  opc_putstatic_quick = 211,
  opc_getstatic2_quick = 212,
  opc_putstatic2_quick = 213,
  opc_invokevirtual_quick = 214,
  opc_invokenonvirtual_quick = 215,
  opc_invokesuper_quick = 216,
  opc_invokestatic_quick = 217,
  opc_invokeinterface_quick = 218,
  opc_invokevirtualobject_quick = 219,
  opc_aastore_quick = 220,
  opc_new_quick = 221,
  opc_anewarray_quick = 222,
  opc_multianewarray_quick = 223,
  opc_checkcast_quick = 224,
  opc_instanceof_quick = 225,
  opc_invokevirtual_quick_w = 226,
  opc_getfield_quick_w = 227,
  opc_putfield_quick_w = 228,
  opc_nonnull_quick = 229,
  opc_agetfield_quick = 230,
  opc_aputfield_quick = 231,
  opc_agetstatic_quick = 232,
  opc_aputstatic_quick = 233,
  opc_aldc_quick = 234,
  opc_aldc_w_quick = 235,
  opc_exit_sync_method = 236,
  opc_sethi = 237,
  opc_load_word_index = 238,
  opc_load_short_index = 239,
  opc_load_char_index = 240,
  opc_load_byte_index = 241,
  opc_load_ubyte_index = 242,
  opc_store_word_index = 243,
  opc_nastore_word_index = 244,
  opc_store_short_index = 245,
  opc_store_byte_index = 246,
  opc_hardware = 255
} opcode_type;

#endif /* _OPCODES_H_ */
