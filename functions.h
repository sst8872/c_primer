//
// Created by song on 4/14/21.
//

#ifndef PRIMER_FUNCTIONS_H
#define PRIMER_FUNCTIONS_H

#include <float.h>
#include <stdio.h>

void init_ints(int m, int n, int nums[m][n]);

void double_ints(int m, int n, int nums[m][n]);

void show_ints(int m, int n, int nums[m][n]);

void sum_arrs(int m, double sum[m], const double source1[m], const double source2[m]);
void copy(const double source[], double target[], int n);
double max(const double arr[], int n);
double min(const double arr[], int n);
double diff(const double arr[], int n);
void reverse(double arr[], int n);
void swap(double arr[], int before, int after);
void init_array(int m, int n,  double arr[m][n]);
void copy_vla(int m, int n, double arr[m][n], double target[m][n]);
void show_vla(int m, int n, double arr[m][n]);



/* question 7. initialize tow-dimensional array */


#endif //PRIMER_FUNCTIONS_H
