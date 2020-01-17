#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include "bankfunctions.h"
#include <vector>
using namespace std;

///////////////////////                    METODOS PARA JUGADOR         //////////////////////////////////
void Jugador::InscribeJugador(string nombre){
	this->Nombre=nombre;
	}

void Jugador::InscribirFicha(string ficha){
	this->ficha=ficha;
	}
	
void Jugador::DarDineroInicial(){
	this->_CuentaDeDinero=1000;
	}
	
void Jugador::RebajarDineroPorMulta(int multa){
	this->_CuentaDeDinero=  this->_CuentaDeDinero - multa;;
	}
	
void Jugador::RebajarDineroPorCompra(int valorpropiedad){
	 this->_CuentaDeDinero= this->_CuentaDeDinero - valorpropiedad;
	}
	
void Jugador::SumarDineroCobrado(int ganancia1){
	 this->_CuentaDeDinero= this->_CuentaDeDinero + ganancia1;
	}
	
void Jugador::SumarDineroPorPasarPorInicio(){
 	this->_CuentaDeDinero= this->_CuentaDeDinero + 200;
	}
	
void Jugador::CambiarPosicion(int dados){
	this->Posicion= this->Posicion + dados;
	if(this->Posicion>=36){//pasa por el inicio
		this->SumarDineroPorPasarPorInicio();
		this->Posicion= this->Posicion-36;
		}
	}
string Jugador::DaNombre(){
	string nom = this->Nombre;
	return nom;
	}

//////////////////////////////////////////FIN METODOS JUGADOR///////////////////////////////////////////


///////////////////////                   METODOS PARA CASILLA         ///////////////////////////////////
 void Casilla::DaNombreALaCasillayNumero(string nombre, int numero){
	  this->nombredecasilla = nombre;
	  this->numero= numero;
	 }
	 
void Casilla::InicializarPropietario(){
	this->propietario= false;
	}
	
void Casilla::InicializarCosto(int costo){
	this->valordepropiedad =costo;
	}

void Casilla::InicializarMulta(int multa){
	this->multa =multa;
	}
	
void Casilla::AgregarPropietario(string nombre){
	this->propietario= true;
	this->nombredelpropietario= nombre;
	}


//////////////////////////////////////////FIN METODOS CASILLA//////////////////////////////////////////////

////////////////////////////////////////METODOS PARA TABLEROCONTROL////////////////////////////////////////
int TableroControl::IniciarPosiciones(){
	  int posicioncero=0;
      return posicioncero;
	 }
	 
int TableroControl::TirarDados(){
    srand(time(NULL));
    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    int dados= 2+rand()%(13-2); 
 
    
    return dados;
    }


//////////////////////////////////////FIN METODOS TABLEROCONTROL///////////////////////////////////////////




  

int main(){
 TableroControl Tablero;
 Jugador jugador1;
 Jugador jugador2;
 Jugador jugador3;
 Jugador jugador4;
 Casilla Casilla1;
 Casilla Casilla2;
 Casilla Casilla3;
 Casilla Casilla4;
 Casilla Casilla5;
 Casilla Casilla6;
 Casilla Casilla7;
 Casilla Casilla8;
 Casilla Casilla9;
 Casilla Casilla10;
 Casilla Casilla11;
 Casilla Casilla12;
 Casilla Casilla13;
 Casilla Casilla14;
 Casilla Casilla15;
 Casilla Casilla16;
 Casilla Casilla17;
 Casilla Casilla18;
 Casilla Casilla19;
 Casilla Casilla20;
 Casilla Casilla21;
 Casilla Casilla22;
 Casilla Casilla23;
 Casilla Casilla24;
 Casilla Casilla25;
 Casilla Casilla26;
 Casilla Casilla27;
 Casilla Casilla28;
 Casilla Casilla29;
 Casilla Casilla30;
 Casilla Casilla31;
 Casilla Casilla32;
 Casilla Casilla33;
 Casilla Casilla34;
 Casilla Casilla35;
 Casilla Casilla36;
 
 Casilla1.DaNombreALaCasillayNumero("San Jose",1);
 Casilla2.DaNombreALaCasillayNumero("Desamparados",2);
 Casilla3.DaNombreALaCasillayNumero("Montes de Oca",3);
 Casilla4.DaNombreALaCasillayNumero("Curriabat",4);
 Casilla5.DaNombreALaCasillayNumero("Hatillos",5);
 Casilla6.DaNombreALaCasillayNumero("ICE",6);
 Casilla7.DaNombreALaCasillayNumero("Cartago",7);
 Casilla8.DaNombreALaCasillayNumero("Tres Rios",8);
 Casilla9.DaNombreALaCasillayNumero("Turrialba",9);
 Casilla10.DaNombreALaCasillayNumero("AyA",10);
 Casilla11.DaNombreALaCasillayNumero("Limon",11);
 Casilla12.DaNombreALaCasillayNumero("Puerto Viejo",12);
 Casilla13.DaNombreALaCasillayNumero("Cahuita",13);
 Casilla14.DaNombreALaCasillayNumero("Autopistas del Sol",14);
 Casilla15.DaNombreALaCasillayNumero("Puntarenas",15);
 Casilla16.DaNombreALaCasillayNumero("Manuel Antonio",16);
 Casilla17.DaNombreALaCasillayNumero("Montezuma",17);
 Casilla18.DaNombreALaCasillayNumero("Jaco",18);
 Casilla19.DaNombreALaCasillayNumero("Alajuela",19);
 Casilla20.DaNombreALaCasillayNumero("San Ramon",20);
 Casilla21.DaNombreALaCasillayNumero("Poas",21);
 Casilla22.DaNombreALaCasillayNumero("Grecia",22);
 Casilla23.DaNombreALaCasillayNumero("Impuestos de la Renta",23);
 Casilla24.DaNombreALaCasillayNumero("Heredia",24);
 Casilla25.DaNombreALaCasillayNumero("San Rafael",25);
 Casilla26.DaNombreALaCasillayNumero("Barva",26);
 Casilla27.DaNombreALaCasillayNumero("San Joaquin",27);
 Casilla28.DaNombreALaCasillayNumero("San Isidro",28);
 Casilla29.DaNombreALaCasillayNumero("Seguro Social",29);
 Casilla30.DaNombreALaCasillayNumero("Guanacaste",30);
 Casilla31.DaNombreALaCasillayNumero("Liberia",31);
 Casilla32.DaNombreALaCasillayNumero("Golfito",32);
 Casilla33.DaNombreALaCasillayNumero("Nicoya",33);
 Casilla34.DaNombreALaCasillayNumero("Playa Tamarindo",34);
 Casilla35.DaNombreALaCasillayNumero("Playa Conchal",35);
 Casilla36.DaNombreALaCasillayNumero("IVA",36);
 ///
 Casilla1.InicializarPropietario();
 Casilla2.InicializarPropietario();
 Casilla3.InicializarPropietario();
 Casilla4.InicializarPropietario();
 Casilla5.InicializarPropietario();
 Casilla6.InicializarPropietario();
 Casilla7.InicializarPropietario();
 Casilla8.InicializarPropietario();
 Casilla9.InicializarPropietario();
 Casilla10.InicializarPropietario();
 Casilla11.InicializarPropietario();
 Casilla12.InicializarPropietario();
 Casilla13.InicializarPropietario();
 Casilla14.InicializarPropietario();
 Casilla5.InicializarPropietario();
 Casilla16.InicializarPropietario(); 
 Casilla17.InicializarPropietario();
 Casilla18.InicializarPropietario();
 Casilla19.InicializarPropietario();
 Casilla20.InicializarPropietario();
 Casilla21.InicializarPropietario();
 Casilla22.InicializarPropietario();
 Casilla23.InicializarPropietario();
 Casilla24.InicializarPropietario();
 Casilla25.InicializarPropietario();
 Casilla26.InicializarPropietario();
 Casilla27.InicializarPropietario();
 Casilla28.InicializarPropietario();
 Casilla29.InicializarPropietario();
 Casilla30.InicializarPropietario();
 Casilla31.InicializarPropietario();
 Casilla32.InicializarPropietario();
 Casilla33.InicializarPropietario();
 Casilla34.InicializarPropietario();
 Casilla35.InicializarPropietario();
 Casilla36.InicializarPropietario();
   Casilla1.InicializarCosto(700);
 Casilla2.InicializarCosto(450);
 Casilla3.InicializarCosto(650);
 Casilla4.InicializarCosto(500);
 Casilla5.InicializarCosto(450);
 Casilla6.InicializarCosto(700);
 Casilla7.InicializarCosto(550);
 Casilla8.InicializarCosto(500);
 Casilla9.InicializarCosto(400);
 Casilla10.InicializarCosto(550);
 Casilla11.InicializarCosto(600);
 Casilla12.InicializarCosto(550);
 Casilla13.InicializarCosto(325);
 // caislla 14 es de impuestos, no se compra
 Casilla15.InicializarCosto(600);
 Casilla16.InicializarCosto(425); 
 Casilla17.InicializarCosto(415);
 Casilla18.InicializarCosto(400);
 Casilla19.InicializarCosto(650);
 Casilla20.InicializarCosto(400);
 Casilla21.InicializarCosto(450);
 Casilla22.InicializarCosto(375);
 // caislla 23 es de impuestos, no se compra
 Casilla24.InicializarCosto(625);
 Casilla25.InicializarCosto(420);
 Casilla26.InicializarCosto(415);
 Casilla27.InicializarCosto(400);
 Casilla28.InicializarCosto(420);
 // caislla 29 es de impuestos, no se compra
 Casilla30.InicializarCosto(600);
 Casilla31.InicializarCosto(500);
 Casilla32.InicializarCosto(500);
 Casilla33.InicializarCosto(450);
 Casilla34.InicializarCosto(400);
 Casilla35.InicializarCosto(475);
 // caislla 36 es de impuestos, no se compra
 Casilla1.InicializarMulta(150);
 Casilla2.InicializarMulta(90);
 Casilla3.InicializarMulta(90);
 Casilla4.InicializarMulta(90);
 Casilla5.InicializarMulta(90);
 Casilla6.InicializarMulta(30);
 Casilla7.InicializarMulta(130);
 Casilla8.InicializarMulta(60);
 Casilla9.InicializarMulta(40);
 Casilla10.InicializarMulta(30);
 Casilla11.InicializarMulta(100);
 Casilla12.InicializarMulta(80);
 Casilla13.InicializarMulta(75);
 Casilla14.InicializarMulta(200);
 Casilla15.InicializarMulta(100);
 Casilla16.InicializarMulta(80); 
 Casilla17.InicializarMulta(80);
 Casilla18.InicializarMulta(70);
 Casilla19.InicializarMulta(130);
 Casilla20.InicializarMulta(60);
 Casilla21.InicializarMulta(75);
 Casilla22.InicializarMulta(60);
 Casilla23.InicializarMulta(300);
 Casilla24.InicializarMulta(100);
 Casilla25.InicializarMulta(70);
 Casilla26.InicializarMulta(70);
 Casilla27.InicializarMulta(75);
 Casilla28.InicializarMulta(70);
 Casilla29.InicializarMulta(300);
 Casilla30.InicializarMulta(100);
 Casilla31.InicializarMulta(90);
 Casilla32.InicializarMulta(90);
 Casilla33.InicializarMulta(60);
 Casilla34.InicializarMulta(50);
 Casilla35.InicializarMulta(50);
 Casilla36.InicializarMulta(200);
 cout << "Ingrese el nombre del jugador 1:" << "\n";
 cin >> jugador1.Nombre;
 cout << "Hola " << jugador1.Nombre << " ingrese su caracter de ficha: ""\n";
 cin >> jugador1.ficha;
 
 cout << "Ingrese el nombre del jugador 2:" << "\n";
 cin >> jugador2.Nombre;
 while(jugador1.Nombre==jugador2.Nombre){
	  cout << "No pueden haber 2 o mas jugadores con exactamente el mismo nombre, puede agregar algo extra a su nombre si quiere: " <<"\n";
	  cin >> jugador2.Nombre;
	 }
  cout << "Hola " << jugador2.Nombre << " ingrese su caracter de ficha: ""\n";
 cin >> jugador2.ficha;
while(jugador1.ficha==jugador2.ficha){
	  cout << "Ha ingresado un caracter ya utilizado, ingrese uno nuevo ""\n";
	  cin >> jugador2.ficha;
	 }
	 
 cout << "Ingrese el nombre del jugador 3:" << "\n";
 cin >> jugador3.Nombre;
  while(jugador3.Nombre==jugador1.Nombre || jugador3.Nombre==jugador2.Nombre){
	  cout << "No pueden haber 2 o mas jugadores con exactamente el mismo nombre, puede agregar algo extra a su nombre si quiere: " <<"\n";
	  cin >> jugador3.Nombre;
	 }
 cout << "Hola " << jugador3.Nombre << " ingrese su caracter de ficha: ""\n";
 cin >> jugador3.ficha;
 while(jugador3.ficha==jugador1.ficha || jugador3.ficha==jugador2.ficha){
	  cout << "Ha ingresado un caracter ya utilizado, ingrese uno nuevo ""\n";
	  cin >> jugador3.ficha;
	 }
	 
cout << "Ingrese el nombre del jugador 4:" << "\n";
cin >> jugador4.Nombre;
while(jugador4.Nombre==jugador1.Nombre || jugador4.Nombre==jugador2.Nombre || jugador4.Nombre==jugador3.Nombre){
    cout << "No pueden haber 2 o mas jugadores con exactamente el mismo nombre, puede agregar algo extra a su nombre si quiere: " <<"\n";
    cin >> jugador4.ficha;
	 }
cout << "Hola " << jugador4.Nombre << " ingrese su caracter de ficha: ""\n";
cin >> jugador4.ficha;
while(jugador4.ficha==jugador1.ficha || jugador4.ficha==jugador2.ficha || jugador4.ficha==jugador3.ficha){
	  cout << "Ha ingresado un caracter ya utilizado, ingrese uno nuevo ""\n";
	  cin >> jugador4.ficha;
	 }


jugador1.DarDineroInicial();
jugador2.DarDineroInicial();
jugador3.DarDineroInicial();
jugador4.DarDineroInicial();

jugador1.Posicion=Tablero.IniciarPosiciones();
jugador2.Posicion=Tablero.IniciarPosiciones();
jugador3.Posicion=Tablero.IniciarPosiciones();
jugador4.Posicion=Tablero.IniciarPosiciones();

//vector de turno (orden jugado1,jugador2,jugador3,jugador4) por simplicidad
   vector<string> vectorturnos;
   vectorturnos.push_back(jugador1.Nombre);
   vectorturnos.push_back(jugador2.Nombre);
   vectorturnos.push_back(jugador3.Nombre);
   vectorturnos.push_back(jugador4.Nombre);
   
  
  
  
  
  
  
  
  
   bool findeljuego=false;//se convierte en true una vez todos los 4 jugadores han sido eliminados
   bool vidajug1=true;
   bool vidajug2=true;
   bool vidajug3=true;
   bool vidajug4=true;
   
   cout << "El juego ha iniciado" << "\n";
   while(findeljuego==false){
	   
	   
	   ///////////////////////////////////////////////////////////////////////////turno de jugador1
  if(jugador1._CuentaDeDinero>=0  && vidajug1==true){//puede jugar jug1
	   cout <<"El turno es de " << jugador1.Nombre <<" tire los dados usando <t>" << "\n";
	   string t;
	   cin >> t;
	   while(t!="t"){//t de tirar dados
		    cout << "Tiene que ingresar t para tirar los dados" << "\n";
		    cin >> t;
		   }
	   int valordadosjug1= Tablero.TirarDados();
	   cout << "El valor obtenido por los dados es: " << valordadosjug1 << "\n";
	   jugador1.CambiarPosicion(valordadosjug1);
	   cout << "Por lo que su posicion ahora es: " << jugador1.Posicion <<"\n";
	  //////////////////////casilla1
	   if(jugador1.Posicion==Casilla1.numero){//primero de los 36 if para ver en que casilla cayo
		   if(Casilla1.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla1.nombredecasilla <<" cuyo valor es "<<Casilla1.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla1.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla1.valordepropiedad);
						   Casilla1.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla1.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla1.multa);
			    if(Casilla1.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla1.multa);
				   }
			    if(Casilla1.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla1.multa);
				   }
				if(Casilla1.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla1.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
     //////////////casilla2
        if(jugador1.Posicion==Casilla2.numero){
		   if(Casilla2.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla2.nombredecasilla <<" cuyo valor es "<<Casilla2.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla2.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla2.valordepropiedad);
						   Casilla2.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla2.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla2.multa);
			    if(Casilla2.nombredelpropietario==jugador2.Nombre){
				   cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla2.multa);
				   }
			    if(Casilla2.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla2.multa);
				   }
				if(Casilla2.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla2.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
	////////////////////////casilla3
	   if(jugador1.Posicion==Casilla3.numero){
		   if(Casilla3.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla3.nombredecasilla <<" cuyo valor es "<<Casilla3.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla3.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla3.valordepropiedad);
						   Casilla3.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla3.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla3.multa);
			    if(Casilla3.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla3.multa);
				   }
			    if(Casilla3.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla3.multa);
				   }
				if(Casilla3.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla3.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		/////////////////////casilla4
        if(jugador1.Posicion==Casilla4.numero){
		   if(Casilla4.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla4.nombredecasilla <<" cuyo valor es "<<Casilla4.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla4.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla4.valordepropiedad);
						   Casilla4.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla4.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla4.multa);
			    if(Casilla4.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla4.multa);
				   }
			    if(Casilla4.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla4.multa);
				   }
				if(Casilla4.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla4.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
	   /////////////////casilla5
	     if(jugador1.Posicion==Casilla5.numero){
		   if(Casilla5.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla5.nombredecasilla <<" cuyo valor es "<<Casilla5.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla5.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla5.valordepropiedad);
						   Casilla5.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla5.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla5.multa);
			    if(Casilla5.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla5.multa);
				   }
			    if(Casilla5.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla5.multa);
				   }
				if(Casilla5.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla5.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla6
	   if(jugador1.Posicion==Casilla6.numero){
		   if(Casilla6.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla6.nombredecasilla <<" cuyo valor es "<<Casilla6.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla6.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla6.valordepropiedad);
						   Casilla6.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla6.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla6.multa);
			    if(Casilla6.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla6.multa);
				   }
			    if(Casilla6.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla6.multa);
				   }
				if(Casilla6.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla6.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		/////////////casilla7
	   if(jugador1.Posicion==Casilla7.numero){
		   if(Casilla7.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla7.nombredecasilla <<" cuyo valor es "<<Casilla7.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla7.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla7.valordepropiedad);
						   Casilla7.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla7.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla7.multa);
			    if(Casilla7.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla7.multa);
				   }
			    if(Casilla7.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla7.multa);
				   }
				if(Casilla7.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla7.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
	  ////////////casilla8
	     if(jugador1.Posicion==Casilla8.numero){
		   if(Casilla8.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla8.nombredecasilla <<" cuyo valor es "<<Casilla8.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla8.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla8.valordepropiedad);
						   Casilla8.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla8.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla8.multa);
			    if(Casilla8.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla8.multa);
				   }
			    if(Casilla8.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla8.multa);
				   }
				if(Casilla8.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla8.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
	/////////////////////casilla9
	   if(jugador1.Posicion==Casilla9.numero){
		   if(Casilla9.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla9.nombredecasilla <<" cuyo valor es "<<Casilla9.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla9.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla9.valordepropiedad);
						   Casilla9.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla9.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla9.multa);
			    if(Casilla9.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla9.multa);
				   }
			    if(Casilla9.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla9.multa);
				   }
				if(Casilla9.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla9.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
	  //////////casilla 10
	    if(jugador1.Posicion==Casilla10.numero){
		   if(Casilla10.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla10.nombredecasilla <<" cuyo valor es "<<Casilla10.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla10.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla10.valordepropiedad);
						   Casilla10.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla10.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla10.multa);
			    if(Casilla10.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla10.multa);
				   }
			    if(Casilla10.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla10.multa);
				   }
				if(Casilla10.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla10.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
	  ///////////casilla11
	     if(jugador1.Posicion==Casilla11.numero){
		   if(Casilla11.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla11.nombredecasilla <<" cuyo valor es "<<Casilla11.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla11.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla11.valordepropiedad);
						   Casilla11.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla11.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla11.multa);
			    if(Casilla11.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla11.multa);
				   }
			    if(Casilla11.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla11.multa);
				   }
				if(Casilla11.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla11.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
	/////////////casilla12
	   if(jugador1.Posicion==Casilla12.numero){
		   if(Casilla12.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla12.nombredecasilla <<" cuyo valor es "<<Casilla12.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla12.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla12.valordepropiedad);
						   Casilla12.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla12.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla12.multa);
			    if(Casilla12.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla12.multa);
				   }
			    if(Casilla12.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla12.multa);
				   }
				if(Casilla12.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla12.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
	   /////////casilla13
	     if(jugador1.Posicion==Casilla13.numero){
		   if(Casilla13.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla13.nombredecasilla <<" cuyo valor es "<<Casilla13.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla13.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla13.valordepropiedad);
						   Casilla13.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla13.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla13.multa);
			    if(Casilla13.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla13.multa);
				   }
			    if(Casilla13.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla13.multa);
				   }
				if(Casilla13.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla13.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		////////casilla14         especial (impuestos)
	     if(jugador1.Posicion==Casilla14.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla14.nombredecasilla<< "> se le cobrara: "<<Casilla14.multa<<"\n";
			 jugador1.RebajarDineroPorMulta(Casilla14.multa);
		    
		   }
		 ////////////casilla15
	   if(jugador1.Posicion==Casilla15.numero){
		   if(Casilla15.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla15.nombredecasilla <<" cuyo valor es "<<Casilla15.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla15.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla15.valordepropiedad);
						   Casilla15.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla15.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla15.multa);
			    if(Casilla15.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla15.multa);
				   }
			    if(Casilla15.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla15.multa);
				   }
				if(Casilla15.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla15.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		   ////////////casilla16
		    if(jugador1.Posicion==Casilla16.numero){
		   if(Casilla16.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla16.nombredecasilla <<" cuyo valor es "<<Casilla16.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla16.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla16.valordepropiedad);
						   Casilla16.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla16.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla16.multa);
			    if(Casilla16.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla16.multa);
				   }
			    if(Casilla16.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla16.multa);
				   }
				if(Casilla16.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla16.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		 ////////////casilla17
		   if(jugador1.Posicion==Casilla17.numero){
		   if(Casilla17.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla17.nombredecasilla <<" cuyo valor es "<<Casilla17.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla17.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla17.valordepropiedad);
						   Casilla17.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla17.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla17.multa);
			    if(Casilla17.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla17.multa);
				   }
			    if(Casilla17.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla17.multa);
				   }
				if(Casilla17.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla17.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		 /////////////////casilla18
	    if(jugador1.Posicion==Casilla18.numero){
		   if(Casilla18.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla18.nombredecasilla <<" cuyo valor es "<<Casilla18.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla18.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla18.valordepropiedad);
						   Casilla18.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla18.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla18.multa);
			    if(Casilla18.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla18.multa);
				   }
			    if(Casilla18.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla18.multa);
				   }
				if(Casilla18.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla18.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		 //////////casilla19
	      if(jugador1.Posicion==Casilla19.numero){
		   if(Casilla19.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla19.nombredecasilla <<" cuyo valor es "<<Casilla19.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla19.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla19.valordepropiedad);
						   Casilla19.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla19.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla19.multa);
			    if(Casilla19.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla19.multa);
				   }
			    if(Casilla19.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla19.multa);
				   }
				if(Casilla19.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla19.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		 ///////casilla20
		   if(jugador1.Posicion==Casilla20.numero){
		   if(Casilla20.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla20.nombredecasilla <<" cuyo valor es "<<Casilla20.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla20.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla20.valordepropiedad);
						   Casilla20.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla20.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla20.multa);
			    if(Casilla20.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla20.multa);
				   }
			    if(Casilla20.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla20.multa);
				   }
				if(Casilla20.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla20.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla21
		    if(jugador1.Posicion==Casilla21.numero){
		   if(Casilla21.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla21.nombredecasilla <<" cuyo valor es "<<Casilla21.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla21.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla21.valordepropiedad);
						   Casilla21.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla21.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla21.multa);
			    if(Casilla21.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla21.multa);
				   }
			    if(Casilla21.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla21.multa);
				   }
				if(Casilla21.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla21.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  ////////////////casilla22
		    if(jugador1.Posicion==Casilla22.numero){
		   if(Casilla22.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla22.nombredecasilla <<" cuyo valor es "<<Casilla22.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla22.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla22.valordepropiedad);
						   Casilla22.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla22.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla22.multa);
			    if(Casilla22.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla22.multa);
				   }
			    if(Casilla22.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla22.multa);
				   }
				if(Casilla22.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla22.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  /////////////////casilla23       especial (impuestos)
		   if(jugador1.Posicion==Casilla23.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla23.nombredecasilla<< "> se le cobrara: "<<Casilla23.multa<<"\n";
			 jugador1.RebajarDineroPorMulta(Casilla23.multa);
		    
		   }
		   ///////////////casilla24
		       if(jugador1.Posicion==Casilla24.numero){
		   if(Casilla24.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla24.nombredecasilla <<" cuyo valor es "<<Casilla24.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla24.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla24.valordepropiedad);
						   Casilla24.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla24.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla24.multa);
			    if(Casilla24.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla24.multa);
				   }
			    if(Casilla24.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla24.multa);
				   }
				if(Casilla24.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla24.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  ///////////casilla25
		      if(jugador1.Posicion==Casilla25.numero){
		   if(Casilla25.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla25.nombredecasilla <<" cuyo valor es "<<Casilla25.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla25.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla25.valordepropiedad);
						   Casilla25.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla25.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla25.multa);
			    if(Casilla25.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla25.multa);
				   }
			    if(Casilla25.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla25.multa);
				   }
				if(Casilla25.nombredelpropietario==jugador4.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla25.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla26
		      if(jugador1.Posicion==Casilla26.numero){
		   if(Casilla26.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla26.nombredecasilla <<" cuyo valor es "<<Casilla26.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla26.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla26.valordepropiedad);
						   Casilla26.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla26.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla26.multa);
			    if(Casilla26.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla26.multa);
				   }
			    if(Casilla26.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla26.multa);
				   }
				if(Casilla26.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla26.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  ///////////////casilla27
		     if(jugador1.Posicion==Casilla27.numero){
		   if(Casilla27.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla27.nombredecasilla <<" cuyo valor es "<<Casilla27.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla27.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla27.valordepropiedad);
						   Casilla27.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla27.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla27.multa);
			    if(Casilla27.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla27.multa);
				   }
			    if(Casilla27.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla27.multa);
				   }
				if(Casilla27.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla27.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  //////////casilla28
		     if(jugador1.Posicion==Casilla28.numero){
		   if(Casilla28.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla28.nombredecasilla <<" cuyo valor es "<<Casilla28.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla28.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla28.valordepropiedad);
						   Casilla28.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla28.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla28.multa);
			    if(Casilla28.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla28.multa);
				   }
			    if(Casilla28.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla28.multa);
				   }
				if(Casilla28.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla28.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  ///////////////casilla29
		   if(jugador1.Posicion==Casilla29.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla29.nombredecasilla<< "> se le cobrara: "<<Casilla29.multa<<"\n";
			 jugador1.RebajarDineroPorMulta(Casilla29.multa);
		    
		   }
		 //////////casilla30
		      if(jugador1.Posicion==Casilla30.numero){
		   if(Casilla30.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla30.nombredecasilla <<" cuyo valor es "<<Casilla30.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla30.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla30.valordepropiedad);
						   Casilla30.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla30.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla30.multa);
			    if(Casilla30.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla30.multa);
				   }
			    if(Casilla30.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla30.multa);
				   }
				if(Casilla30.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla30.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		   //////////casilla31
		       if(jugador1.Posicion==Casilla31.numero){
		   if(Casilla31.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla31.nombredecasilla <<" cuyo valor es "<<Casilla31.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla31.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla31.valordepropiedad);
						   Casilla31.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla31.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla31.multa);
			    if(Casilla31.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla31.multa);
				   }
			    if(Casilla31.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla31.multa);
				   }
				if(Casilla31.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla31.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  //////////casilla32
		      if(jugador1.Posicion==Casilla32.numero){
		   if(Casilla32.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla32.nombredecasilla <<" cuyo valor es "<<Casilla32.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla32.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla32.valordepropiedad);
						   Casilla32.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla32.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla32.multa);
			    if(Casilla32.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla32.multa);
				   }
			    if(Casilla32.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla32.multa);
				   }
				if(Casilla32.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla32.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   } 
		  ////////////casilla33
		       if(jugador1.Posicion==Casilla33.numero){
		   if(Casilla33.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla33.nombredecasilla <<" cuyo valor es "<<Casilla33.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla33.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla33.valordepropiedad);
						   Casilla33.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla33.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla33.multa);
			    if(Casilla33.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla33.multa);
				   }
			    if(Casilla33.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla33.multa);
				   }
				if(Casilla33.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla33.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		   ///////////////////casilla34
		       if(jugador1.Posicion==Casilla34.numero){
		   if(Casilla34.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla34.nombredecasilla <<" cuyo valor es "<<Casilla34.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla34.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla34.valordepropiedad);
						   Casilla34.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla34.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla34.multa);
			    if(Casilla34.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla34.multa);
				   }
			    if(Casilla34.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla34.multa);
				   }
				if(Casilla34.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla34.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  ////////////casilla35
		      if(jugador1.Posicion==Casilla35.numero){
		   if(Casilla35.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla35.nombredecasilla <<" cuyo valor es "<<Casilla35.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador1._CuentaDeDinero>=Casilla35.valordepropiedad){//puede comprar?
						   jugador1.RebajarDineroPorCompra(Casilla35.valordepropiedad);
						   Casilla35.AgregarPropietario(jugador1.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador1.Nombre!=Casilla35.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador1.RebajarDineroPorMulta(Casilla35.multa);
			    if(Casilla35.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla35.multa);
				   }
			    if(Casilla35.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla35.multa);
				   }
				if(Casilla35.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla35.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador1.Nombre << "\n";
				 }
			   }
		   }
		  ////////////////casilla36
		   if(jugador1.Posicion==Casilla36.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla36.nombredecasilla<< "> se le cobrara: "<<Casilla36.multa<<"\n";
			 jugador1.RebajarDineroPorMulta(Casilla36.multa);
		    
		   }
		  ////////////
		  
     }
     else{//muere y ya no vuelve a jugar
			 vidajug1=false;
	 }
	
	 
	   
	  	   
	   
	   ////////////////////////////////////////////////////////////////////////////////////////////fin del turno para jugador1
	  
	   //////////////////////////////////////////////////////////////////////////////////inicio del turno para jugador2
	    if(jugador2._CuentaDeDinero>=0  && vidajug2==true){//puede jugar jug2
	   cout <<"El turno es de " << jugador2.Nombre <<" tire los dados usando <t>" << "\n";
	   string t;
	   cin >> t;
	   while(t!="t"){//t de tirar dados
		    cout << "Tiene que ingresar t para tirar los dados" << "\n";
		    cin >> t;
		   }
	   int valordadosjug2= Tablero.TirarDados();
	   cout << "El valor obtenido por los dados es: " << valordadosjug2 << "\n";
	   jugador2.CambiarPosicion(valordadosjug2);
	   cout << "Por lo que su posicion ahora es: " << jugador2.Posicion <<"\n";
	  //////////////////////casilla1
	   if(jugador2.Posicion==Casilla1.numero){//primero de los 36 if para ver en que casilla cayo
		   if(Casilla1.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla1.nombredecasilla <<" cuyo valor es "<<Casilla1.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla1.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla1.valordepropiedad);
						   Casilla1.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla1.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla1.multa);
			    if(Casilla1.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla1.multa);
				   }
			    if(Casilla1.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla1.multa);
				   }
				if(Casilla1.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla1.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
     //////////////casilla2
        if(jugador2.Posicion==Casilla2.numero){
		   if(Casilla2.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla2.nombredecasilla <<" cuyo valor es "<<Casilla2.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla2.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla2.valordepropiedad);
						   Casilla2.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla2.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla2.multa);
			    if(Casilla2.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla2.multa);
				   }
			    if(Casilla2.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla2.multa);
				   }
				if(Casilla2.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla2.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
	////////////////////////casilla3
	   if(jugador2.Posicion==Casilla3.numero){
		   if(Casilla3.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla3.nombredecasilla <<" cuyo valor es "<<Casilla3.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla3.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla3.valordepropiedad);
						   Casilla3.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla3.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla3.multa);
			    if(Casilla3.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla3.multa);
				   }
			    if(Casilla3.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla3.multa);
				   }
				if(Casilla3.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla3.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		/////////////////////casilla4
        if(jugador2.Posicion==Casilla4.numero){
		   if(Casilla4.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla4.nombredecasilla <<" cuyo valor es "<<Casilla4.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla4.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla4.valordepropiedad);
						   Casilla4.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla4.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla4.multa);
			    if(Casilla4.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla4.multa);
				   }
			    if(Casilla4.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla4.multa);
				   }
				if(Casilla4.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla4.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
	   /////////////////casilla5
	     if(jugador2.Posicion==Casilla5.numero){
		   if(Casilla5.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla5.nombredecasilla <<" cuyo valor es "<<Casilla5.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla5.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla5.valordepropiedad);
						   Casilla5.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla5.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla5.multa);
			    if(Casilla5.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla5.multa);
				   }
			    if(Casilla5.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla5.multa);
				   }
				if(Casilla5.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla5.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla6
	   if(jugador2.Posicion==Casilla6.numero){
		   if(Casilla6.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla6.nombredecasilla <<" cuyo valor es "<<Casilla6.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla6.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla6.valordepropiedad);
						   Casilla6.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla6.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla6.multa);
			    if(Casilla6.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla6.multa);
				   }
			    if(Casilla6.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla6.multa);
				   }
				if(Casilla6.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla6.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		/////////////casilla7
	   if(jugador2.Posicion==Casilla7.numero){
		   if(Casilla7.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla7.nombredecasilla <<" cuyo valor es "<<Casilla7.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla7.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla7.valordepropiedad);
						   Casilla7.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla7.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla7.multa);
			    if(Casilla7.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla7.multa);
				   }
			    if(Casilla7.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla7.multa);
				   }
				if(Casilla7.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla7.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
	  ////////////casilla8
	     if(jugador2.Posicion==Casilla8.numero){
		   if(Casilla8.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla8.nombredecasilla <<" cuyo valor es "<<Casilla8.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla8.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla8.valordepropiedad);
						   Casilla8.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla8.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla8.multa);
			    if(Casilla8.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla8.multa);
				   }
			    if(Casilla8.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla8.multa);
				   }
				if(Casilla8.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla8.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
	/////////////////////casilla9
	   if(jugador2.Posicion==Casilla9.numero){
		   if(Casilla9.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla9.nombredecasilla <<" cuyo valor es "<<Casilla9.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla9.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla9.valordepropiedad);
						   Casilla9.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla9.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla9.multa);
			    if(Casilla9.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla9.multa);
				   }
			    if(Casilla9.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla9.multa);
				   }
				if(Casilla9.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla9.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
	  //////////casilla 10
	    if(jugador2.Posicion==Casilla10.numero){
		   if(Casilla10.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla10.nombredecasilla <<" cuyo valor es "<<Casilla10.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla10.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla10.valordepropiedad);
						   Casilla10.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla10.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla10.multa);
			    if(Casilla10.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla10.multa);
				   }
			    if(Casilla10.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla10.multa);
				   }
				if(Casilla10.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla10.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
	  ///////////casilla11
	     if(jugador2.Posicion==Casilla11.numero){
		   if(Casilla11.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla11.nombredecasilla <<" cuyo valor es "<<Casilla11.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla11.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla11.valordepropiedad);
						   Casilla11.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla11.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla11.multa);
			    if(Casilla11.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla11.multa);
				   }
			    if(Casilla11.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla11.multa);
				   }
				if(Casilla11.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla11.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
	/////////////casilla12
	   if(jugador2.Posicion==Casilla12.numero){
		   if(Casilla12.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla12.nombredecasilla <<" cuyo valor es "<<Casilla12.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla12.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla12.valordepropiedad);
						   Casilla12.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla12.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla12.multa);
			    if(Casilla12.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla12.multa);
				   }
			    if(Casilla12.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla12.multa);
				   }
				if(Casilla12.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla12.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
	   /////////casilla13
	     if(jugador2.Posicion==Casilla13.numero){
		   if(Casilla13.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla13.nombredecasilla <<" cuyo valor es "<<Casilla13.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla13.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla13.valordepropiedad);
						   Casilla13.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla13.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla13.multa);
			    if(Casilla13.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla13.multa);
				   }
			    if(Casilla13.nombredelpropietario==jugador3.Nombre){
				   cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla13.multa);
				   }
				if(Casilla13.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla13.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		////////casilla14         especial (impuestos)
	     if(jugador2.Posicion==Casilla14.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla14.nombredecasilla<< "> se le cobrara: "<<Casilla14.multa<<"\n";
			 jugador2.RebajarDineroPorMulta(Casilla14.multa);
		    
		   }
		 ////////////casilla15
	   if(jugador2.Posicion==Casilla15.numero){
		   if(Casilla15.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla15.nombredecasilla <<" cuyo valor es "<<Casilla15.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla15.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla15.valordepropiedad);
						   Casilla15.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla15.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla15.multa);
			    if(Casilla15.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla15.multa);
				   }
			    if(Casilla15.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla15.multa);
				   }
				if(Casilla15.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla15.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		   ////////////casilla16
		    if(jugador2.Posicion==Casilla16.numero){
		   if(Casilla16.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla16.nombredecasilla <<" cuyo valor es "<<Casilla16.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla16.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla16.valordepropiedad);
						   Casilla16.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla16.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla16.multa);
			    if(Casilla16.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla16.multa);
				   }
			    if(Casilla16.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla16.multa);
				   }
				if(Casilla16.nombredelpropietario==jugador4.Nombre){
		           cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla16.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		 ////////////casilla17
		   if(jugador2.Posicion==Casilla17.numero){
		   if(Casilla17.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla17.nombredecasilla <<" cuyo valor es "<<Casilla17.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla17.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla17.valordepropiedad);
						   Casilla17.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla17.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla17.multa);
			    if(Casilla17.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla17.multa);
				   }
			    if(Casilla17.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla17.multa);
				   }
				if(Casilla17.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla17.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		 /////////////////casilla18
	    if(jugador2.Posicion==Casilla18.numero){
		   if(Casilla18.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla18.nombredecasilla <<" cuyo valor es "<<Casilla18.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla18.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla18.valordepropiedad);
						   Casilla18.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla18.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla18.multa);
			    if(Casilla18.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla18.multa);
				   }
			    if(Casilla18.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla18.multa);
				   }
				if(Casilla18.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla18.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		 //////////casilla19
	      if(jugador2.Posicion==Casilla19.numero){
		   if(Casilla19.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla19.nombredecasilla <<" cuyo valor es "<<Casilla19.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla19.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla19.valordepropiedad);
						   Casilla19.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla19.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla19.multa);
			    if(Casilla19.nombredelpropietario==jugador1.Nombre){
				   cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla19.multa);
				   }
			    if(Casilla19.nombredelpropietario==jugador3.Nombre){
				   cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla19.multa);
				   }
				if(Casilla19.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla19.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		 ///////casilla20
		   if(jugador2.Posicion==Casilla20.numero){
		   if(Casilla20.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla20.nombredecasilla <<" cuyo valor es "<<Casilla20.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla20.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla20.valordepropiedad);
						   Casilla20.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla20.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla20.multa);
			    if(Casilla20.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla20.multa);
				   }
			    if(Casilla20.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla20.multa);
				   }
				if(Casilla20.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla20.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla21
		    if(jugador2.Posicion==Casilla21.numero){
		   if(Casilla21.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla21.nombredecasilla <<" cuyo valor es "<<Casilla21.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla21.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla21.valordepropiedad);
						   Casilla21.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla21.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla21.multa);
			    if(Casilla21.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla21.multa);
				   }
			    if(Casilla21.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla21.multa);
				   }
				if(Casilla21.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla21.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  ////////////////casilla22
		    if(jugador2.Posicion==Casilla22.numero){
		   if(Casilla22.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla22.nombredecasilla <<" cuyo valor es "<<Casilla22.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla22.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla22.valordepropiedad);
						   Casilla22.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla22.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla22.multa);
			    if(Casilla22.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla22.multa);
				   }
			    if(Casilla22.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla22.multa);
				   }
				if(Casilla22.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla22.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  /////////////////casilla23       especial (impuestos)
		   if(jugador2.Posicion==Casilla23.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla23.nombredecasilla<< "> se le cobrara: "<<Casilla23.multa<<"\n";
			 jugador2.RebajarDineroPorMulta(Casilla23.multa);
		    
		   }
		   ///////////////casilla24
		       if(jugador2.Posicion==Casilla24.numero){
		   if(Casilla24.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla24.nombredecasilla <<" cuyo valor es "<<Casilla24.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla24.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla24.valordepropiedad);
						   Casilla24.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla24.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla24.multa);
			    if(Casilla24.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla24.multa);
				   }
			    if(Casilla24.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla24.multa);
				   }
				if(Casilla24.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla24.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  ///////////casilla25
		      if(jugador2.Posicion==Casilla25.numero){
		   if(Casilla25.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla25.nombredecasilla <<" cuyo valor es "<<Casilla25.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla25.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla25.valordepropiedad);
						   Casilla25.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla25.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla25.multa);
			    if(Casilla25.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla25.multa);
				   }
			    if(Casilla25.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla25.multa);
				   }
				if(Casilla25.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla25.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla26
		      if(jugador2.Posicion==Casilla26.numero){
		   if(Casilla26.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla26.nombredecasilla <<" cuyo valor es "<<Casilla26.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla26.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla26.valordepropiedad);
						   Casilla26.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla26.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla26.multa);
			    if(Casilla26.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla26.multa);
				   }
			    if(Casilla26.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla26.multa);
				   }
				if(Casilla26.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla26.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  ///////////////casilla27
		     if(jugador2.Posicion==Casilla27.numero){
		   if(Casilla27.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla27.nombredecasilla <<" cuyo valor es "<<Casilla27.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla27.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla27.valordepropiedad);
						   Casilla27.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla27.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla27.multa);
			    if(Casilla27.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla27.multa);
				   }
			    if(Casilla27.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla27.multa);
				   }
				if(Casilla27.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla27.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  //////////casilla28
		     if(jugador2.Posicion==Casilla28.numero){
		   if(Casilla28.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla28.nombredecasilla <<" cuyo valor es "<<Casilla28.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla28.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla28.valordepropiedad);
						   Casilla28.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla28.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla28.multa);
			    if(Casilla28.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla28.multa);
				   }
			    if(Casilla28.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla28.multa);
				   }
				if(Casilla28.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla28.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  ///////////////casilla29
		   if(jugador2.Posicion==Casilla29.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla29.nombredecasilla<< "> se le cobrara: "<<Casilla29.multa<<"\n";
			 jugador2.RebajarDineroPorMulta(Casilla29.multa);
		    
		   }
		 //////////casilla30
		      if(jugador2.Posicion==Casilla30.numero){
		   if(Casilla30.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla30.nombredecasilla <<" cuyo valor es "<<Casilla30.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla30.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla30.valordepropiedad);
						   Casilla30.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla30.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla30.multa);
			    if(Casilla30.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla30.multa);
				   }
			    if(Casilla30.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla30.multa);
				   }
				if(Casilla30.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla30.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		   //////////casilla31
		       if(jugador2.Posicion==Casilla31.numero){
		   if(Casilla31.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla31.nombredecasilla <<" cuyo valor es "<<Casilla31.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla31.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla31.valordepropiedad);
						   Casilla31.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla31.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla31.multa);
			    if(Casilla31.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla31.multa);
				   }
			    if(Casilla31.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla31.multa);
				   }
				if(Casilla31.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla31.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  //////////casilla32
		      if(jugador2.Posicion==Casilla32.numero){
		   if(Casilla32.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla32.nombredecasilla <<" cuyo valor es "<<Casilla32.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla32.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla32.valordepropiedad);
						   Casilla32.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla32.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla32.multa);
			    if(Casilla32.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla32.multa);
				   }
			    if(Casilla32.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla32.multa);
				   }
				if(Casilla32.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla32.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   } 
		  ////////////casilla33
		       if(jugador2.Posicion==Casilla33.numero){
		   if(Casilla33.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla33.nombredecasilla <<" cuyo valor es "<<Casilla33.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla33.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla33.valordepropiedad);
						   Casilla33.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla33.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla33.multa);
			    if(Casilla33.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla33.multa);
				   }
			    if(Casilla33.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla33.multa);
				   }
				if(Casilla33.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla33.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		   ///////////////////casilla34
		       if(jugador2.Posicion==Casilla34.numero){
		   if(Casilla34.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla34.nombredecasilla <<" cuyo valor es "<<Casilla34.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla34.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla34.valordepropiedad);
						   Casilla34.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla34.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla34.multa);
			    if(Casilla34.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla34.multa);
				   }
			    if(Casilla34.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla34.multa);
				   }
				if(Casilla34.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla34.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  ////////////casilla35
		      if(jugador2.Posicion==Casilla35.numero){
		   if(Casilla35.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla35.nombredecasilla <<" cuyo valor es "<<Casilla35.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador2._CuentaDeDinero>=Casilla35.valordepropiedad){//puede comprar?
						   jugador2.RebajarDineroPorCompra(Casilla35.valordepropiedad);
						   Casilla35.AgregarPropietario(jugador2.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador2.Nombre!=Casilla35.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador2.RebajarDineroPorMulta(Casilla35.multa);
			    if(Casilla35.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla35.multa);
				   }
			    if(Casilla35.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla35.multa);
				   }
				if(Casilla35.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla35.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador2.Nombre << "\n";
				 }
			   }
		   }
		  ////////////////casilla36
		   if(jugador2.Posicion==Casilla36.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla36.nombredecasilla<< "> se le cobrara: "<<Casilla36.multa<<"\n";
			 jugador2.RebajarDineroPorMulta(Casilla36.multa);
		    
		   }
		  ////////////
		  
     }
     else{//muere y ya no vuelve a jugar
			 vidajug2=false;
	 }
	   
	   
	   //////////////////////////////////////////////////////////////////////////////////fin del turno para jugador2/////////////////
	   
	   
	   
	   //////////////////////////////////////////////////////////inicio del turno de jugador 3//////////////////////////////////////
	   
	   if(jugador3._CuentaDeDinero>=0  && vidajug3==true){//puede jugar jug3
	   cout <<"El turno es de " << jugador3.Nombre <<" tire los dados usando <t>" << "\n";
	   string t;
	   cin >> t;
	   while(t!="t"){//t de tirar dados
		    cout << "Tiene que ingresar t para tirar los dados" << "\n";
		    cin >> t;
		   }
	   int valordadosjug3= Tablero.TirarDados();
	   cout << "El valor obtenido por los dados es: " << valordadosjug3 << "\n";
	   jugador3.CambiarPosicion(valordadosjug3);
	   cout << "Por lo que su posicion ahora es: " << jugador3.Posicion <<"\n";
	  //////////////////////casilla1
	   if(jugador3.Posicion==Casilla1.numero){//primero de los 36 if para ver en que casilla cayo
		   if(Casilla1.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla1.nombredecasilla <<" cuyo valor es "<<Casilla1.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla1.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla1.valordepropiedad);
						   Casilla1.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla1.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla1.multa);
			    if(Casilla1.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla1.multa);
				   }
			    if(Casilla1.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla1.multa);
				   }
				if(Casilla1.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla1.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
     //////////////casilla2
        if(jugador3.Posicion==Casilla2.numero){
		   if(Casilla2.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla2.nombredecasilla <<" cuyo valor es "<<Casilla2.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla2.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla2.valordepropiedad);
						   Casilla2.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla2.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla2.multa);
			    if(Casilla2.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla2.multa);
				   }
			    if(Casilla2.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla2.multa);
				   }
				if(Casilla2.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla2.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
	////////////////////////casilla3
	   if(jugador3.Posicion==Casilla3.numero){
		   if(Casilla3.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla3.nombredecasilla <<" cuyo valor es "<<Casilla3.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla3.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla3.valordepropiedad);
						   Casilla3.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla3.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla3.multa);
			    if(Casilla3.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla3.multa);
				   }
			    if(Casilla3.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla3.multa);
				   }
				if(Casilla3.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla3.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		/////////////////////casilla4
        if(jugador3.Posicion==Casilla4.numero){
		   if(Casilla4.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla4.nombredecasilla <<" cuyo valor es "<<Casilla4.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla4.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla4.valordepropiedad);
						   Casilla4.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla4.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla4.multa);
			    if(Casilla4.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla4.multa);
				   }
			    if(Casilla4.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla4.multa);
				   }
				if(Casilla4.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla4.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
	   /////////////////casilla5
	     if(jugador3.Posicion==Casilla5.numero){
		   if(Casilla5.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla5.nombredecasilla <<" cuyo valor es "<<Casilla5.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla5.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla5.valordepropiedad);
						   Casilla5.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla5.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla5.multa);
			    if(Casilla5.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla5.multa);
				   }
			    if(Casilla5.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla5.multa);
				   }
				if(Casilla5.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla5.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla6
	   if(jugador3.Posicion==Casilla6.numero){
		   if(Casilla6.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla6.nombredecasilla <<" cuyo valor es "<<Casilla6.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla6.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla6.valordepropiedad);
						   Casilla6.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla6.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla6.multa);
			    if(Casilla6.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla6.multa);
				   }
			    if(Casilla6.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla6.multa);
				   }
				if(Casilla6.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla6.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		/////////////casilla7
	   if(jugador3.Posicion==Casilla7.numero){
		   if(Casilla7.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla7.nombredecasilla <<" cuyo valor es "<<Casilla7.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla7.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla7.valordepropiedad);
						   Casilla7.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla7.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla7.multa);
			    if(Casilla7.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla7.multa);
				   }
			    if(Casilla7.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla7.multa);
				   }
				if(Casilla7.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla7.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
	  ////////////casilla8
	     if(jugador3.Posicion==Casilla8.numero){
		   if(Casilla8.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla8.nombredecasilla <<" cuyo valor es "<<Casilla8.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla8.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla8.valordepropiedad);
						   Casilla8.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla8.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla8.multa);
			    if(Casilla8.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla8.multa);
				   }
			    if(Casilla8.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla8.multa);
				   }
				if(Casilla8.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla8.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
	/////////////////////casilla9
	   if(jugador3.Posicion==Casilla9.numero){
		   if(Casilla9.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla9.nombredecasilla <<" cuyo valor es "<<Casilla9.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla9.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla9.valordepropiedad);
						   Casilla9.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla9.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla9.multa);
			    if(Casilla9.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla9.multa);
				   }
			    if(Casilla9.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla9.multa);
				   }
				if(Casilla9.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla9.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
	  //////////casilla 10
	    if(jugador3.Posicion==Casilla10.numero){
		   if(Casilla10.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla10.nombredecasilla <<" cuyo valor es "<<Casilla10.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla10.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla10.valordepropiedad);
						   Casilla10.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla10.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla10.multa);
			    if(Casilla10.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla10.multa);
				   }
			    if(Casilla10.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla10.multa);
				   }
				if(Casilla10.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla10.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
	  ///////////casilla11
	     if(jugador3.Posicion==Casilla11.numero){
		   if(Casilla11.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla11.nombredecasilla <<" cuyo valor es "<<Casilla11.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla11.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla11.valordepropiedad);
						   Casilla11.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla11.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla11.multa);
			    if(Casilla11.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla11.multa);
				   }
			    if(Casilla11.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla11.multa);
				   }
				if(Casilla11.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla11.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
	/////////////casilla12
	   if(jugador3.Posicion==Casilla12.numero){
		   if(Casilla12.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla12.nombredecasilla <<" cuyo valor es "<<Casilla12.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla12.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla12.valordepropiedad);
						   Casilla12.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla12.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla12.multa);
			    if(Casilla12.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla12.multa);
				   }
			    if(Casilla12.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla12.multa);
				   }
				if(Casilla12.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla12.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
	   /////////casilla13
	     if(jugador3.Posicion==Casilla13.numero){
		   if(Casilla13.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla13.nombredecasilla <<" cuyo valor es "<<Casilla13.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla13.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla13.valordepropiedad);
						   Casilla13.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla13.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla13.multa);
			    if(Casilla13.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla13.multa);
				   }
			    if(Casilla13.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla13.multa);
				   }
				if(Casilla13.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla13.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		////////casilla14         especial (impuestos)
	     if(jugador3.Posicion==Casilla14.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla14.nombredecasilla<< "> se le cobrara: "<<Casilla14.multa<<"\n";
			 jugador3.RebajarDineroPorMulta(Casilla14.multa);
		    
		   }
		 ////////////casilla15
	   if(jugador3.Posicion==Casilla15.numero){
		   if(Casilla15.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla15.nombredecasilla <<" cuyo valor es "<<Casilla15.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla15.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla15.valordepropiedad);
						   Casilla15.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla15.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla15.multa);
			    if(Casilla15.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla15.multa);
				   }
			    if(Casilla15.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla15.multa);
				   }
				if(Casilla15.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla15.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		   ////////////casilla16
		    if(jugador3.Posicion==Casilla16.numero){
		   if(Casilla16.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla16.nombredecasilla <<" cuyo valor es "<<Casilla16.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla16.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla16.valordepropiedad);
						   Casilla16.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla16.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla16.multa);
			    if(Casilla16.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla16.multa);
				   }
			    if(Casilla16.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla16.multa);
				   }
				if(Casilla16.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla16.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		 ////////////casilla17
		   if(jugador3.Posicion==Casilla17.numero){
		   if(Casilla17.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla17.nombredecasilla <<" cuyo valor es "<<Casilla17.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla17.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla17.valordepropiedad);
						   Casilla17.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla17.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla17.multa);
			    if(Casilla17.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla17.multa);
				   }
			    if(Casilla17.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla17.multa);
				   }
				if(Casilla17.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla17.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		 /////////////////casilla18
	    if(jugador3.Posicion==Casilla18.numero){
		   if(Casilla18.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla18.nombredecasilla <<" cuyo valor es "<<Casilla18.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla18.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla18.valordepropiedad);
						   Casilla18.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla18.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla18.multa);
			    if(Casilla18.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla18.multa);
				   }
			    if(Casilla18.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla18.multa);
				   }
				if(Casilla18.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla18.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		 //////////casilla19
	      if(jugador3.Posicion==Casilla19.numero){
		   if(Casilla19.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla19.nombredecasilla <<" cuyo valor es "<<Casilla19.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla19.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla19.valordepropiedad);
						   Casilla19.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla19.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla19.multa);
			    if(Casilla19.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla19.multa);
				   }
			    if(Casilla19.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla19.multa);
				   }
				if(Casilla19.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla19.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		 ///////casilla20
		   if(jugador3.Posicion==Casilla20.numero){
		   if(Casilla20.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla20.nombredecasilla <<" cuyo valor es "<<Casilla20.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla20.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla20.valordepropiedad);
						   Casilla20.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla20.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla20.multa);
			    if(Casilla20.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla20.multa);
				   }
			    if(Casilla20.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla20.multa);
				   }
				if(Casilla20.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla20.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla21
		    if(jugador3.Posicion==Casilla21.numero){
		   if(Casilla21.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla21.nombredecasilla <<" cuyo valor es "<<Casilla21.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla21.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla21.valordepropiedad);
						   Casilla21.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla21.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla21.multa);
			    if(Casilla21.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla21.multa);
				   }
			    if(Casilla21.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla21.multa);
				   }
				if(Casilla21.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla21.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  ////////////////casilla22
		    if(jugador3.Posicion==Casilla22.numero){
		   if(Casilla22.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla22.nombredecasilla <<" cuyo valor es "<<Casilla22.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla22.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla22.valordepropiedad);
						   Casilla22.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla22.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla22.multa);
			    if(Casilla22.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla22.multa);
				   }
			    if(Casilla22.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla22.multa);
				   }
				if(Casilla22.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla22.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  /////////////////casilla23       especial (impuestos)
		   if(jugador3.Posicion==Casilla23.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla23.nombredecasilla<< "> se le cobrara: "<<Casilla23.multa<<"\n";
			 jugador3.RebajarDineroPorMulta(Casilla23.multa);
		    
		   }
		   ///////////////casilla24
		       if(jugador3.Posicion==Casilla24.numero){
		   if(Casilla24.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla24.nombredecasilla <<" cuyo valor es "<<Casilla24.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla24.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla24.valordepropiedad);
						   Casilla24.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla24.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla24.multa);
			    if(Casilla24.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla24.multa);
				   }
			    if(Casilla24.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla24.multa);
				   }
				if(Casilla24.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla24.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  ///////////casilla25
		      if(jugador3.Posicion==Casilla25.numero){
		   if(Casilla25.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla25.nombredecasilla <<" cuyo valor es "<<Casilla25.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla25.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla25.valordepropiedad);
						   Casilla25.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla25.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla25.multa);
			    if(Casilla25.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla25.multa);
				   }
			    if(Casilla25.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla25.multa);
				   }
				if(Casilla25.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla25.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla26
		      if(jugador3.Posicion==Casilla26.numero){
		   if(Casilla26.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla26.nombredecasilla <<" cuyo valor es "<<Casilla26.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla26.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla26.valordepropiedad);
						   Casilla26.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla26.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla26.multa);
			    if(Casilla26.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla26.multa);
				   }
			    if(Casilla26.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla26.multa);
				   }
				if(Casilla26.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla26.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  ///////////////casilla27
		     if(jugador3.Posicion==Casilla27.numero){
		   if(Casilla27.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla27.nombredecasilla <<" cuyo valor es "<<Casilla27.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla27.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla27.valordepropiedad);
						   Casilla27.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla27.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla27.multa);
			    if(Casilla27.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla27.multa);
				   }
			    if(Casilla27.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla27.multa);
				   }
				if(Casilla27.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla27.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  //////////casilla28
		     if(jugador3.Posicion==Casilla28.numero){
		   if(Casilla28.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla28.nombredecasilla <<" cuyo valor es "<<Casilla28.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla28.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla28.valordepropiedad);
						   Casilla28.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla28.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla28.multa);
			    if(Casilla28.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla28.multa);
				   }
			    if(Casilla28.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla28.multa);
				   }
				if(Casilla28.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla28.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  ///////////////casilla29
		   if(jugador3.Posicion==Casilla29.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla29.nombredecasilla<< "> se le cobrara: "<<Casilla29.multa;
			 jugador3.RebajarDineroPorMulta(Casilla29.multa);
		    
		   }
		 //////////casilla30
		      if(jugador3.Posicion==Casilla30.numero){
		   if(Casilla30.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla30.nombredecasilla <<" cuyo valor es "<<Casilla30.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla30.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla30.valordepropiedad);
						   Casilla30.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla30.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla30.multa);
			    if(Casilla30.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla30.multa);
				   }
			    if(Casilla30.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla30.multa);
				   }
				if(Casilla30.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla30.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		   //////////casilla31
		       if(jugador3.Posicion==Casilla31.numero){
		   if(Casilla31.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla31.nombredecasilla <<" cuyo valor es "<<Casilla31.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla31.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla31.valordepropiedad);
						   Casilla31.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla31.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla31.multa);
			    if(Casilla31.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla31.multa);
				   }
			    if(Casilla31.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla31.multa);
				   }
				if(Casilla31.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla31.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  //////////casilla32
		      if(jugador3.Posicion==Casilla32.numero){
		   if(Casilla32.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla32.nombredecasilla <<" cuyo valor es "<<Casilla32.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla32.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla32.valordepropiedad);
						   Casilla32.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla32.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla32.multa);
			    if(Casilla32.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla32.multa);
				   }
			    if(Casilla32.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla32.multa);
				   }
				if(Casilla32.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla32.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   } 
		  ////////////casilla33
		       if(jugador3.Posicion==Casilla33.numero){
		   if(Casilla33.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla33.nombredecasilla <<" cuyo valor es "<<Casilla33.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla33.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla33.valordepropiedad);
						   Casilla33.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla33.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla33.multa);
			    if(Casilla33.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla33.multa);
				   }
			    if(Casilla33.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla33.multa);
				   }
				if(Casilla33.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla33.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		   ///////////////////casilla34
		       if(jugador3.Posicion==Casilla34.numero){
		   if(Casilla34.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla34.nombredecasilla <<" cuyo valor es "<<Casilla34.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla34.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla34.valordepropiedad);
						   Casilla34.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla34.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla34.multa);
			    if(Casilla34.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla34.multa);
				   }
			    if(Casilla34.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla34.multa);
				   }
				if(Casilla34.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla34.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  ////////////casilla35
		      if(jugador3.Posicion==Casilla35.numero){
		   if(Casilla35.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla35.nombredecasilla <<" cuyo valor es "<<Casilla35.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador3._CuentaDeDinero>=Casilla35.valordepropiedad){//puede comprar?
						   jugador3.RebajarDineroPorCompra(Casilla35.valordepropiedad);
						   Casilla35.AgregarPropietario(jugador3.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador3.Nombre!=Casilla35.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador3.RebajarDineroPorMulta(Casilla35.multa);
			    if(Casilla35.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla35.multa);
				   }
			    if(Casilla35.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla35.multa);
				   }
				if(Casilla35.nombredelpropietario==jugador4.Nombre){
					cout<<jugador4.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador4.SumarDineroCobrado(Casilla35.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador3.Nombre << "\n";
				 }
			   }
		   }
		  ////////////////casilla36
		   if(jugador3.Posicion==Casilla36.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla36.nombredecasilla<< "> se le cobrara: "<<Casilla36.multa<<"\n";
			 jugador3.RebajarDineroPorMulta(Casilla36.multa);
		    
		   }
		  ////////////
		  
     }
     else{//muere y ya no vuelve a jugar
			 vidajug3=false;
	 }
	
	 
	   
	  	   
	   
	   ////////////////////////////////////////////////////////////////////////////////////fin del turno para jugador3
	   
      ////////////////////////////////////////////////////////////////////////////////////////inicio del turno de jugador4	   
       if(jugador4._CuentaDeDinero>=0 && vidajug4==true){//puede jugar jug4
	   cout <<"El turno es de " << jugador4.Nombre <<" tire los dados usando <t>" << "\n";
	   string t;
	   cin >> t;
	   while(t!="t"){//t de tirar dados
		    cout << "Tiene que ingresar t para tirar los dados" << "\n";
		    cin >> t;
		   }
	   int valordadosjug4= Tablero.TirarDados();
	   cout << "El valor obtenido por los dados es: " << valordadosjug4 << "\n";
	   jugador4.CambiarPosicion(valordadosjug4);
	   cout << "Por lo que su posicion ahora es: " << jugador4.Posicion <<"\n";
	  //////////////////////casilla1
	   if(jugador4.Posicion==Casilla1.numero){//primero de los 36 if para ver en que casilla cayo
		   if(Casilla1.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla1.nombredecasilla <<" cuyo valor es "<<Casilla1.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla1.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla1.valordepropiedad);
						   Casilla1.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla1.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla1.multa);
			    if(Casilla1.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla1.multa);
				   }
			    if(Casilla1.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla1.multa);
				   }
				if(Casilla1.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla1.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla1.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
     //////////////casilla2
        if(jugador4.Posicion==Casilla2.numero){
		   if(Casilla2.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla2.nombredecasilla <<" cuyo valor es "<<Casilla2.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla2.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla2.valordepropiedad);
						   Casilla2.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla2.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla2.multa);
			    if(Casilla2.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla2.multa);
				   }
			    if(Casilla2.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla2.multa);
				   }
				if(Casilla2.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla2.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla2.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
	////////////////////////casilla3
	   if(jugador4.Posicion==Casilla3.numero){
		   if(Casilla3.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla3.nombredecasilla <<" cuyo valor es "<<Casilla3.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla3.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla3.valordepropiedad);
						   Casilla3.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla3.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla3.multa);
			    if(Casilla3.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla3.multa);
				   }
			    if(Casilla3.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla3.multa);
				   }
				if(Casilla3.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla3.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla3.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		/////////////////////casilla4
        if(jugador4.Posicion==Casilla4.numero){
		   if(Casilla4.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla4.nombredecasilla <<" cuyo valor es "<<Casilla4.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla4.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla4.valordepropiedad);
						   Casilla4.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla4.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla4.multa);
			    if(Casilla4.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla4.multa);
				   }
			    if(Casilla4.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla4.multa);
				   }
				if(Casilla4.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla4.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla4.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
	   /////////////////casilla5
	     if(jugador4.Posicion==Casilla5.numero){
		   if(Casilla5.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla5.nombredecasilla <<" cuyo valor es "<<Casilla5.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla5.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla5.valordepropiedad);
						   Casilla5.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla5.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla5.multa);
			    if(Casilla5.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla5.multa);
				   }
			    if(Casilla5.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla5.multa);
				   }
				if(Casilla5.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla5.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla5.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla6
	   if(jugador4.Posicion==Casilla6.numero){
		   if(Casilla6.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla6.nombredecasilla <<" cuyo valor es "<<Casilla6.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla6.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla6.valordepropiedad);
						   Casilla6.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla6.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla6.multa);
			    if(Casilla6.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla6.multa);
				   }
			    if(Casilla6.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla6.multa);
				   }
				if(Casilla6.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla6.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla6.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		/////////////casilla7
	   if(jugador4.Posicion==Casilla7.numero){
		   if(Casilla7.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla7.nombredecasilla <<" cuyo valor es "<<Casilla7.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla7.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla7.valordepropiedad);
						   Casilla7.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla7.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla7.multa);
			    if(Casilla7.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla7.multa);
				   }
			    if(Casilla7.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla7.multa);
				   }
				if(Casilla7.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla7.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla7.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
	  ////////////casilla8
	     if(jugador4.Posicion==Casilla8.numero){
		   if(Casilla8.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla8.nombredecasilla <<" cuyo valor es "<<Casilla8.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla8.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla8.valordepropiedad);
						   Casilla8.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla8.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla8.multa);
			    if(Casilla8.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla8.multa);
				   }
			    if(Casilla8.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla8.multa);
				   }
				if(Casilla8.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla8.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla8.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
	/////////////////////casilla9
	   if(jugador4.Posicion==Casilla9.numero){
		   if(Casilla9.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla9.nombredecasilla <<" cuyo valor es "<<Casilla9.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla9.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla9.valordepropiedad);
						   Casilla9.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla9.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla9.multa);
			    if(Casilla9.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla9.multa);
				   }
			    if(Casilla9.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla9.multa);
				   }
				if(Casilla9.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla9.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla9.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
	  //////////casilla 10
	    if(jugador4.Posicion==Casilla10.numero){
		   if(Casilla10.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla10.nombredecasilla <<" cuyo valor es "<<Casilla10.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla10.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla10.valordepropiedad);
						   Casilla10.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla10.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla10.multa);
			    if(Casilla10.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla10.multa);
				   }
			    if(Casilla10.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla10.multa);
				   }
				if(Casilla10.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla10.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla10.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
	  ///////////casilla11
	     if(jugador4.Posicion==Casilla11.numero){
		   if(Casilla11.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla11.nombredecasilla <<" cuyo valor es "<<Casilla11.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla11.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla11.valordepropiedad);
						   Casilla11.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla11.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla11.multa);
			    if(Casilla11.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla11.multa);
				   }
			    if(Casilla11.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla11.multa);
				   }
				if(Casilla11.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla11.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla11.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
	/////////////casilla12
	   if(jugador4.Posicion==Casilla12.numero){
		   if(Casilla12.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla12.nombredecasilla <<" cuyo valor es "<<Casilla12.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla12.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla12.valordepropiedad);
						   Casilla12.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla12.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla12.multa);
			    if(Casilla12.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla12.multa);
				   }
			    if(Casilla12.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla12.multa);
				   }
				if(Casilla12.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla12.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla12.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
	   /////////casilla13
	     if(jugador4.Posicion==Casilla13.numero){
		   if(Casilla13.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla13.nombredecasilla <<" cuyo valor es "<<Casilla13.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla13.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla13.valordepropiedad);
						   Casilla13.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla13.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla13.multa);
			    if(Casilla13.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla13.multa);
				   }
			    if(Casilla13.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla13.multa);
				   }
				if(Casilla13.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla13.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla13.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		////////casilla14         especial (impuestos)
	     if(jugador4.Posicion==Casilla14.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla14.nombredecasilla<< "> se le cobrara: "<<Casilla14.multa<<"\n";
			 jugador4.RebajarDineroPorMulta(Casilla14.multa);
		    
		   }
		 ////////////casilla15
	   if(jugador4.Posicion==Casilla15.numero){
		   if(Casilla15.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla15.nombredecasilla <<" cuyo valor es "<<Casilla15.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla15.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla15.valordepropiedad);
						   Casilla15.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla15.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla15.multa);
			    if(Casilla15.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla15.multa);
				   }
			    if(Casilla15.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla15.multa);
				   }
				if(Casilla15.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla15.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla15.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		   ////////////casilla16
		    if(jugador4.Posicion==Casilla16.numero){
		   if(Casilla16.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla16.nombredecasilla <<" cuyo valor es "<<Casilla16.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla16.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla16.valordepropiedad);
						   Casilla16.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla16.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla16.multa);
			    if(Casilla16.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla16.multa);
				   }
			    if(Casilla16.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla16.multa);
				   }
				if(Casilla16.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla16.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla16.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		 ////////////casilla17
		   if(jugador4.Posicion==Casilla17.numero){
		   if(Casilla17.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla17.nombredecasilla <<" cuyo valor es "<<Casilla17.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla17.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla17.valordepropiedad);
						   Casilla17.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla17.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla17.multa);
			    if(Casilla17.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla17.multa);
				   }
			    if(Casilla17.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla17.multa);
				   }
				if(Casilla17.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla17.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla17.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		 /////////////////casilla18
	    if(jugador4.Posicion==Casilla18.numero){
		   if(Casilla18.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla18.nombredecasilla <<" cuyo valor es "<<Casilla18.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla18.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla18.valordepropiedad);
						   Casilla18.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla18.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla18.multa);
			    if(Casilla18.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla18.multa);
				   }
			    if(Casilla18.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla18.multa);
				   }
				if(Casilla18.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla18.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla18.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		 //////////casilla19
	      if(jugador4.Posicion==Casilla19.numero){
		   if(Casilla19.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla19.nombredecasilla <<" cuyo valor es "<<Casilla19.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla19.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla19.valordepropiedad);
						   Casilla19.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla19.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla19.multa);
			    if(Casilla19.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla19.multa);
				   }
			    if(Casilla19.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla19.multa);
				   }
				if(Casilla19.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla19.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla19.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		 ///////casilla20
		   if(jugador4.Posicion==Casilla20.numero){
		   if(Casilla20.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla20.nombredecasilla <<" cuyo valor es "<<Casilla20.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla20.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla20.valordepropiedad);
						   Casilla20.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla20.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla20.multa);
			    if(Casilla20.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla20.multa);
				   }
			    if(Casilla20.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla20.multa);
				   }
				if(Casilla20.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla20.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla20.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla21
		    if(jugador4.Posicion==Casilla21.numero){
		   if(Casilla21.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla21.nombredecasilla <<" cuyo valor es "<<Casilla21.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla21.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla21.valordepropiedad);
						   Casilla21.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla21.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla21.multa);
			    if(Casilla21.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla21.multa);
				   }
			    if(Casilla21.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla21.multa);
				   }
				if(Casilla21.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla21.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla21.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  ////////////////casilla22
		    if(jugador4.Posicion==Casilla22.numero){
		   if(Casilla22.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla22.nombredecasilla <<" cuyo valor es "<<Casilla22.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla22.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla22.valordepropiedad);
						   Casilla22.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla22.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla22.multa);
			    if(Casilla22.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla22.multa);
				   }
			    if(Casilla22.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla22.multa);
				   }
				if(Casilla22.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla22.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla22.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  /////////////////casilla23       especial (impuestos)
		   if(jugador4.Posicion==Casilla23.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla23.nombredecasilla<< "> se le cobrara: "<<Casilla23.multa<<"\n";
			 jugador4.RebajarDineroPorMulta(Casilla23.multa);
		    
		   }
		   ///////////////casilla24
		       if(jugador4.Posicion==Casilla24.numero){
		   if(Casilla24.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla24.nombredecasilla <<" cuyo valor es "<<Casilla24.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla24.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla24.valordepropiedad);
						   Casilla24.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla24.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla24.multa);
			    if(Casilla24.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla24.multa);
				   }
			    if(Casilla24.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla24.multa);
				   }
				if(Casilla24.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla24.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla24.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  ///////////casilla25
		      if(jugador4.Posicion==Casilla25.numero){
		   if(Casilla25.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla25.nombredecasilla <<" cuyo valor es "<<Casilla25.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla25.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla25.valordepropiedad);
						   Casilla25.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla25.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla25.multa);
			    if(Casilla25.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla25.multa);
				   }
			    if(Casilla25.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla25.multa);
				   }
				if(Casilla25.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla25.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla25.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  /////////////casilla26
		      if(jugador4.Posicion==Casilla26.numero){
		   if(Casilla26.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla26.nombredecasilla <<" cuyo valor es "<<Casilla26.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla26.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla26.valordepropiedad);
						   Casilla26.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla26.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla26.multa);
			    if(Casilla26.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla26.multa);
				   }
			    if(Casilla26.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla26.multa);
				   }
				if(Casilla26.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla26.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla26.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  ///////////////casilla27
		     if(jugador4.Posicion==Casilla27.numero){
		   if(Casilla27.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla27.nombredecasilla <<" cuyo valor es "<<Casilla27.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla27.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla27.valordepropiedad);
						   Casilla27.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla27.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla27.multa);
			    if(Casilla27.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla27.multa);
				   }
			    if(Casilla27.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla27.multa);
				   }
				if(Casilla27.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla27.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla27.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  //////////casilla28
		     if(jugador4.Posicion==Casilla28.numero){
		   if(Casilla28.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla28.nombredecasilla <<" cuyo valor es "<<Casilla28.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla28.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla28.valordepropiedad);
						   Casilla28.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla28.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla28.multa);
			    if(Casilla28.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla28.multa);
				   }
			    if(Casilla28.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla28.multa);
				   }
				if(Casilla28.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla28.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla28.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  ///////////////casilla29
		   if(jugador4.Posicion==Casilla29.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla29.nombredecasilla<< "> se le cobrara: "<<Casilla29.multa<<"\n";
			 jugador4.RebajarDineroPorMulta(Casilla29.multa);
		    
		   }
		 //////////casilla30
		      if(jugador4.Posicion==Casilla30.numero){
		   if(Casilla30.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla30.nombredecasilla <<" cuyo valor es "<<Casilla30.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla30.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla30.valordepropiedad);
						   Casilla30.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla30.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla30.multa);
			    if(Casilla30.nombredelpropietario==jugador2.Nombre){
			    cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla30.multa);
				   }
			    if(Casilla30.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla30.multa);
				   }
				if(Casilla30.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla30.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla30.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		   //////////casilla31
		       if(jugador4.Posicion==Casilla31.numero){
		   if(Casilla31.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla31.nombredecasilla <<" cuyo valor es "<<Casilla31.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla31.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla31.valordepropiedad);
						   Casilla31.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla31.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla31.multa);
			    if(Casilla31.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla31.multa);
				   }
			    if(Casilla31.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla31.multa);
				   }
				if(Casilla31.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla31.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla31.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  //////////casilla32
		      if(jugador4.Posicion==Casilla32.numero){
		   if(Casilla32.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla32.nombredecasilla <<" cuyo valor es "<<Casilla32.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla32.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla32.valordepropiedad);
						   Casilla32.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla32.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla32.multa);
			    if(Casilla32.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla32.multa);
				   }
			    if(Casilla32.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla32.multa);
				   }
				if(Casilla32.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla32.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla32.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   } 
		  ////////////casilla33
		       if(jugador4.Posicion==Casilla33.numero){
		   if(Casilla33.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla33.nombredecasilla <<" cuyo valor es "<<Casilla33.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla33.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla33.valordepropiedad);
						   Casilla33.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla33.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla33.multa);
			    if(Casilla33.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla33.multa);
				   }
			    if(Casilla33.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla33.multa);
				   }
				if(Casilla33.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla33.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla33.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		   ///////////////////casilla34
		       if(jugador4.Posicion==Casilla34.numero){
		   if(Casilla34.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla34.nombredecasilla <<" cuyo valor es "<<Casilla34.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla34.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla34.valordepropiedad);
						   Casilla34.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla34.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla34.multa);
			    if(Casilla34.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla34.multa);
				   }
			    if(Casilla34.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla34.multa);
				   }
				if(Casilla34.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla34.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla34.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  ////////////casilla35
		      if(jugador4.Posicion==Casilla35.numero){
		   if(Casilla35.propietario==0){//si no tiene propietario
			   cout << "Ha caido en " << Casilla35.nombredecasilla <<" cuyo valor es "<<Casilla35.valordepropiedad << ", quiere comprarla? Digite S si quiere o N si no quiere comprarla" <<"\n";
			   string sionocompra;
			   cin >> sionocompra;
			   while(sionocompra!="S" && sionocompra!="N"){
				   cout <<"solo puede ingresar S o N" << "\n";
				   cin>>sionocompra;
				   }
				   if(sionocompra=="S"){//compra
					   if(jugador4._CuentaDeDinero>=Casilla35.valordepropiedad){//puede comprar?
						   jugador4.RebajarDineroPorCompra(Casilla35.valordepropiedad);
						   Casilla35.AgregarPropietario(jugador4.Nombre);
						   cout<<"compra exitosa" <<"\n";
						   }
					   else{
						   cout <<"Sus fondos no son suficientes para comprar la propiedad"<<"\n";
						   }
					   }
				   if(sionocompra=="N"){
					   cout<<"no compra"<<"\n";
					   }
			}
			   
		   else{//si tiene propietario
			 if(jugador4.Nombre!=Casilla35.nombredelpropietario){//queremos ver que el mismo no sea el dueño
			   jugador4.RebajarDineroPorMulta(Casilla35.multa);
			    if(Casilla35.nombredelpropietario==jugador2.Nombre){
					cout<<jugador2.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador2.SumarDineroCobrado(Casilla35.multa);
				   }
			    if(Casilla35.nombredelpropietario==jugador3.Nombre){
					cout<<jugador3.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador3.SumarDineroCobrado(Casilla35.multa);
				   }
				if(Casilla35.nombredelpropietario==jugador1.Nombre){
					cout<<jugador1.Nombre<<" es el propietario, por lo que tiene que pagar una multa de: "<<Casilla35.multa<<"\n";
				   jugador1.SumarDineroCobrado(Casilla35.multa);
				   }
				}
			
		     else{//entonces si es de el mismo
				 cout <<"La casilla ya pertenecia a " << jugador4.Nombre << "\n";
				 }
			   }
		   }
		  ////////////////casilla36
		   if(jugador4.Posicion==Casilla36.numero){
			 cout << "Ha caido en una casilla de impuestos llamada: <"<<Casilla36.nombredecasilla<< "> se le cobrara: "<<Casilla36.multa<<"\n";
			 jugador4.RebajarDineroPorMulta(Casilla36.multa);
		    
		   }
		  ////////////
		  
     }
     else{//muere y ya no vuelve a jugar
			 vidajug4=false;
	 }
	
	 
	   
	  	   
      /////////////////////////////////////////////////////////////////////////////////////////fin del turno de jugador4
      if(vidajug1==true && vidajug2==false&& vidajug3==false&& vidajug4==false){
		  cout <<"El ganador ha sido: "<<jugador1.Nombre<< "\n";
		  findeljuego=true;
		  }
	  if(vidajug1==false && vidajug2==true&& vidajug3==false&& vidajug4==false){
		  cout <<"El ganador ha sido: "<<jugador2.Nombre<< "\n";
		  findeljuego=true;
		  }
	  if(vidajug1==false && vidajug2==false&& vidajug3==true&& vidajug4==false){
		  cout <<"El ganador ha sido: "<<jugador3.Nombre<< "\n";
		  findeljuego=true;
		  }
	  if(vidajug1==false && vidajug2==false&& vidajug3==false&& vidajug4==true){
		  cout <<"El ganador ha sido: "<<jugador4.Nombre<< "\n";
		  findeljuego=true;
		  }
      
      
	   }

         
         
   
  return 0;
}
