#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    int mayor=0, menor=0, score=10,numeroSecreto=0, numeroIngresado=0;
    srand(time(NULL));
    numeroSecreto=(rand()%999)+1;
    menor=1;
    mayor=999;
    for(int i=1; i<11; i++){
        printf("Intento [%d]: ", (i), numeroIngresado);
        scanf("%d", &numeroIngresado);
        if(numeroIngresado<numeroSecreto){
            printf("\nEl numero ingresado es menor al numero secreto. \nEste se encuentra entre : %d y %d\n\n", numeroIngresado, mayor);
            printf("----------------------------------------------------------------------------------\n\n");
            menor=numeroIngresado;
            score--;
        }
        if(numeroIngresado>numeroSecreto){
            printf("\nEl numero ingresado es mayor al numero secreto. \nEste se encuentra entre : %d y %d\n\n", menor, numeroIngresado);
            printf("----------------------------------------------------------------------------------\n\n");
            mayor=numeroIngresado;
            score--;
        }
        if(numeroIngresado==numeroSecreto){
            printf("Acertaste! Puntaje obtenido: %d", score);
            i=11;
        }
        if(i%3==0){
            system("pause");
            system("cls");
        }
    }
    if(score==0){
        printf("G A M E  O V E R \nEl numero secreto es: %d", numeroSecreto);
    }
}
