//2) Que dado dois vetores de 10 posições, efetue operações basicas aritmeticas, indicadas por um terceiro vetor cujos dados tambem são fornecidos pelo usuario, gerando e imprimindo um quarto vetor.

#include <stdio.h>
#define N 3

int main(void) {
    int v1[N];
    int v2[N];
    char operador[N];
    int vResultado[N];
    int iCont;  

    for(iCont = 0; iCont < N; iCont++){        
        printf("Digite o primeiro número: ");
        scanf("%d", &v1[iCont]);
        printf("Digite o segundo número: ");
        scanf("%d", &v2[iCont]);
       

        printf("Digite o eperador:\n + - / *\n: ");
        scanf("%s", &operador[iCont]);
        if(operador[iCont] == 43){
            vResultado[iCont] = v1[iCont] + v2[iCont];
            printf("Valor: %d\n", vResultado[iCont]);
        } if(operador[iCont] == 42){
            vResultado[iCont] = v1[iCont] * v2[iCont];
            printf("Valor: %d\n", vResultado[iCont]);
        } if(operador[iCont] == 45){
            vResultado[iCont] = v1[iCont] - v2[iCont];
            printf("Valor: %d\n", vResultado[iCont]);
        } if(operador[iCont] == 47){
            vResultado[iCont] = v1[iCont] / v2[iCont];
            printf("Valor: %d\n", vResultado[iCont]);
        }      

        printf("\n");        
    }

    printf("Resultados!!!!\n");
    for(iCont = 0; iCont < N; iCont++){
        printf("%d %c %d: %d\n", v1[iCont], operador[iCont], v2[iCont], vResultado[iCont]);
    }
}