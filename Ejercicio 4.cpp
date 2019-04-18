#include "BasicaLib.h"
#define PI 3.14
//Calcular longitud de la circunferencia y el área del círculo de radio 
int main(){
	float Diametro = 0, Circuferencia = 0, Radio = 0, Area = 0;
	MostrarTexto("Diametro del circulo: ");
	Diametro = IngresarNumero();
	MostrarTexto("Circuferencia: ");
	Circuferencia = Diametro*PI;
	MostrarDato(Circuferencia);
	Radio = Circuferencia/(2*PI);
	Area = PI*(Radio*Radio);
	MostrarTexto("Area: ");
	MostrarDato(Area);
	return 0;
}
