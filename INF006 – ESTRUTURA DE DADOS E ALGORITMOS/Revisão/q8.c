//8) Que deixe entrar com valores de uma matriz de ordem cinco e verificar se ela é ou nao uma matriz triangular superior. 
//P.S. Matriz triangular superior é uma matriz onde todos elementos de posições L<C são diferentes de 0 e todos os elementos de L>C são iguais a 0.

//"Matriz triangular superior: ocorre quando todos os termos que estão abaixo da diagonal principal são iguais a zero e os termos que estão acima da diagonal principal são números reais."


#include <stdio.h>
#define TAM 5

int main(void) {
    int matriz[TAM][TAM];
    int segundaMatriz[TAM][TAM] = {
    1, 2, 3, 4, 5,
    0 , 1, 2, 3, 4,
    0, 0, 1, 2, 3,
    0, 0, 0, 2, 3,
    0, 0, 0, 0, 1,
    };
    
    int num = 1, cont = 0;
    int triangularSuperior = 0;
    int compare =  ((TAM * TAM) - TAM) / 2;
    
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            matriz[i][j] = num;            
            num++;
        }
    }
    printf(" Matriz 1\n");
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
   
     printf(" Matriz 1\n");
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
    
    for(int i = 1; i < TAM; i++){
        for(int j = 0; j < i; j++){
                if(matriz[i][j] == 0){
                    triangularSuperior++;
                }
        }
    }
    

    printf("\ncompare = %d, triangular = %d\n", compare, triangularSuperior);
    
    if(triangularSuperior == compare){
        printf("Matriz 1: É Matriz triangular superior");
    } else {
        printf("Matriz 1: Não é Matriz triangular superior");
    }


     printf("\n\n Matriz 2\n");
    for(int i = 0; i < TAM; i++){        
        for(int j = 0; j < TAM; j++){            
            if(segundaMatriz[i][j] <= 10){
                printf("%d ", segundaMatriz[i][j]);
            } else{
                printf("%d", segundaMatriz[i][j]);
            }            
            
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
    triangularSuperior = 0;
    for(int i = 1; i < TAM; i++){
        for(int j = 0; j < i; j++){
                if(segundaMatriz[i][j] == 0){
                    triangularSuperior++;
                }
        }
    }
    printf("\ncompare = %d, triangular = %d\n", compare, triangularSuperior);
    
    if(triangularSuperior == compare){
        printf("Matriz 2: É Matriz triangular superior");
    } else {
        printf("Matriz 2: Não é Matriz triangular superior");
    }
    
}