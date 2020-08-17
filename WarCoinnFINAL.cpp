#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){


	int rangoMin,rangoMax,num,azar,retUsu,cantMonedas=0;
	int retPc;

	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n", 201,205,205,205,205,205,205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);	
	printf("\n\n     V A M O S   A   J U G A R   W A R C O I N\n\n");
	printf("               %c E S T A S  L I S T O ?\n\n", 168);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n", 200,205,205,205,205,205,205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188 );	
	
	system("PAUSE");
	system("CLS");
	
	printf("\nIngrese la cantidad minima de monedas que se pueden retirar:");
	scanf("%d", &rangoMin);
	printf("Ingrese la cantidad maxima de monedas que se pueden retirar:");
	scanf("%d", &rangoMax);
    system("pause");
	system("cls");


    //printf("\nLa cantidad minima de monedas que se pueden retirar: %d",rangoMin);
	//printf("\nLa cantidad maxima de monedas que se pueden retirar: %d",rangoMax);
	//Genera numero entre el 10 y el 50
	srand(time(NULL));
	num=(rand()%40)+11;
	//Genera un numero, que puede ser el 1 o el 2, que nos indicara quien comenzara
	srand(time(NULL));
	azar=(rand()%2)+1;
	printf("\nInicia la partida ==> ");
    cantMonedas=num;

    do{
        if(azar==1){
            printf("[EL USUARIO]");
            printf("\nIngrese la cantidad de monedas a eliminar: ");
            scanf("%d",&retUsu);
            if(retUsu>=rangoMin && retUsu<=rangoMax){

                cantMonedas-=retUsu;
			}
            else{
                printf("\nERROR: se deben desapilar entre [%d] y [%d] monedas.",rangoMin,rangoMax);
            }
            printf("\n\n");
            azar=2;
        }
        else{
            printf("[LA COMPUTADORA] \n");
            srand(time(NULL));
            retPc=rangoMin+(rand()%(rangoMax-rangoMin));
            printf("La computadora saco [%d] monedas de la pila",retPc);
            cantMonedas-=retPc;
            printf("\n\n");
            azar=1;
        }
    }while(cantMonedas>=rangoMin);

    if(azar==1){
    			
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n", 201,205,205,205,205,205,205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
		printf("                    G A M E  O V E R  \n\n");
        printf("\n\n          G A N O  L A  C O M P U T A D O R A");
        printf("\n\n                      Puntaje [0]\n\n");
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188 );
    }
    else{
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n", 201,205,205,205,205,205,205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
		printf("                    F E L I C I D A D E S  \n\n");
        printf("\n\n        U S T E D   G A N O   L A   P A R T I D A");
        printf("\n                      Puntaje [5]");
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188 );

    }
}
