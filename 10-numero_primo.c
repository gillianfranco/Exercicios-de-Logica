#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i;
    printf("Verificacao de numero primo.\n");
    printf("Digite o numero: ");
    scanf("%d", &num);

    if(num == 1 || num == 2){
        printf("O numero %d e' primo.", num);
    }else if(num == 0){
        printf("O numero %d nao e' primo.", num);
    }else{
        for(i = 2; i < num; i++){
            if(num%i != 0){
                printf("O numero %d e' primo.", num);
            }else{
                printf("O numero %d nao e' primo.", num);
                break;
            }
        } 
    }
    
    system("pause >> NULL");
    return 0;
}