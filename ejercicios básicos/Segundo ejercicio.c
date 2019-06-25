#include "BasicaLib.h"
#define True 	1
#define False 	0
// Calcular  y mostrar el cuadrado de un número mayor a 0

int main(){
	int Numero = IngresarNumero();
	if(MayorACero(Numero) == True)
		MostrarDato(AlCuadrado(Numero));	
	else 
		MostrarTexto("Error: el numero debe ser mayor a 0");
	return 0;
}
