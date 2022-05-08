
//BIBLIOTECAS
#include <stdio.h>			
#include <stdlib.h>
#include <windows.h>
#include <string.h>


//PROTOTIPOS
void cambiarColor(); //Procedimiento cambiar color de consola.
void moverCursor (int, int); //Funci�n PAra mover el cursor a donde se desee.
void dibujarMarco(); //Procedimiento para dibujar un marco en la consola.
void linea(int); //Procedimiento para dibujar una l�nea en el rengl�n deseado.


/* **********************************************************************
	FUNCI�N: cambiarColor
	AUTOR: Francisco Arellano Herdson Josue
	FECHA DE CREACI�N: 21 / 11 / 2019
	FECHA DE �LTIMA ACTUALIZACI�N: 
	OBJETIVO: Cambiar el color de la consola.
	DE(PE): 
	DS(PS): 
********************************************************************** */
void cambiarColor(){	
/*color de consola : 		
0 = Negro					A = Verde claro 
1 = Azul					B = Aguamarina claro
2 = Verde					C = Rojo claro 
3 = Aguamarina 				D = Purpura claro 
4 = Rojo					E = Amarillo claro 
5 = Purpura					F = Blanco brillante
6 = Amarillo 
7 = Blanco 
8 = Gris 
9 = Azul claro */

	system("color 17");
	system("cls");
	
} 


/* **********************************************************************
	FUNCI�N: moverCursor
	AUTOR: Francisco Arellano Herdson Josue
	FECHA DE CREACI�N: 27/ 11 / 2019
	FECHA DE �LTIMA ACTUALIZACI�N:
	OBJETIVO: Mover el cursor a las coordenadas ingresadas.
	DE(PE): 
	DS(PS): 
********************************************************************** */
void moverCursor(int eRenglon, int eColumna){
	
	HANDLE salida; //manejador de recursos de windows
	COORD coord; //objeto coordenada
	
	salida = GetStdHandle(STD_OUTPUT_HANDLE);	//obtiene manejador de salida est�ndar
	
	coord.Y = eRenglon; //pone coordenada Y
	coord.X = eColumna; //pone coordenada X
	
	SetConsoleCursorPosition(salida, coord);	//mueve el cursor	ConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); //mueve el cursor
}


/* **********************************************************************
	FUNCI�N: dibujarMrco
	AUTOR: Francisco Arellano Herdson Josue
	FECHA DE CREACI�N: 27 / 11 / 2019
	FECHA DE �LTIMA ACTUALIZACI�N:
	OBJETIVO: Dibujar un marco en la consola.
	DE(PE): 
	DS(PS): 
********************************************************************** */
void dibujarMarco(){
	
	cambiarColor();
	
	int eRenglon, eColumna;
	
	
	
	system ("cls");								//Limpia la pantalla 

	
	//L�nea superior
	printf("%c", 201); //Esquina Superior Izquierda
	
	for ( eColumna = 1; eColumna < 118; eColumna ++ ){
		printf("%c", 205);	
	}

	//Lados		
	printf("%c\n", 187); //Esquina Superior Derecha
	for (eRenglon = 2; eRenglon < 29; eRenglon ++ ){
		printf("%c                                                         "
			    "                                                            %c\n", 186, 186);
	}	
	
	//L�nea inferior
	printf("%c", 200); //Esquina Inferior Izquierda
	
	for ( eColumna = 1; eColumna < 118; eColumna ++ ){
		printf("%c", 205);	
	}
	
	printf("%c", 188); //Esquina Inferior Derecha
	
	//Dibujar l�nea bajo el t�tulo
	moverCursor(4,1);
	for ( eColumna = 1; eColumna < 118; eColumna ++ ){
		printf("%c", 205);
	}

}


/* **********************************************************************
	FUNCI�N: linea
	AUTOR: Francisco Arellano Herdson Josue
	FECHA DE CREACI�N: 27 / 11 / 2019
	FECHA DE �LTIMA ACTUALIZACI�N: 
	OBJETIVO: Dibujar una l�nea en el renglon indicado.
	DE(PE): 
	DS(PS): 
********************************************************************** */
void linea(int eRen){
	
	int eCol;
		
	for (eCol = 1; eCol < 118; eCol++) {

		moverCursor(eRen, eCol);		//l�nea 
		printf("%c", 196);				//Escribe el caracter
	}
}

