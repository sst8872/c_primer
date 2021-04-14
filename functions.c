//
// Created by song on 4/14/21.
//
#include "functions.h"

double reverse(double arr[], int n) {
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

