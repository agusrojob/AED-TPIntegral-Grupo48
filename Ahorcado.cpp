#include <stdio.h>
#include <stdlib.h>

void inicializar(char jue[], int longitud);
void muestra(char v[], int longitud);
void busqueda(char pa[], char jue[], char x);


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
	while(c<11)
	{
		system("cls");
		muestra(juego,j);
		scanf("%c", &x);
		_flushall();
		busqueda(palabra, juego, x);
		c++;
	}
	
}


void inicializar(char jue[], int longitud)
{
	for(int i=0; i<longitud; i++){
		jue[i] = '_'; 
	}
}


void muestra(char v[],int longitud,char juego[])
{
	for(int i=0; i<longitud; i++){
		printf("%c \n", v[i]);
	}
	switch{

	case 1:	printf("tienes: cabeza"); 
	break;
	case 2:	printf("tienes: cabeza y tronco"); 
	break;
	case 3:	printf("tienes: cabeza, tronco y brazo izquierdo");
	break;
	case 4:	printf("tienes: cabeza, tronco, brazo izquierdo y brazo derecho"); 
	break;
	case 5:	printf("tienes: cabeza, tronco, brazo izquierdo, mano izquierda y brazo derecho");
	break;
	case 6:	printf("tienes: cabeza, tronco, brazo izquierdo, mano izquierda, brazo derecho y mano derecha"); 
	break;
	case 7:	printf("tienes: cabeza, tronco, brazo izquierdo, mano izquierda, brazo derecho, mano derecha y pierna izquierda"); 
	break;
	case 8:	printf("tienes: cabeza, tronco, brazo izquierdo, mano izquierda, brazo derecho, mano derecha, pierna izquierda y pierna derecha");
	break;
	case 9:	printf("tienes: cabeza, tronco, brazo izquierdo, mano izquierda, brazo derecho, mano derecha, pierna izquierda, pierna derecha y pie izquierdo"); 
	break;
	case 10: printf("tienes: cabeza, tronco, brazo izquierdo, mano izquierda, brazo derecho, mano derecha, pierna izquierda, pierna derecha, pie izquierdo y pie derecho");
	break;
	}
}


void busqueda(char pa[], char jue[], char x)
{
	for(int i=0; i<6; i++){
		if (pa[i] == x) jue[i] = x;
	}
}

