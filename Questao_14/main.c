#include <stdio.h>

int main(){
    int i, resto, contador=0;

    for (i=1000;contador<20;i++) {
        resto=i%11;
        if(resto==5){
            printf("%d, ", i);
            contador=contador+1;
        }
    }



    return 0;
}
