#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, g, res;
    printf("Verificacao de numero triangular\n");
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    i = 1;
    j = 2;
    g = 3;

    while(res != n){
        res = i * j * g;

        if(res != n){
            i++;
            j++;
            g++;
        }

        if(res > n){
            break;
        }
    }

    if(res == n){
        printf("%d e' triangular pois %d * %d * %d e' igual a %d.", n, i, j, g, res);
    }else{
        printf("%d nao e' triangular.", n);
    }

    system("pause >> NULL");
    return 0;
}