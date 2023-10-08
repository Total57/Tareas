#include <iostream>
using namespace std;

int main () {
    int numero ;
    int division_3 ;
    int division_5 ;
    int division_10 ;
    for (int i = 1; i <= 100; i++){
        numero = i;

        division_3 = numero % 3 ;
        division_5 = numero % 5 ;
        division_10 = numero % 10 ;
        if (division_3 == 0 ){ // Primero vemos si el numero es divisible entre tres
            if (division_5 == 0){// Ahora comprovamos si es divisible entre 5
                if (division_10 == 0){ // Como si es divisible entre 5 pasamos a checar lo mismo con 10
                    cout << "Cafe con leche y hielos" << endl ; // Es divisble entre 3 - 5 - 10
                }else{
                    cout << "cafe con leche" << endl; // Solo se puede dividir entre 3 - 5
                    }
            }else{
                cout << "cafe" << endl; // Solo se puede dividir entre 10
                }
        }else{
            if (division_5 == 0) // Si no se puede dividri entre tres comprobara si se puede dividir entre 5
        {
            if (division_10 == 0){ // Luego entre 10
                cout << "Leche con hielos" << endl ;
            }else{
                cout << "Leche" << endl; // 5 solito
            }
            }
        }
        if (division_3 != 0 && division_5 != 0 && division_10 != 0){
            cout << numero << endl;
        }
    }
   
}