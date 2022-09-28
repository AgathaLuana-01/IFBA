#include <stdio.h>

int main(void) {
    int data = 1;

    while(data != 9999){
        printf("Digite a data de seu nascimento (ddmm): ");
        scanf("%d", &data);

        if(data >= 120 && data < 219){
            printf("Capricornio\n");
        } else if (data >= 219 && data < 320){
            printf("Aquario\n");
        } else if (data >= 320 && data<420){
            printf("Peixes\n");
        } else if (data >= 420 && data<520){
            printf("Aries\n");
        } else if (data >= 520 && data<620){
            printf("Touro\n");
        } else if (data >= 620 && data<721){
            printf("Gemeos\n");
        } else if (data >= 721 && data<822){
            printf("Cancer\n");
        } else if (data >= 822 && data<922){
            printf("Leao\n");
        } else if (data >= 922 && data<1022){
            printf("Virgem\n");
        } else if (data >= 1022 && data<1121){
            printf("Libra\n");
        } else if (data >= 1121 && data<1221){
            printf("Escorpiao\n");
        } else {
            if(data != 9999)
            printf("Sargitario\n");
        }      
    }
    printf("fim");


    
    
    
    
    
}