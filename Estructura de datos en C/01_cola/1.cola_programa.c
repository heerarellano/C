/*
	Name: EjercicioCompletoCola.c
	Copyright: HJFA 2019
	Author: Francisco Arellano Herdson Josue
	Date: 11/09/19 15:20
	Description: Mostar el uso de colas en c
*/

#include <stdio.h>
#include <stdlib.h>
//Declaramos la estructura tipoNodo

typedef struct nodo
{
    int valor;
    struct nodo *siguiente;
}tipoNodo;

//Declaramos un tipo de dato pnodo que es un apuntado a tipoNodo

typedef tipoNodo *pNodo; 

//Declaramos el inicio y final de la cola
 
 pNodo inicio = NULL;
 pNodo  final = NULL;
 
 //Prototipos de funciones

void vercola();
void sumacola(int);
void eliminarcola();
int colavacia(); 

int main()
{
	
	eliminarcola(); 
	sumacola(20); 
	sumacola(30); 
	sumacola(40); 
	sumacola(99); 
	sumacola(100); 
	vercola(); 
	eliminarcola(); 
	eliminarcola(); 
	vercola(); 
	  
    return 0; 
}

/*
	Name: sumacola
	Copyright: HJFA 2019
	Author: Francisco Arellano Herdson Josue
	Date: 11/09/19 15:20
	Description: agrega un elemento a la cola
*/

void sumacola(int v)
{
	
	pNodo nuevo; 
	
    nuevo = (pNodo)malloc(sizeof(tipoNodo));
    
    nuevo->valor = v;
    nuevo->siguiente = NULL;
    printf("\n\nEl elemento %d se agrego con exito",nuevo->valor ); 
    if (colavacia()== 0)
    {
        inicio = nuevo;
        final = nuevo;
    }
    else
    {
        final->siguiente = nuevo;
        final = nuevo;// = final = final->siguiente
    }
}
/*
	Name: Función vercola
	Copyright: HJFA 2019
	Author: Francisco Arellano Herdson Josue
	Date: 11/09/19 15:20
	Description: Muestra los elementos que hay en la cola
*/

void vercola()
{
    pNodo auxiliar; 
    auxiliar = inicio;
    printf("\n");
    while (auxiliar != NULL)
    {
        printf("\n\nLos elementos en la cola son:%d\t", auxiliar->valor);
        auxiliar = auxiliar->siguiente;
    }
}
/*
	Name: función colavacia
	Copyright: HJFA 2019
	Author: Francisco Arellano Herdson Josue
	Date: 11/09/19 15:20
	Description: indica si la cola está vacia
	0: la cola está vacia
	1: hay elementos en la cola
*/

int colavacia(){
	
	if(final==NULL){
		return 0; 
		
	}else{
		return 1; 
	}
    
	
}
/*
	Name: eliminarcola
	Copyright: HJFA 2019
	Author: Francisco Arellano Herdson Josue
	Date: 11/09/19 15:20
	Description: elimina un elemento en la cola
*/
void eliminarcola()
{
    if (colavacia()==0)
    {
        printf("\n\nNo hay elementos en la cola");
    }
    else
    {
        pNodo aux; 
        aux = inicio;
        inicio = inicio->siguiente;
        printf("\n\nElemento %d  eliminado correctamente", aux->valor);
        free(aux);
    }
}
