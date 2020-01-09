/**  @brief Implementacion de codigo generador de aminoacidos a partir de codones de codigo genetico (ARN).
 * 
 * 
 * 
 *   El codigo busca comparar lo ingresado respecto a un archivo que contiene las asociaciones de tripletas a aminoacido
 *   con el objetivo de brindarle al usuario la conversion rapida de codones de codigo genetico al aminoacido.
 *   @author Francisco Leal Tovar, Miguel Chaves Bejarano, Rolando Murillo Pérez
 *   @date Miercoles 8 de Enero del 2020
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <bits/stdc++.h> 
//lo siguiente es para poder usar disminutivos en lugar de todo el nombre
using namespace std;
using std::cout;
using std::cin;
using std::ios;
using std::cerr;
using std::endl;
using std::ifstream;
//vectores globales
vector<string> vectortripletas;//creamos un vector para las tripletas
vector<string> vectoraminoacidos; //creamos un vector para los aminoacidos
//

void leer(){
	/** El metodo leer() basicamente lo que hara es abrir el archivo datos.csv con la finalidad de poder obtener las dos columnas
	 * en dos vectores independientes listos para proximamente ser utilizados para la comparacion.
	 * 
	 *  @param archivoEntrada Sirve como lugar para abrir el archivodatos.csv
	 *  @param texto Es un string en donde se contiene todo el archivo datos.csv, pero no en el orden deseado
	 *  @param letra Es un string creado para almacenar las tripletas, se le reescribe para almacenar la siguiente tripleta
	 *  @param vectortripletas Es un vector al que se le ingresa una por una cada tripleta, contiene todas las 64 tripletas del archivo de la primera columna.
	 *  @param amino Es un string que nos sirve para ingresar los aminoacidos, se le reescribe para almacenar el siguiente aminoacido
	 *  @param vectoraminoacidos Es un vector que recolecta lo obtenido en la variable amino, resultando finalmente por tener en sus casillas todas los 64 aminoacidos asociables en el mismo orden que en el vectortripletas
	 * 
	 * 
	 */
	
	string texto;
	ifstream archivoEntrada("datos.csv", ios::in);//abriendo el archivo le damos "archivoEntrada" como nombre
	if(!archivoEntrada){//prueba para abrir el archivo
		cerr << "No se pudo abrir el archivo" << endl;
		exit(1);
	}

	
	
    while(!archivoEntrada.eof()){//while end of file does't come, do
		getline(archivoEntrada, texto);//texto resulta ser un vector!!!!!!!
		//es un vector de 5 componentes texto[0] posee curiosamente la primera letra de todas las tripletas
		//texto[1] posee la segunda letra de todas las tripletas
		//texto[2] posee la tercera letra de todas las tripletas
		//texto[3] posee las comas (",")
		//texto[4] posee la asociación del aminoacido
		//en otras palabras, texto posee un orden de 64 espacios, en donde guarda de forma vertical las columnas del archivo datos.csv
		//descubrí esto haciendo print de cada componente, ejm haciendo cout<< texto[0] <<endl; 
		//luego proble imprimiendo texto[1] y así hasta imprimir texto[4], magia??
		//quiza como contexto seria bueno decirles que si imprimo solamente texto cout<< texto <<endl;
		//me sale lo que veiamos como se visualiza el archivo, que las columnas se dividian por "," y luego se hacia "\n" y se mostraba la siguiente fila... hasta mostrar todo el archivo datos.csv
		
		
		
		//voy a hacer un for para almacenar cada tripleta en espacios individuales dentro del vector
		string letra;
		for (int i = 0; i < 3; i++) {
			letra += texto[i];
			} //"letra" es una variables de paso, en la proxima iteracion de while se reescribirá, ocupo guardar su valor en cada iteracion (64 iteraciones)
		
		vectortripletas.push_back(letra);//curiosidades, este comando es como el append usado en python, permite agregar cosas al vector
		//el comando anterior llena al vectortripletas con los valores de letra (recordar, "letra" se reescribe en cada iteracion)
		
		
		
		//una vec recolectadas las tripletas en un solo vector (al final del while)
		//tambien recolectemos en un solo vector los aminoacidos (en texto[4] se encuentran)
		
		//cosa importantisima la funcion .push_back() solo se le pueden ingresar valores constantes
		//por lo que no podemos solo hacer "vectoraminoacidos.push_back(texto[4]);" porque tira error diciendo de que debe recibir una constante
		//metamos texto[4] en una variable (hagamosle pensar que es constante)--->(delicadeses de c++)
		string amino;
		amino=texto[4];
		vectoraminoacidos.push_back(amino);//no necesito el for, el for servia para recolertar las tres letras que forman la tripleta (union de 3 caracteres)
		
		
		//                                      al fin!!!!!!!!!!!!!!!!!!!!!!!!!!!
		//                     se logro tener ambas columnas del archivo en 2 vectores independientes
		
		}
		
	archivoEntrada.close();//siempre luego de abrir el archivo hay que cerrarlo
	}
	
void comparacion(){
		/** El metodo comparacion() lo que hara es solicitar la cadena de codones de codigo genetico al usuario
		 *  luego esta cadena va a ser separada en tripletas, para luego compararlas respecto a las tripletas 
		 *  ya contenidas dentro del vectortripletas y de encontrar match asociar el correspondiente aminoacido,
		 *  contenido en el vectoraminoacidos e imprimir el aminoacido asociado a la cantidad de tripletas existentes.
	 * 
	 *  @param cadena Es un string que almacena la cadena de codones ingresada por el usuario.
	 *  @param cantidadtripletas Es un int que almacena el numero de tripletas que la cadena contiene.
	 *  @param vectorcodones Es un vector de string cuya funcion es almacena en tripletas la cadena ingresada
	 *  @param contador Es un int que sirve para contar el llenado de 3 caracteres, luego se reinicia para contar otros 3 caracteres y asi hasta recorrer la cadena.
	 *  @param cantidadcaracteresdecadena Es un int que sirve para delimitar el for, saber hasta donde recorro la cadena ingresada
	 *  @param tripleta Es un string que para almacenar una tripleta, luego es reescrita para contener otra tripleta y asi sucesivamente hasta ser rellenada por la ultima tripleta
	 * 
	 * 
	 */
	 
	leer();
	//ya tengo los datos ahora voy a pedir la cadena de codones
	//la voy a dividir en tripletas
	//voy a guardar cada tripleta en los espacios de un vector de orden n, donde n va a ser la cantidad de tripletas que tiene la cadena de codones ingresada
	//haciendo eso hago la comparacion contra vectortripletas y buuum, relaciono el equivalente segun el vectoraminoacidos
	string cadena;
	cout << "Ingrese la cadena de codones:  "; 
    cin >> cadena; 
    int cantidadtripletas= cadena.size()/3;//tengo la cantidad de tripletas para esa cadena de codones
    //cadena es a la vez un vector (se me ocurre que casualmente todos los strings los puedo manipular como vectores)
    
    //hagamos un pequeño for para almacenar de tres en tres la cadena recibida
    vector<string> vectorcodones;

  
    int contador=0;
    int cantidadcaracteresdecadena= cadena.size();
    string tripleta;
    for(int i=0; i<cantidadcaracteresdecadena; i++){
		if(contador<3){
		    tripleta+=cadena[i];
            if(i==cantidadcaracteresdecadena-1) {
				vectorcodones.push_back(tripleta);
				//cout << vectorcodones[celda] << "\n";
				}
	    }
	    else{
		vectorcodones.push_back(tripleta);
		tripleta="";
		tripleta+=cadena[i];
		//cout << vectorcodones[celda] << "\n"; 
		contador=0;
		
		
		
		}
		
	contador=contador+1;	
	}//listo ya tengo la cadena de codonoes almacenada en tripletas dentro del vector "vectorcodones"
	
	
	
	
	//vamos a empezar a comparar
	cout << "la cadena de aminoacidos es: " << "\n";
	for(int i=0; i<cantidadtripletas; i++){
		for(int j=0; j<64; j++){
			if(vectorcodones[i]==vectortripletas[j]){
				cout <<vectoraminoacidos[j];
				
				}
			}
		}
	
   
	
	 
     cout<<"\n";
	
	}


int main () //el codigo busca compilar y ejecutar siempre lo que sea que tenga main()
{
	/** main() es el metodo que ejecuta el codigo, por eso internamente ejecutara el metodo de comparacion() que a su vez llama 
	 *  a penas iniciando a el metodo leer()
	 * 
	 *  @param return 0 para asegurarle al codigo la finalizacion efectiva de la ejecucion del metodo.
	 * 
	 */
    comparacion();
    return 0;
}

