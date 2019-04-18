#include <stdio.h>
#include <stdlib.h>
#include <ctime> /* Para el time() */

#define True 	1
#define False 	0

/* Devuelve un número entero */
int IngresarNumero(void){
	int n = 0;
	scanf("%d", &n);
	return n;
}
/* Devuelve un número flotante */
float IngresarFlotante(void){
	float n = 0;
	scanf("%f", &n);
	return n;
}

char IngresarLetra(void){
	return getchar();
}
/* Devuelve un número aleatorio entre un intervalo */
int NumeroAleatorio(int Max, int Min){
	int n = 0;
	srand(time(NULL));
	n = rand()%(Max-Min+1);
	return n;
}

/* Llena un vector con los parámetros dados */
void Llenar(int Datos[], int Size){
	int i = 0, Numero = 0;
	while(i < Size){
		Numero = IngresarNumero();
		if(Numero > -100 && Numero < 100){
			Datos[i] = Numero;
			i++;
		}
	}
}

/* Muestra un dato, puede ser entero o flotante (solo 2 decimales)*/
void MostrarDato(float Dato){
	float NumeroDecimal = Dato;
	int NumeroEntero = (int)Dato;
	if(NumeroEntero != NumeroDecimal) printf("%.2f\n", NumeroDecimal); /* Muestra como número decimal */
	else printf("%d\n", NumeroEntero); /* Muestra como número entero */
}
/* Muestra un texto */
void MostrarTexto(char Texto[]){
	printf("%s", Texto);
}

/* Muestra todos los elementos de un vector (solo entero) */
void MostrarVector(int Datos[], int Size){
	int i = 0;
	for(i=0;i<Size;i++){
		printf("%d. %d\n", i, Datos[i]);
	}
}


/* Devuelve verdadero si el número es positivo, falso si es negativo */
int Signo(int Num){
	if(Num > 0) return True;
	else return False;
}

/* Devuelve el cubo de un número */
int AlCubo(float Num){
	return Num*Num*Num;
}

/* Devuelve verdadero si el número es par, falso si es impar */
int Paridad(int Num){
	if(Num%2 == 0) return True;
	else return False;
}

/* Devuelve el cuadrado de un número */
int AlCuadrado(float Num){
	return Num*Num;
}

/* Devuelve el valor absoluto de un número */
int ValorAbsoluto(float Num){
	if(Num < 0 ) return Num *= -1; /* si es negativo lo multiplica por -1 */
	else return Num;
}

/* Devuelve la sumatoria de todos los elementos de un vector*/
int Total(int Datos[], int Size){
	int i = 0, Sumatorio = 0;
	for(i=0;i<Size;i++) Sumatorio += Datos[i];
	return Sumatorio;
}

/* Devuelve el número minimo de un vector, dado sus elementos */
int Minimo(int Datos[], int Size){
	int x = 0, NumeroMinimo = 100;
	for(x=0;x<Size;x++) if(Datos[x] < NumeroMinimo) NumeroMinimo = Datos[x];
	return NumeroMinimo;
}

/* Devuelve el número máximo de un vector, dado sus elementos */
int Maximo(int Datos[], int Size){
	int x = 0, NumeroMaximo = 0;
	for(x=0;x<Size;x++) if(Datos[x] > NumeroMaximo) NumeroMaximo = Datos[x];
	return NumeroMaximo;
}

/* Devuelve el promedio xD */
float Promedio(float Total, float Numero){
	float Media = Total/Numero;
	return Media;
}

int CompararLetra(char Alpha, char Beta){
	int CodigoA = Alpha, CodigoB = Beta;
	if(CodigoA == CodigoB) return True;
	else return False;
}
