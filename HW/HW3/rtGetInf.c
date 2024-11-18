/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 * File: rtGetInf.c
 *
 * MATLAB Coder version            : 24.2
 * C/C++ source code generated on  : 13-Nov-2024 13:14:06
 */

/*
 * Abstract:
 *       MATLAB for code generation function to initialize non-finite, Inf and
 * MinusInf
 */
/* Include Files */
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/*
 * Function: rtGetInf
 * ================================================================== Abstract:
 *  Initialize rtInf needed by the generated code.
 */
real_T rtGetInf(void)
{
  return rtInf;
}

/*
 * Function: rtGetInfF
 * ================================================================= Abstract:
 *  Initialize rtInfF needed by the generated code.
 */
real32_T rtGetInfF(void)
{
  return rtInfF;
}

/*
 * Function: rtGetMinusInf
 * ============================================================= Abstract:
 *  Initialize rtMinusInf needed by the generated code.
 */
real_T rtGetMinusInf(void)
{
  return rtMinusInf;
}

/*
 * Function: rtGetMinusInfF
 * ============================================================ Abstract:
 *  Initialize rtMinusInfF needed by the generated code.
 */
real32_T rtGetMinusInfF(void)
{
  return rtMinusInfF;
}

/*
 * File trailer for rtGetInf.c
 *
 * [EOF]
 */
