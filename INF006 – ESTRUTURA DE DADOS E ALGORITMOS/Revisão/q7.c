//7) Que declare uma matriz 5x5  e armazene em um vetor o maior elemento cadastrado em cada coluna da matriz, e em um vetor b o menor elemento cadastrado em cada coluna da matriz e imprima: a) toda a matrix; b) o vetor a; c) o vetor b; d)(a+b)/2

//(a) = b 
// a + b
#include <stdio.h>
#define TAM 5

int main(void) {
    int matriz[TAM][TAM];
    int vetMaior[TAM];
    int vetMenor[TAM];
    int vetSoma[TAM];
    int num = 1, cont = 0;
    
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            matriz[i][j] = num;            
            num++;
        }
    }
    printf("A) Matriz Original\n");
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
    printf("\n");
    //maior elemento cadastrado em cada coluna da matriz
    int aux;
    int k = 0;
    for(int i = 0; i < TAM; i++){       
        for(int j = 0; j < TAM; j++){
            if(i == 0){
                vetMaior[j] = matriz[i][j];
                vetMenor[j] = matriz[i][j];
            }
            if(vetMaior[j] < matriz[i][j]){
                vetMaior[j] = matriz[i][j];
            }
            if(vetMenor[j] > matriz[i][j]){
                vetMenor[j] = matriz[i][j];
            }
            
        }
    }
    printf("\nB) Maiores elementos: \n");
    for(int i = 0; i < TAM; i++){
        printf("%d | ", vetMaior[i]);
    }
    printf("\n\nC) Menores elementos: \n");
    for(int i = 0; i < TAM; i++){
        printf("%d | ", vetMenor[i]);
    }
    for(int i = 0; i < TAM; i++){
        vetSoma[i] = ((vetMenor[i]+vetMaior[i])/2);
    }
    printf("\n\nD) (a+b) / 2 \n");
    for(int i = 0; i < TAM; i++){
        printf("%d | ", vetSoma[i]);
    }
}