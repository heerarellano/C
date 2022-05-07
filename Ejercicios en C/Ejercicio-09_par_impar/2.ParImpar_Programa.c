/* *****
* Programa:A11
* Autor:Francisco Arellano Herdson Josué.
* Objetivo: Programa que determina sí un número es par o impar. 
* Fecha: 28/03/2019
***** */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int eNum, eResiduo;
	
	printf("Hola soy Josu%c :D", 130); 
	printf("\n"); 
	printf("Programa que determina si un n%cmero es par.\n", 163);
	
	printf("Ingrese un n%cmero:", 163);
	scanf("%d", &eNum);
	
	eResiduo = eNum % 2;
	
	if( eResiduo == 0 ){	
		printf("%d es un n%cmero par.", eNum, 163);
	} else {
		printf("%d es un n%cmero impar.", eNum, 163);
	}


	getchar();
	return 0;
}

