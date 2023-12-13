#include <stdio.h>

const int HOUR_SCALE = 60;

int main()
{
    int hour1, minute1,
        hour2, minute2;
    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);
    int res = hour1*HOUR_SCALE + minute1 - (hour2*HOUR_SCALE + minute2);
    printf("%d小时%d分钟\n", res / HOUR_SCALE, res % HOUR_SCALE);
}