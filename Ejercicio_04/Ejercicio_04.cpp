/*4
Hacer un programa que permita cargar un vector de 10 números enteros en el
cual ninguno de los valores de sus elementos pueda repetirse.
*/
#include <iostream>
#include <cstdlib>
#include <clocale>
#include <time.h>
using namespace std;

bool comprobar( int numero, int vec[10]);

int main(){
    setlocale(LC_CTYPE,"Spanish");
    srand(time(NULL));


    int vec[10], numero;

    for (int i=0;i<10;i++){
        while (comprobar(numero, vec)){
            numero = rand() % 100;
        }
        vec[i] = numero;
    }

    for (int i=0;i<10;i++){
        cout << vec[i] << " " << endl;
    }



	cout << endl << endl;
	system("pause");
	return 0;
}

bool comprobar(int num, int v[10]){

    for (int i=0;i<10;i++){
        if (num == v[i]){
            return true;
        }
    }
    return false;
}
