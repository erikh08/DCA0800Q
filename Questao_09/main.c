#include <stdio.h>

int main(){
    int i, soma=0, media, n=0, resto;

    for (i=13;i<73;i++) {
        resto=i%2;
        if(resto==0){
            soma=soma+i;
            n=n+1;
        }
    }
    media=soma/n;
    printf("Media: %d\n", media);

    return 0;
}
