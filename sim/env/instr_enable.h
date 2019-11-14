/****************************************************************
 ---------------------------------------------------------------
     Copyright 1999 Sun Microsystems, Inc., 901 San Antonio
     Road, Palo Alto, CA 94303, U.S.A.  All Rights Reserved.
     The contents of this file are subject to the current
     version of the Sun Community Source License, picoJava-II
     Core ("the License").  You may not use this file except
     in compliance with the License.  You may obtain a copy
     of the License by searching for "Sun Community Source
     License" on the World Wide Web at http://www.sun.com.
     See the License for the rights, obligations, and
     limitations governing use of the contents of this file.

     Sun, Sun Microsystems, the Sun logo, and all Sun-based
     trademarks and logos, Java, picoJava, and all Java-based
     trademarks and logos are trademarks or registered trademarks 
     of Sun Microsystems, Inc. in the United States and other
     countries.
 ----------------------------------------------------------------
******************************************************************/




 // use this file to tell whether instructions are enabled (set to 1)
// or disabled (set to 0)

`include "instr_def.h"

initial begin

inst_enabled[`INST_nop] = 			1'b1;
inst_enabled[`INST_aconst_null] =		1'b1;
inst_enabled[`INST_iconst_m1] =			1'b1;
inst_enabled[`INST_iconst_0] =			1'b1;
inst_enabled[`INST_iconst_1] =			1'b1;
inst_enabled[`INST_iconst_2] =			1'b1;
inst_enabled[`INST_iconst_3] =			1'b1;
inst_enabled[`INST_iconst_4] =			1'b1;
inst_enabled[`INST_iconst_5] =			1'b1;
inst_enabled[`INST_lconst_0] =			1'b1;
inst_enabled[`INST_lconst_1] =			1'b1;
inst_enabled[`INST_fconst_0] =			1'b1;
inst_enabled[`INST_fconst_1] =			1'b1;
inst_enabled[`INST_fconst_2] =			1'b1;
inst_enabled[`INST_dconst_0] =			1'b1;
inst_enabled[`INST_dconst_1] =			1'b1;
inst_enabled[`INST_bipush] =			1'b1;
inst_enabled[`INST_sipush] =			1'b1;
inst_enabled[`INST_ldc] =			1'b1;
inst_enabled[`INST_ldc_w] =			1'b1;
inst_enabled[`INST_ldc2_w] =			1'b1;
inst_enabled[`INST_iload] =			1'b1;
inst_enabled[`INST_lload] =			1'b1;
inst_enabled[`INST_fload] =			1'b1;
inst_enabled[`INST_dload] =			1'b1;
inst_enabled[`INST_aload] =			1'b1;
inst_enabled[`INST_iload_0] =			1'b1;
inst_enabled[`INST_iload_1] =			1'b1;
inst_enabled[`INST_iload_2] =			1'b1;
inst_enabled[`INST_iload_3] =			1'b1;
inst_enabled[`INST_lload_0] =			1'b1;
inst_enabled[`INST_lload_1] =			1'b1;
inst_enabled[`INST_lload_2] =			1'b1;
inst_enabled[`INST_lload_3] =			1'b1;
inst_enabled[`INST_fload_0] =			1'b1;
inst_enabled[`INST_fload_1] =			1'b1;
inst_enabled[`INST_fload_2] =			1'b1;
inst_enabled[`INST_fload_3] =			1'b1;
inst_enabled[`INST_dload_0] =			1'b1;
inst_enabled[`INST_dload_1] =			1'b1;
inst_enabled[`INST_dload_2] =			1'b1;
inst_enabled[`INST_dload_3] =			1'b1;
inst_enabled[`INST_aload_0] =			1'b1;
inst_enabled[`INST_aload_1] =			1'b1;
inst_enabled[`INST_aload_2] =			1'b1;
inst_enabled[`INST_aload_3] =			1'b1;
inst_enabled[`INST_iaload] =			1'b1;
inst_enabled[`INST_laload] =			1'b1;
inst_enabled[`INST_faload] =			1'b1;
inst_enabled[`INST_daload] =			1'b1;
inst_enabled[`INST_aaload] =			1'b1;
inst_enabled[`INST_baload] =			1'b1;
inst_enabled[`INST_caload] =			1'b1;
inst_enabled[`INST_saload] =			1'b1;
inst_enabled[`INST_istore] =			1'b1;
inst_enabled[`INST_lstore] =			1'b1;
inst_enabled[`INST_fstore] =			1'b1;
inst_enabled[`INST_dstore] =			1'b1;
inst_enabled[`INST_astore] =			1'b1;
inst_enabled[`INST_istore_0] =			1'b1;
inst_enabled[`INST_istore_1] =			1'b1;
inst_enabled[`INST_istore_2] =			1'b1;
inst_enabled[`INST_istore_3] =			1'b1;
inst_enabled[`INST_lstore_0] =			1'b1;
inst_enabled[`INST_lstore_1] =			1'b1;
inst_enabled[`INST_lstore_2] =			1'b1;
inst_enabled[`INST_lstore_3] =			1'b1;
inst_enabled[`INST_fstore_0] =			1'b1;
inst_enabled[`INST_fstore_1] =			1'b1;
inst_enabled[`INST_fstore_2] =			1'b1;
inst_enabled[`INST_fstore_3] =			1'b1;
inst_enabled[`INST_dstore_0] =			1'b1;
inst_enabled[`INST_dstore_1] =			1'b1;
inst_enabled[`INST_dstore_2] =			1'b1;
inst_enabled[`INST_dstore_3] =			1'b1;
inst_enabled[`INST_astore_0] =			1'b1;
inst_enabled[`INST_astore_1] =			1'b1;
inst_enabled[`INST_astore_2] =			1'b1;
inst_enabled[`INST_astore_3] =			1'b1;
inst_enabled[`INST_iastore] =			1'b1;
inst_enabled[`INST_lastore] =			1'b1;
inst_enabled[`INST_fastore] =			1'b1;
inst_enabled[`INST_dastore] =			1'b1;
inst_enabled[`INST_aastore] =			1'b1;
inst_enabled[`INST_bastore] =			1'b1;
inst_enabled[`INST_castore] =			1'b1;
inst_enabled[`INST_sastore] =			1'b1;
inst_enabled[`INST_pop] =			1'b1;
inst_enabled[`INST_pop2] =			1'b1;
inst_enabled[`INST_dup] =			1'b1;
inst_enabled[`INST_dup_x1] =			1'b1;
inst_enabled[`INST_dup_x2] =			1'b1;
inst_enabled[`INST_dup2] =			1'b1;
inst_enabled[`INST_dup2_x1] =			1'b1;
inst_enabled[`INST_dup2_x2] =			1'b1;
inst_enabled[`INST_swap] =			1'b1;
inst_enabled[`INST_iadd] =			1'b1;
inst_enabled[`INST_ladd] =			1'b1;
inst_enabled[`INST_fadd] =			1'b1;
inst_enabled[`INST_dadd] =			1'b1;
inst_enabled[`INST_isub] =			1'b1;
inst_enabled[`INST_lsub] =			1'b1;
inst_enabled[`INST_fsub] =			1'b1;
inst_enabled[`INST_dsub] =			1'b1;
inst_enabled[`INST_imul] =			1'b1;
inst_enabled[`INST_lmul] =			1'b1;
inst_enabled[`INST_fmul] =			1'b1;
inst_enabled[`INST_dmul] =			1'b1;
inst_enabled[`INST_idiv] =			1'b1;
inst_enabled[`INST_ldiv] =			1'b1;
inst_enabled[`INST_fdiv] =			1'b1;
inst_enabled[`INST_ddiv] =			1'b1;
inst_enabled[`INST_irem] =			1'b1;
inst_enabled[`INST_lrem] =			1'b1;
inst_enabled[`INST_frem] =			1'b1;
inst_enabled[`INST_drem] =			1'b1;
inst_enabled[`INST_ineg] =			1'b1;
inst_enabled[`INST_lneg] =			1'b1;
inst_enabled[`INST_fneg] =			1'b1;
inst_enabled[`INST_dneg] =			1'b1;
inst_enabled[`INST_ishl] =			1'b1;
inst_enabled[`INST_lshl] =			1'b1;
inst_enabled[`INST_ishr] =			1'b1;
inst_enabled[`INST_lshr] =			1'b1;
inst_enabled[`INST_iushr] =			1'b1;
inst_enabled[`INST_lushr] =			1'b1;
inst_enabled[`INST_iand] =			1'b1;
inst_enabled[`INST_land] =			1'b1;
inst_enabled[`INST_ior] =			1'b1;
inst_enabled[`INST_lor] =			1'b1;
inst_enabled[`INST_ixor] =			1'b1;
inst_enabled[`INST_lxor] =			1'b1;
inst_enabled[`INST_iinc] =			1'b1;
inst_enabled[`INST_i2l] =			1'b1;
inst_enabled[`INST_i2f] =			1'b1;
inst_enabled[`INST_i2d] =			1'b1;
inst_enabled[`INST_l2i] =			1'b1;
inst_enabled[`INST_l2f] =			1'b1;
inst_enabled[`INST_l2d] =			1'b1;
inst_enabled[`INST_f2i] =			1'b1;
inst_enabled[`INST_f2l] =			1'b1;
inst_enabled[`INST_f2d] =			1'b1;
inst_enabled[`INST_d2i] =			1'b1;
inst_enabled[`INST_d2l] =			1'b1;
inst_enabled[`INST_d2f] =			1'b1;
inst_enabled[`INST_i2b] =			1'b1;
inst_enabled[`INST_i2c] =			1'b1;
inst_enabled[`INST_i2s] =			1'b1;
inst_enabled[`INST_lcmp] =			1'b1;
inst_enabled[`INST_fcmpl] =			1'b1;
inst_enabled[`INST_fcmpg] =			1'b1;
inst_enabled[`INST_dcmpl] =			1'b1;
inst_enabled[`INST_dcmpg] =			1'b1;
inst_enabled[`INST_ifeq] =			1'b1;
inst_enabled[`INST_ifne] =			1'b1;
inst_enabled[`INST_iflt] =			1'b1;
inst_enabled[`INST_ifge] =			1'b1;
inst_enabled[`INST_ifgt] =			1'b1;
inst_enabled[`INST_ifle] =			1'b1;
inst_enabled[`INST_if_icmpeq] =			1'b1;
inst_enabled[`INST_if_icmpne] =			1'b1;
inst_enabled[`INST_if_icmplt] =			1'b1;
inst_enabled[`INST_if_icmpge] =			1'b1;
inst_enabled[`INST_if_icmpgt] =			1'b1;
inst_enabled[`INST_if_icmple] =			1'b1;
inst_enabled[`INST_if_acmpeq] =			1'b1;
inst_enabled[`INST_if_acmpne] =			1'b1;
inst_enabled[`INST_goto] =			1'b1;
inst_enabled[`INST_jsr] =			1'b1;
inst_enabled[`INST_ret] =			1'b1;
inst_enabled[`INST_tableswitch] =		1'b1;
inst_enabled[`INST_lookupswitch] =		1'b1;
inst_enabled[`INST_ireturn] =			1'b1;
inst_enabled[`INST_lreturn] =			1'b1;
inst_enabled[`INST_freturn] =			1'b1;
inst_enabled[`INST_dreturn] =			1'b1;
inst_enabled[`INST_areturn] =			1'b1;
inst_enabled[`INST_return] =			1'b1;
inst_enabled[`INST_getstatic] =			1'b1;
inst_enabled[`INST_putstatic] =			1'b1;
inst_enabled[`INST_getfield] =			1'b1;
inst_enabled[`INST_putfield] =			1'b1;
inst_enabled[`INST_invokevirtual] =		1'b1;
inst_enabled[`INST_invokespecial] =		1'b1;
inst_enabled[`INST_invokestatic] =		1'b1;
inst_enabled[`INST_invokeinterface] =		1'b1;
inst_enabled[`INST_opcode_0xba] =		1'b1;
inst_enabled[`INST_new] =			1'b1;
inst_enabled[`INST_newarray] =			1'b1;
inst_enabled[`INST_anewarray] =			1'b1;
inst_enabled[`INST_arraylength] =		1'b1;
inst_enabled[`INST_athrow] =			1'b1;
inst_enabled[`INST_checkcast] =			1'b1;
inst_enabled[`INST_instanceof] =		1'b1;
inst_enabled[`INST_monitorenter] =		1'b1;
inst_enabled[`INST_monitorexit] =		1'b1;
inst_enabled[`INST_wide] =			1'b1;
inst_enabled[`INST_multianewarray] =		1'b1;
inst_enabled[`INST_ifnull] =			1'b1;
inst_enabled[`INST_ifnonnull] =			1'b1;
inst_enabled[`INST_goto_w] =			1'b1;
inst_enabled[`INST_jsr_w] =			1'b1;
inst_enabled[`INST_breakpoint] =		1'b1;
inst_enabled[`INST_ldc_quick] =			1'b1;
inst_enabled[`INST_ldc_w_quick] =		1'b1;
inst_enabled[`INST_ldc2_w_quick] =		1'b1;
inst_enabled[`INST_getfield_quick] =		1'b1;
inst_enabled[`INST_putfield_quick] =		1'b1;
inst_enabled[`INST_getfield2_quick] =		1'b1;
inst_enabled[`INST_putfield2_quick] =		1'b1;
inst_enabled[`INST_getstatic_quick] =		1'b1;
inst_enabled[`INST_putstatic_quick] =		1'b1;
inst_enabled[`INST_getstatic2_quick] =		1'b1;
inst_enabled[`INST_putstatic2_quick] =		1'b1;
inst_enabled[`INST_invokevirtual_quick] =	1'b1;
inst_enabled[`INST_invokenonvirtual_quick] =	1'b1;
inst_enabled[`INST_invokesuper_quick] =		1'b1;
inst_enabled[`INST_invokestatic_quick] =	1'b1;
inst_enabled[`INST_invokeinterface_quick] =	1'b1;
inst_enabled[`INST_invokevirtualobj_quick] =	1'b1;
inst_enabled[`INST_opcode_0xdc] =		1'b1;
inst_enabled[`INST_new_quick] =			1'b1;
inst_enabled[`INST_anewarray_quick] =		1'b1;
inst_enabled[`INST_multianewarray_quick] =	1'b1;
inst_enabled[`INST_checkcast_quick] =		1'b1;
inst_enabled[`INST_instanceof_quick] =		1'b1;
inst_enabled[`INST_invokevirtual_quick_w] =	1'b1;
inst_enabled[`INST_getfield_quick_w] =		1'b1;
inst_enabled[`INST_putfield_quick_w] =		1'b1;
inst_enabled[`INST_nonnull_quick] =		1'b1;
inst_enabled[`INST_agetfield_quick] =		1'b1;
inst_enabled[`INST_aputfield_quick] =		1'b1;
inst_enabled[`INST_agetstatic_quick] =		1'b1;
inst_enabled[`INST_aputstatic_quick] =		1'b1;
inst_enabled[`INST_aldc_quick] =		1'b1;
inst_enabled[`INST_aldc_w_quick] =		1'b1;
inst_enabled[`INST_exit_sync_method] =		1'b1;
inst_enabled[`INST_sethi] =			1'b1;
inst_enabled[`INST_opcode_0xee] =		1'b1;
inst_enabled[`INST_opcode_0xef] =		1'b1;
inst_enabled[`INST_opcode_0xf0] =		1'b1;
inst_enabled[`INST_opcode_0xf1] =		1'b1;
inst_enabled[`INST_opcode_0xf2] =		1'b1;
inst_enabled[`INST_opcode_0xf3] =		1'b1;
inst_enabled[`INST_opcode_0xf4] =		1'b1;
inst_enabled[`INST_opcode_0xf5] =		1'b1;
inst_enabled[`INST_opcode_0xf6] =		1'b1;
inst_enabled[`INST_opcode_0xf7] =		1'b1;
inst_enabled[`INST_opcode_0xf8] =		1'b1;
inst_enabled[`INST_opcode_0xf9] =		1'b1;
inst_enabled[`INST_opcode_0xfa] =		1'b1;
inst_enabled[`INST_opcode_0xfb] =		1'b1;
inst_enabled[`INST_opcode_0xfc] =		1'b1;
inst_enabled[`INST_opcode_0xfe] =		1'b1;

extended_inst_enabled[`INST_load_ubyte] =		1'b1;
extended_inst_enabled[`INST_load_byte] =		1'b1;
extended_inst_enabled[`INST_load_char] =		1'b1;
extended_inst_enabled[`INST_load_short] =		1'b1;
extended_inst_enabled[`INST_load_word] =		1'b1;
extended_inst_enabled[`INST_priv_ret_from_trap] =	1'b1;
extended_inst_enabled[`INST_priv_read_dcache_tag] =	1'b1;
extended_inst_enabled[`INST_priv_read_dcache_data] =	1'b1;
extended_inst_enabled[`INST_opcode_0xff08] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff09] =		1'b1;
extended_inst_enabled[`INST_load_char_oe] =		1'b1;
extended_inst_enabled[`INST_load_short_oe] =		1'b1;
extended_inst_enabled[`INST_load_word_oe] =		1'b1;
extended_inst_enabled[`INST_return0] =			1'b1;
extended_inst_enabled[`INST_priv_read_icache_tag] =	1'b1;
extended_inst_enabled[`INST_priv_read_icache_data] =	1'b1;
extended_inst_enabled[`INST_ncload_ubyte] =		1'b1;
extended_inst_enabled[`INST_ncload_byte] =		1'b1;
extended_inst_enabled[`INST_ncload_char] =		1'b1;
extended_inst_enabled[`INST_ncload_short] =		1'b1;
extended_inst_enabled[`INST_ncload_word] =		1'b1;
extended_inst_enabled[`INST_iu_cmp] =			1'b1;
extended_inst_enabled[`INST_priv_powerdown] =		1'b1;
extended_inst_enabled[`INST_cache_invalidate] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff18] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff19] =		1'b1;
extended_inst_enabled[`INST_ncload_char_oe] =		1'b1;
extended_inst_enabled[`INST_ncload_short_oe] =		1'b1;
extended_inst_enabled[`INST_ncload_word_oe] =		1'b1;
extended_inst_enabled[`INST_return1] =			1'b1;
extended_inst_enabled[`INST_cache_flush] =		1'b1;
extended_inst_enabled[`INST_cache_index_flush] =	1'b1;
extended_inst_enabled[`INST_store_byte] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff21] =		1'b1;
extended_inst_enabled[`INST_store_short] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff23] =		1'b1;
extended_inst_enabled[`INST_store_word] =		1'b1;
extended_inst_enabled[`INST_soft_trap] =		1'b1;
extended_inst_enabled[`INST_priv_write_dcache_tag] =	1'b1;
extended_inst_enabled[`INST_priv_write_dcache_data] =	1'b1;
extended_inst_enabled[`INST_opcode_0xff28] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff29] =		1'b1;
extended_inst_enabled[`INST_store_short_oe] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff2b] =		1'b1;
extended_inst_enabled[`INST_store_word_oe] =		1'b1;
extended_inst_enabled[`INST_return2] =			1'b1;
extended_inst_enabled[`INST_priv_write_icache_tag] =	1'b1;
extended_inst_enabled[`INST_priv_write_icache_data] =	1'b1;
extended_inst_enabled[`INST_ncstore_byte] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff31] =		1'b1;
extended_inst_enabled[`INST_ncstore_short] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff33] =		1'b1;
extended_inst_enabled[`INST_ncstore_word] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff35] =		1'b1;
extended_inst_enabled[`INST_priv_reset] =		1'b1;
extended_inst_enabled[`INST_get_current_class] =	1'b1;
extended_inst_enabled[`INST_opcode_0xff38] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff39] =		1'b1;
extended_inst_enabled[`INST_ncstore_short_oe] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff3b] =		1'b1;
extended_inst_enabled[`INST_ncstore_word_oe] =		1'b1;
extended_inst_enabled[`INST_call] =			1'b1;
extended_inst_enabled[`INST_zero_line] =		1'b1;
extended_inst_enabled[`INST_priv_update_optop] =	1'b1;
extended_inst_enabled[`INST_read_pc] =			1'b1;
extended_inst_enabled[`INST_read_vars] =		1'b1;
extended_inst_enabled[`INST_read_frame] =		1'b1;
extended_inst_enabled[`INST_read_optop] =		1'b1;
extended_inst_enabled[`INST_priv_read_oplim] =		1'b1;
extended_inst_enabled[`INST_read_const_pool] =		1'b1;
extended_inst_enabled[`INST_priv_read_psr] =		1'b1;
extended_inst_enabled[`INST_priv_read_trapbase] =	1'b1;
extended_inst_enabled[`INST_priv_read_lockcount0] =	1'b1;
extended_inst_enabled[`INST_priv_read_lockcount1] =	1'b1;
extended_inst_enabled[`INST_opcode_0xff4a] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff4b] =		1'b1;
extended_inst_enabled[`INST_priv_read_lockaddr0] =	1'b1;
extended_inst_enabled[`INST_priv_read_lockaddr1] =	1'b1;
extended_inst_enabled[`INST_opcode_0xff4e] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff4f] =		1'b1;
extended_inst_enabled[`INST_priv_read_userrange1] =	1'b1;
extended_inst_enabled[`INST_priv_read_gc_config] =	1'b1;
extended_inst_enabled[`INST_priv_read_brk1a] =		1'b1;
extended_inst_enabled[`INST_priv_read_brk2a] =		1'b1;
extended_inst_enabled[`INST_priv_read_brk12c] =		1'b1;
extended_inst_enabled[`INST_priv_read_userrange2] =	1'b1;
extended_inst_enabled[`INST_opcode_0xff56] =		1'b1;
extended_inst_enabled[`INST_priv_read_versionid] =	1'b1;
extended_inst_enabled[`INST_priv_read_hcr] =		1'b1;
extended_inst_enabled[`INST_priv_read_sc_bottom] =	1'b1;
extended_inst_enabled[`INST_read_global0] =		1'b1;
extended_inst_enabled[`INST_read_global1] =		1'b1;
extended_inst_enabled[`INST_read_global2] =		1'b1;
extended_inst_enabled[`INST_read_global3] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff5e] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff5f] =		1'b1;
extended_inst_enabled[`INST_ret_from_sub] =		1'b1;
extended_inst_enabled[`INST_write_vars] =		1'b1;
extended_inst_enabled[`INST_write_frame] =		1'b1;
extended_inst_enabled[`INST_write_optop] =		1'b1;
extended_inst_enabled[`INST_priv_write_oplim] =		1'b1;
extended_inst_enabled[`INST_write_const_pool] =		1'b1;
extended_inst_enabled[`INST_priv_write_psr] =		1'b1;
extended_inst_enabled[`INST_priv_write_trapbase] =	1'b1;
extended_inst_enabled[`INST_priv_write_lockcount0] =	1'b1;
extended_inst_enabled[`INST_priv_write_lockcount1] =	1'b1;
extended_inst_enabled[`INST_opcode_0xff6a] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff6b] =		1'b1;
extended_inst_enabled[`INST_priv_write_lockaddr0] =	1'b1;
extended_inst_enabled[`INST_priv_write_lockaddr1] =	1'b1;
extended_inst_enabled[`INST_opcode_0xff6e] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff6f] =		1'b1;
extended_inst_enabled[`INST_priv_write_userrange1] =	1'b1;
extended_inst_enabled[`INST_priv_write_gc_config] =	1'b1;
extended_inst_enabled[`INST_priv_write_brk1a] =		1'b1;
extended_inst_enabled[`INST_priv_write_brk2a] =		1'b1;
extended_inst_enabled[`INST_priv_write_brk12c] =	1'b1;
extended_inst_enabled[`INST_priv_write_userrange2] =	1'b1;
extended_inst_enabled[`INST_opcode_0xff76] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff77] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff78] =		1'b1;
extended_inst_enabled[`INST_priv_write_sc_bottom] =	1'b1;
extended_inst_enabled[`INST_write_global0] =		1'b1;
extended_inst_enabled[`INST_write_global1] =		1'b1;
extended_inst_enabled[`INST_write_global2] =		1'b1;
extended_inst_enabled[`INST_write_global3] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff7e] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff7f] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff80] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff81] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff82] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff83] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff84] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff85] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff86] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff87] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff88] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff89] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff8a] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff8b] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff8c] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff8d] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff8e] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff8f] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff90] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff91] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff92] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff93] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff94] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff95] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff96] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff97] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff98] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff99] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff9a] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff9b] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff9c] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff9d] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff9e] =		1'b1;
extended_inst_enabled[`INST_opcode_0xff9f] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffa0] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffa1] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffa2] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffa3] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffa4] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffa5] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffa6] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffa7] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffa8] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffa9] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffaa] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffab] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffac] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffad] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffae] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffaf] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffb0] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffb1] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffb2] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffb3] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffb4] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffb5] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffb6] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffb7] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffb8] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffb9] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffba] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffbb] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffbc] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffbd] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffbe] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffbf] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffc0] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffc1] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffc2] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffc3] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffc4] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffc5] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffc6] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffc7] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffc8] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffc9] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffca] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffcb] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffcc] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffcd] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffce] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffcf] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffd0] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffd1] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffd2] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffd3] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffd4] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffd5] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffd6] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffd7] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffd8] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffd9] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffda] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffdb] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffdc] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffdd] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffde] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffdf] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffe0] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffe1] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffe2] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffe3] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffe4] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffe5] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffe6] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffe7] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffe8] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffe9] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffea] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffeb] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffec] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffed] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffee] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffef] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfff0] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfff1] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfff2] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfff3] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfff4] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfff5] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfff6] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfff7] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfff8] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfff9] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfffa] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfffb] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfffc] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfffd] =		1'b1;
extended_inst_enabled[`INST_opcode_0xfffe] =		1'b1;
extended_inst_enabled[`INST_opcode_0xffff] =		1'b1;

end