#ifndef NRF52_ERRATAS_H
#define NRF52_ERRATAS_H

/*

Copyright (c) 2010 - 2020, Nordic Semiconductor ASA

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form, except as embedded into a Nordic
   Semiconductor ASA integrated circuit in a product or a software update for
   such product, must reproduce the above copyright notice, this list of
   conditions and the following disclaimer in the documentation and/or other
   materials provided with the distribution.

3. Neither the name of Nordic Semiconductor ASA nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

4. This software, with or without modification, must only be used with a
   Nordic Semiconductor ASA integrated circuit.

5. Any software provided in binary form under this license must not be reverse
   engineered, decompiled, modified and/or disassembled.

THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include <stdint.h>
#include <stdbool.h>
#include "compiler_abstraction.h"

static bool nrf52_errata_1(void) __UNUSED;
static bool nrf52_errata_2(void) __UNUSED;
static bool nrf52_errata_3(void) __UNUSED;
static bool nrf52_errata_4(void) __UNUSED;
static bool nrf52_errata_7(void) __UNUSED;
static bool nrf52_errata_8(void) __UNUSED;
static bool nrf52_errata_9(void) __UNUSED;
static bool nrf52_errata_10(void) __UNUSED;
static bool nrf52_errata_11(void) __UNUSED;
static bool nrf52_errata_12(void) __UNUSED;
static bool nrf52_errata_15(void) __UNUSED;
static bool nrf52_errata_16(void) __UNUSED;
static bool nrf52_errata_17(void) __UNUSED;
static bool nrf52_errata_20(void) __UNUSED;
static bool nrf52_errata_23(void) __UNUSED;
static bool nrf52_errata_24(void) __UNUSED;
static bool nrf52_errata_25(void) __UNUSED;
static bool nrf52_errata_26(void) __UNUSED;
static bool nrf52_errata_27(void) __UNUSED;
static bool nrf52_errata_28(void) __UNUSED;
static bool nrf52_errata_29(void) __UNUSED;
static bool nrf52_errata_30(void) __UNUSED;
static bool nrf52_errata_31(void) __UNUSED;
static bool nrf52_errata_32(void) __UNUSED;
static bool nrf52_errata_33(void) __UNUSED;
static bool nrf52_errata_34(void) __UNUSED;
static bool nrf52_errata_35(void) __UNUSED;
static bool nrf52_errata_36(void) __UNUSED;
static bool nrf52_errata_37(void) __UNUSED;
static bool nrf52_errata_38(void) __UNUSED;
static bool nrf52_errata_39(void) __UNUSED;
static bool nrf52_errata_40(void) __UNUSED;
static bool nrf52_errata_41(void) __UNUSED;
static bool nrf52_errata_42(void) __UNUSED;
static bool nrf52_errata_43(void) __UNUSED;
static bool nrf52_errata_44(void) __UNUSED;
static bool nrf52_errata_46(void) __UNUSED;
static bool nrf52_errata_47(void) __UNUSED;
static bool nrf52_errata_48(void) __UNUSED;
static bool nrf52_errata_49(void) __UNUSED;
static bool nrf52_errata_51(void) __UNUSED;
static bool nrf52_errata_54(void) __UNUSED;
static bool nrf52_errata_55(void) __UNUSED;
static bool nrf52_errata_57(void) __UNUSED;
static bool nrf52_errata_58(void) __UNUSED;
static bool nrf52_errata_62(void) __UNUSED;
static bool nrf52_errata_63(void) __UNUSED;
static bool nrf52_errata_64(void) __UNUSED;
static bool nrf52_errata_65(void) __UNUSED;
static bool nrf52_errata_66(void) __UNUSED;
static bool nrf52_errata_67(void) __UNUSED;
static bool nrf52_errata_68(void) __UNUSED;
static bool nrf52_errata_70(void) __UNUSED;
static bool nrf52_errata_71(void) __UNUSED;
static bool nrf52_errata_72(void) __UNUSED;
static bool nrf52_errata_73(void) __UNUSED;
static bool nrf52_errata_74(void) __UNUSED;
static bool nrf52_errata_75(void) __UNUSED;
static bool nrf52_errata_76(void) __UNUSED;
static bool nrf52_errata_77(void) __UNUSED;
static bool nrf52_errata_78(void) __UNUSED;
static bool nrf52_errata_79(void) __UNUSED;
static bool nrf52_errata_81(void) __UNUSED;
static bool nrf52_errata_83(void) __UNUSED;
static bool nrf52_errata_84(void) __UNUSED;
static bool nrf52_errata_86(void) __UNUSED;
static bool nrf52_errata_87(void) __UNUSED;
static bool nrf52_errata_88(void) __UNUSED;
static bool nrf52_errata_89(void) __UNUSED;
static bool nrf52_errata_91(void) __UNUSED;
static bool nrf52_errata_94(void) __UNUSED;
static bool nrf52_errata_96(void) __UNUSED;
static bool nrf52_errata_97(void) __UNUSED;
static bool nrf52_errata_98(void) __UNUSED;
static bool nrf52_errata_101(void) __UNUSED;
static bool nrf52_errata_102(void) __UNUSED;
static bool nrf52_errata_103(void) __UNUSED;
static bool nrf52_errata_104(void) __UNUSED;
static bool nrf52_errata_106(void) __UNUSED;
static bool nrf52_errata_107(void) __UNUSED;
static bool nrf52_errata_108(void) __UNUSED;
static bool nrf52_errata_109(void) __UNUSED;
static bool nrf52_errata_110(void) __UNUSED;
static bool nrf52_errata_111(void) __UNUSED;
static bool nrf52_errata_112(void) __UNUSED;
static bool nrf52_errata_113(void) __UNUSED;
static bool nrf52_errata_115(void) __UNUSED;
static bool nrf52_errata_116(void) __UNUSED;
static bool nrf52_errata_117(void) __UNUSED;
static bool nrf52_errata_118(void) __UNUSED;
static bool nrf52_errata_119(void) __UNUSED;
static bool nrf52_errata_120(void) __UNUSED;
static bool nrf52_errata_121(void) __UNUSED;
static bool nrf52_errata_122(void) __UNUSED;
static bool nrf52_errata_127(void) __UNUSED;
static bool nrf52_errata_128(void) __UNUSED;
static bool nrf52_errata_131(void) __UNUSED;
static bool nrf52_errata_132(void) __UNUSED;
static bool nrf52_errata_133(void) __UNUSED;
static bool nrf52_errata_134(void) __UNUSED;
static bool nrf52_errata_135(void) __UNUSED;
static bool nrf52_errata_136(void) __UNUSED;
static bool nrf52_errata_138(void) __UNUSED;
static bool nrf52_errata_140(void) __UNUSED;
static bool nrf52_errata_141(void) __UNUSED;
static bool nrf52_errata_142(void) __UNUSED;
static bool nrf52_errata_143(void) __UNUSED;
static bool nrf52_errata_144(void) __UNUSED;
static bool nrf52_errata_145(void) __UNUSED;
static bool nrf52_errata_146(void) __UNUSED;
static bool nrf52_errata_147(void) __UNUSED;
static bool nrf52_errata_149(void) __UNUSED;
static bool nrf52_errata_150(void) __UNUSED;
static bool nrf52_errata_151(void) __UNUSED;
static bool nrf52_errata_153(void) __UNUSED;
static bool nrf52_errata_154(void) __UNUSED;
static bool nrf52_errata_155(void) __UNUSED;
static bool nrf52_errata_156(void) __UNUSED;
static bool nrf52_errata_158(void) __UNUSED;
static bool nrf52_errata_160(void) __UNUSED;
static bool nrf52_errata_162(void) __UNUSED;
static bool nrf52_errata_163(void) __UNUSED;
static bool nrf52_errata_164(void) __UNUSED;
static bool nrf52_errata_166(void) __UNUSED;
static bool nrf52_errata_170(void) __UNUSED;
static bool nrf52_errata_171(void) __UNUSED;
static bool nrf52_errata_172(void) __UNUSED;
static bool nrf52_errata_173(void) __UNUSED;
static bool nrf52_errata_174(void) __UNUSED;
static bool nrf52_errata_176(void) __UNUSED;
static bool nrf52_errata_178(void) __UNUSED;
static bool nrf52_errata_179(void) __UNUSED;
static bool nrf52_errata_180(void) __UNUSED;
static bool nrf52_errata_181(void) __UNUSED;
static bool nrf52_errata_182(void) __UNUSED;
static bool nrf52_errata_183(void) __UNUSED;
static bool nrf52_errata_184(void) __UNUSED;
static bool nrf52_errata_186(void) __UNUSED;
static bool nrf52_errata_187(void) __UNUSED;
static bool nrf52_errata_189(void) __UNUSED;
static bool nrf52_errata_190(void) __UNUSED;
static bool nrf52_errata_191(void) __UNUSED;
static bool nrf52_errata_192(void) __UNUSED;
static bool nrf52_errata_193(void) __UNUSED;
static bool nrf52_errata_194(void) __UNUSED;
static bool nrf52_errata_195(void) __UNUSED;
static bool nrf52_errata_196(void) __UNUSED;
static bool nrf52_errata_197(void) __UNUSED;
static bool nrf52_errata_198(void) __UNUSED;
static bool nrf52_errata_199(void) __UNUSED;
static bool nrf52_errata_200(void) __UNUSED;
static bool nrf52_errata_201(void) __UNUSED;
static bool nrf52_errata_202(void) __UNUSED;
static bool nrf52_errata_204(void) __UNUSED;
static bool nrf52_errata_208(void) __UNUSED;
static bool nrf52_errata_209(void) __UNUSED;
static bool nrf52_errata_210(void) __UNUSED;
static bool nrf52_errata_211(void) __UNUSED;
static bool nrf52_errata_212(void) __UNUSED;
static bool nrf52_errata_213(void) __UNUSED;
static bool nrf52_errata_214(void) __UNUSED;
static bool nrf52_errata_215(void) __UNUSED;
static bool nrf52_errata_216(void) __UNUSED;
static bool nrf52_errata_217(void) __UNUSED;
static bool nrf52_errata_218(void) __UNUSED;
static bool nrf52_errata_219(void) __UNUSED;
static bool nrf52_errata_220(void) __UNUSED;
static bool nrf52_errata_223(void) __UNUSED;
static bool nrf52_errata_225(void) __UNUSED;
static bool nrf52_errata_228(void) __UNUSED;
static bool nrf52_errata_230(void) __UNUSED;
static bool nrf52_errata_231(void) __UNUSED;
static bool nrf52_errata_232(void) __UNUSED;
static bool nrf52_errata_233(void) __UNUSED;
static bool nrf52_errata_236(void) __UNUSED;
static bool nrf52_errata_237(void) __UNUSED;
static bool nrf52_errata_248(void) __UNUSED;

static bool nrf52_errata_1(void)
{
    #if defined (DISABLE_WORKAROUND_1)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_2(void)
{
    #if defined (DISABLE_WORKAROUND_2)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_3(void)
{
    #if defined (DISABLE_WORKAROUND_3)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_4(void)
{
    #if defined (DISABLE_WORKAROUND_4)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_7(void)
{
    #if defined (DISABLE_WORKAROUND_7)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_8(void)
{
    #if defined (DISABLE_WORKAROUND_8)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_9(void)
{
    #if defined (DISABLE_WORKAROUND_9)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_10(void)
{
    #if defined (DISABLE_WORKAROUND_10)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_11(void)
{
    #if defined (DISABLE_WORKAROUND_11)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_12(void)
{
    #if defined (DISABLE_WORKAROUND_12)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_15(void)
{
    #if defined (DISABLE_WORKAROUND_15)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_16(void)
{
    #if defined (DISABLE_WORKAROUND_16)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_17(void)
{
    #if defined (DISABLE_WORKAROUND_17)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_20(void)
{
    #if defined (DISABLE_WORKAROUND_20)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_23(void)
{
    #if defined (DISABLE_WORKAROUND_23)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_24(void)
{
    #if defined (DISABLE_WORKAROUND_24)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_25(void)
{
    #if defined (DISABLE_WORKAROUND_25)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_26(void)
{
    #if defined (DISABLE_WORKAROUND_26)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_27(void)
{
    #if defined (DISABLE_WORKAROUND_27)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_28(void)
{
    #if defined (DISABLE_WORKAROUND_28)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_29(void)
{
    #if defined (DISABLE_WORKAROUND_29)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_30(void)
{
    #if defined (DISABLE_WORKAROUND_30)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_31(void)
{
    #if defined (DISABLE_WORKAROUND_31)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_32(void)
{
    #if defined (DISABLE_WORKAROUND_32)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_33(void)
{
    #if defined (DISABLE_WORKAROUND_33)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_34(void)
{
    #if defined (DISABLE_WORKAROUND_34)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_35(void)
{
    #if defined (DISABLE_WORKAROUND_35)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_36(void)
{
    #if defined (DISABLE_WORKAROUND_36)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_37(void)
{
    #if defined (DISABLE_WORKAROUND_37)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_38(void)
{
    #if defined (DISABLE_WORKAROUND_38)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_39(void)
{
    #if defined (DISABLE_WORKAROUND_39)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_40(void)
{
    #if defined (DISABLE_WORKAROUND_40)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_41(void)
{
    #if defined (DISABLE_WORKAROUND_41)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_42(void)
{
    #if defined (DISABLE_WORKAROUND_42)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_43(void)
{
    #if defined (DISABLE_WORKAROUND_43)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_44(void)
{
    #if defined (DISABLE_WORKAROUND_44)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_46(void)
{
    #if defined (DISABLE_WORKAROUND_46)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_47(void)
{
    #if defined (DISABLE_WORKAROUND_47)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_48(void)
{
    #if defined (DISABLE_WORKAROUND_48)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_49(void)
{
    #if defined (DISABLE_WORKAROUND_49)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_51(void)
{
    #if defined (DISABLE_WORKAROUND_51)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_54(void)
{
    #if defined (DISABLE_WORKAROUND_54)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_55(void)
{
    #if defined (DISABLE_WORKAROUND_55)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_57(void)
{
    #if defined (DISABLE_WORKAROUND_57)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_58(void)
{
    #if defined (DISABLE_WORKAROUND_58)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_62(void)
{
    #if defined (DISABLE_WORKAROUND_62)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_63(void)
{
    #if defined (DISABLE_WORKAROUND_63)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_64(void)
{
    #if defined (DISABLE_WORKAROUND_64)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_65(void)
{
    #if defined (DISABLE_WORKAROUND_65)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_66(void)
{
    #if defined (DISABLE_WORKAROUND_66)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_67(void)
{
    #if defined (DISABLE_WORKAROUND_67)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_68(void)
{
    #if defined (DISABLE_WORKAROUND_68)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_70(void)
{
    #if defined (DISABLE_WORKAROUND_70)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_71(void)
{
    #if defined (DISABLE_WORKAROUND_71)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_72(void)
{
    #if defined (DISABLE_WORKAROUND_72)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_73(void)
{
    #if defined (DISABLE_WORKAROUND_73)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_74(void)
{
    #if defined (DISABLE_WORKAROUND_74)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_75(void)
{
    #if defined (DISABLE_WORKAROUND_75)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_76(void)
{
    #if defined (DISABLE_WORKAROUND_76)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_77(void)
{
    #if defined (DISABLE_WORKAROUND_77)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_78(void)
{
    #if defined (DISABLE_WORKAROUND_78)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_79(void)
{
    #if defined (DISABLE_WORKAROUND_79)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_81(void)
{
    #if defined (DISABLE_WORKAROUND_81)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_83(void)
{
    #if defined (DISABLE_WORKAROUND_83)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_84(void)
{
    #if defined (DISABLE_WORKAROUND_84)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_86(void)
{
    #if defined (DISABLE_WORKAROUND_86)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_87(void)
{
    #if defined (DISABLE_WORKAROUND_87)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_88(void)
{
    #if defined (DISABLE_WORKAROUND_88)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_89(void)
{
    #if defined (DISABLE_WORKAROUND_89)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_91(void)
{
    #if defined (DISABLE_WORKAROUND_91)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_94(void)
{
    #if defined (DISABLE_WORKAROUND_94)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_96(void)
{
    #if defined (DISABLE_WORKAROUND_96)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_97(void)
{
    #if defined (DISABLE_WORKAROUND_97)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_98(void)
{
    #if defined (DISABLE_WORKAROUND_98)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_101(void)
{
    #if defined (DISABLE_WORKAROUND_101)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_102(void)
{
    #if defined (DISABLE_WORKAROUND_102)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_103(void)
{
    #if defined (DISABLE_WORKAROUND_103)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_104(void)
{
    #if defined (DISABLE_WORKAROUND_104)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_106(void)
{
    #if defined (DISABLE_WORKAROUND_106)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_107(void)
{
    #if defined (DISABLE_WORKAROUND_107)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_108(void)
{
    #if defined (DISABLE_WORKAROUND_108)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_109(void)
{
    #if defined (DISABLE_WORKAROUND_109)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_110(void)
{
    #if defined (DISABLE_WORKAROUND_110)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_111(void)
{
    #if defined (DISABLE_WORKAROUND_111)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_112(void)
{
    #if defined (DISABLE_WORKAROUND_112)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_113(void)
{
    #if defined (DISABLE_WORKAROUND_113)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_115(void)
{
    #if defined (DISABLE_WORKAROUND_115)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_116(void)
{
    #if defined (DISABLE_WORKAROUND_116)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_117(void)
{
    #if defined (DISABLE_WORKAROUND_117)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_118(void)
{
    #if defined (DISABLE_WORKAROUND_118)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_119(void)
{
    #if defined (DISABLE_WORKAROUND_119)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_120(void)
{
    #if defined (DISABLE_WORKAROUND_120)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_121(void)
{
    #if defined (DISABLE_WORKAROUND_121)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_122(void)
{
    #if defined (DISABLE_WORKAROUND_122)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_127(void)
{
    #if defined (DISABLE_WORKAROUND_127)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_128(void)
{
    #if defined (DISABLE_WORKAROUND_128)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_131(void)
{
    #if defined (DISABLE_WORKAROUND_131)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_132(void)
{
    #if defined (DISABLE_WORKAROUND_132)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_133(void)
{
    #if defined (DISABLE_WORKAROUND_133)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_134(void)
{
    #if defined (DISABLE_WORKAROUND_134)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_135(void)
{
    #if defined (DISABLE_WORKAROUND_135)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_136(void)
{
    #if defined (DISABLE_WORKAROUND_136)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_138(void)
{
    #if defined (DISABLE_WORKAROUND_138)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_140(void)
{
    #if defined (DISABLE_WORKAROUND_140)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_141(void)
{
    #if defined (DISABLE_WORKAROUND_141)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_142(void)
{
    #if defined (DISABLE_WORKAROUND_142)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_143(void)
{
    #if defined (DISABLE_WORKAROUND_143)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_144(void)
{
    #if defined (DISABLE_WORKAROUND_144)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_145(void)
{
    #if defined (DISABLE_WORKAROUND_145)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_146(void)
{
    #if defined (DISABLE_WORKAROUND_146)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_147(void)
{
    #if defined (DISABLE_WORKAROUND_147)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_149(void)
{
    #if defined (DISABLE_WORKAROUND_149)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_150(void)
{
    #if defined (DISABLE_WORKAROUND_150)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_151(void)
{
    #if defined (DISABLE_WORKAROUND_151)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_153(void)
{
    #if defined (DISABLE_WORKAROUND_153)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_154(void)
{
    #if defined (DISABLE_WORKAROUND_154)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_155(void)
{
    #if defined (DISABLE_WORKAROUND_155)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_156(void)
{
    #if defined (DISABLE_WORKAROUND_156)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_158(void)
{
    #if defined (DISABLE_WORKAROUND_158)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_160(void)
{
    #if defined (DISABLE_WORKAROUND_160)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_162(void)
{
    #if defined (DISABLE_WORKAROUND_162)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_163(void)
{
    #if defined (DISABLE_WORKAROUND_163)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_164(void)
{
    #if defined (DISABLE_WORKAROUND_164)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_166(void)
{
    #if defined (DISABLE_WORKAROUND_166)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_170(void)
{
    #if defined (DISABLE_WORKAROUND_170)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_171(void)
{
    #if defined (DISABLE_WORKAROUND_171)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_172(void)
{
    #if defined (DISABLE_WORKAROUND_172)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_173(void)
{
    #if defined (DISABLE_WORKAROUND_173)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_174(void)
{
    #if defined (DISABLE_WORKAROUND_174)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_176(void)
{
    #if defined (DISABLE_WORKAROUND_176)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_178(void)
{
    #if defined (DISABLE_WORKAROUND_178)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_179(void)
{
    #if defined (DISABLE_WORKAROUND_179)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_180(void)
{
    #if defined (DISABLE_WORKAROUND_180)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_181(void)
{
    #if defined (DISABLE_WORKAROUND_181)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_182(void)
{
    #if defined (DISABLE_WORKAROUND_182)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return false;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_183(void)
{
    #if defined (DISABLE_WORKAROUND_183)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_184(void)
{
    #if defined (DISABLE_WORKAROUND_184)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_186(void)
{
    #if defined (DISABLE_WORKAROUND_186)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_187(void)
{
    #if defined (DISABLE_WORKAROUND_187)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_189(void)
{
    #if defined (DISABLE_WORKAROUND_189)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_190(void)
{
    #if defined (DISABLE_WORKAROUND_190)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_191(void)
{
    #if defined (DISABLE_WORKAROUND_191)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_192(void)
{
    #if defined (DISABLE_WORKAROUND_192)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_193(void)
{
    #if defined (DISABLE_WORKAROUND_193)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_194(void)
{
    #if defined (DISABLE_WORKAROUND_194)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_195(void)
{
    #if defined (DISABLE_WORKAROUND_195)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_196(void)
{
    #if defined (DISABLE_WORKAROUND_196)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_197(void)
{
    #if defined (DISABLE_WORKAROUND_197)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_198(void)
{
    #if defined (DISABLE_WORKAROUND_198)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_199(void)
{
    #if defined (DISABLE_WORKAROUND_199)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_200(void)
{
    #if defined (DISABLE_WORKAROUND_200)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_201(void)
{
    #if defined (DISABLE_WORKAROUND_201)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_202(void)
{
    #if defined (DISABLE_WORKAROUND_202)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_204(void)
{
    #if defined (DISABLE_WORKAROUND_204)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_208(void)
{
    #if defined (DISABLE_WORKAROUND_208)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_209(void)
{
    #if defined (DISABLE_WORKAROUND_209)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_210(void)
{
    #if defined (DISABLE_WORKAROUND_210)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_211(void)
{
    #if defined (DISABLE_WORKAROUND_211)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_212(void)
{
    #if defined (DISABLE_WORKAROUND_212)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_213(void)
{
    #if defined (DISABLE_WORKAROUND_213)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return true;
                    case 0x04ul:
                        return true;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_214(void)
{
    #if defined (DISABLE_WORKAROUND_214)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_215(void)
{
    #if defined (DISABLE_WORKAROUND_215)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_216(void)
{
    #if defined (DISABLE_WORKAROUND_216)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_217(void)
{
    #if defined (DISABLE_WORKAROUND_217)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_218(void)
{
    #if defined (DISABLE_WORKAROUND_218)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_219(void)
{
    #if defined (DISABLE_WORKAROUND_219)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #elif defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)\
         || defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52805_XXAA) || defined (DEVELOP_IN_NRF52805)
            if (var1 == 0x0F)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_220(void)
{
    #if defined (DISABLE_WORKAROUND_220)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            uint32_t var1;
            uint32_t var2;

            if (*(uint32_t *)0x10000130ul == 0xFFFFFFFF)
            {
                var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
                var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
            }
            else
            {
                var1 = *(uint32_t *)0x10000130ul;
                var2 = *(uint32_t *)0x10000134ul;
            }
        #endif
        #if defined (NRF52832_XXAA) || defined (DEVELOP_IN_NRF52832)\
         || defined (NRF52832_XXAB) || defined (DEVELOP_IN_NRF52832)
            if (var1 == 0x06)
            {
                switch(var2)
                {
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x05ul:
                        return true;
                    case 0x06ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_223(void)
{
    #if defined (DISABLE_WORKAROUND_223)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_225(void)
{
    #if defined (DISABLE_WORKAROUND_225)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_228(void)
{
    #if defined (DISABLE_WORKAROUND_228)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_230(void)
{
    #if defined (DISABLE_WORKAROUND_230)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_231(void)
{
    #if defined (DISABLE_WORKAROUND_231)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_232(void)
{
    #if defined (DISABLE_WORKAROUND_232)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_233(void)
{
    #if defined (DISABLE_WORKAROUND_233)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_236(void)
{
    #if defined (DISABLE_WORKAROUND_236)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_237(void)
{
    #if defined (DISABLE_WORKAROUND_237)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)\
         || defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)\
         || defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)\
         || defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)\
         || defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            uint32_t var1 = *(uint32_t *)0x10000130ul;
            uint32_t var2 = *(uint32_t *)0x10000134ul;
        #endif
        #if defined (NRF52840_XXAA) || defined (DEVELOP_IN_NRF52840)
            if (var1 == 0x08)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return true;
                    case 0x03ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52810_XXAA) || defined (DEVELOP_IN_NRF52810)
            if (var1 == 0x0A)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52833_XXAA) || defined (DEVELOP_IN_NRF52833)
            if (var1 == 0x0D)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52811_XXAA) || defined (DEVELOP_IN_NRF52811)
            if (var1 == 0x0E)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF52820_XXAA) || defined (DEVELOP_IN_NRF52820)
            if (var1 == 0x10)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return true;
                    case 0x01ul:
                        return true;
                    case 0x02ul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf52_errata_248(void)
{
    #if defined (DISABLE_WORKAROUND_248)
        return false;
    #elif !defined(NRF52_SERIES)
        return false;
    #else
        return false;
    #endif
}

#endif /* NRF52_ERRATAS_H */
