

#include <stdio.h>
#include <stdlib.h>
#include "roman.h"

int main() {

    // create pointer for the roman word
    char *pWord;
    // convert number to roman, get pointer
    pWord = numberToRoman(10);
    // print char array
    printf("%s", pWord);
    // deallocate memory
    free(pWord);

    return 0;
}

int helloWorld() {
    printf("Hello, World!\n");

    char *word = calloc(6, sizeof(char));
//    *word = 49; // ascii 49 => 1
    word[0] = 'H';
    word[1] = 'E';
    word[2] = 'L';
    word[3] = 'L';
    word[4] = 'O';
    word[5] = '\0';

    printf("%s\n", word);
    for (int i = 0; i <= sizeof word; ++i) {
        printf("%c\n", word[i]);
    }

    free(word);

    return 0;
}
