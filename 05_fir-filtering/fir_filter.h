/* ========================================================================
 * fir_filters.h
 *
 * 
 * Version: 001
 * Date:    2017/04/03
 * Author:  Rodrigo Gonzalez <rodralez@frm.utn.edu.ar>
 * URL:     https://github.com/rodralez/control
 *
 * ===================================================================== */
 
#ifndef FIR_FILTERS_H
#define FIR_FILTERS_H

typedef short int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned int uint32_t;

void fir_filter_float(float *input, uint32_t N, float *output);
void fir_filter_fixed(int16_t *input, uint32_t N, int16_t *output);

#endif
