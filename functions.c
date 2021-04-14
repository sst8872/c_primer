//
// Created by song on 4/14/21.
//
#include "functions.h"

void init_ints(int m, int n, int nums[m][n]) {
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            nums[i][j] = -1;
}

void double_ints(int m, int n, int nums[m][n]) {
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            nums[i][j] *= 2;
}

void show_ints(int m, int n, int nums[m][n]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", nums[i][j]);
        printf("\n");
    }
}

void sum_arrs(int m, double sum[m], const double source1[m], const double source2[m]) {
    int i;

    for (i = 0; i < m; i++)
        sum[i] = source1[i] + source2[i];
    printf("\nSum of array completed!");
}

void copy_vla(int m, int n, double arr[m][n], double target[m][n]) {
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            target[i][j] = arr[i][j];
}

void show_vla(int m, int n, double arr[m][n]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("arr[%d][%d] = %.1lf ", i, j, arr[m][n]);
        printf("\n");
    }
}

void init_array(int m, int n,  double arr[m][n]) {
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            arr[i][j] = 1;
}

void copy(const double source[], double target[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        target[i] = source[i];
    }
}

void reverse(double arr[], int n) {
    int begin = 0, end = (n-1);
    for (begin, end; begin < end; begin++, end--) {
        swap(arr, begin, end);
    }
}

void swap(double arr[], int before, int after) {
    double temp;
    temp = arr[before];
    arr[before] = arr[after];
    arr[after] = temp;
}

double max(const double arr[], int n) {
    double max = DBL_MIN;
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

double min(const double arr[], int n) {
    double min = DBL_MAX;
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        printf("%.1lf\n", min);
    }
    return min;
}

double diff(const double arr[], int n) {
    return (max(arr, n) + min(arr, n));
}

