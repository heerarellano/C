/*
	Nombre del programa:  4.Meses_Programa.c  
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josué. 
	Fecha: 24/08/20 
	Versión: 1.0
	Descripción: Programa que recibe un número entero entre 0 y 11, debe devolver el nombre de mes correspondiente. 
				Toma en cuenta que 0 = Enero y 11 = Diciembre
*/
#include <stdio.h>

int main(){
	int selector = 0; 
	
	
	printf("Hola soy Josu%c :D", 130); 
	printf("\n");  
	printf("\nPograma que recibe un n%cmero entero entre 0 y 11, debe devolver el nombre del mes correspondiente.", 163); 
	printf("\nToma en cuenta que 0 = Enero y 11 = Diciembre."); 
	printf("\nIngrese un n%cmero: ", 163); 
	scanf("%d", &selector); 
	switch(selector){
		case 0: printf("\nEnero"); 
				break;  
		case 1: printf("\nFebrero"); 
				break;  
		case 2: printf("\nMarzo"); 
				break; 
		case 3: printf("\nAbril"); 
				break;
		case 4: printf("\nMayo"); 
				break;
		case 5: printf("\nJunio"); 
				break;
		case 6: printf("\nJulio"); 
				break;
		case 7: printf("\nAgosto"); 
				break;
		case 8: printf("\nSeptiembre"); 
				break;
		case 9: printf("\nOctubre"); 
				break; 
		case 10:printf("\nNoviembre"); 
				break;
		case 11:printf("\nDiciembre"); 
				break;  
		default: printf("\nOpci%cn no v%clida.", 162, 160); 
		
	}
	return 0; 
}
