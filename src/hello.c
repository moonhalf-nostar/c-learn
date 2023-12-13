#include <stdio.h>

int main()
{
    int amount = 100;
    printf("金额：");
    int price = 0;
    scanf("%d", &price);
    printf("票面：");
    scanf("%d", &amount);
    int change = amount - price;
    printf("找零 %d 元\n", change);
}