/*3
 Hacer una funci�n que reciba como par�metros un vector de enteros, su
tama�o y un valor entero a buscar y que devuelva en qu� posici�n se encuentra
el valor dentro del vector. En caso de no encontrarlo, devolver -1.
*/
#include <iostream>
#include <cstdlib>
#include <clocale>
using namespace std;

int buscarPosicion(int *, int, int);

int main(){
    setlocale(LC_CTYPE,"Spanish");

    int *vec, tamanio, numAbuscar, numero, resultado;

    cout << "Ingrese tama�o del vector: ";
    cin >> tamanio;
    cout << "Ingrese valores del vector: " << endl;
    for(int i=0;i<tamanio;i++){
        cin >> numero;
        vec[i] = numero;

    }

    cout << "Ingrese numero a buscar: ";
    cin >> numAbuscar;

    resultado = buscarPosicion(vec, tamanio, numAbuscar);

    cout << "El resultado es: " << resultado << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}

int buscarPosicion(int *vec, int tam, int numBusc){
    int posicion;
    bool bandera = false;

    for(int i=0;i<tam;i++){
        if(vec[i] == numBusc){
            posicion = i+1;
            bandera = true;
        }
    }

    if (bandera == true){
        return posicion;
    }
    else{
        return -1;
    }

}

