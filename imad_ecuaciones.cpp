#include <iostream>
#include <cmath>
using namespace std ;

int main (){
    int a ;
    int b ;
    int c ; 

    int paso_1 ;
    int paso_2 ;
    int paso_3 ;
    int paso_4 ;
    int x1 ;
    int x2 ;
    

    cout << "---- Este programa resulve ecuaciones cuadraticas en formato ax^2 + bx - c ----" << endl;
    cout << "---- Digita los valores 'a' 'b' y 'c' de acuerdo con el formato anterior ----" << endl;
    cout << "\nEjemplo si se tiene 5x^2 - 15x -50. Entonces a = 5   b = -15   c = -50" << endl;
    cout << "\nDigita el valor de 'a': " ;
    cin >> a ;
    cout << "Digita el valor de 'b': " ;
    cin >> b ;
    cout << "Digita el valor de 'c': " ;
    cin >> c ;

    paso_1 = b * -1 ;
    paso_2 = (b*b) - (4*a*c) ;
    paso_3 = sqrt(paso_2) ;
    paso_4 = a*2 ;
    x1 = (paso_1+paso_3) / paso_4 ;
    x2 = (paso_1-paso_3) / paso_4 ;

    cout << "\n--- y = " << a << "x^2 + " << b << "x + " << c << endl;
    cout << "\n--- x1 = " << x1 << "   " << "x2 = " << x2 << " --- " << endl;


    
}