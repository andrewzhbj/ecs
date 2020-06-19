#include "BasicaLib.h"
// Calcular  y mostrar el cuadrado de un número mayor a 0

int main(){
	int Numero = IngresarNumero();
	if(MayorACero(Numero))
		MostrarDato(AlCuadrado(Numero));	
	else 
		MostrarTexto("Error: el numero debe ser mayor a 0");
	return 0;
}
