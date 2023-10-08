#include <iostream>
using namespace std;

int main (){
    int numero ;
    int resultado ;

    cout << "\nEste programa suma todos los digitos de un numero hasta llegar a el" << endl;
    cout << "\nEjemplo: 6 = 1+2+3+4+5+6 = 21" << endl;
    cout << "\nDigita el numero: " ;
    cin >> numero ;

    resultado = (numero * (numero + 1)) / 2 ; // La fumolu para sumar todos los digitos de un numero es n (n+1) /2 

    cout << "\n---- La suma de todos los digitos de " << numero << " es igual a " << resultado << endl ;
    
}