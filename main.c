#include <stdio.h>
#include <stdlib.h>
#include "roman.h"
#include "section1.h"
#include "section2.h"
#include "section3.h"

void calculadora();

void ejercicios();

void convertidorRomano();

int main() {

    int option = 0;
    printf("Bienvenido al Laboratorio de C!\n");

    do {
        printf("\nEscoge una de las siguientes opciones:\n"
               "1 Ejercicios Codility\n"
               "2 Calculadora\n"
               "3 Convertor a Numero Romano\n"
               "0 Salir\n"
               "> ");
        fflush(stdout);

        scanf_s("%d", &option);
        switch (option) {
            case 1:
                ejercicios();
                break;
            case 2:
                calculadora();
                break;
            case 3:
                convertidorRomano();
                break;
            case 0:
                option = 0;
                break;
            default:
                break;
        }
    } while (option);

    printf("Gracias!!!!\n");
    fflush(stdout);
    system("pause");
    exit(0);

//    // create pointer for the roman word
//    char *pWord;
//    // convert number to roman, get pointer
//    pWord = numberToRoman(10);
//    // print char array
//    printf("%s", pWord);
//    // deallocate memory
//    free(pWord);

//    printf("%d", binaryGap(529));

//    int a[] = {3,1,2,4,3};
//    int i = tapeEquilibrium(a, 5);
//    printf("%d", i);
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

void calculadora() {}

void convertidorRomano() {
    int number;

    printf("\nIngrese un numero para convertir a romano\n"
           "> ");
    fflush(stdout);
    scanf_s("%d", &number);
    char *romano = numberToRoman(number);
    printf("Romano: %s", romano);
    free(romano);

}


void ejercicios() {
    int option;
    do {
        printf("\nIngrese el numero de una seccion:\n"
               "1 Iterations\n"
               "2 Arrays\n"
               "3 Time Complexity\n"
               "0 para regresar al menu anterior\n"
               "> ");
        fflush(stdout);
        scanf_s("%d", &option);

        switch (option) {
            case 1:
                printf("\nIngrese un integer para encontrar la distancia binaria:\n"
                       "> ");
                fflush(stdout);
                int number = 0;
                scanf_s("%d", &number);
                number = binaryGap(number);
                printf("La distancia binaria es %d\n", number);
                fflush(stdout);
                break;
            case 2:
                int option2;
                do {
                    printf("\nIngrese el numero de la opcion que quiere realizar:\n"
                           "1 Rotar un vector\n"
                           "2 Encontrar elemento sin pareja\n"
                           "0 regresar al menu anterior\n"
                           "> ");
                    fflush(stdout);

                    scanf_s("%d", &option2);
//                if (option2 != 0) {
                    if (option2) {
                        printf("Ingrese el numero de elementos que tiene el vector\n"
                               "> ");
                        fflush(stdout);
                        int size;
                        scanf_s("%d", &size);
                        int *array = calloc(size, sizeof(int));
                        printf("Ingrese los elementos del vector (size=%d)\n", size);
                        fflush(stdout);

                        for (int i = 0; i < size; ++i) {
                            printf("%d> ", i + 1);
                            fflush(stdout);
                            scanf_s("%d", array + i);
                        }
                        switch (option2) {
                            // rotar vector
                            case 1:
                                printf("Ingrese el numero de rotaciones\n"
                                       "> ");
                                fflush(stdout);
                                int rot;
                                scanf_s("%d", &rot);
                                rotateArray(array, size, rot);
                                printf("{");
                                for (int i = 0; i < size; ++i) {
                                    if (i != size - 1) {
                                        printf("%d,", array[i]);
                                    } else {
                                        printf("%d", array[i]);
                                    }
                                }
                                printf("}\n\n");
                                fflush(stdout);
                                break;
                            case 2:
                                // encontrar elemento sin pareja
                                printf("El elemento sin pareja es %d\n", findNotPaired(array, size));
                                break;
                            default:
                                break;
                        }
                        free(array);
                    }
                } while (option2);
                break;
            case 3:
                int option3;
                do {
                    printf("\nIngrese el numero de la opcion que desea realizar:\n"
                           "1 Frog Jump\n"
                           "2 Find the Missing number in the array.\n"
                           "3 Tape Equilibrium\n"
                           "0 regresar al menu anterior\n"
                           "> ");
                    fflush(stdout);
                    scanf_s("%d", &option3);

                    switch (option3) {
                        case 1:
                            int x, y, d;
                            printf("\nIngrese la coordenada inicial\n"
                                   "> ");
                            fflush(stdout);
                            scanf_s("%d", &x);
                            printf("Ingrese la coordenada final (debe ser mayor a %d)\n"
                                   "> ", x);
                            fflush(stdout);
                            scanf_s("%d", &y);
                            printf("Ingrese la distancia de Salto (debe ser positiva)\n"
                                   "> ");
                            fflush(stdout);
                            scanf_s("%d", &d);

                            printf("El numero de saltos para llegar del punto %d hasta al menos %d es %d\n",
                                   x, y, frogJump(x, y, d));
                            break;
                        case 2:
                        case 3:
                            printf("\nEsta actividad no es posible hacerla, debido a que puede no cumplir las reglas\n");
                            break;
                        case 0:
                            option3 = 0;
                            break;
                        default:
                            break;
                    }
                } while (option3);
                break;
            case 0:
                option = 0;
                break;
        }
    } while (option);
}

