#include "frac.h"
#include <algorithm>

/* @brief Implementa las funciones de la clase Frac 
*/

/* Creacion de variables en un elemento de la clase Frac
*/
Frac::Frac(){
    this->num = 0;
    this->denom = 0;
}

/* Asignacion de variables en un elemento de la clase Frac
* @param num es el numerador de la funcion
* @param denom es el denominador de la fraccion
*/
Frac::Frac(int num, int denom){
    this->num = num;
    this->denom = denom;
}

/* Sobrecarga del operador suma.
* Utiliza el minimo comun multiplo para sumar fracciones de igual y diferente denominador
*/
Frac Frac::operator + (Frac const &obj){
    Frac result;
    ////////// sacamos el minimo comun multiplo de las fracciones a sumar
    int mcm;
    int mcd;
    int a = std::max(this->denom, obj.denom);
    int b = std::min(this->denom, obj.denom);
    int c = a;
    int d = b; 
    do{
      mcd= d;
      d = c%d;
      c = mcd;
    } while(d!=0);
    mcm = (a/mcd)*b;

    result.num = ((mcm/this->denom)*this->num) + ((mcm/obj.denom)*obj.num);
    result.denom = mcm;
    
    return result;
}

/* Sobrecarga del operador resta.
* Utiliza el minimo comun multiplo para restar fracciones de igual y diferente denominador
*/
Frac Frac::operator - (Frac const &obj){
    Frac result;
    ////////// sacamos el minimo comun multiplo de las fracciones a sumar
    int mcm;
    int mcd;
    int a = std::max(this->denom, obj.denom);
    int b = std::min(this->denom, obj.denom);
    int c = a;
    int d = b; 
    do{
      mcd= d;
      d = c%d;
      c = mcd;
    } while(d!=0);
    mcm = (a/mcd)*b;

    result.num = ((mcm/this->denom)*this->num) - ((mcm/obj.denom)*obj.num);
    result.denom = mcm;
    
    return result;
}

/* Sobrecarga del operador multiplicacion.
* Multiplica linealmente los numeradores y los denominadores
*/
Frac Frac::operator * (Frac const &obj){
  Frac result;
  
  result.num = (this->num*obj.num);
  result.denom = (this->denom*obj.denom);

  return result;
}


/* Sobrecarga del operador division.
* Multiplica en x los numeradores y los denominadores
*/
Frac Frac::operator / (Frac const &obj){
  Frac result;
  
  result.num = (this->num*obj.denom);
  result.denom = (this->denom*obj.num);
  
  return result;
}

/* Sobrecarga del operador float
* retorna el numerador de la fraccion
*/
Frac::operator float() const{
    return this->num;
}

/* Sobrecarga de la impresion de datos.
* Imprime la fraccion bajo el formato (numerador)/(denominador)
*/
ostream& operator << (ostream& os, Frac const &obj){
    os << obj.num << "/" << obj.denom;
    return os;
}