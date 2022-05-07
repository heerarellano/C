/*
	Nombre del programa:  4. DólaresAPesos_Programa.c  
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josué. 
	Fecha: 16/08/20 
	Versión: 1.0
	Descripción: Programa que recibe como entrada un monto en dólares (USD) y devuelve la cantidad equivalente en pesos mexicanos (MXN)
*/
#include <stdio.h>
//Información obtenida de: https://www.banamex.com/economia-finanzas/es/mercado-de-divisas/index.html
//Consultada el día 07/05/2022. 
#define PRECIO_DOLAR 20.6500 //Precio del dólar en pesos méxicanos

int main(){
	
	double dolar = 0;
	double peso = 0;
	
	printf("Hola soy Josu%c :D", 130); 
	printf("\n"); 
	printf("Programa que recibe como entrada un monto en d%clares (USD) y devuelve la cantidad equivalente en pesos mexicanos (MXN).", 162); 
	printf("\n\nIngrese un monto en d%clares: ", 162); 
	scanf("%lf", &dolar); 
	peso = dolar * PRECIO_DOLAR;
	printf("\nLos d%clares que ingres%c son: $ %.4lf USD ", 162, 162,dolar); 
	printf("\nEn pesos mexicanos son: $ %.4lf MXN", peso); 
	
	return 0; 
}


