/*
	Nombre del programa:  4.Tri�nguloIs�sceles_Programa.c  
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josu�. 
	Fecha: 17/08/20 
	Versi�n: 1.0
	Descripci�n: Programa calcula el per�metro de un tri�ngulo is�sceles.
*/
#include <stdio.h>

int main(){
	
	float lado1 = 0; 
	float lado2 = 0; 
	float lado3 = 0; 
	float perimetro = 0; 
	
	printf("Hola soy Josu%c :D", 130); 
	printf("\n"); 
	printf("Programa calcula el per%cmetro de un tri%cngulo is%csceles.", 161, 160, 162); 
	printf("\nIngrese los cent%cmetros del primer lado:", 161);
	scanf("%f", &lado1); 
	printf("\nIngrese los cent%cmetros del segundo lado:", 161);
	scanf("%f", &lado2); 
	printf("\nIngrese los cent%cmetros del tercer lado:", 161);
	scanf("%f", &lado3); 
	if (lado1 == lado2 && lado1 != lado3 || lado1 !=lado2 && lado1==lado3 || lado2 == lado3 && lado2 != lado1){
		perimetro = lado1 + lado2 + lado3; 
		printf("\nEl per%cmetro del tri%cngulo is%csceles es: %.2f cm", 161, 160, 162, perimetro); 
	}else if(lado1 == lado2 && lado1 == lado3){
		printf("\nIngres%c tres lados iguales, por lo que no es un tri%cngulo is%csceles, no se puede calcular el per%cmetro.", 162, 160, 162, 161); 
	}else{
		printf("\nIngres%c tres lados diferentes, por lo que no es un tri%cngulo is%csceles, no se puede calcular el per%cmetro.", 162, 160, 162, 161); 
	}
	
    return 0; 	
}


