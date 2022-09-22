//
// Created by Andres on 22/9/2022.
//

#include "section2.h"
#include <stdlib.h>

void rotateArray(int *array, int arraySize, int rotations) {
    for (int i = 0; i < rotations; ++i) {
        rotate(array, arraySize);
    }
}

void rotate(int *array, int size) {
    int last = array[size - 1];
    for (int i = size - 1; i > 0; --i) {
        array[i] = array[i - 1];
    }
    array[0] = last;
}

int findNotPaired(int *array, const int size) {

    if (size % 2 == 0)
        return -1;

    for (int i = 0; i < size; ++i) {
        int count = 0;
        for (int j = 0; j < size; ++j) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        if (count % 2 != 0) {
            return array[i];
        }
    }
    return -1;
}

