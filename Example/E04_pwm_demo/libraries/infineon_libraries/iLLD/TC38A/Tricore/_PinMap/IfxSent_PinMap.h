/**
 * \file IfxSent_PinMap.h
 * \brief SENT I/O map
 * \ingroup IfxLld_Sent
 *
 * \version iLLD_1_0_1_11_0
 * \copyright Copyright (c) 2017 Infineon Technologies AG. All rights reserved.
 *
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Use of this file is subject to the terms of use agreed between (i) you or 
 * the company in which ordinary course of business you are acting and (ii) 
 * Infineon Technologies AG or its licensees. If and as long as no such 
 * terms of use are agreed, use of this file is subject to following:


 * Boost Software License - Version 1.0 - August 17th, 2003

 * Permission is hereby granted, free of charge, to any person or 
 * organization obtaining a copy of the software and accompanying 
 * documentation covered by this license (the "Software") to use, reproduce,
 * display, distribute, execute, and transmit the Software, and to prepare
 * derivative works of the Software, and to permit third-parties to whom the 
 * Software is furnished to do so, all subject to the following:

 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE 
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.

 *
 * \defgroup IfxLld_Sent_pinmap SENT Pin Mapping
 * \ingroup IfxLld_Sent
 */

#ifndef IFXSENT_PINMAP_H
#define IFXSENT_PINMAP_H

#include <IfxSent_reg.h>
#include <_Impl/IfxSent_cfg.h>
#include <Port/Std/IfxPort.h>

/** \addtogroup IfxLld_Sent_pinmap
 * \{ */

/** \brief SENT pin mapping structure */
typedef const struct
{
    Ifx_SENT*         module;    /**< \brief Base address */
    IfxSent_ChannelId channelId; /**< \brief Channel ID */
    IfxPort_Pin       pin;       /**< \brief Port pin */
    Ifx_RxSel         select;    /**< \brief Input multiplexer value */
} IfxSent_Sent_In;

/** \brief SPC pin mapping structure */
typedef const struct
{
    Ifx_SENT*         module;    /**< \brief Base address */
    IfxSent_ChannelId channelId; /**< \brief Channel ID */
    IfxPort_Pin       pin;       /**< \brief Port pin */
    IfxPort_OutputIdx select;    /**< \brief Port control code */
} IfxSent_Spc_Out;

IFX_EXTERN IfxSent_Sent_In IfxSent_SENT0A_P40_0_IN;  /**< \brief Receive input channel 0 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT0B_P00_1_IN;  /**< \brief Receive input channel 0 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT0C_P02_8_IN;  /**< \brief Receive input channel 0 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT10A_P40_10_IN;  /**< \brief Receive input channel 10 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT10B_P00_11_IN;  /**< \brief Receive input channel 10 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT10C_P32_5_IN;  /**< \brief Receive input channel 10 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT10D_P15_2_IN;  /**< \brief Receive input channel 10 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT11A_P40_11_IN;  /**< \brief Receive input channel 11 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT11B_P00_12_IN;  /**< \brief Receive input channel 11 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT11C_P32_6_IN;  /**< \brief Receive input channel 11 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT11D_P15_4_IN;  /**< \brief Receive input channel 11 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT12A_P40_12_IN;  /**< \brief Receive input channel 12 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT12B_P02_4_IN;  /**< \brief Receive input channel 12 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT12C_P32_7_IN;  /**< \brief Receive input channel 12 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT13A_P40_13_IN;  /**< \brief Receive input channel 13 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT13B_P02_3_IN;  /**< \brief Receive input channel 13 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT13C_P33_0_IN;  /**< \brief Receive input channel 13 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT14A_P40_14_IN;  /**< \brief Receive input channel 14 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT14B_P02_2_IN;  /**< \brief Receive input channel 14 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT14C_P33_7_IN;  /**< \brief Receive input channel 14 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT15A_P40_15_IN;  /**< \brief Receive input channel 15 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT15B_P01_1_IN;  /**< \brief Receive input channel 15 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT15C_P10_9_IN;  /**< \brief Receive input channel 15 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT16A_P41_0_IN;  /**< \brief Receive input channel 16 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT16B_P01_9_IN;  /**< \brief Receive input channel 16 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT16C_P10_10_IN;  /**< \brief Receive input channel 16 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT17A_P41_1_IN;  /**< \brief Receive input channel 17 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT17B_P01_8_IN;  /**< \brief Receive input channel 17 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT17C_P10_14_IN;  /**< \brief Receive input channel 17 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT17D_P14_0_IN;  /**< \brief Receive input channel 17 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT18A_P41_2_IN;  /**< \brief Receive input channel 18 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT18B_P01_10_IN;  /**< \brief Receive input channel 18 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT18C_P10_13_IN;  /**< \brief Receive input channel 18 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT18D_P14_1_IN;  /**< \brief Receive input channel 18 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT19A_P41_3_IN;  /**< \brief Receive input channel 19 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT19B_P01_11_IN;  /**< \brief Receive input channel 19 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT19C_P10_11_IN;  /**< \brief Receive input channel 19 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT1A_P40_1_IN;  /**< \brief Receive input channel 1 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT1B_P00_2_IN;  /**< \brief Receive input channel 1 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT1C_P02_7_IN;  /**< \brief Receive input channel 1 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT20A_P41_4_IN;  /**< \brief Receive input channel 20 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT20B_P02_9_IN;  /**< \brief Receive input channel 20 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT20C_P31_8_IN;  /**< \brief Receive input channel 20 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT21A_P41_5_IN;  /**< \brief Receive input channel 21 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT21B_P02_10_IN;  /**< \brief Receive input channel 21 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT21C_P31_9_IN;  /**< \brief Receive input channel 21 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT22A_P41_6_IN;  /**< \brief Receive input channel 22 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT22B_P02_11_IN;  /**< \brief Receive input channel 22 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT22C_P31_10_IN;  /**< \brief Receive input channel 22 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT23A_P41_7_IN;  /**< \brief Receive input channel 23 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT23B_P02_12_IN;  /**< \brief Receive input channel 23 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT23C_P31_11_IN;  /**< \brief Receive input channel 23 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT24A_P41_8_IN;  /**< \brief Receive input channel 24 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT24B_P02_13_IN;  /**< \brief Receive input channel 24 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT24C_P31_12_IN;  /**< \brief Receive input channel 24 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT2A_P40_2_IN;  /**< \brief Receive input channel 2 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT2B_P00_3_IN;  /**< \brief Receive input channel 2 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT2C_P02_6_IN;  /**< \brief Receive input channel 2 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT3A_P40_3_IN;  /**< \brief Receive input channel 3 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT3B_P00_4_IN;  /**< \brief Receive input channel 3 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT3C_P02_5_IN;  /**< \brief Receive input channel 3 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT4A_P40_4_IN;  /**< \brief Receive input channel 4 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT4B_P00_5_IN;  /**< \brief Receive input channel 4 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT4C_P33_6_IN;  /**< \brief Receive input channel 4 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT5A_P40_5_IN;  /**< \brief Receive input channel 5 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT5B_P00_6_IN;  /**< \brief Receive input channel 5 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT5C_P33_5_IN;  /**< \brief Receive input channel 5 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT6A_P40_6_IN;  /**< \brief Receive input channel 6 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT6B_P00_7_IN;  /**< \brief Receive input channel 6 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT6C_P33_4_IN;  /**< \brief Receive input channel 6 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT7A_P40_7_IN;  /**< \brief Receive input channel 7 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT7B_P00_8_IN;  /**< \brief Receive input channel 7 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT7C_P33_3_IN;  /**< \brief Receive input channel 7 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT8A_P40_8_IN;  /**< \brief Receive input channel 8 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT8B_P00_9_IN;  /**< \brief Receive input channel 8 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT8C_P33_2_IN;  /**< \brief Receive input channel 8 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT9A_P40_9_IN;  /**< \brief Receive input channel 9 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT9B_P00_10_IN;  /**< \brief Receive input channel 9 */
IFX_EXTERN IfxSent_Sent_In IfxSent_SENT9C_P33_1_IN;  /**< \brief Receive input channel 9 */
IFX_EXTERN IfxSent_Spc_Out IfxSent_SPC0_P00_1_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxSent_Spc_Out IfxSent_SPC1_P02_7_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxSent_Spc_Out IfxSent_SPC2_P00_3_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxSent_Spc_Out IfxSent_SPC3_P00_4_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxSent_Spc_Out IfxSent_SPC4_P00_5_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxSent_Spc_Out IfxSent_SPC5_P00_6_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxSent_Spc_Out IfxSent_SPC6_P00_7_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxSent_Spc_Out IfxSent_SPC7_P00_8_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxSent_Spc_Out IfxSent_SPC8_P00_9_OUT;  /**< \brief Transmit output */
IFX_EXTERN IfxSent_Spc_Out IfxSent_SPC9_P00_10_OUT;  /**< \brief Transmit output */

/** \brief Table dimensions */
#define IFXSENT_PINMAP_NUM_MODULES 1
#define IFXSENT_PINMAP_NUM_CHANNELS 25
#define IFXSENT_PINMAP_SENT_IN_NUM_ITEMS 4
#define IFXSENT_PINMAP_SPC_OUT_NUM_ITEMS 1


/** \brief IfxSent_Sent_In table */
IFX_EXTERN const IfxSent_Sent_In *IfxSent_Sent_In_pinTable[IFXSENT_PINMAP_NUM_MODULES][IFXSENT_PINMAP_NUM_CHANNELS][IFXSENT_PINMAP_SENT_IN_NUM_ITEMS];

/** \brief IfxSent_Spc_Out table */
IFX_EXTERN const IfxSent_Spc_Out *IfxSent_Spc_Out_pinTable[IFXSENT_PINMAP_NUM_MODULES][IFXSENT_PINMAP_NUM_CHANNELS][IFXSENT_PINMAP_SPC_OUT_NUM_ITEMS];

/** \} */

#endif /* IFXSENT_PINMAP_H */
