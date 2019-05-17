#include <stdio.h>

int main(){
    int x=0, y=1, z=1, i, n, soma=0;
    z=x+y;
    printf("Digite n: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++) {
        soma=soma+x;
        x=y;
        y=z;
        z=x+y;
    }
    printf("soma dos primeiros %d primeiros numeros de fibonacci: %d\n", n, soma);


    return 0;
}
