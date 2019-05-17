#include <stdio.h>

int main(){
    int i, n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Multiplos de %d menores que 100: ", n);
    for (i=1;i<100;i++) {
        if ((i%n)==0){
            printf("%d, ", i);
        }
    }

    return 0;
}
