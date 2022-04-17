/*
1 Hacer una funci�n que reciba como par�metros un vector de enteros y un
n�mero entero que indica la cantidad de componentes del vector, y que
devuelva el valor m�nimo contenido en ese vector.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int valorMenor(int*, int);

int main(){

    int *vec, cantidad, numero, minimo;
    cout << "Ingrese cantidad de componentes del vector: " << endl;
    cin >> cantidad;

    cout << "Ingrese componentes: " << endl;
    for (int i = 0; i < cantidad; i++){
        cin >> numero;
        vec[i] = numero;
    }

    minimo = valorMenor(vec, cantidad);

    cout << "El menor valor dentro del vector es: " << minimo;

    cout << endl << endl;
    system("pause");
    return 0;
}

int valorMenor(int *v, int valor){
    int minimo = v[0];
    for (int i = 1; i < valor; i++) {
        if (minimo > v[i]){
            minimo = v[i];
        }
    }
    return minimo;
}
