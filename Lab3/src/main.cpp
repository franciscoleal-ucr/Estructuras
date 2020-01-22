#include <iostream>
#include "poly.h"
#include "frac.h"

using namespace std;

/* @brief Laboratorio 3, sobrecarga de operadores
* Este programa consiste en sobrecargar operadores de suma, resta, multiplicacion y division para ejecutar operaciones entre polinomios y fracciones de forma lineal, como se haria con puntos flotantes o con enteros
*/

/* main contiene la interaccion con el usuario
*/
int main(){
    float ind;
    float x;
    float x2;
    int num;
    int denom;
    /* Se solicita el ingreso de los datos del primer polinomio */
    cout << "ingrese el coeficiente de x2 del primer polinomio" << endl;
    cin >> x2;
    cout << "ingrese el coeficiente de x del primer polinomio" << endl;
    cin >> x;
    cout << "ingrese el termino independiente del primer polinomio" << endl;
    cin >> ind;
    /* Se asignan los datos a una variable de la clase Poly */
    Poly c1(0, 0, x2, x, ind, 0);
    /* Se solicita el ingreso de los datos del primer polinomio */
    cout << "ingrese el coeficiente de x2 del segundo polinomio" << endl;
    cin >> x2;
    cout << "ingrese el coeficiente de x del segundo polinomio" << endl;
    cin >> x;
    cout << "ingrese el termino independiente del primer polinomio" << endl;
    cin >> ind;
    /* Se asignan los datos a otra variable de la clase Poly */
    Poly c2(0, 0, x2, x, ind, 0);

    /* Se ejecutan las operaciones de forma lineal, aprovechando la sobrecarga de los operadores */
    Poly c3 = c1 + c2;
    Poly c4 = c1 - c2;
    Poly c5 = c1 * c2;
    Poly c6 = c1/c2;

    /* Se imprimen los resultados de forma lineal, aprovechando la sobrecarga del operador cout */
    cout << "suma" << endl;
    cout << c3 << endl;
    cout << "resta" << endl;
    cout << c4 << endl;
    cout << "multiplicacion" << endl;
    cout << c5 << endl;
    cout << "division" << endl;
    cout << c6 << endl;

    /* Se solicita el ingreso de la primera fraccion */

    cout << "ingrese el numerador de la primera fraccion" << endl;
    cin >> num;
    cout << "ingrese el denominador de la primera fraccion" << endl;
    cin >> denom;
    Frac f1(num, denom);

    /* Se solicita el ingreso de la segunda fraccion */

    cout << "ingrese el numerador de la segunda fraccion" << endl;
    cin >> num;
    cout << "ingrese el denominador de la segunda fraccion" << endl;
    cin >> denom;
    Frac f2(num, denom);

    /* Se ejecutan las operaciones de forma lineal, aprovechando la sobrecarga de los operadores */
    Frac f3 = f1+f2;
    Frac f4 = f1-f2;
    Frac f5 = f1*f2;
    Frac f6 = f1/f2;

    /* Se imprimen los resultados de forma lineal, aprovechando la sobrecarga del operador cout */
    cout << "suma" << endl;
    cout << f3 << endl;
    cout << "resta" << endl;
    cout << f4 << endl;
    cout << "multiplicacion" << endl;
    cout << f5 << endl;
    cout << "division" << endl;
    cout << f6 << endl;

    return 0;
}