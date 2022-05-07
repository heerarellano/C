/*
	Nombre del programa:  4.PingPong_Programa.c  
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josu�. 
	Fecha: 24/08/20 
	Versi�n: 1.0
	Descripci�n: Programa que imprime los n�meros del 1 al 100, pero aplicando las siguientes reglas.
				Regla 1: Cuando el n�mero sea divisible entre 3, en vez del n�mero debe escribir "ping"
				Regla 2: Cuando el n�mero sea divisible entre 5, en vez del n�mero debe escribir "pong"
				Regla 3: Cuando el n�mero sea divisible entre 3 y tambi�n divisible entre 5, en vez del n�mero debe escribir "ping-pong"
*/

#include <stdio.h>

int main(){
	int contador = 0; 
	
	
	printf("Hola soy Josu%c :D", 130); 
	printf("\n"); 
	printf("Programa que imprime los n%cmeros del 1 al 100,aplicando las siguientes reglas.", 163); 
	printf("\nRegla 1: Cuando el n%cmero sea divisible entre 3, en vez del n%cmero debe escribir \"ping\" ", 163, 163);
	printf("\nRegla 2: Cuando el n%cmero sea divisible entre 5, en vez del n%cmero debe escribir \"pong\" ", 163, 163);
	printf("\nRegla 3: Cuando el n%cmero sea divisible entre 3 y tambi%cn divisible entre 5, en vez del n�mero debe escribir \"ping-pong\" ", 163, 130);
	
	for(contador = 1; contador <= 100; contador++){
		
		if(contador % 3 == 0 && contador % 5 == 0){
			printf("\n\nping-pong"); 
		}else if(contador % 3 == 0){
			printf("\n\nping");
		}else if(contador % 5 == 0){
			printf("\n\npong");
		}
		
	}
	
	return 0; 
}
