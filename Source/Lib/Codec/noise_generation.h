/*
* Copyright(c) 2019 Intel Corporation
*
* This source code is subject to the terms of the BSD 2 Clause License and
* the Alliance for Open Media Patent License 1.0. If the BSD 2 Clause License
* was not distributed with this source code in the LICENSE file, you can
* obtain it at https://www.aomedia.org/license/software-license. If the Alliance for Open
* Media Patent License 1.0 was not distributed with this source code in the
* PATENTS file, you can obtain it at https://www.aomedia.org/license/patent-license.
*/

#ifndef EbNoiseGeneration_h
#define EbNoiseGeneration_h

#include "definitions.h"
#include "EbSvtAv1Enc.h"

typedef struct NoiseCoeffTable {
    int32_t lag;
    int32_t shift;

    int32_t cY[24];
    int32_t cCb[25];
    int32_t cCr[25];
} NoiseCoeffTable;

EbColorRange find_color_range(EbSvtAv1EncConfiguration* config);

EbErrorType svt_av1_generate_noise_table(EbSvtAv1EncConfiguration* config);

#endif // EbPhotonNoiseTable_h
