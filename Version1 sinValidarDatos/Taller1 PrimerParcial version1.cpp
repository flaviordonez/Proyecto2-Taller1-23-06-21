/************************************Taller-1  Primer parcial*******************************************************
Ejercicio 2 version 1
********************************  Validación de datos en una clase.**************************************

A continuación se muestra un código en el que, para una clase,
se definen funciones que permitan capturar y mostrar en pantalla datos. La clase a definir se llama usuario. La clase 
usuario tiene dos datos miembro: Nombre de Identificación del Usuario (conocido como ID) y el Número de Identificación 
Personal (conocido como PIN). Para efectos de este ejemplo, se considerará válido un 

ID que tenga una longitud mínima de 6 caracteres;
y en el caso del PIN el valor válido será cualquier número mayor que cero.

La primera versión del ejercicio no utiliza una función para validar datos. Al utilizar la clase en un programa y crear
objetos con ella, veremos que es posible establecer valores inválidos en los datos.

Es posible que sea necesario modificar cierta parte o partes del código en sus
respectivas versiones para su correcta aplicabilidad; de ser necesario realizar las modificaciones del caso. Luego, 
mostrar las corridas de las versiones, así como los diagramas de clases (o los que se consideren apropiados) para el 
presente ejercicio de aplicación.*/

#include <iostream>		//Es un componente de la biblioteca estandar de C++ que sirve para la entrada y salida de datos. 

using namespace std;	//Esta linea de codigo sirva para el ingreso y salida de datos, para utilizar cin, cout

// Declaración de la clase
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
// Declaración de las funciones de la clase
// Con esta función se ingresan los datos por pantalla para objetos de la clase usuario
void Usuario::capturarDatos()
{
cout << "Ingrese el ID de Usuario minimo 6 caracteres: ";	//Mensaje en pantalla
cin.getline(id, 15,'\n');				//Imgreso de los datos ID minimo 6 caracteres
cout << "Ingrese Numero de Identificación Personal (PIN) mayor que 0: "; //Mensaje que pide el PIN
cin >> pin;								//Ingreso por teclado del valor parael PIN > 0
}
// Con esta función se muestran en pantalla los datos de un objeto de la clase usuario
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
