#include <stdio.h>

void echoInteger(int integer) {
    /*parse integer*/
    if (integer == 0) {
        printf("%d\n", integer);
        return;
    } else if (integer < 0) {
        return;
    }
    

    int scale = 0;
    for (int i = 1; integer / i > 0; i *= 10) {
        scale = i;
    }
    int remainder = integer;
    while (scale > 0)
    {
        printf("%d", remainder / scale);
        remainder %= scale;
        scale /= 10;
        if (scale > 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    for (int integer = 0; integer < 19; integer++) {
        echoInteger(integer);
    }
    return 0;
}
