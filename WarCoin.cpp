#include <stdio.h>
#include <stdlib.h>
#include<time.h>



main ()
{
	int cantMonedas=0,cantMin,cantMax,exComputadora=0,exJugador,puntajeJugador=0,puntajeComputadora=0,jugador=0;
	printf("Ingresar cantidad minima de extraccion de monedas: \n");     //El jugador limita la cantidad de monedas a extraer
	scanf("%d",&cantMin);
	printf("Ingresar cantidad maxima de extraccion de monedas: \n");
	scanf("%d",&cantMax);
	system("CLS");
	
	srand(time(NULL));
    cantMonedas=(rand()%50)+11;                                   //La computadora genera numero aleatorio representando la pila de monedas
    //printf("%d",cantidadMonedas);
    
    
    
	int pilaNueva=cantMonedas;
	
	srand(tiene(NULL));
	jugador=rand()%2;	
	
	if(jugador==1)
{
    while(pilaNueva != 0)
    {
	srand(time(NULL));
    exComputadora=(rand()%cantMax)+cantMin+1;
    pilaNueva= pilaNueva-exComputadora;
    printf("La computadora extrajo %d monedas",exComputadora);
    system("PAUSE");
    system("CLS");
    
	printf("Ingrese la cantidad de monedas a extraer: ");
	scanf("%d",&exJugador);
	pilaNueva= pilaNueva-exJugador;
    system("CLS");
	}
}
	else
{
	
}
	
	
	
	
	
	
}

