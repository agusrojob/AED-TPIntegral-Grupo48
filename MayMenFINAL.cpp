#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    int mayor=0, menor=0, score=10,numeroSecreto=0, numeroIngresado=0;
    srand(time(NULL));
    numeroSecreto=(rand()%999)+1;
    menor=1;
    mayor=999;
    
    	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n", 201,205,205,205,205,205,205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);	
		printf("\n\n     V A M O S   A   J U G A R   M A Y M E N\n\n");
		printf("               %c E S T A S  L I S T O ?\n\n", 168);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n", 200,205,205,205,205,205,205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188 );	
	
		system("PAUSE");
		system("CLS");
	

    for(int i=1; i<11; i++){
    	
		//printf("%d", numeroSecreto);
    	
        printf("Intento [%d]: ", (i), numeroIngresado);
        scanf("%d", &numeroIngresado);
        if(numeroIngresado<numeroSecreto){
            printf("\nEl numero ingresado es menor al numero secreto. \nEste se encuentra entre  [%d] y [%d]\n\n", numeroIngresado, mayor);
            printf("----------------------------------------------------------------------------------\n\n");
            menor=numeroIngresado;
            score--;
        }
        if(numeroIngresado>numeroSecreto){
            printf("\nEl numero ingresado es mayor al numero secreto. \nEste se encuentra entre  [%d] y [%d]\n\n", menor, numeroIngresado);
            printf("----------------------------------------------------------------------------------\n\n");
            mayor=numeroIngresado;
            score--;
        }
        if(numeroIngresado==numeroSecreto){
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n\n", 201, 205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
		printf("      G A N O    L A    P A R T I D A\n\n         Su puntuacion es [%d]\n\n",score);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n", 200, 205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188 );

            i=11;
        }
      	//	if(i%3==0){
        //  system("pause");
        //  system("cls");
        // }
    }
    if(score==0){
    	
    	system("CLS");
    	
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n", 201,205,205,205,205,205,205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
		printf("                    G A M E  O V E R  \n\n");
		printf("    No pudo adivinar el numero secreto en los 10 intentos   \n");
		printf("\n\n               El numero secreto es  [%d]\n", numeroSecreto);
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,205,205,205,205,205,205,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188 );

    }
}
