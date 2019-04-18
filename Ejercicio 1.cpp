#include "BasicaLib.h"
// Ingresar 5 números y  calcular su media.

int main(){
	int Datos[5];
	Llenar(Datos, 5);
	Mostrar(Promedio(Total(Datos,5),5));
}
