#ifndef NRF51_ERRATAS_H
#define NRF51_ERRATAS_H

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

static bool nrf51_errata_1(void) __UNUSED;
static bool nrf51_errata_2(void) __UNUSED;
static bool nrf51_errata_3(void) __UNUSED;
static bool nrf51_errata_4(void) __UNUSED;
static bool nrf51_errata_5(void) __UNUSED;
static bool nrf51_errata_6(void) __UNUSED;
static bool nrf51_errata_7(void) __UNUSED;
static bool nrf51_errata_8(void) __UNUSED;
static bool nrf51_errata_9(void) __UNUSED;
static bool nrf51_errata_10(void) __UNUSED;
static bool nrf51_errata_11(void) __UNUSED;
static bool nrf51_errata_12(void) __UNUSED;
static bool nrf51_errata_13(void) __UNUSED;
static bool nrf51_errata_14(void) __UNUSED;
static bool nrf51_errata_15(void) __UNUSED;
static bool nrf51_errata_16(void) __UNUSED;
static bool nrf51_errata_17(void) __UNUSED;
static bool nrf51_errata_18(void) __UNUSED;
static bool nrf51_errata_19(void) __UNUSED;
static bool nrf51_errata_20(void) __UNUSED;
static bool nrf51_errata_21(void) __UNUSED;
static bool nrf51_errata_22(void) __UNUSED;
static bool nrf51_errata_23(void) __UNUSED;
static bool nrf51_errata_24(void) __UNUSED;
static bool nrf51_errata_25(void) __UNUSED;
static bool nrf51_errata_26(void) __UNUSED;
static bool nrf51_errata_27(void) __UNUSED;
static bool nrf51_errata_28(void) __UNUSED;
static bool nrf51_errata_29(void) __UNUSED;
static bool nrf51_errata_30(void) __UNUSED;
static bool nrf51_errata_31(void) __UNUSED;
static bool nrf51_errata_32(void) __UNUSED;
static bool nrf51_errata_33(void) __UNUSED;
static bool nrf51_errata_34(void) __UNUSED;
static bool nrf51_errata_35(void) __UNUSED;
static bool nrf51_errata_36(void) __UNUSED;
static bool nrf51_errata_37(void) __UNUSED;
static bool nrf51_errata_38(void) __UNUSED;
static bool nrf51_errata_39(void) __UNUSED;
static bool nrf51_errata_40(void) __UNUSED;
static bool nrf51_errata_41(void) __UNUSED;
static bool nrf51_errata_42(void) __UNUSED;
static bool nrf51_errata_43(void) __UNUSED;
static bool nrf51_errata_44(void) __UNUSED;
static bool nrf51_errata_45(void) __UNUSED;
static bool nrf51_errata_46(void) __UNUSED;
static bool nrf51_errata_47(void) __UNUSED;
static bool nrf51_errata_48(void) __UNUSED;
static bool nrf51_errata_49(void) __UNUSED;
static bool nrf51_errata_50(void) __UNUSED;
static bool nrf51_errata_51(void) __UNUSED;
static bool nrf51_errata_52(void) __UNUSED;
static bool nrf51_errata_53(void) __UNUSED;
static bool nrf51_errata_54(void) __UNUSED;
static bool nrf51_errata_55(void) __UNUSED;
static bool nrf51_errata_56(void) __UNUSED;
static bool nrf51_errata_57(void) __UNUSED;
static bool nrf51_errata_58(void) __UNUSED;
static bool nrf51_errata_59(void) __UNUSED;
static bool nrf51_errata_60(void) __UNUSED;
static bool nrf51_errata_61(void) __UNUSED;
static bool nrf51_errata_62(void) __UNUSED;
static bool nrf51_errata_63(void) __UNUSED;
static bool nrf51_errata_64(void) __UNUSED;
static bool nrf51_errata_65(void) __UNUSED;
static bool nrf51_errata_66(void) __UNUSED;
static bool nrf51_errata_67(void) __UNUSED;
static bool nrf51_errata_68(void) __UNUSED;
static bool nrf51_errata_69(void) __UNUSED;
static bool nrf51_errata_70(void) __UNUSED;
static bool nrf51_errata_71(void) __UNUSED;
static bool nrf51_errata_72(void) __UNUSED;
static bool nrf51_errata_73(void) __UNUSED;
static bool nrf51_errata_74(void) __UNUSED;
static bool nrf51_errata_75(void) __UNUSED;
static bool nrf51_errata_76(void) __UNUSED;
static bool nrf51_errata_77(void) __UNUSED;
static bool nrf51_errata_78(void) __UNUSED;

static bool nrf51_errata_1(void)
{
    #if defined (DISABLE_WORKAROUND_1)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_2(void)
{
    #if defined (DISABLE_WORKAROUND_2)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_3(void)
{
    #if defined (DISABLE_WORKAROUND_3)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_4(void)
{
    #if defined (DISABLE_WORKAROUND_4)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        return false;
    #endif
}

static bool nrf51_errata_5(void)
{
    #if defined (DISABLE_WORKAROUND_5)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        return false;
    #endif
}

static bool nrf51_errata_6(void)
{
    #if defined (DISABLE_WORKAROUND_6)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_7(void)
{
    #if defined (DISABLE_WORKAROUND_7)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_8(void)
{
    #if defined (DISABLE_WORKAROUND_8)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_9(void)
{
    #if defined (DISABLE_WORKAROUND_9)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_10(void)
{
    #if defined (DISABLE_WORKAROUND_10)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_11(void)
{
    #if defined (DISABLE_WORKAROUND_11)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_12(void)
{
    #if defined (DISABLE_WORKAROUND_12)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_13(void)
{
    #if defined (DISABLE_WORKAROUND_13)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_14(void)
{
    #if defined (DISABLE_WORKAROUND_14)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_15(void)
{
    #if defined (DISABLE_WORKAROUND_15)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_16(void)
{
    #if defined (DISABLE_WORKAROUND_16)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_17(void)
{
    #if defined (DISABLE_WORKAROUND_17)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_18(void)
{
    #if defined (DISABLE_WORKAROUND_18)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_19(void)
{
    #if defined (DISABLE_WORKAROUND_19)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_20(void)
{
    #if defined (DISABLE_WORKAROUND_20)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_21(void)
{
    #if defined (DISABLE_WORKAROUND_21)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_22(void)
{
    #if defined (DISABLE_WORKAROUND_22)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_23(void)
{
    #if defined (DISABLE_WORKAROUND_23)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_24(void)
{
    #if defined (DISABLE_WORKAROUND_24)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_25(void)
{
    #if defined (DISABLE_WORKAROUND_25)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_26(void)
{
    #if defined (DISABLE_WORKAROUND_26)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_27(void)
{
    #if defined (DISABLE_WORKAROUND_27)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_28(void)
{
    #if defined (DISABLE_WORKAROUND_28)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_29(void)
{
    #if defined (DISABLE_WORKAROUND_29)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_30(void)
{
    #if defined (DISABLE_WORKAROUND_30)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_31(void)
{
    #if defined (DISABLE_WORKAROUND_31)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_32(void)
{
    #if defined (DISABLE_WORKAROUND_32)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_33(void)
{
    #if defined (DISABLE_WORKAROUND_33)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_34(void)
{
    #if defined (DISABLE_WORKAROUND_34)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_35(void)
{
    #if defined (DISABLE_WORKAROUND_35)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_36(void)
{
    #if defined (DISABLE_WORKAROUND_36)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_37(void)
{
    #if defined (DISABLE_WORKAROUND_37)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_38(void)
{
    #if defined (DISABLE_WORKAROUND_38)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return true;
                    case 0x0Aul:
                        return true;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_39(void)
{
    #if defined (DISABLE_WORKAROUND_39)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_40(void)
{
    #if defined (DISABLE_WORKAROUND_40)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_41(void)
{
    #if defined (DISABLE_WORKAROUND_41)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_42(void)
{
    #if defined (DISABLE_WORKAROUND_42)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_43(void)
{
    #if defined (DISABLE_WORKAROUND_43)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_44(void)
{
    #if defined (DISABLE_WORKAROUND_44)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_45(void)
{
    #if defined (DISABLE_WORKAROUND_45)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_46(void)
{
    #if defined (DISABLE_WORKAROUND_46)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return true;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_47(void)
{
    #if defined (DISABLE_WORKAROUND_47)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_48(void)
{
    #if defined (DISABLE_WORKAROUND_48)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_49(void)
{
    #if defined (DISABLE_WORKAROUND_49)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_50(void)
{
    #if defined (DISABLE_WORKAROUND_50)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        return false;
    #endif
}

static bool nrf51_errata_51(void)
{
    #if defined (DISABLE_WORKAROUND_51)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        return false;
    #endif
}

static bool nrf51_errata_52(void)
{
    #if defined (DISABLE_WORKAROUND_52)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        return false;
    #endif
}

static bool nrf51_errata_53(void)
{
    #if defined (DISABLE_WORKAROUND_53)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        return false;
    #endif
}

static bool nrf51_errata_54(void)
{
    #if defined (DISABLE_WORKAROUND_54)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        return false;
    #endif
}

static bool nrf51_errata_55(void)
{
    #if defined (DISABLE_WORKAROUND_55)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                        return true;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_56(void)
{
    #if defined (DISABLE_WORKAROUND_56)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_57(void)
{
    #if defined (DISABLE_WORKAROUND_57)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_58(void)
{
    #if defined (DISABLE_WORKAROUND_58)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_59(void)
{
    #if defined (DISABLE_WORKAROUND_59)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_60(void)
{
    #if defined (DISABLE_WORKAROUND_60)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_61(void)
{
    #if defined (DISABLE_WORKAROUND_61)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return true;
                    case 0x0Aul:
                        return true;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_62(void)
{
    #if defined (DISABLE_WORKAROUND_62)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_63(void)
{
    #if defined (DISABLE_WORKAROUND_63)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_64(void)
{
    #if defined (DISABLE_WORKAROUND_64)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_65(void)
{
    #if defined (DISABLE_WORKAROUND_65)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_66(void)
{
    #if defined (DISABLE_WORKAROUND_66)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return true;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_67(void)
{
    #if defined (DISABLE_WORKAROUND_67)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return true;
                    case 0x0Aul:
                        return true;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_68(void)
{
    #if defined (DISABLE_WORKAROUND_68)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_69(void)
{
    #if defined (DISABLE_WORKAROUND_69)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_70(void)
{
    #if defined (DISABLE_WORKAROUND_70)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return true;
                    case 0x0Aul:
                        return true;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_71(void)
{
    #if defined (DISABLE_WORKAROUND_71)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_72(void)
{
    #if defined (DISABLE_WORKAROUND_72)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return true;
                    case 0x0Aul:
                        return true;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_73(void)
{
    #if defined (DISABLE_WORKAROUND_73)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return true;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_74(void)
{
    #if defined (DISABLE_WORKAROUND_74)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return true;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_75(void)
{
    #if defined (DISABLE_WORKAROUND_75)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return true;
                    case 0x0Aul:
                        return true;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_76(void)
{
    #if defined (DISABLE_WORKAROUND_76)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return false;
                    case 0x02ul:
                        return false;
                    case 0x03ul:
                        return false;
                    case 0x04ul:
                        return false;
                    case 0x07ul:
                        return false;
                    case 0x08ul:
                        return false;
                    case 0x09ul:
                        return false;
                    case 0x0Aul:
                        return true;
                    case 0x0Bul:
                        return false;
                    case 0x0Cul:
                        return false;
                    case 0x0Dul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

static bool nrf51_errata_77(void)
{
    #if defined (DISABLE_WORKAROUND_77)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        return false;
    #endif
}

static bool nrf51_errata_78(void)
{
    #if defined (DISABLE_WORKAROUND_78)
        return false;
    #elif !defined(NRF51_SERIES)
        return false;
    #else
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            uint32_t var1 = ((*(uint32_t *)0xF0000FE0ul) & 0x000000FFul);
            uint32_t var2 = ((*(uint32_t *)0xF0000FE8ul) & 0x000000F0ul) >> 4;
        #endif
        #if defined (NRF51422_XXAA) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAB) || defined (DEVELOP_IN_NRF51422)\
         || defined (NRF51422_XXAC) || defined (DEVELOP_IN_NRF51422)
            if (var1 == 0x01)
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
                    case 0x04ul:
                        return true;
                    case 0x07ul:
                        return true;
                    case 0x08ul:
                        return true;
                    case 0x09ul:
                        return true;
                    case 0x0Aul:
                        return false;
                    case 0x0Bul:
                        return true;
                    case 0x0Cul:
                        return true;
                    case 0x0Dul:
                        return false;
                    default:
                        return false;
                }
            }
        #endif
        return false;
    #endif
}

#endif /* NRF51_ERRATAS_H */
