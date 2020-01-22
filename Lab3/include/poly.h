#include <iostream>

using namespace std;

/** Clase Poly. La clase Poly declara las variables y los metodos necesarios para ejecutar las operaciones entre polinomios. Ademas declara la sobrecarga de los operadores 
*/
class Poly{
    private:
      /* La variable x4 se refiere al coeficiente de la x^4
      */
        float x4;
        /* La variable x3 se refiere al coeficiente de la x^3
        */
        float x3;
        /* La variable x2 se refiere al coeficiente de la x^2
        */
        float x2;
        /* La variable x se refiere al coeficiente de la x
        */
        float x;
        /* La variable ind se refiere al termino independiente
        */
        float ind;
        /* La variable grado se refiere al grado del polinomios
        */
        int grado;
        
    public:
        /* La variable Poly contiene los atributos de la clase Poly 
        */
        Poly();
        /* La funcion para crear elementos de la clase Frac. 
        * @param x4 el coeficiente de la x^4
        * @param x3 el coeficiente de la x^3
        * @param x2 el coeficiente de la x^2
        * @param x el coeficiente de la x
        * @param ind el termino independiente
        */
        Poly(float x4, float x3, float x2, float x, float ind, int grado);
        /* Sobrecarga del operador suma
        */
        Poly operator + (Poly const &obj);
        /* Sobrecarga del operador resta
        */
        Poly operator - (Poly const &obj);
        /* Sobrecarga del operador multiplicacion
        */
        Poly operator * (Poly const &obj);
        /* Sobrecarga del operador division
        */
        Poly operator / (Poly const &obj);
        /* Sobrecarga de la declaracion float
        */
        operator float() const;
        /* Sobrecarga del out stream
        */
        friend ostream& operator << (ostream& os, Poly const &obj);
};

