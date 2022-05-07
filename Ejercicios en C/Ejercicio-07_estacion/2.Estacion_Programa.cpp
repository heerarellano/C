/* *****
* Programa:A09Estacion
* Autor:Francisco Arellano Herdson Josué
* Objetivo: Identificar en que estación del año me encuentro
* Fecha:21/03/2019
***** */

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int eMes, eDia;
	printf("Hola soy Josu%c :D", 130); 
	printf("\n"); 
	printf("Programa que al recibir un n%cmero correspondiente al mes y otro correspondiente al d%ca devuelve un mensaje que indica la estaci%cn\n", 163, 161, 162);
	printf("Ingrese un n%cmero que corresponda al mes:");
	scanf("%d", &eMes);
	printf("Ingrese un n%cmero que corresponda al d%ca:", 163, 161);
	scanf("%d", &eDia);
	
	if (eDia < 1 || eDia > 31 ){
		printf("ERROR, d%ca fuera de rango.", 161);
	}else{
		switch (eMes){
			case 1:
			case 2:
			case 12: 
				if (eMes == 12 && eDia < 21){
					printf("Es Otoño");
				}else{
					printf("Es Invierno");
				}
				break;
			case 3:
			case 4:
			case 5:
				if(eMes == 3 && eDia < 21){
					printf("Es Invierno");
				}else{
					printf("Es Primavera");
				}
				break;
			case 6:
			case 7:
			case 8:
				if(eMes == 6 && eDia < 21){
					printf("Es Primavera");
				}else{
					printf("Es Otoño");
				}
				break;
			case 9:
			case 10:
			case 11:
				if(eMes == 9 && eDia < 21){
					printf("Es Otoño");
				}else{
					printf("Es Invierno");
				}
				break;
		}
	}

	getchar();
	return 0;
}

