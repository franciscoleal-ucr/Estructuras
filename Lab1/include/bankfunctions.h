
/** @brief Implements a representation of a point in 3D.

    Detailed description here.
    @author Rolando Murillo Perez, Miguel, Francisco
    @date January 2019
    */
#pragma once
#include <string>
using namespace std; 

    //lo que se ocupa preguntar en otra clase tiene que retornar una variable en su metodo, variables privadas no se pueden usar entre metodos
class Jugador{
    public:
        /** Incribe a un jugador al juego*/
        void InscribeJugador(string nombre);
        string Nombre;//nombre del jugador Jugador.Nombre

        /** inscribe la ficha del jugador, este sera su distintivo durante el juego*/
        void InscribirFicha(string Ficha);//asegurarse de que tienen fichas distintas
        string ficha;

        /**  Le da al jugador el monto de dinero con el que va a iniciar*/
        void DarDineroInicial();

        /** Rebaja un monto de dinero al jugador por haber caido en una casilla con dueño*/
        void RebajarDineroPorMulta(int multa);

        /** Rebaja el monto que vale la casilla al jugador que decidio comprar */
        void RebajarDineroPorCompra(int valorpropiedad);

        /** Suma el dinero que le cobra al usuario multado*/
        void SumarDineroCobrado(int ganancia1);

       /** Suma cierto monto por motivos de que pasa por el inicio nuevamente */
        void SumarDineroPorPasarPorInicio();

        /** Permite resetear la posicion del jugador en el tablero*/
        void CambiarPosicion(int dados);
        int Posicion;//posicion del jugador en el tablero
        
        /**Nos permitira obtener el nombre del jugador*/
        string DaNombre();


        int _CuentaDeDinero;//cantidad de dinero que posee el Jugador


};

class Casilla{
    public:
      /** Da el nombre respectivo a la casilla*/
        void DaNombreALaCasillayNumero(string nombre, int numero);
        string nombredecasilla;//nombre de la casilla
        int numero;//numero de la casilla

      /** Va a definir la casilla como que aun no tiene dueño*/
       void InicializarPropietario();
       bool propietario;//nos dice si existe dueno o no

      /** Va a definir cuanto vale la casilla en particular*/
       void InicializarCosto(int costo);
       int valordepropiedad;//cuanto cuesta la propiedad

      /** Va a definir el valor de multa a cobrar por cada jugador que caiga en la casilla*/
       void InicializarMulta(int valormulta);
       int multa;/**4 casillas tienen multa SIEMPRE (las 4 casillas de impuestos)
       por las otras hay que preguntar si existe dueño, sino la multa no se aplica*/

     /** Va a definir que ahora si tiene propietario la casilla
         pasa a true la variable _Propietario */
      void AgregarPropietario(string name);
      string nombredelpropietario;//nombre del propietario

};

class TableroControl{
   public:
 
    /** Va a inicializar la posicion de los jugadores*/
     int IniciarPosiciones();

  
    /** Va a setear la cantidad de casillas que se va a mover el jugador*/
     int TirarDados();
          

};
