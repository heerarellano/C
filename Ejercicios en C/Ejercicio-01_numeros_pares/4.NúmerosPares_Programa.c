/*
	Nombre del programa:  4. NúmerosPares_programa 
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josué. 
	Fecha: 13/08/20 
	Versión: 1.0
	Descripción: Programa que imprime los números pares del 0 al 100.
*/

#include <stdio.h>

int main(){
	
    short int numero_par = 0;   //short para ocupar menos espacio de memoria. 
    
	printf("Hola soy Josu%c :D", 130); 
	printf("\n"); 
	printf("Programa que imprime los n%cmeros pares del 0 al 100.", 163); 
	
	printf("\n\nLos n%cmeros pares del 0 al 100 son : ", 163);  
	
	for(numero_par; numero_par <= 100 ; numero_par += 2){ //numer_par ya esta inicializado, por lo omití la inicialización en el for.  
	
		printf(" %d ", numero_par); 
	
	}
	
    return 0; 
}
