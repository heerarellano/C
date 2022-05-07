/*
	Nombre del programa:  4. SumaDeConsecutivos_programa.c  
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josué. 
	Fecha: 14/08/20 
	Versión: 1.0
	Descripción: Programa que recibe un número entre 1 y 50 y devuelva la suma de los números consecutivos del 1 hasta ese número.
*/
#include <stdio.h>

int main(){
	
	short int numero_recibido = 0; 
	short int contador = 1; 
	short int suma = 0;  // Es la variable para guardar la suma de los números consecutivos. z
	
	printf("Hola soy Josu%c :D", 130); 
	printf("\n"); 
	printf("Programa que recibe un n%cmero entre 1 y 50,  y devuelve la suma de los n%cmeros consecutivos del 1 hasta ese n%Cmero.", 163,163,163); 
	printf("\n\nIngrese un n%cmero entre 1 y 50: ", 163); 
	scanf("%d", &numero_recibido); 
	if(numero_recibido >= 1 && numero_recibido <=50){
		for(contador = 1; contador <= numero_recibido; contador ++){
			
			suma += contador; 
			
			if(contador < numero_recibido){
				printf("%d + ", contador); 
			}else{
				printf(" %d", contador); 
			}
			
		}
		
		printf(" =  %d", suma); 
		
	}else{
		
		printf("\nN%cmero no v%clido, ingrese un n%cmero entre el 1 y el 50.", 163, 160, 163); 
	}
	
	return 0; 
}
