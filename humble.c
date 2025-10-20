/* File: humble.c */
//Finds all humble numbers in a given range
//A number is humble if it doesn't have any prime factors different from 2.3.5.7

#include <stdio.h>
#define MINNUM 10
#define MAXNUM 1000

int main() {
    int num, temp;
    for (num = MINNUM ; num <= MAXNUM ; num++) {
        temp = num;
        while (temp % 2 == 0) {
              temp /= 2;
       }
       while (temp % 3 == 0) {
             temp /= 3;
       }
       while (temp % 5 == 0) {
             temp /= 5;
       }
       while (temp % 7 == 0) {
             temp /= 7;
       }
       if (temp ==1) {
          printf("%d is a humble humber\n", num);
       }
    }
    return 0;
}
