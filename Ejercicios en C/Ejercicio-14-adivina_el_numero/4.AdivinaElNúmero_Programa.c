/*
	Nombre del programa:  4.AdivinaElN�mero_Programa.c  
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josu�. 
	Fecha: 19/08/20 
	Versi�n: 1.0
	Descripci�n: Programa en el cual el usuario debe adivinar un n�mero entre 1 y 100.
			    El n�mero es generado aleatoriamente por el programa. 
				El programa solo le dar� 5 intentos al usuario para adivinar. 
				Al final de los 5 intentos, el programa deber� mostrar el mensaje "PERDISTE" y mostrar� cu�l era el n�mero correcto.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
    int numero_aleatorio=0; 
	int oportunidad=0; 
	int numero_recibido=0; 
	
	printf("Hola soy Josu%c :D", 130); 
	printf("\n"); 
	printf("\nPrograma en el cual el usuario debe adivinar un n%cmero entero entre 1 y 100.", 163); 
	printf("\nEl n%cmero es generado aleatoriamente por el programa.", 163); 
	printf("\nEl programa solo le dar%c 5 intentos al usuario para adivinar.", 160); 
	srand(time(NULL));	// Siembra el generador de n�meros pseudoaleatorios utilizado por rand()con el valor seed.
	numero_aleatorio= 1 + rand() % 100; //Se le suma 1 para asegurar que el valor no sea 0. 
	while(oportunidad < 5){
		printf("\n\nIngrese un n%cmero:", 163); 
		scanf("%d", &numero_recibido); 
		if(numero_recibido == numero_aleatorio){
			printf("\n\nGANASTE"); 
			printf("\nEl n%cmero es: %d ", 163, numero_aleatorio);
			oportunidad = 6; //Para salir del ciclo while.   	
		}else{
			printf("\nIntento %d fallido", oportunidad + 1);  
			++oportunidad; 
		}
	}
	
	if(oportunidad == 5){
		printf("\n\nPERDISTE");
		printf("\nEl n%cmero  correcto es: %d", 163, numero_aleatorio);  
	}
	
	return 0; 
}
