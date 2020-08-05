#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void inicializar(char jue[]);
void muestra(char v[]);
void busqueda(char pa[], char jue[], char x);


main(){


    char palabra[10];
    char juego[6];
    char x='a';
    int c=0;

    printf("Ingrese la palabra secreta: ");

    do{
        _flushall();
        x=getch();
        printf("");
        palabra[c] = x;

        c++;
    }
    while(x!=13
    );



    inicializar(juego);
    while(c<10){
        system("cls");
        muestra(juego);
        scanf("%c", &x);
        _flushall();
        busqueda(palabra, juego, x);
        c++;
    }

}

void inicializar(char jue[]){
    for(int i=0; i<6; i++){
        jue[i] = ''; 
    }
}

void muestra(char v[]){
    for(int i=0; i<6; i++){
        printf("%c", v[i]); 
    }
}

void busqueda(char pa[], char jue[], char x){
    for(int i=0; i<6; i++){
        if (pa[i] == x) jue[i] = x;
    }
}
