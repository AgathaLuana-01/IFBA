//6)  Que leia e armazene os elemntos de uma matriz inteira (10,10) e imprima. depois troque os dados da segunda linha pela oitava. da quarta pela decima, a diagonal principal pela diagonal segundaria.
#include <stdio.h>
#define TAM 10


int main(void) {
    int matriz[TAM][TAM];
    int vetAux[TAM][TAM];
    int matrizIntacta[TAM][TAM];
    
    int num = 1, cont = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            matriz[i][j] = num;
            matrizIntacta[i][j] = num;
            num++;
            
            //vetAux[i][j] = 0;
        }
    }
    
    printf("_______________Matriz Original\n");
    for(int j=0; j< TAM; j++){
        if(j == 0){
            printf("_____");
        }
        printf(" C.%d", j+1);
        int k = 1;
        k++;
        if(k<TAM-1){
            printf("|");
        }        
    }
    printf("\n");
    for(int i = 0; i < TAM; i++){
        printf("L.%d : ", i+1);
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

    
    //L2
    for(int i = 1; i < 2; i++){
        for(int j = 0; j < TAM; j++){
            vetAux[i][j] = matriz[i][j];
        }
    }

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            vetAux[i][j] = matriz[i][j];
        }
    }


    //L2 para L8
    for(int i = 1; i < 2; i++){
        for(int j = 0; j < TAM; j++){
            for(int k = 7; k < 8; k++){
                matriz[k][j] = vetAux[i][j];
                matriz[i][j] = vetAux[k][j];
            }
        }
    }
    //L4 pela L10
    for(int i = 3; i < 4; i++){
        for(int j = 0; j < TAM; j++){
            for(int k = 9; k < 10; k++){
                matriz[k][j] = vetAux[i][j];
                matriz[i][j] = vetAux[k][j];
            }
        }
    }  

    //diagonal principal pela diagonal segundaria.
    for(int i = 0, j = 0; i < TAM; i++, j++){
        vetAux[i][j] = matrizIntacta[i][j];
    }
    for(int i = 0, j = TAM-1; i < TAM; i++,j++){
        vetAux[i][j] = matrizIntacta[i][j];
    }



    
    // for(int i = 0; i < TAM; i++){
    //     for(int j = 0; j < TAM; j++){
    //         if(i == j){
                
                           
    //         }
    //         if((i+1)+(j) == TAM){
    //             vetAux[i][j] = matriz[i][j];
               
    //         }          
    //     }
    // }

    printf("\n_______________Matriz AUX\n");
    for(int i = 0; i < TAM; i++){
        printf("L.%d : ", i+1);
        for(int j = 0; j < TAM; j++){
            
            if(vetAux[i][j] <= 10){
                printf("%d ", vetAux[i][j]);
            } else{
                printf("%d", vetAux[i][j]);
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
    // for(int i = 0; i < TAM; i++){
    //     for(int j = 0; j < TAM; j++){           
    //         if(i == j){
    //             int valor = 0;
    //             for(int k = 0; k < TAM; k++){
    //                 for(int l = 0; l < TAM; l++){
                        
    //                     if((k+1)+(l) == TAM){
    //                         valor = vetAux[k][l];                           
    //                     }                        
    //                 }
    //             }              
    //          matriz[i][j] = valor;    
    //         }         
    //     }
    // }
    

  

    printf("\n_______________Matriz L2|L8 e L4|L10\n");
    for(int i = 0; i < TAM; i++){
        printf("L.%d : ", i+1);
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
}



    // printf("\n_______________Matriz AUX\n");
    // for(int i = 0; i < TAM; i++){
    //     printf("L.%d : ", i+1);
    //     for(int j = 0; j < TAM; j++){
            
    //         if(vetAux[i][j] <= 10){
    //             printf("%d ", vetAux[i][j]);
    //         } else{
    //             printf("%d", vetAux[i][j]);
    //         }            
    //         //printf("%d. %d. %d | ", i, j, matriz[i][j]);
    //         cont++;
    //         if(cont < TAM){
    //             printf(" | ");
    //         }
    //         if(cont == TAM){
    //             printf("\n");
    //             cont = 0;
    //         }
    //     }
    // }

  //  printf("\n_______________Matriz AUX\n");
    // for(int i = 0; i < TAM; i++){
    //     printf("L.%d : ", i+1);
    //     for(int j = 0; j < TAM; j++){
            
    //         if(vetAux[i][j] <= 10){
    //             printf("%d ", vetAux[i][j]);
    //         } else{
    //             printf("%d", vetAux[i][j]);
    //         }            
    //         //printf("%d. %d. %d | ", i, j, matriz[i][j]);
    //         cont++;
    //         if(cont < TAM){
    //             printf(" | ");
    //         }
    //         if(cont == TAM){
    //             printf("\n");
    //             cont = 0;
    //         }
    //     }
    // }