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
	while(c<10)
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


void muestra(char v[],int longitud)
{
	for(int i=0; i<longitud; i++){
		printf("%c", v[i]); 
	}
}


void busqueda(char pa[], char jue[], char x)
{
	for(int i=0; i<6; i++){
		if (pa[i] == x) jue[i] = x;
	}
}
