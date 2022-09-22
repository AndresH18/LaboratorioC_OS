//
// Created by Andres on 22/9/2022.
//
#include <stdlib.h>
#include <string.h>

#include "section1.h"

void intToBin(int n, char *binary, int binarySize) {
    int pos = binarySize - 1;

    while (n > 0) {
        binary[pos] = n % 2 ? '1' : '0';
        n /= 2;
        pos--;
    }
}

int calculateGap(const char *bin, int binSize) {
    int start = 0, gap = 0, tmp_gap = 0;
    for (int i = 0; i < binSize; ++i) {
        if (bin[i] == '1') {
            if (start++) {
                gap = gap > tmp_gap ? gap : tmp_gap;
                tmp_gap = 0;
            }
        } else if (start)
            ++tmp_gap;
    }

    return gap;
}

int binaryGap(int number) {
    int i, n, bin_size = (sizeof(int) * 8);
    char *bin = (char *) malloc(bin_size);
    if (bin == NULL) {
        exit(0);
    }
    memset(bin, '0', bin_size);

    intToBin(number, bin, bin_size);
    int gap = calculateGap(bin, bin_size);
    free(bin);

    return gap;
}
