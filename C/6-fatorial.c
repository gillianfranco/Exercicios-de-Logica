#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, fatorial;
    printf("Calculo do fatorial de n\n");
    printf("Digite o valor de n: ");
    scanf("%d", &num);

    fatorial = 1;

    if(num == 0 || num == 1){
        fatorial = 1;
        printf("O fatorial de %d e' %d.", num, fatorial);
    }else{
        for(int i = 2; i <= num; i++){
            fatorial *= i;
        }
        printf("O fatorial de %d e' %d.", num, fatorial);
    }

    system("pause >> NULL");
    return 0;
}