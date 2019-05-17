#include <stdio.h>

int main(){
    int i;
    printf("Multiplos de 4 menores que 100: ");
    for (i=1;i<100;i++) {
        if ((i%4)==0){
            printf("%d, ", i);
        }
    }

    return 0;
}
