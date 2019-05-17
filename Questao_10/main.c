#include <stdio.h>

int main(){
    int n, i, contador1=0, contador2=0;
    for (i=1;i<=10;i++) {
        printf("Digite n%d: ", i);
        scanf("%d", &n);
        if((n>=10) && (n<=50)){
            contador1=contador1+1;
        }else{
            contador2=contador2+1;
        }
    }
    printf("Numeros dentro do intervalo: %d\n", contador1);
    printf("Numeros fora do intervalo: %d\n", contador2);
    return 0;
}
