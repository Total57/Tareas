#include <iostream>
using namespace std ;

int main () {
    int productos ;

    cout << "Cuantos productos compraste: " ;
    cin >> productos ;

    if (productos > 5){
    cout << "---- Tus productos tienen un 10% de descuento ----" << endl ;
    }else{
        cout << "---- Tus productos tienen un 0% de descuento ----" << endl ;
    }

    cout << "---- A tus productos se les aumento un 16% de inpuesto sobre el precio con descuento ----" << endl ;
    
}