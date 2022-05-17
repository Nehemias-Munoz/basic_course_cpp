//
//  main.cpp
//  basic_course_cpp
//
//  Created by Nehemias Muñoz on 17-05-22.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    // Uso de apuntadores
    /*
     el uso de apuntadores es comun al querer cambiar valores de variables dentro de funciones externas a la cual
     se declaro la variable
     */
    // creacion y asignacion de variable
    int userHomeAdress = 2084;
    cout << "Direccion usuario: "<< userHomeAdress << endl;
    // creacion de variable apuntador ( de variable userHomeAdress): que muestra direccion en memoria
    int* prompterUserAdress = &userHomeAdress;
    cout << "Direccion en memoria de variable anterior: " << prompterUserAdress<< endl;
    // cambiando valor de variable userHomeAdress directamente con el numero de la varible en memoria
    *prompterUserAdress = 1000;
    cout << "Direccion nueva usuario: "<< userHomeAdress << endl;


}
