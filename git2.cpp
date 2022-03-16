#include <iostream>
#include <stdlib.h>
using namespace std;

int dia, mes, anio;

int main()
{
    cout<<"Ingrese el año: ";
    cin>>anio;
    if (anio%4 == 0)
    {
        cout<<"El año es bisiesto"<<endl;
    }
    else if (anio > 1000 && anio%100 == 0 && anio%400 == 0)
    {
        cout<<"El año es bisiesto"<<endl;
    }
    else
    {
        cout<<"El año no es bisiesto"<<endl;
    }
}

