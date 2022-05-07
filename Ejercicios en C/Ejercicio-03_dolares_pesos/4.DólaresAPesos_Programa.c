/*
	Nombre del programa:  4. D�laresAPesos_Programa.c  
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josu�. 
	Fecha: 16/08/20 
	Versi�n: 1.0
	Descripci�n: Programa que recibe como entrada un monto en d�lares (USD) y devuelve la cantidad equivalente en pesos mexicanos (MXN)
*/
#include <stdio.h>
//Informaci�n obtenida de: https://www.banamex.com/economia-finanzas/es/mercado-de-divisas/index.html
//Consultada el d�a 07/05/2022. 
#define PRECIO_DOLAR 20.6500 //Precio del d�lar en pesos m�xicanos

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


