/*
	Nombre del programa:  4.A�oBisiesto_Programa.c  
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josu�. 
	Fecha: 24/08/20 
	Versi�n: 1.0
	Descripci�n: Programa que recibe un n�mero entero que represente un a�o y devuelva verdadero si el a�o es bisiesto.
*/
#include <stdio.h>
#include <stdbool.h>

//Prototipo de la funci�n. 
bool determinar_bisiesto(int anio, bool *bandera); 

int main(){
	int anio = 0; 
	bool bandera = 0;
	 
	printf("Hola soy Josu%c :D", 130); 
	printf("\n");  
	printf("Programa que recibe un n%cmero entero que represente un a%co y devuelva verdadero si el a%co es bisiesto.", 163, 164, 164); 
	printf("\nIngrese un a%co: ", 164); 
	scanf("%d", &anio); 
	determinar_bisiesto(anio, &bandera); 
	if(bandera == true){
		printf("\n %d Es un a%co bisiesto.",anio,  164); 
	}else{
		printf("\n %d No es un a%co bisiesto.", anio, 164); 
	}
	
	return 0; 
}
/*
	Nombre de funci�n: determinar_bisiesto
	Copyright: HJFA
	Autor: Francisco Arellano Herdson Josue
	Fecha: 24/08/19 
	Descripci�n: Funci�n que determina si un a�o es bisiesto o no.
	Par�metros: 
	Por valor
	anio: Es el a�o que ingreso el usuario. 
	Por referencia
	*bandera: Es un valor booleano que devuelve verdadero s� el a�o es bisiesto. 
*/
bool determinar_bisiesto(int anio, bool *bandera){
	
	if(anio % 4 == 0){
		*bandera=true; 
	}
	return *bandera; 
}
