//Calculator 
//Wilmer Florentino 1067978
//PROGRAMACION DE SISTEMAS ELECTRONICOS

/*Librerías*/

#include <iostream>
#include <cmath>

using namespace std;
int main () {
	float tbase, theight, rbase, rheight; //Bases y alturas de triángulo y rectángulo
	float rco, hco, rci, hci; //Radios y alturas de cono y cilindro
	float area1, area2, vol1, vol2; //Áreas y volúmenes
	
	/*Captura de datos y cálculo de áreas */
	cout << "CALCULADORA DE AREAS Y VOLUMENES" <<endl; 
	cout << "\nCalculo del area de un triangulo" <<endl;
	cout << "Introduzca el valor de la base: ";
	cin  >> tbase;
	cout << "Introduzca el valor de la altura: ";
	cin  >> theight;
	area1 = (tbase*theight)/2;
	cout << "El area del triangulo es: " << area1 << endl;
	
	cout << "\nCalculo del area de un rectangulo" <<endl;
	cout << "Introduzca el valor de la base: ";
	cin  >> rbase;
	cout << "Introduzca el valor de la altura: ";
	cin  >> rheight;
	area2 = rbase*rheight;
	cout << "El area del rectangulo es: " << area2 << endl;
	
	/*Captura de datos y cálculo de volúmenes*/
	
	cout << "\nCalculo del volumen de un cono" <<endl;
	cout << "Introduzca el valor del radio: ";
	cin  >> rco;
	cout << "Introduzca el valor de la altura: ";
	cin  >> hco;
	vol1 = 3.14*(rco*rco)*(hco/3);
	cout << "El volumen del cono es: " << vol1 << endl;
	
	cout << "\nCalculo del volumen de un cilindro" <<endl;
	cout << "Introduzca el valor del radio: ";
	cin  >> rci;
	cout << "Introduzca el valor de la altura: ";
	cin  >> hci;
	vol2 = 3.14*(rci*rci)*hci;
	cout << "El volumen del cilindro es: " << vol2 << endl ;
	
	cout << "\nHasta luego!" ;
return 0; //Buena práctica de Programación
}
