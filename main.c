#include <stdio.h>
#include <float.h>
#include "functions.h"


int main(void) {
    double nums[] = { -1.3, -3.7, 7, 6.5, 2, 4, 5.5, 9 };

    int elements = sizeof(nums) / sizeof(double);
    int i;

    reverse(nums, elements);
    for (i = 0; i < elements; i++)
        printf("%.1lf, ", nums[i]);

    return 0;
}

