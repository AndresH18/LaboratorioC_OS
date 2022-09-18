//
// Created by andre on 17/9/2022.
//
#include "geometria.h"

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES

#include <math.h>

#endif

double areaCirculo(double r) {
    return M_PI * r * r;
}

double areaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

double areaCuadrado(double l) {
    return l * l;
}

double areaRectangulo(double base, double altura) {
    return base * altura;
}

double perimetro(double radio) {
    return M_PI * 2.0 * radio;
}

