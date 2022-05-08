
//BIBLIOTECAS
#include <stdio.h> //Biblioteca estándar de entrada y salida. 
#include <string.h> //Biblioteca para el manejo de cadenas.
#include <stdlib.h> //Biblioteca para conversión de datos.
#include <conio.h> //Biblioteca para el uso de carácteres
#include <stdbool.h>//Biblioteca para manejo de variables booleanas 
#include "EditarMenu.h" //Biblioteca para editar la interfaz del menú.


typedef struct nodo{
	int informacion; 
	char estado[30]; 
	char emergencia[20]; 
	char alcaldia [30];
	char colonia[30];
	char calle[30];
	char calle2[30]; 
	
	struct nodo *liga;
	
}tipoNodo; 
//Prototipos
typedef tipoNodo *pNodo; 
void insertar(pNodo *P); 
void eliminar(pNodo *P); 
void recorre_iterativo(pNodo P); 
void listar(pNodo P); 
int lista_llena();




/***********************************************************************
	FUNCIÓN: Menú principal
	AUTOR: Francisco Arellano Herdson Josue 
	FECHA DE CREACIÓN: 27 Abril del 2019
	OBJETIVO:  (menú principal).
	DE(PE): No recibirá parámetros.
	RETORNA: 0 en caso de no encontrar fallas o cualquier otro número <> 0 en caso de encontrar un error. 
************************************************************************/
int main (){
	
	int eOpcion;  //Variable que permitirá seleccionar una opción del menú principal.
	pNodo inicio=NULL;
	
	
	do { //Ciclo repetir-hasta para que se muestre el menú principal cada vez que se desee.
	
		system("cls");
		
		dibujarMarco(); //Invocar al procedimiento dibujarMarco
		moverCursor (2, 35); //Muestra línea en una posición.
		printf("BIENVENIDOS AL SISTEMA AYUDA PARA TODOS", 173, 163);
    	moverCursor (7, 40);
    	printf("%c 1.REGISTRAR EMERGENCIAS", 175, 161);
    	moverCursor (10, 40);     
    	printf("%c 2.CONSULTAR EMERGENCIAS", 175);
	    moverCursor (13, 40);         
	    printf("%c 3.LISTAR EMERGENCIAS", 175);
	    moverCursor (16, 40);
	    printf("%c 4.ELIMINAR EMERGENCIAS", 175);
	    moverCursor (18, 40);
	    printf("%c 5.SALIR", 175);
	    
	    
	    
	    linea(22); //Dibuja una línea
	    moverCursor (25, 33);
	    printf("INTRODUZCA LA OPCI%cN QUE DESEA UTILIZAR: ",224);
    	scanf("%d", &eOpcion); //Leer variable eOpcion.
    	
    	switch(eOpcion){ //En caso de eOpcion, hacer...
    		
    		case 1: insertar(&inicio);  //Ejecutar el sub-menú Artículos. 
    				break; //Terminar el ciclo en caso de.

    				
			case 2: recorre_iterativo(inicio); //Ejecutar el sub-menú Proveedores. 
    				break; //Terminar el ciclo en caso de.
      				
    		case 3: listar(inicio);  
    			    break; //Terminar el ciclo en caso de.
 				
    		case 4: eliminar (&inicio); 
    				break; //Terminar el ciclo en caso de.
    				
    		case 5: moverCursor (28, 49);
				 	printf("Hasta luego");  
    				break; //Terminar el ciclo en caso de.
    				
    		default:moverCursor (28, 49);
					printf("Error en la selecci%cn\n", 162); //Imprimir con formato un error. 
					system("pause");
					break; //Terminar el ciclo en caso de.
    				 
		}
		
	} while (eOpcion != 5); //Mientras la opción sea diferente de 5, se seguirá mostrando el menú principal. 
	
	getchar (); 
    return 0; //Regresar 0.  	    
}

/*
	Name: Función insertar
	Copyright: FAHJ
	Author: Francisco Arellano Herdson Josue 
	Date: 27/11/19
	Description: Función para insertar nodos  
	Parámetros: 
	*P: apuntador al inicio de la lista pasado por referencia 
*/
void insertar(pNodo *P){
	pNodo Q=NULL; 
	pNodo T=NULL;  
	int infoP=0; 
	bool BAND=true; 
	pNodo X=NULL; 
	int dato; 
	pNodo F=NULL; 
	pNodo aux=*P;  
	char estado[30]; 
	char emergencia[30]; 
	char alcaldia[30];
	char colonia[30];
	char calle[30];
	char calle2[30]; 
	
	Q=*P; 
	T=*P; 
	
	
	if (*P==NULL){
		
		system("cls");
		
		dibujarMarco(); //Invocar al procedimiento dibujarMarco
		moverCursor (3, 45); //(y,x) 
		printf("REGISTRAR EMERGENCIA", 173, 163); 
		moverCursor (5, 40); //(y,x) 
		printf("Ingrese los siguientes datos", 173, 163); 
    	moverCursor (8, 25);//
		printf("Prioridad:");
		scanf("%d", &infoP);
		moverCursor (10, 25);
		printf("Emergencia: "); 
		fflush(stdin); 
		scanf("%s", &emergencia);  //No llevan moverCursor debido a que la lectura se haria en un lugar diferente. 
		moverCursor (12, 25);//
		printf("Estado:");
		fflush(stdin); 
		scanf("%s", &estado);
		moverCursor (14, 25);
		printf("Alcaldia o Delegaci%cn:", 162); 
		fflush(stdin); 
		scanf("%s", &alcaldia); 
		moverCursor (16, 25);
		printf("Colonia : "); 
		fflush(stdin); 
		scanf("%s", &colonia); 
		moverCursor (18, 25);
		printf("Calle: "); 
		fflush(stdin); 
		scanf("%s", &calle);
		moverCursor (20, 25);
		printf("Entre la calle: "); 
		fflush(stdin); 
		scanf("%s", &calle2); 
		if( lista_llena()==1){
			printf("\nNo hay espacio en la memoria "); 
			return; 
		}
		*P=(pNodo)malloc(sizeof(tipoNodo)); 
		
		(*P)->informacion=infoP; 
		strcpy((*P)->estado,estado); 
		strcpy((*P)->emergencia,emergencia); 
		strcpy((*P)->alcaldia ,alcaldia); 
		strcpy((*P)->colonia,colonia); 
		strcpy((*P)->calle,calle); 
		strcpy((*P)->calle2,calle2); 
		(*P)->liga=NULL; 
		moverCursor (22, 40);
		printf("Registro realizado correctamente");
		sleep(1); 
		return; 
	}
	
	
	F=*P;
	while(F->liga !=NULL){
		F=F->liga; 
	}
	
		system("cls");
		
		dibujarMarco(); //Invocar al procedimiento dibujarMarco
		moverCursor (3, 45); //(y,x) 
		printf("REGISTRAR EMERGENCIA", 173, 163); 
		moverCursor (5, 40); //(y,x) 
		printf("Ingrese los siguientes datos", 173, 163); 
    	moverCursor (8, 25);//
		printf("Prioridad:");
		scanf("%d", &dato);
		moverCursor (10, 25);
		printf("Emergencia: "); 
		fflush(stdin); 
		scanf("%s", &emergencia);  //No llevan moverCursor debido a que la lectura se haria en un lugar diferente. 
		moverCursor (12, 25);//
		printf("Estado:");
		fflush(stdin); 
		scanf("%s", &estado);
		moverCursor (14, 25);
		printf("Alcaldia o Delegaci%cn:  ", 162); 
		fflush(stdin); 
		scanf("%s", &alcaldia); 
		moverCursor (16, 25);
		printf("Colonia : "); 
		fflush(stdin); 
		scanf("%s", &colonia); 
		moverCursor (18, 25);
		printf("Calle: "); 
		fflush(stdin); 
		scanf("%s", &calle);
		moverCursor (20, 25);
		printf("Entre la calle: "); 
		fflush(stdin); 
		scanf("%s", &calle2); 
	if( lista_llena()==1){
			printf("\nNo hay espacio en la memoria "); 
			return; 
		}
	X=(pNodo)malloc(sizeof(tipoNodo)); 
	X->informacion=dato; 
	strcpy(X->estado,estado); 
	strcpy(X->emergencia,emergencia); 
	strcpy(X->alcaldia,alcaldia); 
	strcpy(X->colonia,colonia); 
	strcpy(X->calle,calle); 
	strcpy(X->calle2,calle2); 
	
	
	if(X->informacion >F->informacion){ //Sí es el último nodo 
	
	
	X->liga=NULL; 
	F->liga=X; 
//	printf("\nEl elemento %d se agrego con exito",X->informacion);
	}else{
		while(Q->informacion <= X->informacion && BAND==true ){
			if(Q->liga != NULL){
			
			T=Q; 
			Q=Q->liga; 
		}else{
			BAND=false; 
		}
		}
		
		if (BAND==false){
			moverCursor (22, 40);
			printf("\nNo se encontr%c el elemento", 162); 
		}else{
			
				 
		X->liga= Q; 
		T->liga=X; 
		moverCursor (22, 40);
		printf("Registro realizado correctamente");
		sleep(1); 
			
		}
		
		
	}
	
	
}

/*
	Name: eliminar
	Copyright: FAHJ
	Author: Francisco Arellano Herdson Josue 
	Date: 21/11/19
	Description: Función para eliminar nodos
	Parámetros: 
	*P: apuntador al inicio de la lista pasado por referencia 
*/

void eliminar(pNodo *P){
	pNodo Q,T;  
	int infoP; 
	bool BAND=true; 
	pNodo X; 
	int dato; 
	pNodo F; 
	pNodo anteriorF; 
	
	 
	Q=*P; 
	T=*P; 
	F=*P; 
	anteriorF=*P; 
	system("cls");
	dibujarMarco(); //Invocar al procedimiento dibujarMarco
	moverCursor (3, 45); //(y,x) 
	printf("ELIMINAR REGISTRO DE EMERGENCIAS", 173, 163);
	moverCursor (8, 38);
	printf("Ingrese la prioridad de un registro a eliminar: ");
	scanf("%d",&dato);
	
	if((*P)->informacion==dato){
		moverCursor (12, 45);
		printf("Primer registro eliminado %d", Q->informacion); 
		sleep(1); 
		*P=(*P)->liga; 
		free(Q); 
		return; 
	}
	
	F=*P;
	while(F->liga !=NULL){
		anteriorF=F; 
		F=F->liga; 
	}
	
	
	if(dato==F->informacion){ 
		moverCursor (12, 45);
	printf("%cltimo registo eliminado %d",233,F->informacion); 
	
		sleep(1);
		anteriorF->liga=NULL; 
		free(F); 

	}else{
	
	
	
	
		while(Q->informacion != dato  &&BAND==true ){
			if(Q->liga != NULL){
			
			T=Q; 
			Q=Q->liga; 
		}else{
			BAND=false; 
		}
		}
		
		if (BAND==false){
			moverCursor (12, 45);
			printf("No se encontro  el registro a eliminar"); 
			sleep(1);
		}else{
			
				 
		T->liga= Q->liga; 
		 
		
		free(Q); 
		
			
		}
		
		moverCursor (12, 45);
		printf("Registro eliminado con exito",Q->informacion); 
		sleep(1);
		
	}
}
		
		
	
	
	
/*
	Name: Función recorre_iterativo (consultar) 
	Copyright: FAHJ
	Author: Francisco Arellano Herdson Josue 
	Date: 27/11/2019
	Description: Función para ver los nodos  uno por uno 
	Parámetros: 
	P: apuntado al inicio de la lista pasado por valor
*/

void recorre_iterativo(pNodo P){
	
	pNodo Q=NULL; 
	Q=P; 
	int eOpcion; 
	
		system("cls");
		dibujarMarco(); //Invocar al procedimiento dibujarMarco
		moverCursor (3, 45); //(y,x) 
		printf("LISTAR EMERGENCIA", 173, 163);
	
	if(Q==NULL){
		moverCursor (19, 45);
		printf("No hay registros"); 
		sleep(1); 
		

		
	}else{
		
		
		
		do{
			
		
		 //Invocar al procedimiento dibujarMarco
		 
    
		moverCursor (8, 45);
		printf("Prioridad: %d", Q->informacion);
		moverCursor (9, 45);
		printf("Emergencia: %s", Q->emergencia); 
		moverCursor (10, 45);
		printf("Estado: %s", Q->estado); 
		moverCursor (11, 45);
		printf("Alcaldia: %s", Q->alcaldia);
		moverCursor (12, 45);
		printf("Colonia: %s", Q->colonia);
		moverCursor (13, 45);
		printf("Calle: %s", Q->calle);
		moverCursor (14, 45);
		printf("Entre la calle: %s", Q->calle2);
		
		moverCursor (16, 10);
		printf("1)-Continuar(consultar el siguiente registro)");
		moverCursor (16, 65);
		printf("0)-Salir a men%c principal", 163);
		moverCursor (18, 45);
		printf("Ingrese la opci%cn: :  ", 162); 
		
		fflush(stdin); 
		scanf("%i", &eOpcion); 
		fflush(stdin); 
		
		if(eOpcion ==1 && Q->liga==NULL){
			moverCursor (19, 45);
			printf("No hay m%cs registros", 160); 
			sleep(1); 
			return; 
		}
		Q=Q->liga; 
		
		
	}while(eOpcion!=0); 
	
	}
		
	

}
/*
	Name: listar
	Copyright: FAHJ
	Author: Francisco Arellano Herdson Josue 
	Date: 27/11/19
	Description: Función para ver todos los nodos 
	Parámetros: 
	*P: apuntador al inicio de la lista pasado por referencia 
*/
void listar(pNodo P){
	pNodo Q=P; 
	int eOpcion=0; 
	system("cls");
		
	dibujarMarco(); //Invocar al procedimiento dibujarMarco
	moverCursor (3, 45); //(y,x) 
	printf("LISTAR EMERGENCIA(S)");
		
	//Eso saltos de línea son debidos a que con las funciones de (moverCursor) se superponen encima unas de otras
	if (Q==NULL){
		moverCursor (19, 45); 
		printf("No hay registros"); 
		sleep(1); 
	}else{
		
		
		while(Q!=NULL){
		
			
		printf("\n\n\n\t\t\t\t\t\tPrioridad: %d", Q->informacion);
		
		printf("\n\t\t\t\t\t\tEmergencia: %s", Q->emergencia); 
		
		printf("\n\t\t\t\t\t\tEstado: %s", Q->estado); 
		
		printf("\n\t\t\t\t\t\tDelegaci%cn: %s",162,  Q->alcaldia);
		
		printf("\n\t\t\t\t\t\tColonia: %s", Q->colonia);
	
		printf("\n\t\t\t\t\t\tCalle: %s", Q->calle);
		
		printf("\n\t\t\t\t\t\tEntre la calle: %s", Q->calle2);
		
		Q=Q->liga; 
		
		} 
		printf("\n\n\t\t\t\t\t\t0)-Salir a men%c principal:", 163);
		scanf("%d", &eOpcion); 
		
		if(eOpcion==0){
			return; 
		}else{
			return; 
		}
			
		}
		
		
	}


/*
	Name: lista_llena
	Copyright: FAHJ
	Author: Francisco Arellano Herdson Josue 
	Date: 27/11/19 
	Description: Función para saber sí la memoria esta llena
	1: La memoria esta llena
	0: Se pueden ingresar mas nodos 
*/

int lista_llena(){
	pNodo nuevo; 
	if((nuevo=(pNodo)malloc(sizeof(tipoNodo)))==NULL){
		return 1; 
	} else{
	return 0; 
	}
}
