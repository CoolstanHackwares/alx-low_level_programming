#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stddef.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_help(int *array, int value, size_t lo, size_t hi);
void print_array(int *array, size_t lo, size_t hi);
int jump_search(int *array, size_t size, int value);

#endif
