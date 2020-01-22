#include "poly.h"

/* @brief Implementa las funciones de la clase Poly
*/

/* Creacion de variables en un elemento de la clase Poly
*/
Poly::Poly(){
    this->x4 = 0;
    this->x3 = 0;
    this->x2 = 0;
    this->x = 0;
    this->ind = 0;
    this->grado = 0;
}

/* Asignacion de variables en un elemento de la clase Poly
* @param x4 recibe el coeficiente de x^4, normalmente 0
* @param x3 recibe el coeficiente de x^3, normalmente 0
* @param x2 recibe el coeficiente de x^2
* @param x recibe el coeficiente de x
* @param ind recibe el termino independiente
*/
Poly::Poly(float x4, float x3, float x2, float x, float ind, int grado){
    this->x4 = x4;
    this->x3 = x3;
    this->x2 = x2;
    this->x = x;
    this->ind = ind;
    if(x2!=0){
      this->grado = 2;
    }
    else if (x2==0 && x != 0){
      this -> grado = 1;
    }
    else if (x2==0 && x ==0){
      this ->grado = 0;
    };
}

/* Sobrecarga del operador suma.
* Suma los coeficientes de terminos similares
*/
Poly Poly::operator + (Poly const &obj){
    Poly result;
    result.x2 = this->x2 + obj.x2;
    result.x = this->x + obj.x;
    result.ind = this->ind + obj.ind;
    
    return result;
}

/* Sobrecarga del operador resta.
* Resta los coeficientes de terminos similares
*/
Poly Poly::operator - (Poly const &obj){
    Poly result;
    result.x2 = this->x2 - obj.x2;
    result.x = this->x - obj.x;
    result.ind = this->ind - obj.ind;
    
    return result;
}

/* Sobrecarga del operador multiplicacion
* Aplica la propiedad distributiba de los polinomios
*/
Poly Poly::operator * (Poly const &obj){
  Poly result;
  result.x4 = this->x2 * obj.x2;
  result.x3 = (this->x2 * obj.x) + (this->x * obj.x2);
  result.x2 = (this->x2 * obj.ind) + (this->x * obj.x) + (this->ind * obj.x2);
  result.x = (this->x * obj.ind) + (this->ind * obj.x);
  result.ind = (this->ind * obj.ind);
  return result; 
}

/* Sobrecarga del operador division
* Trabajo pendiente
*/
Poly Poly::operator / (Poly const &obj){
  cout << "el grado del dividendo es " << this->grado << endl;
  cout << "el grado del divisor es " << obj.grado << endl;
  /* Inicializamos una variable para el resultado */
  Poly result;
  /* Iniciamos una variable para el residuo */
  Poly residue;
  /* Inicializamos una variable auxiliar para llevar las multiplicaciones */
  Poly aux;
  /*Caso cuando ambos polinomios son de grado 2 */
  if(this->grado == 2 && obj.grado == 2){
    /* Obtenemos el primer termino del cociente dividiendo los terminos de x^2 */    
    result.ind = this->x2 / obj.x2;
    aux.x2 = -result.ind*this->x2;
    aux.x = -result.ind*this->x;
    aux.ind = -result.ind*this->ind;
    residue.x2 = this->x2 - aux.x2;
    residue.x = this->x - aux.x;
    residue.ind = this->ind;
    cout << "resto de la division" << residue << endl;
  }
  /* Caso cuando el dividendo es de grado 2 y el divisor es de grado 1 */
  else if(this->grado == 2 && obj.grado ==1){
    /* obtenemos el primer termino del cociente */
    result.x = this->x2/obj.x;
    aux.x2 = result.x*obj.x;
    aux.x = result.x*obj.ind;
    /* obtenemos el primer residuo */
    residue.x2 = this->x2 - aux.x2;
    residue.x = this->x - aux.x;
    residue.ind = this->ind - aux.ind;

    /* obtenemos el segundo termino del cociente */

    result.ind = residue.x / obj.x;
    aux.x = result.ind*obj.x;
    aux.ind = result.ind*obj.ind;
    /* obtenemos el residuo final */
    residue.x -= aux.x;
    residue.ind -= aux.ind;
    cout << "resto de la division" << residue << endl;
  }

  /* Casos cuando el divisor es de grado 0 */
  else if(this->grado == 1 && obj.grado == 0){
    result.x2 = this->x2/obj.ind;
    result.x = this->x/obj.ind;
    result.ind = this->ind/obj.ind;
  }
  /* Casos cuando el dividendo y el divisor son de grado 1 */
  else if(this->grado == 1 && obj.grado == 1){
    result.ind = this->x / obj.x;
    aux.x = result.ind*this->x;
    aux.ind = result.ind*this->ind;
    residue.x = this->x - aux.x;
    residue.ind = this->ind;
    cout << "resto de la division " << residue << endl;
  }
  /* Casos no posibles */
  else if(this->grado < obj.grado){
    cout << "division no posible dado a que el dividendo es de mayor grado que el divisor" << endl;
  }
  return result;
}

/* Sobrecarga del operador float
* Retorna el coeficiente de x
*/
Poly::operator float() const{
    return this->x;
}

/* Sobrecarga del operador impresion
* Retorna el polinomio solicitado en el formato (x4)x^4 + (x3)x^3 + (x2)x^2 + (x)x + ind
*/
ostream& operator << (ostream& os, Poly const &obj){
    os << obj.x4 << "x^4 + " << obj.x3 << "x^3 + " << obj.x2 << "x^2 + " << obj.x << "x + " << obj.ind;
    return os;
}