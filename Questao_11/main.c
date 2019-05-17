#include <stdio.h>

int main(){
    int x, i, resto, cr=0;
    printf("Digite x: ");
    scanf("%d", &x);

    for (i=1;i<=x;i++) {
        resto=x%i;
        if(resto==0){
            cr=cr+1;
        }
    }
    if (cr<=2){
        printf("x eh primo\n");
    }else {
        printf("x nao eh primo\n");
    }

    return 0;
}
