//4) Que armazene 10 numeros em um vetor. 
// Na entrada de dados, o numero ja deve ser armazenado na sua posição definitiva em ordem decrescente. imprimir o vetor logo apos a entrada de dados;

#include <stdio.h>
#define TAM 10

int main(void) {
    int i, j, aux;
    int vet[TAM];
    
    for(i=0; i < TAM; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < TAM; i++){
        for(j = i; j < TAM; j++){
            if(vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for(i=0; i < TAM; i++){
        printf("%d _ ", vet[i]);
       
    }

   
}