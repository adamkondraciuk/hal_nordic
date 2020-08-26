#ifndef NRF53_ERRATAS_H
#define NRF53_ERRATAS_H

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

static bool nrf53_errata_1(void) __UNUSED;
static bool nrf53_errata_2(void) __UNUSED;
static bool nrf53_errata_3(void) __UNUSED;
static bool nrf53_errata_4(void) __UNUSED;
static bool nrf53_errata_5(void) __UNUSED;
static bool nrf53_errata_6(void) __UNUSED;
static bool nrf53_errata_7(void) __UNUSED;
static bool nrf53_errata_8(void) __UNUSED;
static bool nrf53_errata_9(void) __UNUSED;
static bool nrf53_errata_10(void) __UNUSED;
static bool nrf53_errata_11(void) __UNUSED;
static bool nrf53_errata_12(void) __UNUSED;
static bool nrf53_errata_13(void) __UNUSED;
static bool nrf53_errata_14(void) __UNUSED;
static bool nrf53_errata_15(void) __UNUSED;
static bool nrf53_errata_16(void) __UNUSED;
static bool nrf53_errata_18(void) __UNUSED;
static bool nrf53_errata_19(void) __UNUSED;
static bool nrf53_errata_20(void) __UNUSED;
static bool nrf53_errata_21(void) __UNUSED;
static bool nrf53_errata_22(void) __UNUSED;
static bool nrf53_errata_23(void) __UNUSED;
static bool nrf53_errata_26(void) __UNUSED;
static bool nrf53_errata_27(void) __UNUSED;
static bool nrf53_errata_28(void) __UNUSED;
static bool nrf53_errata_29(void) __UNUSED;
static bool nrf53_errata_30(void) __UNUSED;
static bool nrf53_errata_31(void) __UNUSED;
static bool nrf53_errata_32(void) __UNUSED;
static bool nrf53_errata_33(void) __UNUSED;
static bool nrf53_errata_34(void) __UNUSED;
static bool nrf53_errata_36(void) __UNUSED;
static bool nrf53_errata_37(void) __UNUSED;
static bool nrf53_errata_42(void) __UNUSED;
static bool nrf53_errata_43(void) __UNUSED;
static bool nrf53_errata_44(void) __UNUSED;
static bool nrf53_errata_45(void) __UNUSED;
static bool nrf53_errata_46(void) __UNUSED;
static bool nrf53_errata_47(void) __UNUSED;
static bool nrf53_errata_49(void) __UNUSED;
static bool nrf53_errata_50(void) __UNUSED;
static bool nrf53_errata_51(void) __UNUSED;
static bool nrf53_errata_52(void) __UNUSED;
static bool nrf53_errata_53(void) __UNUSED;
static bool nrf53_errata_54(void) __UNUSED;
static bool nrf53_errata_55(void) __UNUSED;
static bool nrf53_errata_57(void) __UNUSED;
static bool nrf53_errata_58(void) __UNUSED;
static bool nrf53_errata_59(void) __UNUSED;
static bool nrf53_errata_62(void) __UNUSED;
static bool nrf53_errata_64(void) __UNUSED;
static bool nrf53_errata_65(void) __UNUSED;
static bool nrf53_errata_66(void) __UNUSED;
static bool nrf53_errata_67(void) __UNUSED;
static bool nrf53_errata_69(void) __UNUSED;
static bool nrf53_errata_70(void) __UNUSED;
static bool nrf53_errata_71(void) __UNUSED;
static bool nrf53_errata_72(void) __UNUSED;
static bool nrf53_errata_73(void) __UNUSED;
static bool nrf53_errata_74(void) __UNUSED;
static bool nrf53_errata_75(void) __UNUSED;
static bool nrf53_errata_76(void) __UNUSED;
static bool nrf53_errata_77(void) __UNUSED;
static bool nrf53_errata_79(void) __UNUSED;
static bool nrf53_errata_80(void) __UNUSED;
static bool nrf53_errata_81(void) __UNUSED;
static bool nrf53_errata_82(void) __UNUSED;
static bool nrf53_errata_83(void) __UNUSED;
static bool nrf53_errata_84(void) __UNUSED;
static bool nrf53_errata_85(void) __UNUSED;
static bool nrf53_errata_86(void) __UNUSED;
static bool nrf53_errata_87(void) __UNUSED;
static bool nrf53_errata_90(void) __UNUSED;
static bool nrf53_errata_91(void) __UNUSED;
static bool nrf53_errata_93(void) __UNUSED;
static bool nrf53_errata_95(void) __UNUSED;
static bool nrf53_errata_97(void) __UNUSED;
static bool nrf53_errata_103(void) __UNUSED;
static bool nrf53_errata_105(void) __UNUSED;
static bool nrf53_errata_106(void) __UNUSED;
static bool nrf53_errata_109(void) __UNUSED;
static bool nrf53_errata_110(void) __UNUSED;
static bool nrf53_errata_113(void) __UNUSED;
static bool nrf53_errata_114(void) __UNUSED;
static bool nrf53_errata_115(void) __UNUSED;
static bool nrf53_errata_116(void) __UNUSED;
static bool nrf53_errata_119(void) __UNUSED;

static bool nrf53_errata_1(void)
{
    #if defined (DISABLE_WORKAROUND_1)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_2(void)
{
    #if defined (DISABLE_WORKAROUND_2)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_3(void)
{
    #if defined (DISABLE_WORKAROUND_3)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_4(void)
{
    #if defined (DISABLE_WORKAROUND_4)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_5(void)
{
    #if defined (DISABLE_WORKAROUND_5)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_6(void)
{
    #if defined (DISABLE_WORKAROUND_6)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_7(void)
{
    #if defined (DISABLE_WORKAROUND_7)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_8(void)
{
    #if defined (DISABLE_WORKAROUND_8)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_9(void)
{
    #if defined (DISABLE_WORKAROUND_9)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_10(void)
{
    #if defined (DISABLE_WORKAROUND_10)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_11(void)
{
    #if defined (DISABLE_WORKAROUND_11)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_12(void)
{
    #if defined (DISABLE_WORKAROUND_12)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_13(void)
{
    #if defined (DISABLE_WORKAROUND_13)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_14(void)
{
    #if defined (DISABLE_WORKAROUND_14)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_15(void)
{
    #if defined (DISABLE_WORKAROUND_15)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_16(void)
{
    #if defined (DISABLE_WORKAROUND_16)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_18(void)
{
    #if defined (DISABLE_WORKAROUND_18)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_19(void)
{
    #if defined (DISABLE_WORKAROUND_19)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_20(void)
{
    #if defined (DISABLE_WORKAROUND_20)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_21(void)
{
    #if defined (DISABLE_WORKAROUND_21)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_22(void)
{
    #if defined (DISABLE_WORKAROUND_22)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_23(void)
{
    #if defined (DISABLE_WORKAROUND_23)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_26(void)
{
    #if defined (DISABLE_WORKAROUND_26)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_27(void)
{
    #if defined (DISABLE_WORKAROUND_27)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_28(void)
{
    #if defined (DISABLE_WORKAROUND_28)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_29(void)
{
    #if defined (DISABLE_WORKAROUND_29)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_30(void)
{
    #if defined (DISABLE_WORKAROUND_30)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_31(void)
{
    #if defined (DISABLE_WORKAROUND_31)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_32(void)
{
    #if defined (DISABLE_WORKAROUND_32)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_33(void)
{
    #if defined (DISABLE_WORKAROUND_33)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_34(void)
{
    #if defined (DISABLE_WORKAROUND_34)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_36(void)
{
    #if defined (DISABLE_WORKAROUND_36)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_37(void)
{
    #if defined (DISABLE_WORKAROUND_37)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_42(void)
{
    #if defined (DISABLE_WORKAROUND_42)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_43(void)
{
    #if defined (DISABLE_WORKAROUND_43)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_44(void)
{
    #if defined (DISABLE_WORKAROUND_44)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_45(void)
{
    #if defined (DISABLE_WORKAROUND_45)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_46(void)
{
    #if defined (DISABLE_WORKAROUND_46)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_47(void)
{
    #if defined (DISABLE_WORKAROUND_47)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_49(void)
{
    #if defined (DISABLE_WORKAROUND_49)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_50(void)
{
    #if defined (DISABLE_WORKAROUND_50)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_51(void)
{
    #if defined (DISABLE_WORKAROUND_51)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_52(void)
{
    #if defined (DISABLE_WORKAROUND_52)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_53(void)
{
    #if defined (DISABLE_WORKAROUND_53)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_54(void)
{
    #if defined (DISABLE_WORKAROUND_54)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_55(void)
{
    #if defined (DISABLE_WORKAROUND_55)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_57(void)
{
    #if defined (DISABLE_WORKAROUND_57)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_58(void)
{
    #if defined (DISABLE_WORKAROUND_58)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_59(void)
{
    #if defined (DISABLE_WORKAROUND_59)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_62(void)
{
    #if defined (DISABLE_WORKAROUND_62)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_64(void)
{
    #if defined (DISABLE_WORKAROUND_64)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_65(void)
{
    #if defined (DISABLE_WORKAROUND_65)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_66(void)
{
    #if defined (DISABLE_WORKAROUND_66)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_67(void)
{
    #if defined (DISABLE_WORKAROUND_67)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_69(void)
{
    #if defined (DISABLE_WORKAROUND_69)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_70(void)
{
    #if defined (DISABLE_WORKAROUND_70)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_71(void)
{
    #if defined (DISABLE_WORKAROUND_71)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_72(void)
{
    #if defined (DISABLE_WORKAROUND_72)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_73(void)
{
    #if defined (DISABLE_WORKAROUND_73)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_74(void)
{
    #if defined (DISABLE_WORKAROUND_74)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_75(void)
{
    #if defined (DISABLE_WORKAROUND_75)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_76(void)
{
    #if defined (DISABLE_WORKAROUND_76)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_77(void)
{
    #if defined (DISABLE_WORKAROUND_77)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_79(void)
{
    #if defined (DISABLE_WORKAROUND_79)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_80(void)
{
    #if defined (DISABLE_WORKAROUND_80)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_81(void)
{
    #if defined (DISABLE_WORKAROUND_81)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_82(void)
{
    #if defined (DISABLE_WORKAROUND_82)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_83(void)
{
    #if defined (DISABLE_WORKAROUND_83)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_84(void)
{
    #if defined (DISABLE_WORKAROUND_84)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_85(void)
{
    #if defined (DISABLE_WORKAROUND_85)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_86(void)
{
    #if defined (DISABLE_WORKAROUND_86)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_87(void)
{
    #if defined (DISABLE_WORKAROUND_87)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_90(void)
{
    #if defined (DISABLE_WORKAROUND_90)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_91(void)
{
    #if defined (DISABLE_WORKAROUND_91)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_93(void)
{
    #if defined (DISABLE_WORKAROUND_93)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_95(void)
{
    #if defined (DISABLE_WORKAROUND_95)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_97(void)
{
    #if defined (DISABLE_WORKAROUND_97)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #elif defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)\
             || defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_103(void)
{
    #if defined (DISABLE_WORKAROUND_103)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_105(void)
{
    #if defined (DISABLE_WORKAROUND_105)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_106(void)
{
    #if defined (DISABLE_WORKAROUND_106)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_109(void)
{
    #if defined (DISABLE_WORKAROUND_109)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_110(void)
{
    #if defined (DISABLE_WORKAROUND_110)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_113(void)
{
    #if defined (DISABLE_WORKAROUND_113)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_114(void)
{
    #if defined (DISABLE_WORKAROUND_114)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_115(void)
{
    #if defined (DISABLE_WORKAROUND_115)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_APPLICATION)
                uint32_t var1 = *(uint32_t *)0x00FF0130ul;
                uint32_t var2 = *(uint32_t *)0x00FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_APPLICATION)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_116(void)
{
    #if defined (DISABLE_WORKAROUND_116)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

static bool nrf53_errata_119(void)
{
    #if defined (DISABLE_WORKAROUND_119)
        return false;
    #elif !defined(NRF53_SERIES)
        return false;
    #else
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined(NRF_NETWORK)
                uint32_t var1 = *(uint32_t *)0x01FF0130ul;
                uint32_t var2 = *(uint32_t *)0x01FF0134ul;
            #endif
        #endif
        #if defined (NRF5340_XXAA) || defined (DEVELOP_IN_NRF5340)
            #if defined (NRF_NETWORK)
                if (var1 == 0x07)
                {
                    switch(var2)
                    {
                        case 0x02ul:
                            return true;
                        case 0x03ul:
                            return false;
                        default:
                            return false;
                    }
                }
            #endif
        #endif
        return false;
    #endif
}

#endif /* NRF53_ERRATAS_H */
