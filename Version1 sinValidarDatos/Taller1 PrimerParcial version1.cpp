/************************************Taller-1  Primer parcial*******************************************************
Ejercicio 2 version 1
********************************  Validaci�n de datos en una clase.**************************************

A continuaci�n se muestra un c�digo en el que, para una clase,
se definen funciones que permitan capturar y mostrar en pantalla datos. La clase a definir se llama usuario. La clase 
usuario tiene dos datos miembro: Nombre de Identificaci�n del Usuario (conocido como ID) y el N�mero de Identificaci�n 
Personal (conocido como PIN). Para efectos de este ejemplo, se considerar� v�lido un 

ID que tenga una longitud m�nima de 6 caracteres;
y en el caso del PIN el valor v�lido ser� cualquier n�mero mayor que cero.

La primera versi�n del ejercicio no utiliza una funci�n para validar datos. Al utilizar la clase en un programa y crear
objetos con ella, veremos que es posible establecer valores inv�lidos en los datos.

Es posible que sea necesario modificar cierta parte o partes del c�digo en sus
respectivas versiones para su correcta aplicabilidad; de ser necesario realizar las modificaciones del caso. Luego, 
mostrar las corridas de las versiones, as� como los diagramas de clases (o los que se consideren apropiados) para el 
presente ejercicio de aplicaci�n.*/

#include <iostream>		//Es un componente de la biblioteca estandar de C++ que sirve para la entrada y salida de datos. 

using namespace std;	//Esta linea de codigo sirva para el ingreso y salida de datos, para utilizar cin, cout

// Declaraci�n de la clase
class Usuario
{
private:
char id [15]; 	//Declaracion de la variable id, tipo char
int pin;		//Declaracion variable pin
public:
Usuario();
void capturarDatos();	//Metodo capturarDatos
void imprimirDatos();	//Metodo imprimirDatos
};

//Constructor de la clase
Usuario::Usuario(){	
}
// Declaraci�n de las funciones de la clase
// Con esta funci�n se ingresan los datos por pantalla para objetos de la clase usuario
void Usuario::capturarDatos()
{
cout << "Ingrese el ID de Usuario minimo 6 caracteres: ";	//Mensaje en pantalla
cin.getline(id, 15,'\n');				//Imgreso de los datos ID minimo 6 caracteres
cout << "Ingrese Numero de Identificaci�n Personal (PIN) mayor que 0: "; //Mensaje que pide el PIN
cin >> pin;								//Ingreso por teclado del valor parael PIN > 0
}
// Con esta funci�n se muestran en pantalla los datos de un objeto de la clase usuario
void Usuario::imprimirDatos()
{
cout << " ID: " << id << endl;		//esta linea nos imprime ID con el valor ingresado

cout << "PIN: " << pin << endl;		//esta linea nos imprime PIN con el valor ingresado
}
// Probando la clase
int main()					//menu Principal
{
Usuario u = Usuario ();		//Se instancia el objeto u de la clase Usuario
u.capturarDatos();			//Llama a la funcion capturarDatos;
u.imprimirDatos();			//Se lama a la funcion encargada de imprimirDatos
system("pause");
return 0;
}
