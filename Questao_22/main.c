#include <stdio.h>
void asteriscovertical(int b[]){
    int tam=5;
    int i, j, maiorn=b[0];
    int posicao=0;
    for (i=0;i<5;i++) {
        if(maiorn<b[i]){
            maiorn=b[i];
            posicao=i;
        }
    }
    int m[maiorn][tam];

    for(i=0; i<maiorn; i++){
        for(j=0; j<tam; j++){
          m[i][j]=0;
        }
      }

      for(j=0; j<tam; j++){
        for(i=maiorn-1; i>=maiorn-b[j]; i--){
          m[i][j]=1;
        }
      }

      for(i=0; i<maiorn; i++){
        for(j=0; j<tam; j++){
          if(m[i][j] == 0){
            printf(" ");
          }
          else{
            printf("*");
          }
        }
        printf("\n");
      }

}
int main(){
    int x[5];
    printf("Digite os valores de cada uma das 5 posicoes do array: \n");
    scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);
    asteriscovertical(x);

    return 0;
}
