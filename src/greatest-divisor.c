#include <stdio.h>

int greatestCommonDivisor(int num1, int num2) {
    while (num2) {
        int rest = num1 % num2;
        num1 = num2;
        num2 = rest;
    } 
    return num1;
}

int main() {
    int num1 = 12;
    int num2 = 18;
    int gcd = greatestCommonDivisor(num1, num2);
    printf("max common divisor of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}
