//
// Created by andre on 17/9/2022.
//
#include <stdio.h>
#include "algebra.h"

double sumarDouble(double d1, double d2) {
    return d1 + d2;
}

int sumar(int i1, int i2) {
    return i1 + i2;
}

double restarDouble(double d1, double d2) {
    return d1 - d2;
}

int restar(int i1, int i2) {
    return i1 - i2;
}

double multiplicarDouble(double d1, double d2) {
    return d1 * d2;
}

long multiplicar(int i1, int i2) {
    return ((long) i1) * ((long) i2);
}

double dividir(int i1, int i2) {
    if (i2 != 0) {
        return ((double) i1) / ((double) i2);
    }
}

double dividirDouble(double d1, double d2) {
    if (d2 != 0) {
        return d1 / d2;
    }
    return 0;
}

double descontarPorcentaje(double valor, double porcentaje) {
    return valor * (1.0 - porcentaje);
}