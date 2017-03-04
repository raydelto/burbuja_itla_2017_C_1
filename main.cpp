#include <iostream>
#include <windows.h>

using namespace std;

int numeros[] = {6 , 3 ,7 , 1, 38 , 58 , 3443, 63563,343, 341, 3,45,2456,4256,46,264};
int numeros1[] = {6 , 3 ,7 , 1, 38 , 58 , 3443, 63563,343, 341, 3,45,2456,4256,46,264};
int tamano = sizeof(numeros) / sizeof(int);

void imprimir()
{
    for (int i = 0 ; i < tamano ; i++)
    {
        cout << numeros[i] << endl;
    }
}
void burbuja()
{
    int temp;
    for(int i = 0 ; i < tamano - 1 ; i++)
    {
        for(int j = 0 ; j < tamano - 1 ; j++)
        {
            if(numeros[j] <  numeros[j+1])
            {
                //Intercambiando los valores
                temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

}

void burbujaOptimizada()
{
    int temp;
    bool cambio = true;
    while(cambio)
    {
        cambio = false;
        for(int j = 0 ; j < tamano - 1 ; j++)
        {
            if(numeros1[j] <  numeros1[j+1])
            {
                //Intercambiando los valores
                temp = numeros1[j];
                numeros1[j] = numeros1[j+1];
                numeros1[j+1] = temp;
                cambio = true;
            }
        }
    }

}


int main()
{
    cout << "DESORDENADOS" << endl;
    imprimir();
    cout << "ORDENADOS con Burbuja" << endl;
    long tiempoInicio = GetTickCount();
    for(int i = 0 ; i < 1000000 ; i++){
        burbuja();
    }
    long tiempoFin = GetTickCount();
    cout << "Burbuja ha tardado " << tiempoFin - tiempoInicio;
    imprimir();
    cout << "ORDENADOS con Burbuja optimizada" << endl;
    tiempoInicio = GetTickCount();
    for(int i = 0 ; i < 1000000 ; i++){
        burbuja();
    }
    tiempoFin = GetTickCount();
    cout << "Burbuja optimizado ha tardado " << tiempoFin - tiempoInicio;

    imprimir();
    return 0;
}
