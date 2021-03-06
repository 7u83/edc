/*
Copyright (C) 2006 - 2014 Evan Teran
                          eteran@alum.rit.edu

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OPTABLE_1BYTE_20080314_TCC_
#define OPTABLE_1BYTE_20080314_TCC_

namespace edisassm {

template <class M>
const typename Instruction<M>::opcode_entry Instruction<M>::Opcodes[0x100] = {

	/* 0x00 - 0x0f */
	{ "add",   &Instruction::decode_Eb_Gb,  OP_ADD,   FLAG_W_FLAGS },
	{ "add",   &Instruction::decode_Ev_Gv,  OP_ADD,   FLAG_W_FLAGS },
	{ "add",   &Instruction::decode_Gb_Eb,  OP_ADD,   FLAG_W_FLAGS },
	{ "add",   &Instruction::decode_Gv_Ev,  OP_ADD,   FLAG_W_FLAGS },
	{ "add",   &Instruction::decode_AL_Ib,  OP_ADD,   FLAG_W_FLAGS },
	{ "add",   &Instruction::decode_rAX_Iz, OP_ADD,   FLAG_W_FLAGS },
	{ "push",  &Instruction::decode_SegES,  OP_PUSH,  FLAG_32BIT_ONLY | FLAG_STACK }, // ia-32 only
	{ "pop",   &Instruction::decode_SegES,  OP_POP,   FLAG_32BIT_ONLY | FLAG_STACK }, // ia-32 only
	{ "or",    &Instruction::decode_Eb_Gb,  OP_OR,    FLAG_W_FLAGS },
	{ "or",    &Instruction::decode_Ev_Gv,  OP_OR,    FLAG_W_FLAGS },
	{ "or",    &Instruction::decode_Gb_Eb,  OP_OR,    FLAG_W_FLAGS },
	{ "or",    &Instruction::decode_Gv_Ev,  OP_OR,    FLAG_W_FLAGS },
	{ "or",    &Instruction::decode_AL_Ib,  OP_OR,    FLAG_W_FLAGS },
	{ "or",    &Instruction::decode_rAX_Iz, OP_OR,    FLAG_W_FLAGS },
	{ "push",  &Instruction::decode_SegCS,  OP_PUSH,  FLAG_32BIT_ONLY | FLAG_STACK }, // ia-32 only
	{ "2byte", &Instruction::decode_2byte,  OP_2BYTE, FLAG_NONE },

	/* 0x10 - 0x1f */
	{ "adc",  &Instruction::decode_Eb_Gb,  OP_ADC,  FLAG_RW_FLAGS },
	{ "adc",  &Instruction::decode_Ev_Gv,  OP_ADC,  FLAG_RW_FLAGS },
	{ "adc",  &Instruction::decode_Gb_Eb,  OP_ADC,  FLAG_RW_FLAGS },
	{ "adc",  &Instruction::decode_Gv_Ev,  OP_ADC,  FLAG_RW_FLAGS },
	{ "adc",  &Instruction::decode_AL_Ib,  OP_ADC,  FLAG_RW_FLAGS },
	{ "adc",  &Instruction::decode_rAX_Iz, OP_ADC,  FLAG_RW_FLAGS },
	{ "push", &Instruction::decode_SegSS,  OP_PUSH, FLAG_32BIT_ONLY | FLAG_STACK }, // ia-32 only
	{ "pop",  &Instruction::decode_SegSS,  OP_POP,  FLAG_32BIT_ONLY | FLAG_STACK }, // ia-32 only
	{ "sbb",  &Instruction::decode_Eb_Gb,  OP_SBB,  FLAG_RW_FLAGS },
	{ "sbb",  &Instruction::decode_Ev_Gv,  OP_SBB,  FLAG_RW_FLAGS },
	{ "sbb",  &Instruction::decode_Gb_Eb,  OP_SBB,  FLAG_RW_FLAGS },
	{ "sbb",  &Instruction::decode_Gv_Ev,  OP_SBB,  FLAG_RW_FLAGS },
	{ "sbb",  &Instruction::decode_AL_Ib,  OP_SBB,  FLAG_RW_FLAGS },
	{ "sbb",  &Instruction::decode_rAX_Iz, OP_SBB,  FLAG_RW_FLAGS },
	{ "push", &Instruction::decode_SegDS,  OP_PUSH, FLAG_32BIT_ONLY | FLAG_STACK }, // ia-32 only
	{ "pop",  &Instruction::decode_SegDS,  OP_POP,  FLAG_32BIT_ONLY | FLAG_STACK }, // ia-32 only

	/* 0x20 - 0x2f */
	{ "and",       &Instruction::decode_Eb_Gb,   OP_AND,    FLAG_W_FLAGS },
	{ "and",       &Instruction::decode_Ev_Gv,   OP_AND,    FLAG_W_FLAGS },
	{ "and",       &Instruction::decode_Gb_Eb,   OP_AND,    FLAG_W_FLAGS },
	{ "and",       &Instruction::decode_Gv_Ev,   OP_AND,    FLAG_W_FLAGS },
	{ "and",       &Instruction::decode_AL_Ib,   OP_AND,    FLAG_W_FLAGS },
	{ "and",       &Instruction::decode_rAX_Iz,  OP_AND,    FLAG_W_FLAGS },
	{ "prefix es", &Instruction::decode_invalid, OP_PREFIX, FLAG_NONE },
	{ "daa",       &Instruction::decode0,        OP_DAA,    FLAG_32BIT_ONLY | FLAG_RW_FLAGS }, // ia-32 only
	{ "sub",       &Instruction::decode_Eb_Gb,   OP_SUB,    FLAG_W_FLAGS },
	{ "sub",       &Instruction::decode_Ev_Gv,   OP_SUB,    FLAG_W_FLAGS },
	{ "sub",       &Instruction::decode_Gb_Eb,   OP_SUB,    FLAG_W_FLAGS },
	{ "sub",       &Instruction::decode_Gv_Ev,   OP_SUB,    FLAG_W_FLAGS },
	{ "sub",       &Instruction::decode_AL_Ib,   OP_SUB,    FLAG_W_FLAGS },
	{ "sub",       &Instruction::decode_rAX_Iz,  OP_SUB,    FLAG_W_FLAGS },
	{ "prefix cs", &Instruction::decode_invalid, OP_PREFIX, FLAG_NONE },
	{ "das",       &Instruction::decode0,        OP_DAS,    FLAG_32BIT_ONLY | FLAG_RW_FLAGS }, // ia-32 only

	/* 0x30 - 0x3f */
	{ "xor",       &Instruction::decode_Eb_Gb,   OP_XOR,    FLAG_W_FLAGS },
	{ "xor",       &Instruction::decode_Ev_Gv,   OP_XOR,    FLAG_W_FLAGS },
	{ "xor",       &Instruction::decode_Gb_Eb,   OP_XOR,    FLAG_W_FLAGS },
	{ "xor",       &Instruction::decode_Gv_Ev,   OP_XOR,    FLAG_W_FLAGS },
	{ "xor",       &Instruction::decode_AL_Ib,   OP_XOR,    FLAG_W_FLAGS },
	{ "xor",       &Instruction::decode_rAX_Iz,  OP_XOR,    FLAG_W_FLAGS },
	{ "prefix ss", &Instruction::decode_invalid, OP_PREFIX, FLAG_NONE },
	{ "aaa",       &Instruction::decode0,        OP_AAA,    FLAG_32BIT_ONLY | FLAG_RW_FLAGS }, // ia-32 only
	{ "cmp",       &Instruction::decode_Eb_Gb,   OP_CMP,    FLAG_W_FLAGS },
	{ "cmp",       &Instruction::decode_Ev_Gv,   OP_CMP,    FLAG_W_FLAGS },
	{ "cmp",       &Instruction::decode_Gb_Eb,   OP_CMP,    FLAG_W_FLAGS },
	{ "cmp",       &Instruction::decode_Gv_Ev,   OP_CMP,    FLAG_W_FLAGS },
	{ "cmp",       &Instruction::decode_AL_Ib,   OP_CMP,    FLAG_W_FLAGS },
	{ "cmp",       &Instruction::decode_rAX_Iz,  OP_CMP,    FLAG_W_FLAGS },
	{ "prefix ds", &Instruction::decode_invalid, OP_PREFIX, FLAG_NONE },
	{ "aas",       &Instruction::decode0,        OP_AAS,    FLAG_32BIT_ONLY | FLAG_RW_FLAGS }, // ia-32 only

	/* 0x40 - 0x4f */
	{ "inc", &Instruction::decode_rAX, OP_INC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "inc", &Instruction::decode_rCX, OP_INC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "inc", &Instruction::decode_rDX, OP_INC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "inc", &Instruction::decode_rBX, OP_INC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "inc", &Instruction::decode_rSP, OP_INC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "inc", &Instruction::decode_rBP, OP_INC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "inc", &Instruction::decode_rSI, OP_INC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "inc", &Instruction::decode_rDI, OP_INC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "dec", &Instruction::decode_rAX, OP_DEC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "dec", &Instruction::decode_rCX, OP_DEC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "dec", &Instruction::decode_rDX, OP_DEC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "dec", &Instruction::decode_rBX, OP_DEC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "dec", &Instruction::decode_rSP, OP_DEC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "dec", &Instruction::decode_rBP, OP_DEC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "dec", &Instruction::decode_rSI, OP_DEC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)
	{ "dec", &Instruction::decode_rDI, OP_DEC, FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only (REX byte)

	/* 0x50 - 0x5f */
	{ "push", &Instruction::decode_rAX, OP_PUSH, FLAG_STACK },
	{ "push", &Instruction::decode_rCX, OP_PUSH, FLAG_STACK },
	{ "push", &Instruction::decode_rDX, OP_PUSH, FLAG_STACK },
	{ "push", &Instruction::decode_rBX, OP_PUSH, FLAG_STACK },
	{ "push", &Instruction::decode_rSP, OP_PUSH, FLAG_STACK },
	{ "push", &Instruction::decode_rBP, OP_PUSH, FLAG_STACK },
	{ "push", &Instruction::decode_rSI, OP_PUSH, FLAG_STACK },
	{ "push", &Instruction::decode_rDI, OP_PUSH, FLAG_STACK },
	{ "pop",  &Instruction::decode_rAX, OP_POP,  FLAG_STACK },
	{ "pop",  &Instruction::decode_rCX, OP_POP,  FLAG_STACK },
	{ "pop",  &Instruction::decode_rDX, OP_POP,  FLAG_STACK },
	{ "pop",  &Instruction::decode_rBX, OP_POP,  FLAG_STACK },
	{ "pop",  &Instruction::decode_rSP, OP_POP,  FLAG_STACK },
	{ "pop",  &Instruction::decode_rBP, OP_POP,  FLAG_STACK },
	{ "pop",  &Instruction::decode_rSI, OP_POP,  FLAG_STACK },
	{ "pop",  &Instruction::decode_rDI, OP_POP,  FLAG_STACK },

	/* 0x60 - 0x6f */
	{ "pushaw/pushad", &Instruction::decode_pushaw_pushad_invalid, OP_GROUP,   FLAG_NONE },
	{ "popaw/popad",   &Instruction::decode_popaw_popad_invalid,   OP_GROUP,   FLAG_NONE },
	{ "bound",         &Instruction::decode_Gv_Ma,                 OP_BOUND,   FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only
	{ "arpl",          &Instruction::decode_Ew_Gw,                 OP_ARPL,    FLAG_W_FLAGS }, // x86-64: movsxd Gv,Ev
	{ "prefix fs",     &Instruction::decode_invalid,               OP_PREFIX,  FLAG_NONE },
	{ "prefix gs",     &Instruction::decode_invalid,               OP_PREFIX,  FLAG_NONE },
	{ "prefix data16", &Instruction::decode_invalid,               OP_PREFIX,  FLAG_NONE },
	{ "prefix addr16", &Instruction::decode_invalid,               OP_PREFIX,  FLAG_NONE },
	{ "push",          &Instruction::decode_Iz,                    OP_PUSH,    FLAG_STACK },
	{ "imul",          &Instruction::decode_Gv_Ev_Iz,              OP_IMUL,    FLAG_W_FLAGS },
	{ "push",          &Instruction::decode_Ib,                    OP_PUSH,    FLAG_STACK },
	{ "imul",          &Instruction::decode_Gv_Ev_Ib,              OP_IMUL,    FLAG_W_FLAGS },
	{ "insb",          &Instruction::decode0,                      OP_INS,     FLAG_R_FLAGS },
	{ "insw/insd",     &Instruction::decode_insw_insd_invalid,     OP_GROUP,   FLAG_NONE },
	{ "outsb",         &Instruction::decode0,                      OP_OUTS,    FLAG_R_FLAGS },
	{ "outsw/outsd",   &Instruction::decode_outsw_outsd_invalid,   OP_GROUP,   FLAG_NONE },

	/* 0x70 - 0x7f */
	{ "jo",   &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jno",  &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jb",   &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jnb",  &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jz",   &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jnz",  &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jbe",  &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jnbe", &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "js",   &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jns",  &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jp",   &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jnp",  &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jl",   &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jnl",  &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jle",  &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },
	{ "jnle", &Instruction::decode_Jb, OP_JCC, FLAG_R_FLAGS },

	/* 0x80 - 0x8f */
	{ "group1",  &Instruction::decode_group1,  OP_GROUP, FLAG_NONE },
	{ "group1",  &Instruction::decode_group1,  OP_GROUP, FLAG_NONE },
	{ "group1",  &Instruction::decode_group1,  OP_GROUP, FLAG_NONE },
	{ "group1",  &Instruction::decode_group1,  OP_GROUP, FLAG_NONE },
	{ "test",    &Instruction::decode_Eb_Gb,   OP_TEST,  FLAG_W_FLAGS },
	{ "test",    &Instruction::decode_Ev_Gv,   OP_TEST,  FLAG_W_FLAGS },
	{ "xchg",    &Instruction::decode_Gb_Eb,   OP_XCHG,  FLAG_NONE },
	{ "xchg",    &Instruction::decode_Gv_Ev,   OP_XCHG,  FLAG_NONE },
	{ "mov",     &Instruction::decode_Eb_Gb,   OP_MOV,   FLAG_NONE },
	{ "mov",     &Instruction::decode_Ev_Gv,   OP_MOV,   FLAG_NONE },
	{ "mov",     &Instruction::decode_Gb_Eb,   OP_MOV,   FLAG_NONE },
	{ "mov",     &Instruction::decode_Gv_Ev,   OP_MOV,   FLAG_NONE },
	{ "mov",     &Instruction::decode_Ev_Sw,   OP_MOV,   FLAG_NONE },
	{ "lea",     &Instruction::decode_Gv_M,    OP_LEA,   FLAG_NONE },
	{ "mov",     &Instruction::decode_Sw_Ew,   OP_MOV,   FLAG_NONE },
	{ "group10", &Instruction::decode_group10, OP_GROUP, FLAG_NONE },

	/* 0x90 - 0x9f */
	{ "xchg",                 &Instruction::decode_rAX_rAX_NOREX,        OP_XCHG,    FLAG_NONE },
	{ "xchg",                 &Instruction::decode_rCX_rAX_NOREX,        OP_XCHG,    FLAG_NONE },
	{ "xchg",                 &Instruction::decode_rDX_rAX_NOREX,        OP_XCHG,    FLAG_NONE },
	{ "xchg",                 &Instruction::decode_rBX_rAX_NOREX,        OP_XCHG,    FLAG_NONE },
	{ "xchg",                 &Instruction::decode_rSP_rAX_NOREX,        OP_XCHG,    FLAG_NONE },
	{ "xchg",                 &Instruction::decode_rBP_rAX_NOREX,        OP_XCHG,    FLAG_NONE },
	{ "xchg",                 &Instruction::decode_rSI_rAX_NOREX,        OP_XCHG,    FLAG_NONE },
	{ "xchg",                 &Instruction::decode_rDI_rAX_NOREX,        OP_XCHG,    FLAG_NONE },
	{ "cbw/cwde/cdqe",        &Instruction::decode_cbw_cwde_cdqe,        OP_GROUP,   FLAG_NONE },
	{ "cwd/cdq/cqo",          &Instruction::decode_cwd_cdq_cqo,          OP_GROUP,   FLAG_NONE },
	{ "callf",                &Instruction::decode_Ap,                   OP_CALL,    FLAG_32BIT_ONLY | FLAG_STACK }, // ia-32 only
	{ "wait/prefix wait",     &Instruction::wait_or_wait_prefix,         OP_GROUP,   FLAG_NONE },
	{ "pushfw/pushfd/pushfq", &Instruction::decode_pushfw_pushfd_pushfq, OP_GROUP,   FLAG_NONE },
	{ "popfw/popfd/popfq",    &Instruction::decode_popfw_popfd_popfq,    OP_GROUP,   FLAG_NONE },
	{ "sahf",                 &Instruction::decode0,                     OP_SAHF,    FLAG_NONE },
	{ "lahf",                 &Instruction::decode0,                     OP_LAHF,    FLAG_R_FLAGS },

	/* 0xa0 - 0xaf */
	{ "mov",               &Instruction::decode_AL_Ob,             OP_MOV,   FLAG_NONE },
	{ "mov",               &Instruction::decode_rAX_Ov,            OP_MOV,   FLAG_NONE },
	{ "mov",               &Instruction::decode_Ob_AL,             OP_MOV,   FLAG_NONE },
	{ "mov",               &Instruction::decode_Ov_rAX,            OP_MOV,   FLAG_NONE },
	{ "movsb",             &Instruction::decode0,                  OP_MOVS,  FLAG_R_FLAGS },
	{ "movsw/movsd/movsq", &Instruction::decode_movsw_movsd_movsq, OP_GROUP, FLAG_NONE },
	{ "cmpsb",             &Instruction::decode0,                  OP_CMPS,  FLAG_RW_FLAGS },
	{ "cmpsw/cmpsd/cmpsq", &Instruction::decode_cmpsw_cmpsd_cmpsq, OP_GROUP, FLAG_NONE },
	{ "test",              &Instruction::decode_AL_Ib,             OP_TEST,  FLAG_R_FLAGS },
	{ "test",              &Instruction::decode_rAX_Iz,            OP_TEST,  FLAG_R_FLAGS },
	{ "stosb",             &Instruction::decode0,                  OP_STOS,  FLAG_R_FLAGS },
	{ "stosw/stosd/stosq", &Instruction::decode_stosw_stosd_stosq, OP_GROUP, FLAG_NONE },
	{ "lodsb",             &Instruction::decode0,                  OP_LODS,  FLAG_R_FLAGS },
	{ "lodsw/lodsd/lodsq", &Instruction::decode_lodsw_lodsd_lodsq, OP_GROUP, FLAG_NONE },
	{ "scasb",             &Instruction::decode0,                  OP_SCAS,  FLAG_RW_FLAGS },
	{ "scasw/scasd/scasq", &Instruction::decode_scasw_scasd_scasq, OP_GROUP, FLAG_NONE },

	/* 0xb0 - 0xbf */
	{ "mov", &Instruction::decode_AL_Ib,  OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_CL_Ib,  OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_DL_Ib,  OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_BL_Ib,  OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_AH_Ib,  OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_CH_Ib,  OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_DH_Ib,  OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_BH_Ib,  OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_rAX_Iv, OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_rCX_Iv, OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_rDX_Iv, OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_rBX_Iv, OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_rSP_Iv, OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_rBP_Iv, OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_rSI_Iv, OP_MOV, FLAG_NONE },
	{ "mov", &Instruction::decode_rDI_Iv, OP_MOV, FLAG_NONE },

	/* 0xc0 - 0xcf */
	{ "group2",           &Instruction::decode_group2,           OP_GROUP, FLAG_NONE },
	{ "group2",           &Instruction::decode_group2,           OP_GROUP, FLAG_NONE },
	{ "ret",              &Instruction::decode_Iw,               OP_RET,   FLAG_STACK },
	{ "ret",              &Instruction::decode0,                 OP_RET,   FLAG_STACK },
	{ "les",              &Instruction::decode_Gz_Mp,            OP_LES,   FLAG_32BIT_ONLY }, // ia-32 only
	{ "lds",              &Instruction::decode_Gz_Mp,            OP_LDS,   FLAG_32BIT_ONLY }, // ia-32 only
	{ "group12",          &Instruction::decode_group12,          OP_GROUP, FLAG_NONE },
	{ "group12",          &Instruction::decode_group12,          OP_GROUP, FLAG_NONE },
	{ "enter",            &Instruction::decode_Iw_Ib,            OP_ENTER, FLAG_STACK },
	{ "leave",            &Instruction::decode0,                 OP_LEAVE, FLAG_STACK },
	{ "retf",             &Instruction::decode_Iw,               OP_RETF,  FLAG_STACK },
	{ "retf",             &Instruction::decode0,                 OP_RETF,  FLAG_STACK },
	{ "int3",             &Instruction::decode0,                 OP_INT3,  FLAG_W_FLAGS },
	{ "int",              &Instruction::decode_Ib,               OP_INT,   FLAG_W_FLAGS },
	{ "into",             &Instruction::decode0,                 OP_INTO,  FLAG_RW_FLAGS | FLAG_32BIT_ONLY }, // ia-32 only
	{ "iretw/iret/iretq", &Instruction::decode_iretw_iret_iretq, OP_GROUP, FLAG_NONE },

	/* 0xd0 - 0xdf */
	{ "group2", &Instruction::decode_group2D, OP_GROUP, FLAG_NONE },
	{ "group2", &Instruction::decode_group2D, OP_GROUP, FLAG_NONE },
	{ "group2", &Instruction::decode_group2D, OP_GROUP, FLAG_NONE },
	{ "group2", &Instruction::decode_group2D, OP_GROUP, FLAG_NONE },
	{ "aam",    &Instruction::decode_Ib,      OP_AAM,   FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only
	{ "aad",    &Instruction::decode_Ib,      OP_AAD,   FLAG_32BIT_ONLY | FLAG_W_FLAGS }, // ia-32 only
	{ "salc",   &Instruction::decode0,        OP_SALC,  FLAG_UNDOCUMENTED | FLAG_R_FLAGS },
	{ "xlat",   &Instruction::decode0,        OP_XLAT,  FLAG_NONE },
	{ "esc0",   &Instruction::decode_x87,     OP_FPU,   FLAG_NONE },
	{ "esc1",   &Instruction::decode_x87,     OP_FPU,   FLAG_NONE },
	{ "esc2",   &Instruction::decode_x87,     OP_FPU,   FLAG_NONE },
	{ "esc3",   &Instruction::decode_x87,     OP_FPU,   FLAG_NONE },
	{ "esc4",   &Instruction::decode_x87,     OP_FPU,   FLAG_NONE },
	{ "esc5",   &Instruction::decode_x87,     OP_FPU,   FLAG_NONE },
	{ "esc6",   &Instruction::decode_x87,     OP_FPU,   FLAG_NONE },
	{ "esc7",   &Instruction::decode_x87,     OP_FPU,   FLAG_NONE },

	/* 0xe0 - 0xef */
	{ "loopne",           &Instruction::decode_Jb,               OP_LOOPNE, FLAG_R_FLAGS },
	{ "loope",            &Instruction::decode_Jb,               OP_LOOPE,  FLAG_R_FLAGS },
	{ "loop",             &Instruction::decode_Jb,               OP_LOOP,   FLAG_R_FLAGS },
	{ "jcxz/jecxz/jrcxz", &Instruction::decode_jcxz_jecxz_jrcxz, OP_GROUP,  FLAG_NONE },
	{ "in",               &Instruction::decode_AL_Ib,            OP_IN,     FLAG_NONE },
	{ "in",               &Instruction::decode_eAX_Ib,           OP_IN,     FLAG_NONE },
	{ "out",              &Instruction::decode_Ib_AL,            OP_OUT,    FLAG_NONE },
	{ "out",              &Instruction::decode_Ib_eAX,           OP_OUT,    FLAG_NONE },
	{ "call",             &Instruction::decode_Jz,               OP_CALL,   FLAG_STACK },
	{ "jmp",              &Instruction::decode_Jz,               OP_JMP,    FLAG_NONE },
	{ "jmp",              &Instruction::decode_Ap,               OP_JMP,    FLAG_32BIT_ONLY }, // ia-32 only
	{ "jmp",              &Instruction::decode_Jb,               OP_JMP,    FLAG_NONE },
	{ "in",               &Instruction::decode_AL_DX,            OP_IN,     FLAG_NONE },
	{ "in",               &Instruction::decode_eAX_DX,           OP_IN,     FLAG_NONE },
	{ "out",              &Instruction::decode_DX_AL,            OP_OUT,    FLAG_NONE },
	{ "out",              &Instruction::decode_DX_eAX,           OP_OUT,    FLAG_NONE },

	/* 0xf0 - 0xff */
	{ "prefix lock",  &Instruction::decode_invalid, OP_PREFIX,  FLAG_NONE },
	{ "invalid",      &Instruction::decode_invalid, OP_INVALID, FLAG_NONE },
	{ "prefix repne", &Instruction::decode_invalid, OP_PREFIX,  FLAG_NONE },
	{ "prefix rep",   &Instruction::decode_invalid, OP_PREFIX,  FLAG_NONE },
	{ "hlt",          &Instruction::decode0,        OP_HLT,     FLAG_RING0 },
	{ "cmc",          &Instruction::decode0,        OP_CMC,     FLAG_RW_FLAGS },
	{ "group3",       &Instruction::decode_group3,  OP_GROUP,   FLAG_NONE },
	{ "group3",       &Instruction::decode_group3,  OP_GROUP,   FLAG_NONE },
	{ "clc",          &Instruction::decode0,        OP_CLC,     FLAG_W_FLAGS },
	{ "stc",          &Instruction::decode0,        OP_STC,     FLAG_W_FLAGS },
	{ "cli",          &Instruction::decode0,        OP_CLI,     FLAG_W_FLAGS },
	{ "sti",          &Instruction::decode0,        OP_STI,     FLAG_W_FLAGS },
	{ "cld",          &Instruction::decode0,        OP_CLD,     FLAG_W_FLAGS },
	{ "std",          &Instruction::decode0,        OP_STD,     FLAG_W_FLAGS },
	{ "group4",       &Instruction::decode_group4,  OP_GROUP,   FLAG_NONE },
	{ "group5",       &Instruction::decode_group5,  OP_GROUP,   FLAG_NONE },
};

}

#endif
