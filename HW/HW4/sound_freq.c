/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 * File: sound_freq.c
 *
 * MATLAB Coder version            : 24.2
 * C/C++ source code generated on  : 13-Nov-2024 13:14:06
 */

/* Include Files */
#include "sound_freq.h"
#include "FFTImplementationCallback.h"
#include "abs.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stdio.h>
#include <time.h>

/* Function Definitions */
/*
 * Arguments    : const double X[4096]
 *                double spectrum[2048]
 * Return Type  : void
 */
void sound_freq(const double X[4096], double spectrum[2048])
{
  const double Fs = 44100.0;  // Define sampling rate in Hz
  creal_T yCol[4096];
  double dv[4096];
  c_FFTImplementationCallback_doH(X, yCol);
  b_abs(yCol, dv);
  memcpy(&spectrum[0], &dv[0], 2048U * sizeof(double));

  // Find top 3 maximum values and their indices in spectrum
  double max1 = 0, max2 = 0, max3 = 0;
  int index1 = 0, index2 = 0, index3 = 0;

  for (int i = 0; i < 2048; i++) {
    if (spectrum[i] > max1) {
      max3 = max2;
      index3 = index2;
      max2 = max1;
      index2 = index1;
      max1 = spectrum[i];
      index1 = i;
    } else if (spectrum[i] > max2) {
      max3 = max2;
      index3 = index2;
      max2 = spectrum[i];
      index2 = i;
    } else if (spectrum[i] > max3) {
      max3 = spectrum[i];
      index3 = i;
    }
  }

  void delay(float number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

  // Convert indices to frequencies in Hz
  double freq1 = (Fs / 4096) * index1;
  double freq2 = (Fs / 4096) * index2;
  double freq3 = (Fs / 4096) * index3;

  if (freq1 >= 1108){
    if(freq2 >= 861 && freq3 >= 872){
      printf("*");
    }
    else if(freq2 >= 784 && freq3 >= 774){
      printf("7");
    }
    else if(freq2 >= 709 && freq3 >= 698){
      printf("4");
    }
    else if(freq2 >= 634 && freq3 >= 644){
      printf("1");
    }
    fflush(stdout); // Flush the output buffer
  }

}

/*
 * File trailer for sound_freq.c
 *
 * [EOF]
 */
