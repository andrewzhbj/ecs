#include "BasicaLib.h"
// Calcular la superficie de un triángulo a partir de su base y altura.

int main(){
	int Superficie = 0, Altura = 0, Base = 0;
	MostrarTexto("Altura: ");
	Altura = IngresarNumero();
	MostrarTexto("Altura: ");
	Base = IngresarNumero();
	Superficie = Altura*Base;
	MostrarTexto("Superficie: ");
	MostrarDato(Superficie);
	return 0;
}
