//
// Created by andre on 17/9/2022.
//
#include <stdio.h>
#include "algebra.h"

double sumarDouble(double d1, double d2) {
    return d1 + d2;
}

double restarDouble(double d1, double d2) {
    return d1 + d2;
}

double multiplicarDouble(double d1, double d2) {
    return d1 * d2;
}

double dividirDouble(double d1, double d2) {
    if (d2 != 0) {
        return d1 / d2;
    }
    return -1;
}

double descontarPorcentaje(double valor, double porcentaje) {
    return valor * (1.0 - porcentaje);
}