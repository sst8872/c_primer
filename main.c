#include <stdio.h>
#include "functions.h"


int main(void) {
    int nums[3][5];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++)
            scanf("%dn", &nums[i][j]);
        printf("\n");
    }
    show_ints(3, 5, nums);

    return 0;
}

