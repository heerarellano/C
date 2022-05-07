/*
	Nombre del programa:  4.Volados_Programa.c  
	Copyright: FAHJ
	Autor: Francisco Arellano Herdson Josué. 
	Fecha: 24/08/20 
	Versión: 1.0
	Descripción: Programa que juega volados con el usuario. 
				El juego tendrá 3 rondas.
				Al inicio de cada ronda, la computadora realiza una apuesta aleatoria entre $20 y $100. 
				Después el usuario deberá realizar su apuesta también con un límite entre $20 y $100.
				A continuación, el jugador deberá elegir AGUILA o SOL. El programa lanza el volado e imprime el resultado (AGUILA o SOL) el jugador gana si adivinó el resultado, en caso contrario gana el CPU.
				El ganador se lleva la cantidad de dinero que haya apostado su rival y este restará de su bolsa el dinero que perdió. 
				Tanto el jugador como el CPU empiezan con una bolsa de $500.
				Quien adivine más rondas gana.
				Al final de las 3 rondas, el programa debe imprimir quien es el ganador así como la cantidad de dinero tanto del jugador como del CPU.
*/
#include <stdio.h>
#include <stdlib.h> //Biblioteca que contiene la función rand() y srand(). 
#include <time.h>

//Prototipos de funciones. 
float validar_apuesta(int ronda, float *apuesta_usuario); 
int determinar_volado(int *volado, int *opcion_usuario); 
float calcular_resultados(float *bolsa_usuario, float *bolsa_cpu, float apuesta_usuario, float apuesta_cpu, int volado, int opcion_usuario); 
void determinar_ganador(float bolsa_usuario, float bolsa_cpu); 

int main(){
	 int ronda = 1; 
	 int opcion_usuario=0;  
	 int volado = 0; 
	 float bolsa_cpu = 500; 
	 float bolsa_usuario= 500; 
	 float apuesta_cpu=0; 
	 float apuesta_usuario=0; 
	 
	printf("Hola soy Josu%c :D", 130); 
	printf("\n");
	printf ("Programa que juegua volados con el usuario, el juego tendr%c 3 rondas.", 160); 
	srand(time(NULL));// Siembra el generador de números pseudoaleatorios utilizado por rand()con el valor seed.
	for(ronda =1; ronda <=3; ronda++){
		
		apuesta_cpu = 20 + rand() % 80;
		printf ("\n\nLa apuesta de la cpu de la ronda %d es de: %.2f", ronda, apuesta_cpu); 
	    validar_apuesta(ronda, &apuesta_usuario); 
	    determinar_volado(&volado,&opcion_usuario); 
	    calcular_resultados(&bolsa_usuario, &bolsa_cpu, apuesta_usuario, apuesta_cpu, volado, opcion_usuario); 
		
	}
	
	determinar_ganador(bolsa_usuario,bolsa_cpu); 
	 
	 return 0; 
}
/*
	Nombre de función: validar_apuesta
	Copyright: HJFA
	Autor: Francisco Arellano Herdson Josue
	Fecha: 24/08/19 
	Descripción: Función que válida las entradas del usuario, es decir verifica que su apuesta este en un límite de entre $20 y $100. 
	Parámetros: 
	Por valor
	ronda: Es la ronda en la que se encuentra. 
	Por referencia
	*apuesta_usuario: Es la apuesta del usuario. 
*/
float validar_apuesta(int ronda, float *apuesta_usuario){
	do{
			printf("\nIngrese su apuesta: "); 
			scanf("%f", &*apuesta_usuario); 
			 
			if(*apuesta_usuario < 20 || *apuesta_usuario > 100 ){
				printf("\nApuesta no v%clida, debe ingresar una apuesta con un l%cmite entre $20 y $100.", 160, 161); 
			}else{
				printf("\nTu apuesta de la ronda %d es: %.2f", ronda, *apuesta_usuario );
			}
			
		}while(*apuesta_usuario < 20 || *apuesta_usuario > 100 );
	return *apuesta_usuario; 
}
/*
	Nombre de función: determinar_volado
	Copyright: HJFA
	Autor: Francisco Arellano Herdson Josue
	Fecha: 24/08/19 
	Descripción: Función que determina el volado, es decir, permite al usuario elegir entre  0:AGUILA o 1: SOL, después realiza el volado. 
	Parámetros: 
	Por referencia
	*opcion_usuario: Es la opción que escoge el usuario 0: AGUILA o 1:SOL. 
	*volado: Es un valor aleatorio para determinar si es 0: AGUILA o 1:SOL.

*/
int determinar_volado(int *volado, int *opcion_usuario){
	
	printf("\n0: AGUILA"); 
	printf("\n1: SOL"); 
	printf("\nElige una opci%cn:", 162); 
	scanf("%d", &*opcion_usuario); 
	srand(time(NULL));
	*volado = rand() % 2; 
	if(*volado == 0){
		printf("\nEl resultado fue: AGUILA"); 
	}else{
		printf("\nEl resultado fue: SOL"); 
	}
	
	return *opcion_usuario; 
	return *volado; 
		
}

/*
	Nombre de función: calcular_resultados
	Copyright: HJFA
	Autor: Francisco Arellano Herdson Josue
	Fecha: 24/08/19 
	Descripción: Función que calcula los resultados de las apuestas, hace las operaciones correspondientes en las bolsas del usuario y el cpu. 
	Parámetros: 
	Por valor
	apuesta_usuario: Es la apuesta del usuario. 
	apuesta_cpu: Es la apuesta de la cpu.  
	volado: Es un valor aleatorio para determinar 0:AGUILA o 1:SOL.
	opcion_usuario: Es la opción del usuario 0:AGUILA o 1:SOL.
	Por referencia
	*bolsa_usuario:Es la bolsa de la apuesta del usuario.
	*bolsa_cpu:Es la bolsa de la apuesta de la cpu. 
*/

float calcular_resultados(float *bolsa_usuario, float *bolsa_cpu,float apuesta_usuario, float apuesta_cpu, int volado, int opcion_usuario){
	
	if(opcion_usuario == volado){
			*bolsa_usuario += apuesta_cpu; 
			*bolsa_cpu -= apuesta_cpu; 
			printf("\nGanaste esta ronda."); 
			printf("\nTu bolsa ahora es de: %.2f", *bolsa_usuario); 
			printf("\nLa bolsa de la cpu es: %.2f", *bolsa_cpu); 
			
		}else{
			*bolsa_cpu +=  apuesta_usuario;
			*bolsa_usuario -= apuesta_usuario;
			printf("\nPerdiste esta ronda.");  
			printf("\nTu bolsa ahora es de: %.2f", *bolsa_usuario); 
			printf("\nLa bolsa de la cpu es: %.2f", *bolsa_cpu); 
		}
		
		return *bolsa_usuario; 
		return *bolsa_cpu; 
}

/*
	Nombre de función: determinar_ganador
	Copyright: HJFA
	Autor: Francisco Arellano Herdson Josue
	Fecha: 24/08/19 
	Descripción: Función que determina quién es el ganador, de acuerdo a la cantidad final de sus bolsas.  
	Parámetros: 
	Por valor
	bolsa_usuario:Es la bolsa de la apuesta del usuario.
	bolsa_cpu:Es la bolsa de la apuesta de la cpu. 
*/


void determinar_ganador(float bolsa_usuario, float bolsa_cpu){
	printf("\n\nGanador: "); 
	if(bolsa_cpu > bolsa_usuario){
		printf(" cpu"); 
		
	}else{
		printf(" usuario"); 
	}
	printf("\n\nResultados finales");
	printf("\nTu bolsa es: %.2f", bolsa_usuario); 
	printf("\nLa bolsa de la cpu es: %.2f", bolsa_cpu);
}


