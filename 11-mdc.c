#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, mdc, i;
    printf("Máximo divisor comum entre dois numeros.\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    mdc = 0;

    for(i = 1; n1 <= i || n2 <= i; i++){
        if(n1%i == 0 && n2%i == 0){
            mdc = i;
        }
    }

    if(mdc == 1){
        printf("Nao existe MDC para esses numeros.");
    }else{
        printf("O MDC desses numeros e' %d", mdc);
    }

    system("pause >> NULL");
    return 0;
}