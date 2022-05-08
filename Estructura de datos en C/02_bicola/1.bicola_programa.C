/*
	Name: Bicolas.c
	Copyright: HJFA
	Author: Francisco Arellano Herdson Josue
	Date: 22/09/19 
	Description: Mostrar el uso de colas sin restricciones
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int valor; 
	struct nodo *siguiente; 
	struct nodo *anterior; 
	
	
	
}tipoNodo; 

typedef tipoNodo *pNodo; 

//Prototipos
void insertar_por_final(pNodo *inicio,pNodo *final,int n); 
void eliminar_por_inicio(pNodo *inicio); 
void ver_cola(pNodo inicio); 
void ver_inicio(pNodo inicio); 
int cola_vacia(pNodo *inicio); 
void insertar_por_inicio(pNodo *inicio,pNodo *final,int n);
void eliminar_por_final(pNodo *inicio,pNodo *final); 
int cola_llena(); 

int main(){
	
	pNodo inicio=NULL; 
	pNodo final=NULL; 
	
	
	int eSelector=0; 
	int n=0; 
	do{
		
	printf("\n"); 
	printf("Hola soy Josu%c. :D", 130); 
	printf("\n"); 
	printf("\n\nMenu Cola Sin Restricciones\n1-Insertar por final\n2-Eliminar por el inicio\n3-Ver cola\n4-ver frente\n5-Insertar por el inicio\n6-Eliminar por el final\n7-Salir"); 
	printf("\n\nIngrese una opcion: "); 
	scanf("%d",&eSelector); 
	
	switch(eSelector){
		
		case 1: printf("\n\nIngrese un valor para poner en la cola: "); 
				scanf("%d",&n); 
				insertar_por_final(&inicio,&final,n); 
				break; 
		case 2: eliminar_por_inicio(&inicio); 
			break; 
		case 3: ver_cola(inicio); 
			break; 
		case 4: ver_inicio(inicio); 
		     	break; 
		     	
		case 5:printf("\n\nIngrese un valor para poner en la cola:"); 
				scanf("%d",&n); 
		 		insertar_por_inicio(&inicio,&final,n); 
		 		break; 
		case 6: eliminar_por_final(&inicio,&final); 
				break;
		
	}
	}while(eSelector !=7); 
//	pNodo auxiliar=NULL


	return 0; 

	
}

/*
	Name: insertar_por_final
	Copyright: HJFA
	Author: Francisco Arellano Herdson Josue
	Date: 22/09/19 
	Description: función que inserta por final
	Parámetros: 
	inicio: apuntador  pasado por referencia  que señala al inicio de la cola
	final: apuntador pasado por referencia que señala al final de la cola
	int: valor entero pasado por valor , para insertar un número en el campo valor 
*/


void insertar_por_final(pNodo *inicio,pNodo *final,int n){
	pNodo nuevo=NULL; 
	if(cola_llena()==1){
		printf("\nNo hay espacio en la memoria"); 
	}
	nuevo=(pNodo)malloc(sizeof(tipoNodo)); 
   //	pNodo ultimo=*inicio; 
	
	if(cola_vacia(inicio)==1){
		
		*final=nuevo; 
		*inicio=nuevo; 
		nuevo->valor= n;
		nuevo->siguiente=NULL; 
	    nuevo->anterior=NULL; 
	    
	    printf("\nEl elemento %d se agrego con exito por el final a la cola"); 
	    
		
	}else{
	    nuevo->valor= n;
	    nuevo->siguiente=NULL; 
	    nuevo->anterior= *final; 
	    (*final)->siguiente=nuevo; 
	    *final=nuevo;  
	printf("\nEl elemento %d  se  agrego con exito por el final",nuevo->valor); 
}
}

/*
	Name: eliminar_por_inicio
	Copyright: HJFA
	Author: Francisco Arellano Herdson Josue
	Date: 22/09/19 
	Description: función que elimina por inicio
	Parámetros: 
	inicio: apuntador  pasado por referencia  que señala al inicio de la cola
*/

void eliminar_por_inicio(pNodo *inicio){
	
	pNodo auxiliar;  
	
	if((cola_vacia(inicio))==1){
		printf("\nLa cola esta vacia"); 
	}
	else{
		
		auxiliar = *inicio; 
		*inicio= (*inicio)->siguiente; 
		printf("\n\nEl elemento %d se elimino por el inicio con exito",auxiliar->valor); 
		free(auxiliar); 
		
		
	}
	
}

/*
	Name: ver_cola
	Copyright: HJFA
	Author: Francisco Arellano Herdson Josue
	Date: 22/09/19 
	Description: función que utiliza un auxiliar para ver los valores en los nodos
	Parámetros: 
	inicio: apuntador  pasado por valor  que señala al inicio de la cola
*/

void ver_cola(pNodo inicio){
	
   	pNodo auxiliar=NULL; 
	
     auxiliar= inicio; 
	
	while( auxiliar != NULL){
		
		printf("\nLos elementos en la cola son: %d  \t",auxiliar->valor); 
		auxiliar= auxiliar->siguiente; 
		
	}
	
	
}

/*
	Name: ver_inicio
	Copyright: HJFA
	Author: Francisco Arellano Herdson Josue
	Date: 22/09/19 
	Description: función para ver el inico de la cola
	Parámetros: 
	inicio: apuntador  pasado por valor  que señala al inicio de la cola
*/

void ver_inicio(pNodo inicio){
	
	printf("\n\nEl inicio de la cola es: %d ",inicio->valor); 
	
}

/*
	Name: cola_vacia
	Copyright: HJFA
	Author: Francisco Arellano Herdson Josue
	Date: 22/09/19 
	Description: función  de tipo entero que regresa 1: si la cola esta vacía y 0: si la cola tiene elementos
	Parámetros: 
	inicio: apuntador  pasado por referencia  que señala al inicio de la cola
*/

int cola_vacia(pNodo *inicio){
	if(*inicio==NULL){
		return 1; 
		//printf("\nLa cola esta vacia"); 
	}else{
		return 0; 
	}
}

/*
	Name: insertar_por_inicio
	Copyright: HJFA
	Author: Francisco Arellano Herdson Josue
	Date: 22/09/19 
	Description: función  para insertar un elemento a la cola por inico
	inicio: apuntador  pasado por referencia  que señala al inicio de la cola
	final: apuntador pasado por referencia que señala al final de la cola
	int: variable entera para agregar un dato en el campo valor
*/



void insertar_por_inicio(pNodo *inicio,pNodo *final,int n){
	
	 pNodo nuevo; 
	
	if(cola_llena()==1){
		printf("\nNo hay espacio en la memoria"); 
	}
	nuevo=(pNodo)malloc(sizeof(tipoNodo)); 
	
	if(cola_vacia(inicio)==1){
		
		*final=nuevo; 
		*inicio=nuevo; 
		nuevo->valor= n;
		nuevo->siguiente=NULL; 
	    nuevo->anterior=NULL; 
	    
	    printf("\nEl elemento %d se agrego con exito por el inicio a la cola"); 
	    
		
	}else{
	
	
		
	nuevo->valor= n; 
	nuevo->siguiente= *inicio; 
	nuevo->anterior=NULL; 
	printf("\n\nEl elemento %d se agrego por el inicio con exito",nuevo->valor); 
	(*inicio)->anterior=nuevo; 
	*inicio= nuevo;
	}
	
	
	

	
}


/*
	Name: eliminar_por_final
	Copyright: HJFA
	Author: Francisco Arellano Herdson Josue
	Date: 22/09/19 
	Description: función  para eliminar un elemento por el final
	*inicio: apuntador  pasado por referencia  que señala al inicio de la cola
	*final: apuntador pasado por referencia que señala al final de la cola
	
*/


void eliminar_por_final(pNodo *inicio,pNodo *final){
	
	pNodo auxiliar;  
	
	if(*final==NULL){
		
		printf("\nLa cola esta vacia"); 
		
		*final=*inicio=NULL; 
		
	
		
	}
	else{
		
		auxiliar = *final; 
		*final= (*final)->anterior;
		//(*final)->siguiente=NULL; 
		printf("\n\nEl elemento %d se elimino por el final con exito",auxiliar->valor); 
		free(auxiliar); 
		
		
	}
	
}

/*
	Name: función  de tipo entero  cola_llena
	Copyright: HJFA 2019.
	Author: Francisco Arellano Herdson Josue
	Date: 01/10/19 15:20
	Description: Permite saber si la cola esta llena o no 
	1: Indicando que no hay espacio en la memoria 
	          	
	0: Indicando  que sí hay espacio en la memoria 
*/

int cola_llena(){
	pNodo aux;

	if( (aux = (pNodo)malloc(sizeof(tipoNodo))) == NULL ){
		return 1;
	}else
		return 0;

}
	
  


