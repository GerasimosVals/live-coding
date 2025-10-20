/* File: picomp.c */

#include <stdio.h>
#include <math.h>

int main () {
    int i;
    double sum, current, pi;
    i = 1;
    sum = 0.0;
    do {
      current =1/(((double) i)*((double) i));
      sum = sum+current;
      i++;
    } while (current > 1.0e-15);
    pi = sqrt(6*sum);
    printf("Summed %d terms, pi is %.8f\n", i-1, pi);
    return 0;
}
