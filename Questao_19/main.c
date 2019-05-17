#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int a, int b){
    int doido;
    srand(time(0));
    doido=a+(rand()%(b-a));
    return doido;
}
int main(){
    int x, y, num;
    printf("Digite um valor para comecar um intervalo: ");
    scanf("%d", &x);
    printf("Digite um valor para determinar o limite do intervalo: ");
    scanf("%d", &y);

    num=aleatorio(x, y);
    printf("Numero aleatorio dentro do intervalo: %d\n", num);

    return 0;
}
