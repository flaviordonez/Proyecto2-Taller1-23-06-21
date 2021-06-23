/*************************************  Ejercicio 2 version 2 *******************************************
En la segunda versi�n se le incorpora una funci�n que  permita  validar antes  de establecer  los  datos. Adem�s, se modifica la 
funci�n  con  la que  se  capturan los datos en pantalla, obligando a que cuando se modifiquen los datos se tenga que pasar s� o
s� por la funci�n que valida.   Es posible que  sea  necesario   modificar  cierta  parte o partes del c�digo en sus respectivas 
versiones para su correcta aplicabilidad; de ser necesario realizar las modificaciones  del caso. Luego,  mostrar  las  corridas 
de las versiones, as� como los diagramas de clases (o los que se consideren apropiados) para el presente ejercicio de aplicaci�n.    
*/

// Ejemplo de clase usuario, validando datos
#include <iostream>	//libreria por defecto de c++
#include<string.h>	//Libreria para usar el strlen, strcpy
using namespace std;	//para usar: cin, cout, endl
// Declaraci�n de la clase
class Usuario
{
private:
char id [15];		//variable
int pin;			//variable
public:
Usuario ();				//Constructor de la clase
void capturarDatos();	//Funcion para pedir que se ingresen datos
void imprimirDatos();	//Funcion que devuelve en pantalla los valores ingresados
void establecerDatos(char [15], int);	/* Funcion que se encargar� de validar los datos que se ingresan para los
							 usuarios, asegur�ndose as� de que siempre se ingresan valores v�lidos en los mismos*/
};

//Constructor de la clase
Usuario::Usuario(){		//**********************************************************************************
}
// Declaraci�n de las funciones de la clase
// Con esta funci�n se capturan en pantalla los datos para objetos de la clase usuario
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

// Con esta funci�n se muestran en pantalla los datos de un objeto de la clase usuario
void Usuario::imprimirDatos()	//***************************************************************************
{
cout << " ID: " << id << endl;
cout << "PIN: " << pin << endl;
}

void Usuario::establecerDatos(char i [15], int p)	//*******************************************************
{
if (strlen(i) < 6)		//strlen no da el tama�o de la cadena ID si es menor que 6 nos devolvera desconocido
{
cout << "ID de usuario muy corto" << endl;
strcpy(id, "desconocido");	//Si el tama�o de la cadena es menor que 6, desconocido se copia en la variable id
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
//*****************************************  Men� Principal *************************************************
int main()
{
Usuario u;
u.capturarDatos();
u.imprimirDatos();
system("pause");
}

