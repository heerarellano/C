/*
	Nombre del programa:  4.AñoBisiesto_Programa.c  
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josué. 
	Fecha: 24/08/20 
	Versión: 1.0
	Descripción: Programa que recibe un número entero que represente un año y devuelva verdadero si el año es bisiesto.
*/
#include <stdio.h>
#include <stdbool.h>

//Prototipo de la función. 
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
	Nombre de función: determinar_bisiesto
	Copyright: HJFA
	Autor: Francisco Arellano Herdson Josue
	Fecha: 24/08/19 
	Descripción: Función que determina si un año es bisiesto o no.
	Parámetros: 
	Por valor
	anio: Es el año que ingreso el usuario. 
	Por referencia
	*bandera: Es un valor booleano que devuelve verdadero sí el año es bisiesto. 
*/
bool determinar_bisiesto(int anio, bool *bandera){
	
	if(anio % 4 == 0){
		*bandera=true; 
	}
	return *bandera; 
}
