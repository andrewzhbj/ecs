#include "BasicaLib.h"

// 10 n�meros, indicar: cuantos mayores y menores a 0.

int main(){
	int Datos[10], Mayores = 0, Menores = 0, i = 0;
	Llenar(Datos, 10);
	for(i=0;i<10;i++){
		if(MayorACero(Datos[i])) 
			Mayores++;
		else 
			Menores++;
	}
	MostrarDato(Mayores);
	MostrarDato(Menores);
	return 0;
}
