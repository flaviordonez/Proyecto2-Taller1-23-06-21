/*************************************  Ejercicio 2 version 2 *******************************************
En la segunda versión se le incorpora una función que  permita  validar antes  de establecer  los  datos. Además, se modifica la 
función  con  la que  se  capturan los datos en pantalla, obligando a que cuando se modifiquen los datos se tenga que pasar sí o
sí por la función que valida.   Es posible que  sea  necesario   modificar  cierta  parte o partes del código en sus respectivas 
versiones para su correcta aplicabilidad; de ser necesario realizar las modificaciones  del caso. Luego,  mostrar  las  corridas 
de las versiones, así como los diagramas de clases (o los que se consideren apropiados) para el presente ejercicio de aplicación.    
*/

// Ejemplo de clase usuario, validando datos
#include <iostream>	//libreria por defecto de c++
#include<string.h>	//Libreria para usar el strlen, strcpy
using namespace std;	//para usar: cin, cout, endl
// Declaración de la clase
class Usuario
{
private:
char id [15];		//variable
int pin;			//variable
public:
Usuario ();				//Constructor de la clase
void capturarDatos();	//Funcion para pedir que se ingresen datos
void imprimirDatos();	//Funcion que devuelve en pantalla los valores ingresados
void establecerDatos(char [15], int);	/* Funcion que se encargará de validar los datos que se ingresan para los
							 usuarios, asegurándose así de que siempre se ingresan valores válidos en los mismos*/
};

//Constructor de la clase
Usuario::Usuario(){		//**********************************************************************************
}
// Declaración de las funciones de la clase
// Con esta función se capturan en pantalla los datos para objetos de la clase usuario
void Usuario::capturarDatos()	//***************************************************************************
{
char i [15];
int p = 0;
cout << "Ingrese el ID de Usuario: ";
cin.getline(i, 15);
cout << "Ingrese Numero de Identificacion Personal (PIN): ";
cin >> p;
establecerDatos(i, p);
}

// Con esta función se muestran en pantalla los datos de un objeto de la clase usuario
void Usuario::imprimirDatos()	//***************************************************************************
{
cout << " ID: " << id << endl;
cout << "PIN: " << pin << endl;
}

void Usuario::establecerDatos(char i [15], int p)	//*******************************************************
{
if (strlen(i) < 6)		//strlen no da el tamaño de la cadena ID si es menor que 6 nos devolvera desconocido
{
cout << "ID de usuario muy corto" << endl;
strcpy(id, "desconocido");	//Si el tamaño de la cadena es menor que 6, desconocido se copia en la variable id
}
else
{
strcpy(id, i); // Si es > 6 en id se copia el valor de i que es el ID
}
if (p <= 0)		// Si el pin es <= que cero nos da un mensaje PIN debe ser mayor a cero
{
cout << "El PIN debe ser mayor que cero" << endl;	//Mensaje
pin = 1 ;											//No devolvera 1 si el PIN es <= 0.
}
else
{
pin = p;		//Si el PIN es >=1 nos devuelve el valor ingresado
}
}
// Probando la clase
//*****************************************  Menú Principal *************************************************
int main()
{
Usuario u;
u.capturarDatos();
u.imprimirDatos();
system("pause");
}

