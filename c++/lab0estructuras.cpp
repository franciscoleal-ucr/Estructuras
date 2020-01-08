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
	string texto;
	ifstream archivoEntrada("datos.csv", ios::in);//abriendo el archivo le damos "archivoEntrada" como nombre
	if(!archivoEntrada){//prueba para abrir el archivo
		cerr << "No se pudo abrir el archivo" << endl;
		exit(1);
	}

	
	int contador=0;
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
		
		
		

	    contador=contador+1;
		}
		
	archivoEntrada.close();//siempre luego de abrir el archivo hay que cerrarlo
	}
	
void comparacion(){
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

    int celda=0;
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
		celda=celda+1;
		
		}
		
	contador=contador+1;	
	}//listo ya tengo la cadena de codonoes almacenada en tripletas dentro del vector "vectorcodones"
	
	//vamos a empezar a comparar
	cout << "la cadena de aminoacidos es: ";
	for(int i=0; i<cantidadtripletas; i++){
		for(int j=0; j<64; j++){
			if(vectorcodones[i]==vectortripletas[j]){
				cout << vectoraminoacidos[j];
				
				}
			}
		} 
     cout<<"\n";
	
	}


int main () //el codigo busca compilar y ejecutar siempre lo que sea que tenga main()
{
    comparacion();
    return 0;
}

