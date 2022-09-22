//
// Created by Andres on 22/9/2022.
//

#include "section3.h"
#include <stdlib.h>

int frogJump(const int x, const int y, const int d) {
    if (x > y || d <= 0) {
        return -1;
    }
    int pos = x, count = 0;
    while (pos < y) {
        pos += d;
        count++;
    }

    return count;
}

int missingNumberArray(const int *array, const int size) {
    // since elements range is (1, size+1)
    int n = size + 1;
    // the sum of all integers from 1 to n is = n*(n+1)/2
    int sum = n * (n + 1) / 2;
    // subtract all elements in array, the result is the missing number
    for (int i = 0; i < size; ++i) {
        sum -= array[i];
    }
    return sum;
}

int tapeEquilibrium(const int *array, const int size) {
    if (size < 2) {
        return -1;
    } else if (size == 3) {
        return 2;
    }
    int sum, minDif = 0;
    for (int p = 1; p < size; ++p) {
        sum = 0;
        for (int i = 0; i < size; ++i) {
            if (i < p) {
                sum += array[i];
            } else {
                sum -= array[i];
            }
        }
        if (sum < abs(minDif)) {
            minDif = abs(sum);
        }
    }
    return minDif;
}

/*
 n = 2
 { , } i =(1, n+1=3)
 */
