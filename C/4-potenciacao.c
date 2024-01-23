#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, n;
    int res = 1;
    int i = 0;
    printf("Calculo da potencia N de X\n");
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    while(i != n){
        res *= x;
        i++;
    }
    printf("A potencia de %d de %d e' igual a %d.", n, x, res);
    
    system("pause >> NULL");
    return 0;
}