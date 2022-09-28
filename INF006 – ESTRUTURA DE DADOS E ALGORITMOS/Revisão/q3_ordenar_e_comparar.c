//3) Que  entre com dados num vetor VET do tipo inteiro com 20 posiçoes, onde podem existir varios elementos repetidos. Gere um vetor VET1 que tambem será ordenado e terá somente os elementos do vetor VET que não sao repetidos.

#include <stdio.h>
#include <stddef.h>
#define TAM 20


int main(void) {
   
    int vet[TAM] = {5,8,9,2,4,1,3,10,5,9,4, 12, 25, 1, 1, 5, 8, 2, 2, 6};    
    int vet1[TAM];
    
    int vetOrdenado[TAM];  
    int icont, jcont, aux, xcont = 0;   
    

    for(icont = 0; icont < TAM; icont++)
    {
        vetOrdenado[icont] = vet[icont];
    }
    
    for(icont = 1; icont < TAM; icont++)
    {
        for(jcont = 0; jcont < TAM; jcont++){
            if(vetOrdenado[icont] < vetOrdenado[jcont]){
                aux = vetOrdenado[icont];
                vetOrdenado[icont] = vetOrdenado[jcont];
                vetOrdenado[jcont] = aux;                
            }
        }
        
    }

    printf("Ordenado: ");
    for(icont = 0; icont < TAM; icont++)
    {
        printf("%d _ ", vetOrdenado[icont]);
    }
    printf("\n\n");
    
    for(icont = 0; icont < TAM; icont++){
        if(vetOrdenado[icont] != vetOrdenado[icont+1]){
        vet1[xcont] = vetOrdenado[icont];            
           xcont++;
        } 
             
    }
    printf("\n\n");
    
    printf("Resultado : ");
    for(icont = 0; icont < xcont; icont++){
        printf("%d _ ", vet1[icont]);
    } 
       
}

