#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 2;
    // int* nums = malloc(size * sizeof(int));
    int nums[size];
    nums[0] = 0;
    nums[1] = 213;
    for (int i=0; i < size; i++)
    {
        printf("%d\n", nums[i]);
    }
    return 0;
}