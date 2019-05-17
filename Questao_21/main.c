#include <stdio.h>
void asterisco(int b[]){
    int i, j;
    for (j=0;j<5;j++) {
        for (i=0;i<b[j];i++) {
        printf("*");
    }
    printf("\n");
}

}
int main()
{
    int x[5];
    printf("Digite os valores de cada uma das 5 posicoes do array: \n");
    scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);

    asterisco(x);
    return 0;
}
