#include <stdio.h>

int main() {
    int target = 2;
    int cnt = 0;
    int isBreaked = 0;
    for (int five = 0; five <= target * 2; five++)
    {
        for (int two = 0; two <= target * 5; two++)
        {
            for (int one = 0; one <= target * 10; one++)
            {
                if (five * 5 + two * 2 + one * 1 == target * 10) {
                    printf("%d个5角\t + %d个2角\t + %d个一角\t = %d元\n",
                            five, two, one, target);
                    cnt++;
                    isBreaked = 1;
                    break;
                    // goto label;
                    // return 0;
                }
            }
            if (isBreaked)
            {
                break;
            }
        }
        if (isBreaked)
        {
            break;
        }
    }
    // label:
    printf("%d\n", cnt);
    return 0;
}
