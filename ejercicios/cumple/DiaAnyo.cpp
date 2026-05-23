#include <iostream>
using namespace std;
#include "DiaAnyo.h"

DiaAnyo::DiaAnyo(int _dia, int _mes)
{
    dia = _dia;
    mes = _mes;
}
void DiaAnyo::visualizar() const
{
    cout << "(dia/mes) " << dia << "/" << mes << "\n" << endl;
}
    
bool DiaAnyo::igual(const DiaAnyo& fecha) const
{
    bool indicador = false;
    if((dia == fecha.dia) && (mes == fecha.mes))
    {
        indicador = true;
    } 
    return indicador;
}