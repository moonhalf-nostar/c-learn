#include "stdio.h"

int main(void)
{
    printf("char size: %d\n", sizeof(char));
    printf("short size: %d\n", sizeof(short));
    printf("int size: %d\n", sizeof(int));
    printf("long size: %d\n", sizeof(long));
    printf("long long size: %d\n", sizeof(long long));
    printf("float size: %lu bytes\n", sizeof(float));
    printf("double size: %lu bytes\n", sizeof(double));
    printf("long double size: %lu bytes\n", sizeof(long double));
    printf("char* size: %d\n", sizeof(char*));
    printf("int* size: %d\n", sizeof(int*));
    printf("double* size: %lu bytes\n", sizeof(double*));
    printf("long double* size: %lu bytes\n", sizeof(long double*));
    return 0;
}