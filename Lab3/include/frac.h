#include <iostream>

using namespace std;

/** Clase Frac. La clase frac declara las variables y los metodos necesarios para ejecutar las operaciones entre fracciones. Ademas declara la sobrecarga de los operadores 
*/
class Frac{
  private:
  /* La variable num se refiere al numerador de la fraccion 
  */
    int num;
    /* La variable denom se refiere al denominador de la fraccion 
    */
    int denom;
  
  public:
  /* La variable Frac contiene los atributos de la clase Frac 
  */
    Frac();
    /* La funcion para crear elementos de la clase Frac. 
    * @param num el numerador
    * @param denom el denominador
    */
    Frac(int num, int denom);
    /* Sobrecarga del operador suma
    */
    Frac operator + (Frac const &obj);
    /* Sobrecarga del operador resta
    */
    Frac operator - (Frac const &obj);
    /* Sobrecarga del operador multiplicacion
    */
    Frac operator * (Frac const &obj);
    /* Sobrecarga del operador division
    */
    Frac operator / (Frac const &obj);
    /* Sobrecarga de la declaracion float
    */
    operator float() const;
    /* Sobrecarga del out stream
    */
    friend ostream& operator << (ostream& os, Frac const &obj);
};