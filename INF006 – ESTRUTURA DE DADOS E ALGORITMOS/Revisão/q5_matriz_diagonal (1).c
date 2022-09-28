//5) Que leia os elemntos de uma matrix 10x10 e mostre somente os elementos abaixo da diagonal;
#include <stdio.h>
#define TAM 10


int main(void) {
    int matriz[TAM][TAM];
    int num = 1, cont = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            matriz[i][j] = num;
            num++;
        }
    }

    printf("_______________Matriz Original\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(matriz[i][j] <= 10){
                printf("%d ", matriz[i][j]);
            } else{
                printf("%d", matriz[i][j]);
            }            
            //printf("%d. %d. %d | ", i, j, matriz[i][j]);
            cont++;
            if(cont < TAM){
                printf(" | ");
            }
            if(cont == TAM){
                printf("\n");
                cont = 0;
            }
        }
    }
    printf("\n\n");
    printf("_______________Matriz Abaixo Diagonal\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(i > j){
                if(matriz[i][j] <= 10){
                    printf("%d", matriz[i][j]);
                } else{
                    printf("%d", matriz[i][j]);
                }
                if(cont < TAM){
                printf(" | ");
                }
            }         
            cont++;            
            if(cont == TAM){
                printf("\n");
                cont = 0;
            }
        }
    }
    
    
}