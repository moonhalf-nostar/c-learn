#include <stdio.h>

int main()
{
    printf("请输入一个三位整数\n");
    int num = 0;
    scanf("%d", &num);
    int num_reverse = num / 100
            + (num % 100) / 10 * 10
            + (num % 10) * 100;
    printf("%d\n", num_reverse);
    return 0;
}