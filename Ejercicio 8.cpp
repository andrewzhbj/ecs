#include "BasicaLib.h"

int main(){
	float Centimetros = 0, Pulgadas = 0;
	int Pies = 0;
	MostrarTexto("Ingrese cm: ");
	Centimetros = IngresarFlotante();
	Pies = Centimetros/30.48;
	MostrarTexto("Pies: ");
	MostrarDato(Pies);
	Pulgadas = Centimetros/2.54;
	MostrarTexto("Pulgadas: ");
	MostrarDato(Pulgadas);
	return 0;
}
