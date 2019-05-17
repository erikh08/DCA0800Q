#include <stdio.h>

int primo(int a){
    int i, resto, cr=0;

    for (i=1;i<=a;i++) {
        resto=a%i;
        if(resto==0){
            cr=cr+1;
        }
    }
    if (cr<=2){
        return 1;
    }else {
        return 0;
    }
}

int main(){
    int x, i, res, teste;
    printf("Digite x: ");
    scanf("%d", &x);

    for (i=2;i<=x;i++) {
        res=x%i;
        if (res==0) {
            teste=primo(i);
            if(teste==1){
                printf("%d x ", i);
                x=x/i;

            }
        }

    }


    return 0;
}
