/*
	Nombre del programa:  4.TriánguloEquilátero_Programa.c  
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josué. 
	Fecha: 17/08/20 
	Versión: 1.0
	Descripción: Programa calcula el perímetro de un triángulo equilátero.
*/
#include <stdio.h>

int main(){
	
	float lado1 = 0; 
	float lado2 = 0; 
	float lado3 = 0; 
	float perimetro = 0; 
	
	printf("Hola soy Josu%c :D", 130); 
	printf("\n"); 
	printf("Programa calcula el per%cmetro de un tri%cngulo equil%ctero.", 161, 160, 160); 
	printf("\nIngrese los cent%cmetros del primer lado:", 161);
	scanf("%f", &lado1); 
	printf("\nIngrese los cent%cmetros del segundo lado:", 161);
	scanf("%f", &lado2); 
	printf("\nIngrese los cent%cmetros del tercer lado:", 161);
	scanf("%f", &lado3); 
	if (lado1 == lado2 && lado1== lado3){
		perimetro = lado1 + lado2 + lado3; 
		printf("\nEl per%cmetro del tri%cngulo equil%ctero es: %.2f cm", 161, 160, 160, perimetro); 
	}else {
		printf("\nLos lados no son iguales, por lo que no es un tri%cngulo equil%ctero, no se puede calcular el per%cmetro.", 160, 160, 161); 
	}
	
    return 0; 	
}


