/*
	Name: PilaMemDinam.c
	Copyright: FAHJ
	Author: Francisco Arellano Herdson Josue
	Date: 05/09/19 
	Description: Programa que muestra el uso una pila dinámica 
	 
	
*/

#include <stdio.h>
#include <stdlib.h>




typedef struct nodo { // Se tiene que poner debido que hay un apuntador que va referir esa estructura en la linea ocho 
   int valor; //Variable valor de tipo entero
   struct nodo *siguiente;// Apuntador de tipo estructura  que señala a una estructura nodo 
} tipoNodo;
 
typedef tipoNodo *pNodo;// Se crea un apuntador de tipoNodo que puede apuntar a la estructura 
typedef tipoNodo *Pila;


 
/* Funciones con pilas: */
void Push(Pila *pila, int valor) {
   pNodo nuevo;//Apuntador de tipo pNodo que apunta a la estructura  tipoNodo
 
   /* Crear un nodo nuevo */
   nuevo = (pNodo)malloc(sizeof(tipoNodo));
   if(pila_llena()==1){
   	printf("\nNo hay espacio en la memoria"); 
   }
   nuevo->valor = valor; //para agregare el valor 
   
   /* Añadimos la pila a continuación del nuevo nodo */
   nuevo->siguiente = *pila;
   printf("\n\nEl elemento %d se agrego con exito",nuevo->valor); 
   /* Ahora, el comienzo de nuestra pila es en nuevo nodo */
   *pila = nuevo;
}

/*
	Name: Función pop
	Copyright: FAHJ
	Author: Francisco Arellano Herdson Josue
	Date: 05/09/19 
	Description: La función  desapila elementos
	Parametros: 
	pila: Apuntador de tipo pila que señala tipo Nodo
*/


int Pop(Pila *pila) {
   pNodo nodo; /* variable auxiliar para manipular nodo */
   int v;      /* variable auxiliar para retorno */
   
   /* Nodo apunta al primer elemento de la pila */
   nodo = *pila;
   if(!nodo){ 
   
   printf("\nPila sin elementos"); 
   return 0;
   } /* Si no hay nodos en la pila retornamos 0 */
   /* Asignamos a pila toda la pila menos el primer elemento */
   *pila = nodo->siguiente;
   /* Guardamos el valor de retorno */
   v = nodo->valor;
   
   printf("\n\nEl elemento %d se elimino con exito", nodo->valor);  
   /* Borrar el nodo */
   free(nodo);
   return v;
} 

/*
	Name: Función ver pila
	Copyright: FAHJ
	Author: Francisco Arellano Herdson Josue
	Date: 05/09/19 
	Description: La función permite ver el contenido de la pila
	Parametros: 
	pila: Apuntador de tipo pila que señala tipo Nodo
*/
void ver_pila(Pila pila){
   pNodo auxiliar;
   auxiliar = (pNodo)malloc(sizeof(tipoNodo));
   auxiliar = pila;
   printf("\n\nLa pila es:");
   while(auxiliar != NULL){
      printf("\n%d", auxiliar->valor);
      auxiliar = auxiliar -> siguiente;
   }

 }
 /*
	Name: Función ver_pila
	Copyright: FAHJ
	Author: Francisco Arellano Herdson Josue
	Date: 05/09/19 
	Description: La función  permite comprobar si la pila esta vacia
	Parametros: 
	pila: Apuntador de tipo pila que señala tipo Nodo
*/
 
 void pila_vacia(Pila pila){
 	
 	if(pila ==NULL){
 		printf("\nLa pila no contiene elementos"); 
	 }
 	
 }
 
 /*
	Name: Función ver tope
	Copyright: FAHJ 2019
	Author: Francisco Arellano Herdson Josue
	Date: 05/09/19 
	Description: Permite ver donde se encuentra la pila
	
*/
 
 void vertope(Pila pila){
 	printf("\n\nEl tope es %p", pila); 
 }
 
 /*
	Name: función  de tipo entero pila_llena
	Copyright: HJFA 2019.
	Author: Francisco Arellano Herdson Josue
	Date: 01/10/19 15:20
	Description: Permite saber si la pila esta llena o no 
	1: Indicando que no hay espacio en la memoria 
	          	
	0: Indicando  que sí hay espacio en la memoria 
*/

int pila_llena(){
	pNodo aux;

	if( (aux = (pNodo)malloc(sizeof(tipoNodo))) == NULL ){
		return 1;
	}else
		return 0;

}

int main() {
	
    
   Pila pila = NULL; // Apuntador pila que es una estructura de tipo nodo y sólo se usarian los asteriscos de referencia, por referencia asterisco y po valor sin
   Pop(&pila);
   vertope(pila); 
   pila_vacia(pila);
   pila_vacia(pila);
   Push(&pila, 20);
   Push(&pila, 10);
   Push(&pila, 30);
   //printf("%d, ", Pop(&pila));
   Push(&pila, 40);
   Push(&pila, 30);
   Pop(&pila); 
   ver_pila(pila); 

  // printf("%d, ", Pop(&pila));
  // printf("%d, ", Pop(&pila));
   Push(&pila, 90);
   printf("\n%d, ", Pop(&pila));
   printf("\n%d\n", Pop(&pila));
   printf("\n%d\n", Pop(&pila));
   ver_pila(pila); 
   vertope(pila); 

   getche();
   return 0;
}
