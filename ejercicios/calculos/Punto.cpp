#include "Punto.h"
int Punto::leer_x() const
{
    return x;
}

int Punto::leer_y() const
{
    return y;
}

void Punto::escribir_x(int valor_x)
{
    x = valor_x;
}

void Punto::escribir_y(int valor_y)
{
    y = valor_y;
}