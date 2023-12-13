#include <stdio.h>

int main(void)
{
    short price[] = {0, 0x1 << 7, 0};
    printf("*price          \t= %d\n", *price);
    printf("price           \t= %p\n", price);
    printf("*(price + 1)    \t= %d\n", *(price + 1));
    printf("price + 1       \t= %p\n", price + 1);
    long ptr_price = (long) price;
    printf("*ptr_price      \t= %d\n", *(short *) ptr_price);
    printf("ptr_price       \t= %p\n", (short *) ptr_price);
    printf("*(ptr_price + 1)\t= %d\n", *(short *)(ptr_price + 1));
    printf("ptr_price + 1   \t= %p\n", (short *)(ptr_price + 1));
    printf("short size: %lu\n", sizeof(short));
    return 0;
}
