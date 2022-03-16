#include <iostream>
#include <stdlib.h>
using namespace std;

int dia, mes, anio;

int main()
{
    cout<<"Ingrese su dia de nacimiento: ";
    cin>>dia;
    cout<<"Ingrese su mes de nacimiento: ";
    cin>>mes;
    if ((dia > 20 && mes == 3) || (dia < 20 && mes == 4))
    {
        cout<<"Su signo zodiacal es Aries"<<endl;
    }
    else if ((dia > 19 && mes == 4) || (dia < 21 && mes == 5))
    {
        cout<<"Su signo zodiacal es Tauro"<<endl;
    }
    else if ((dia > 20 && mes == 5) || (dia < 21 && mes == 6))
    {
        cout<<"Su signo zodiacal es Geminis"<<endl;
    }
    else if ((dia > 20 && mes == 6) || (dia < 23 && mes == 7))
    {
        cout<<"Su signo zodiacal es Cancer"<<endl;
    }
    else if ((dia > 22 && mes == 7) || (dia < 23 && mes == 8))
    {
        cout<<"Su signo zodiacal es Leo"<<endl;
    }
    else if ((dia > 22 && mes == 8) || (dia < 23 && mes == 9))
    {
        cout<<"Su signo zodiacal es Virgo"<<endl;
    }
    else if ((dia > 22 && mes == 9) || (dia < 23 && mes == 10))
    {
        cout<<"Su signo zodiacal es Libra"<<endl;
    }
    else if ((dia > 22 && mes == 10) || (dia < 22 && mes == 11))
    {
        cout<<"Su signo zodiacal es Escorpio"<<endl;
    }
    else if ((dia > 21 && mes == 11) || (dia < 22 && mes == 12))
    {
        cout<<"Su signo zodiacal es Sagitario"<<endl;
    }
    else if ((dia > 21 && mes == 12) || (dia < 21 && mes == 1))
    {
        cout<<"Su signo zodiacal es Capricornio"<<endl;
    }
    else if ((dia > 20 && mes == 1) || (dia < 20 && mes == 2))
    {
        cout<<"Su signo zodiacal es Acuario"<<endl;
    }
    else if ((dia > 19 && mes == 2) || (dia < 21 && mes == 3))
    {
        cout<<"Su signo zodiacal es Piscis"<<endl;
    }
}
