#include <stdio.h>
#include <stdlib.h>
#include "algebra.h"
#include "geometria.h"
#include "roman.h"
#include "section1.h"
#include "section2.h"
#include "section3.h"

void calculadora();

void ejercicios();

void convertidorRomano();

void area();

int main() {

    int option = 1;
    printf("Bienvenido al Laboratorio de C!\n");

    do {
        printf("\nEscoge una de las siguientes opciones:\n"
               "1 Ejercicios Codility\n"
               "2 Calculadora\n"
               "3 Convertor a Numero Romano\n"
               "4 Geometria\n"
               "0 Salir\n"
               "> ");
        fflush(stdout);

        scanf_s("%d", &option);
        fflush(stdin);
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
            case 4:
                area();
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

void calculadora() {
    int option;
    printf("\n..........Es enserio?...Calculadora?..........\n"); // glorified calculator

    do {
        printf("\nQue quieres 'calcular':\n"
               "1 Suma\n"
               "2 Resta\n"
               "3 Multiplicacion\n"
               "4 Division\n"
               "5 Descontar porcentaje\n"
               "0 regresar al menu anterior\n"
               "> ");
        fflush(stdout);
        scanf_s("%d", &option);
        fflush(stdin);
        int x, y;
        switch (option) {
            case 1:
                // suma
                printf("\nIngresa el primer numero (entero)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%d", &x);
                fflush(stdin);
                printf("Ingresa el segundo numero (entero)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%d", &y);
                fflush(stdin);

                printf("%d + %d = %d", x, y, sumar(x, y));
                break;
            case 2:
                // resta
                printf("\nIngresa el primer numero (entero)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%d", &x);
                fflush(stdin);
                printf("Ingresa el segundo numero (entero)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%d", &y);
                fflush(stdin);

                printf("%d - %d = %d", x, y, restar(x, y));
                break;
            case 3:
                // multiplicacion
                printf("\nIngresa el primer numero (entero)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%d", &x);
                fflush(stdin);
                printf("Ingresa el segundo numero (entero)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%d", &y);
                fflush(stdin);

                printf("%d * %d = %ld", x, y, multiplicar(x, y));
                break;
            case 4:
                // division
                printf("\nIngresa el Dividendo\n"
                       "> ");
                fflush(stdout);
                scanf_s("%d", &x);
                fflush(stdin);
                printf("\nIngresa el Divisor\n"
                       "> ");
                fflush(stdout);
                scanf_s("%d", &y);
                fflush(stdin);
                if (y == 0) {
                    printf("......Es mejor que dejes de usar la calculadora....Dividir por 0, como se te ocurre!!\n");
                    fflush(stdout);
                    option = 0;
                } else {
                    printf("%d / %d = %.3f\n", x, y, dividir(x, y));
                    fflush(stdout);
                }
                break;
            case 5:
                // porcentaje
                double valor, tasa;
                printf("\nIngresa el valor (double)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%lf", &valor);
                fflush(stdin);
                printf("Ingresa el porentaje (double) ej. 0.8\n"
                       "> ");
                fflush(stdout);
                scanf_s("%lf", &tasa);
                fflush(stdin);

                printf("%.3lf menos el %.3fl es %.3f\n", valor, tasa, descontarPorcentaje(valor, tasa));
                fflush(stdout);
                break;
            case 0:
                // regresar
                option = 0; // ya se que es redundante!!
                break;
            default:
                break;
        }
    } while (option);
}

void convertidorRomano() {
    int number;

    printf("\nIngrese un numero para convertir a romano\n"
           "> ");
    fflush(stdout);
    scanf_s("%d", &number);
    fflush(stdin);
    char *romano = numberToRoman(number);
    printf("Romano: %s\n", romano);
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
        fflush(stdin);

        switch (option) {
            case 1:
                printf("\nIngrese un integer para encontrar la distancia binaria:\n"
                       "> ");
                fflush(stdout);
                int number = 0;
                scanf_s("%d", &number);
                fflush(stdin);
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
                    fflush(stdin);
//                if (option2 != 0) {
                    if (option2) {
                        printf("Ingrese el numero de elementos que tiene el vector\n"
                               "> ");
                        fflush(stdout);
                        int size;
                        scanf_s("%d", &size);
                        fflush(stdin);
                        int *array = calloc(size, sizeof(int));
                        printf("Ingrese los elementos del vector (size=%d)\n", size);
                        fflush(stdout);

                        for (int i = 0; i < size; ++i) {
                            printf("%d> ", i + 1);
                            fflush(stdout);
                            scanf_s("%d", array + i);
                            fflush(stdin);
                        }
                        switch (option2) {
                            // rotar vector
                            case 1:
                                printf("Ingrese el numero de rotaciones\n"
                                       "> ");
                                fflush(stdout);
                                int rot;
                                scanf_s("%d", &rot);
                                fflush(stdin);
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
                    fflush(stdin);

                    switch (option3) {
                        case 1:
                            int x, y, d;
                            printf("\nIngrese la coordenada inicial\n"
                                   "> ");
                            fflush(stdout);
                            scanf_s("%d", &x);
                            fflush(stdin);
                            printf("Ingrese la coordenada final (debe ser mayor a %d)\n"
                                   "> ", x);
                            fflush(stdout);
                            scanf_s("%d", &y);
                            fflush(stdin);
                            printf("Ingrese la distancia de Salto (debe ser positiva)\n"
                                   "> ");
                            fflush(stdout);
                            scanf_s("%d", &d);
                            fflush(stdin);

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
            default:
                break;
        }
    } while (option);
}

void area() {
    int option;
    double v1, v2;
    do {
        printf("\nIngrese el numero de la opcion que desea realizar\n"
               "1 Perimetro\n"
               "2 Area Circulo\n"
               "3 Area Triangulo\n"
               "4 Area Cuadrado\n"
               "5 Area Rectangulo\n"
               "0 regresar al menu anterior\n"
               "> ");
        fflush(stdout);
        scanf_s("%d", &option);
        fflush(stdin);
        switch (option) {
            case 1:
                // perimetro
                printf("\nIngrese el radio de la circunferencia (double)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%lf", &v1);
                printf("El perimetro es %.3lf\n", perimetro(v1));
                break;
            case 2:
                // circulo
                printf("\nIngrese el radio de la circunferencia (double)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%lf", &v1);
                printf("El area es %.3lf\n", areaCirculo(v1));
                break;
            case 3:
                // triangulo
                printf("\nIngrese la base del triangulo (double)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%lf", &v1);

                printf("Ingrese la altura del triangulo (double)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%lf", &v2);
                printf("El area del triangulo es %.3lf\n", areaTriangulo(v1, v2));
                break;
            case 4:
                // cuadrado
                printf("\nIngrese el lado del cuadrado (double)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%lf", &v1);

                printf("El area del cuadrado es %.3lf\n", areaCuadrado(v1));
                break;
            case 5:
                // rectangulo
                printf("\nIngrese la base del Rectangulo (double)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%lf", &v1);

                printf("Ingrese la altura del Rectangulo (double)\n"
                       "> ");
                fflush(stdout);
                scanf_s("%lf", &v2);
                printf("El area del rectangulo es %.3lf\n", areaRectangulo(v1, v2));
                break;
            case 0:
                // retornar
                option = 0; // ya se que es reduntante
                break;
            default:
                break;
        }
    } while (option);
}

