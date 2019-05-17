#include <stdio.h>

int main(){
    int i;
    printf("Multiplos de 7 menores que 200: ");
    for (i=1;i<200;i++) {
        if ((i%7)==0){
            printf("%d, ", i);
        }
    }

    return 0;
}
