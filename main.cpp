/*
*   AED - 2015
*
*   Autor: Ferreyra, Maximiliano Gastón.
*
*   Legajjo: 155911-4.
*
*   Fecha: 20150411
*/

#include <iostream>

using namespace std;

int main(){

    /*
    * Declaramos variables que vamos a utilizar durante el programa.
    */

    int num1 = 37;
    int num2 = 4;

    float num3 = 35.7;
    float num4 = 9.4;

    double num5 = 38.99;
    double num6 = 21.65;

cout << "===============================================================================\n" << endl;
cout << "|                          Trabajo Practico No 1 AED                           |" << endl;
cout << "|                 \"Tipos de Datos y sus Operaciones Basicas\"                   |" << endl;
cout << "|           Alumno: Ferreyra, Maximiliano Gaston || Legajo: 155911-4           |" << endl;
cout << "===============================================================================" << endl;

cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n" << endl;

// Tipo de datos INT

cout << "Tipo de dato: Int" << endl;
cout << "_________________\n" << endl;

cout << "Suma (num1 + num2): " << num1 + num2 << endl;
cout << "Resta (num1 - num2): " << num1 - num2 << endl;
cout << "Multiplicacion (num1 * num2): " << num1 * num2 << endl;
cout << "Division (num1 / num2): " << num1 / num2 << endl;
cout << "Resto de Division Entera (num1 % num2): " << num1 % num2 << "\n" << endl;

// Tipo de datos Float

cout << "Tipo de dato: Float" << endl;
cout << "_________________\n" << endl;

cout << "Suma (num3 + num4): " << num3 + num4 << endl;
cout << "Resta (num3 - num4): " << num3 - num4 << endl;
cout << "Multiplicacion (num3 * num4): " << num3 * num4 << endl;
cout << "Division (num3 / num4): " << num3 / num4 << endl;
// No se puede obtener un resto de una división de datos del tipo Float.
}

