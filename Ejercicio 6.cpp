#include "BasicaLib.h"
#define Positivo 1
int main(){
	int Numero = IngresarNumero();
	if(Signo(Numero) == Positivo) MostrarTexto("Es positivo");	
	else MostrarTexto("Es negativo");	
	return 0;
}
