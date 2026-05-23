#include <iostream>
using namespace std;
#include "DiaAnyo.h"
#define DIA_ACTUAL 20
#define MES_ACTUAL 1

bool verificar_cumple(DiaAnyo& hoy, DiaAnyo& cumple);
void ingresar_cumple(int _dia, int _mes);
int main()
{
    DiaAnyo* hoy;
    DiaAnyo* cumple;
    int dia_cumple, mes_cumple;

    hoy = new DiaAnyo(DIA_ACTUAL, MES_ACTUAL);

    cout << "dia de cumpleaños: ";
    cin >> dia_cumple;
    cout << "mes de cumpleaños: ";
    cin >> mes_cumple;

    cumple = new DiaAnyo(dia_cumple, mes_cumple);
    cout << "fecha actual: " << endl;
    hoy->visualizar();

    cout << "cumple: " << endl;
    cumple->visualizar();

}

void ingresar_cumple(int _dia, int _mes)
{
    cout << "dia de cumpleaños: ";
    cin >> dia_cumple;
    cout << "mes de cumpleaños: ";
    cin >> mes_cumple;
}

bool verificar_cumple(DiaAnyo& hoy, DiaAnyo& cumple)
{
    if(hoy->igual(*cumple))
    {

    }
}