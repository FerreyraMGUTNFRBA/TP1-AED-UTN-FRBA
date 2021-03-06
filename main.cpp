/*
*   AED - 2015
*
*   Autor: Ferreyra, Maximiliano Gast�n.
*
*   Legajjo: 155911-4.
*
*   Fecha: 20150411
*/

#include <iostream>
#include <string>

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

    bool arg1 = true;
    bool arg2 = false;
    bool res;

    string a = "Hola", b = "Mundo", c;

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

// Tipo de datos Double

cout << "Tipo de dato: Double" << endl;
cout << "_________________\n" << endl;

cout << "Suma (num5 + num6): " << num5 + num6 << endl;
cout << "Resta (num5 - num6): " << num5 - num6 << endl;
cout << "Multiplicacion (num5 * num6): " << num5 * num6 << endl;
cout << "Division (num5 / num6): " << num5 / num6 << "\n" << endl;
// No se puede obtener un resto de una divisi�n de datos del tipo Double.

// Tipo de datos Bool.

cout << "Tipo de dato: Boolean (1 = true; 0 = false)" << endl;
cout << "_________________\n" << endl;

res = arg1 == arg2;
cout << "Igualdad (arg1 == arg2): " << res << endl;
res = arg1 != arg2;
cout << "Desigualdad (arg1 != arg2): " << res << endl;
res = arg1 and arg2;
cout << "Conjuncion (arg1 ^ arg2): " << res << endl;
res = arg1 or arg2;
cout << "Exclusion (arg1 v arg2): " << res << "\n" << endl;

cout << "Tipo de dato: String" << endl;
cout << "_________________\n" << endl;

cout << "Comparacion (Valor != 0 Diferente, Valor == 0 Iguales): " << endl;
    if(a.compare(b) == 0)
    {
        cout << "Son iguales" << endl;
    }else
    {
        cout << "Son diferentes" << endl;
    }

cout << "Concatenacion: " << a + " " + b << endl;

cout << "Longitud de Caracteres (\"Hola\"): " << a.size() << endl;

cout << "Verificar si variable tipo string esta vacia: " << endl;

    if(b.empty() == true){
        cout << "Vacia" << endl;
    }else{
        cout << "No Vacia" << endl;
    }
}

