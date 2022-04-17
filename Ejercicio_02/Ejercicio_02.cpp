/*2
Hacer una funci�n que reciba como par�metros un vector de enteros y un
n�mero entero que indica la cantidad de componentes del vector, y que
devuelva el �ndice en donde se encuentra el valor m�ximo del vector.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int indiceMaximo(int *, int);

int main(){

    int *vec, cantidad, numero, indiceMax;

    cout << "Ingrese cantidad de componentes de su vector: ";
    cin >> cantidad;
    cout << "Ingrese componentes: " << endl;
    for(int i=0;i<cantidad;i++){
        cin >> numero;
        vec[i] = numero;
    }

    indiceMax = indiceMaximo(vec, cantidad);

    cout << "El indice donde se encuentra el valor maximo es: " << indiceMax << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}

int indiceMaximo(int *v, int indice){
    int maximo = v[0], posMax;
    for(int i=1;i<indice;i++){
        if (maximo < v[i]){
            maximo = v[i];
            posMax = i+1;
        }
    }
    return posMax;
}
