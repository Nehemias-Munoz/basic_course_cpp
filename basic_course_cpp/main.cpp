//
//  main.cpp
//  basic_course_cpp
//
//  Created by Nehemias Muñoz on 17-05-22.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
//   Ejercicio #1
    
// Calculadora de Areas
    short int userSelecction;
    float userRadio;
    short int area;
    const float pi = 3.1416f;
    cout << "Bievenido a la calculadora de areas \n Seleccione una opcion para comenzar: \n 1 - Area de un circulo \n 2 - Area de una esfera \n";
    cin >> userSelecction;
    switch (userSelecction) {
        case 1:
            cout << "Ingrese el radio de su circulo: ";
            cin >> userRadio;
            area = (userRadio*2) * pi;
            cout << "El area de tu circulo es: "<< area << endl;
            break;
        case 2:
            cout << "Ingrese el radio de su esfera: ";
            cin >> userRadio;
            area = (userRadio*2) * (pi * 4);
            cout << "El area de tu esfera es: "<< area << endl;
        default:
            cout << "Ingrese un valor dentro del rango de opciones.";
            break;
    }


}
