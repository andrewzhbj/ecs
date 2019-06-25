#ifndef BASICALIB_H_INCLUDED
#define BASICALIB_H_INCLUDED

#include <stdio.h>

int IngresarEntero(void);
float IngresarFlotante(void);
char IngresarLetra(void);
int NumeroAleatorio(int Max, int Min);

void Llenar(int [], int Size);
void MostrarDato(float Dato);
void MostrarTexto(char Texto[]);
void MostrarVector(int [], int Size);

/* Calculos */
int Signo(int Num);
int AlCubo(float Num);
int Paridad(float Num);
int AlCuadrado(float Num);
int ValorAbsoluto(float Num);
int Total(int [], int Size);
int Minimo(int [], int Size);
int Maximo(int [], int Size);
float Promedio(float Total, float Numero);

int CompararLetra(char, char);
#endif
