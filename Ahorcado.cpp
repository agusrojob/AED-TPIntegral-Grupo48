#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void inicializar(char jue[], int longitud);
void muestra(char v[], int longitud, int c);
int busqueda(int cantidad, char pa[], char jue[], char x, int &intentos);


main(){
	
	char palabra[10];
	char juego[10];
	char x, pal;
	int c=0;
	
	printf("Ingresar palabra digito por digito(. para finalizar): ");
	
	int j=0, i=0;
	
while(pal!='.')
	{
	scanf("%c",&pal);
	
    	if(pal != '.')
		{
		_flushall();
        palabra[i]=pal;
	    i++;
        j++;
    	}
	}
	
	
	inicializar(juego,j);
	
	int	error=0;
	
	do
	{
		system("cls");		
		muestra(juego, i, c);
		_flushall();
		scanf("%c", &x);	
		if (busqueda(i, palabra, juego, x, c) == 0) break;
	}while(c<11);
	
	muestra(juego, i, c);
	printf("su puntaje es de %d", 50-(2*c));
	system("pause");
}


void inicializar(char jue[], int longitud)
{
	for(int i=0; i<longitud; i++){
		jue[i] = '_'; 
	}
}


void muestra(char v[],int longitud,int c)
{
	for(int i=0; i<longitud; i++){
		v[i]=toupper(v[i]);
		printf("%c", v[i]);
	}
	switch(c){

	case 1:	printf("tienes: cabeza"); 
	break;
	case 2:	printf("tienes: cabeza y tronco"); 
	break;
	case 3:	printf("\ntienes: cabeza, tronco y brazo izquierdo\n");
	break;
	case 4:	printf("\ntienes: cabeza, tronco, brazo izquierdo y brazo derecho\n"); 
	break;
	case 5:	printf("\ntienes: cabeza, tronco, brazo izquierdo, mano izquierda y brazo derecho\n");
	break;
	case 6:	printf("\ntienes: cabeza, tronco, brazo izquierdo, mano izquierda, brazo derecho y mano derecha\n"); 
	break;
	case 7:	printf("\ntienes: cabeza, tronco, brazo izquierdo, mano izquierda, brazo derecho, mano derecha y pierna izquierda\n"); 
	break;
	case 8:	printf("\ntienes: cabeza, tronco, brazo izquierdo, mano izquierda, brazo derecho, mano derecha, pierna izquierda y pierna derecha\n");
	break;
	case 9:	printf("\ntienes: cabeza, tronco, brazo izquierdo, mano izquierda, brazo derecho, mano derecha, pierna izquierda, pierna derecha y pie izquierdo\n"); 
	break;
	case 10: printf("\ntienes: cabeza, tronco, brazo izquierdo, mano izquierda, brazo derecho, mano derecha, pierna izquierda, pierna derecha, pie izquierdo y pie derecho\n");
	break;
	}
}


int busqueda(int cantidad, char pa[], char jue[], char x, int &intentos)
{
	bool b = false;
	int cont=0;
	for(int i=0; i<cantidad; i++){
		if (pa[i] == x){
		 jue[i] = x;
		 b = true;
		}
		if (jue[i] == '_')cont++;
	}
	
	
		if (!b){
			intentos++;
			printf("\nLa letra ingresada no se encuentra en la palabra, pruebe otra.");
			system("pause");
		}
	return cont;
}
