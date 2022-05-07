/* *****
* Programa:A15Fibonacci.c
* Autor: Francisco Arellano Herdson Josué. 
* Objetivo: Programa que muestra los primeros 20 números de la serie de fibonacci
* Fecha: 04/04/2019
***** */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int eContador = 0, eFibonacci, eUltimo = 1, ePenultimo = 0;
	printf("Hola soy Josu%c :D", 130); 
	printf("\n"); 
	printf("Este programa te muestra los primeros 20 n%cmeros de la serie de fibonacci.\n", 163);
	printf("%d, %d, %d", eContador, eUltimo, ePenultimo);
	
	for(eContador = 3; eContador < 20; eContador++){
		eFibonacci = ePenultimo + eUltimo;
		ePenultimo = eUltimo;
		eUltimo = eFibonacci;
		
		printf(", %d", eFibonacci);
	}

	getchar();
	return 0;
}

