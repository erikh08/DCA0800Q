#include <stdio.h>

int main(){
    int i, soma=0;
    for (i=1;i<=100;i++) {
        soma=soma+i;
    }
    printf("Soma 100 primeiros naturais: %d\n", soma);

    return 0;
}
