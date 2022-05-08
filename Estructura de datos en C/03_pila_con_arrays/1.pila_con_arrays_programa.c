#include <stdio.h>
#include <stdlib.h>
//Prototipos
void push(char n,char **tope,char *pila); 
void pop(char **tope,char *pila,int n); 
int pila_vacia(char *tope,char *InicioPila,int NumeroElementos);
int pila_llena(char *pila,char *tope); 
void ver_pila(char *pila,char *tope, int n); 
void ver_tope (char *tope); 


main(){

	
	char *pila;//Apunta a char 
	char *tope;//Apuntador que apunta a tipo char 

	int n;//Para darle el valor a la pila n numero de elementos 
	
    printf("Hola soy Josu%c. :D", 130); 
	printf("\n"); 
    printf ("\n ¿Cu%cl es el tamano de la pila?: ", 160);
    
    scanf ("%d", &n); //Ingresa el tamaño de carácteres

    //Void es sin tipo 
    pila=(char *) malloc (sizeof (char) *n); //Apuntara a la primera direccion del espacio reservado // Reseverva el espacio de memoria  //reserva espacios contiguos  //Se utiliza un arreglo para implementar la pila 
    
    tope = pila+n; //Donde estoy localizando la pila  en mi posicion de memoria poner el tope en algún lugar //aritmetica de apuntadores 
    
    printf ("\n1-Direccion tope: %p\t  Pila %p\n", tope, pila);//Direcciones a las que apunta 
     //Se inserta en tope 
     printf("\nPUSH"); 
    push('A', &tope,pila); //llamadas a  la funcion push  // como pila no  cambio no lo necesito mandar como referencia 
    push('B', &tope,pila);// // Se envia el elemento B por referencia 
    push('C', &tope,pila);
    push('D', &tope,pila);
    push('E',&tope,pila);
    push('F',&tope,pila);
    ver_pila(pila,tope,n); 
   
    
    printf ("\n2-Despues de PUSH la direcci%cn de  tope es : %p\t y la direcci%c de  pila es Pila: %p\n",162,  tope,162,  pila); //imprime   la dirección de memoria 
    
    printf("\nPOP"); 
    pop(&tope,pila,n);//Desapila por referencia     pop(&tope);
    pop(&tope,pila,n);
    ver_pila(pila,tope,n);
    
    
    printf ("\n3-Despues de POP la direcci%c de  tope es : %p\t  y la direcci%cn de  Pila es :  %p\n",162, tope,162,  pila);
    
    ver_tope(tope); 
    
    ver_pila(pila,tope,n); 
    
    free(pila);  //Libera el espacio de memoria utilizado con el malloc, pero no lo borra 
    system ("PAUSE");
       
}
/*
	Name: Función pila vacia 
	Copyright: HF 2019
	Author: Francisco Arellano Herdson Josue 
	Date: 22/08/19 10:03
	Description: Función que desapila un elemento de una pila implementada en un arrgelo dinámico 
	Parametros: 
		Tope: apuntador por referencia que se actualiza cuando eliminamos un elemento
		IniciPila: Es el puntero que apunta al inicio de la pila 
		NumeroElemento: Es el entero que indica el número de elementos  
		
*/
int pila_vacia(char *tope,char *InicioPila,int NumeroElementos){

    if(tope == InicioPila+NumeroElementos){
		return 1 ; // pila vacia  
	}
	else{
		//fprintf(stderr, "La pila est%c vacia\n",160); 
		return 0; 
	}
	
   
    
}
/*
	Name: Función pila llena 
	Copyright:	HJFA  2019
	Author: Francisco Arellano Herdson Josue
	Date: 22/08/19 10:20
	Description: Función que indica si una pilla está llena
	Parametros: 
		Pila: Apuntador al inicio de la pila
		Tope: apuntador al ultimo elemento de la pila 
		Regresa: Valor int 
		1: Cuando la pila esta llena 
		0: Cuando la pila no esta llena
*/


int pila_llena(char *pila,char *tope){ //No es necesario por referencia debido a que solo nececito los valores que tiene 
 	
	 if(pila==tope){
	 	return 1; //Pila llena 
	 }
	else{
		return 0; //"El elemento se agrego con exito" 
	}
	 
    
}//Hacer esta validación cada que hago un push 

/*
	Name: Función ver tope
	Copyright: HJFA  CDMX, 2019
	Author: Herdson Josue Francisco Arellano 
	Date: 22/08/19 09:49
	Description: Con está función se ve el último elemento en la pila 
		Parametros: 
		tope: apuntdor a carácteres que señala al último elemento de la pila 
*/


void ver_tope(char *tope){

    	printf("\n4-(ver_tope)El tope es: %c", *tope); 
    	
}

/*
	Name: Función ver pila
	Copyright: HJFA  CDMX, 2019
	Author: Herdson Josue Francisco Arellano 
	Date: 22/08/19 09:49
	Description: Con está función se ve los elementos que hay en la pila 
		Parametros: 
		tope: apuntador por referencia, que señala  a carácteres, muestra los elementos que hay en la pila. 
*/
void ver_pila(char *pila,char *tope, int n){
	
	char *aux;
	
	//if(pila_vacia)
	for(aux=tope+1; aux <= pila+n; aux++){
		printf("\n%c", *aux);
	}
	
}
    

/*
	Name: Función Push 
	Copyright:  CDMX, 2019
	Author: Francisco Arellano Herdson Josue 
	Date: 22/08/19 09:49
	Description: Agrega un elemento a una pila implementada en un arreglo dinámico 
	Parametros.
		elemento: carácter que conteienen el elelemto a agregar
		Tope: por referencia tipo apuntador 
		n: Número de elementos 
	regresa: No tiene valor de regreso 
*/



void push(char n,char **tope,char *pila){
     if(pila_llena(pila, *tope) == 0){
	    printf("\nEl elemento se agrego con exito"); 
     **tope=n;   //El contenido de lo que apunta tope
     (*tope)--;
 }else{
 	fprintf(stderr,"\nLa pila est%c llena (Stack Overflow)",160);
 }
     
}


/*
	Name: Función POP
	Copyright:  CDMX, 2019
	Author: Francisco Arellano Herdson Josue 
	Date: 22/08/19 09:49
	Description: Elimina un elemento de una pila implementada en un arreglo dinámico 
	Parametros:
		elemento: carácter que conteienen el elelemto a agregar
		Tope: por referencia tipo apuntador 
		n: Número de elementos 
	regresa: No tiene valor de regreso 
*/


void pop(char **tope,char *pila,int n){
	if(pila_vacia(*tope,pila,n) == 0){
	
     (*tope)++; //Incrementamos el tope
 }
     else{
     	fprintf(stderr,"\nLa pila esta vacia"); 
	 }
     
}



