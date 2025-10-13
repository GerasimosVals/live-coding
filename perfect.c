/* File: perfect.c */
// Find all perfect numbers
#include <stdio.h>
int main() {
    int num, maxnum = 10000, divisor, sum;
    for (num = 2 ; num <= maxnum ; num++) {
        sum = 1; // Initialize sum of proper divisors of num
        for (divisor = 2 ; divisor * divisor < num ; divisor++) { // Check all candidate divisors on [1 (sqrt(num)]
            if (num % divisor == 0) {
                sum += divisor + num / divisor;
            }
        }
        if (divisor * divisor == num) {
           sum += divisor;
        }
        if (sum == num) {
           printf("%d is a perfect number\n", num);
        }
    }
    return 0;
}
