#include "BasicaLib.h"

int main(){
	float Celsius = 0, Farhrenheit = 0;
	MostrarTexto("Celsius: ");
	Celsius = IngresarFlotante();
	MostrarDato(Celsius);
	Farhrenheit = (Celsius * 9/5) + 32;
	MostrarTexto("Farhenheit: ");
	MostrarDato(Farhrenheit);
	return 0;
}
