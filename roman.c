//
// Created by andre on 17/9/2022.
//

/*
 * I    1
 * V    5
 * X    10
 * L    50
 * C    100
 * D    500
 * M    1000
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "roman.h"

char *numberToRoman(int number) {
    const int values[13] = {RV_M, RV_CM, RV_D, RV_CD,
                            RV_C, RV_XC, RV_L, RV_XL,
                            RV_X, RV_IX, RV_V, RV_IV,
                            RV_I};
    const char letters[13][2] = {R_M, R_CM, R_D, R_CD,
                                 R_C, R_XC, R_L, R_XL,
                                 R_X, R_IX, R_V, R_IV,
                                 R_I};

    // allocate char[] pointer
    char *word = calloc(1, sizeof(char));
    // array's size
    int size = 1;

    for (int i = 0; i < (sizeof(values) / sizeof(values[0])); ++i) {
        while (number >= values[i]) {
            number -= values[i];

            /* string append letters[i] */
            // verify is 1 or 2 characters will be added
            switch (i) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 9:
                case 11:
                    size += 2;
                default:
                    size++;
            }
            // reallocate pointer
            realloc(word, size * sizeof(char));
            // append letter[i]
            strcat(word, letters[i]);
        }
    }
    // add space for null terminator character
    realloc(word, ++size * sizeof(char));
    // add null terminator
    word[size - 1] = '\0';

    // return pointer
    return word;
}