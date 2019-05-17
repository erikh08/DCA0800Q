#include <stdio.h>
#include <string.h>

int numcarac(char n[]){
    int contador=0, i=0;
    while (n[i]!=0) {
        i++;
        contador++;
    }

    return contador;
    }

void reverso(char normal[], char inverte[]){
    int j, tam;
    tam=numcarac(normal);
    for (j=0;j<tam;j++) {
        inverte[j]=normal[tam-1-j];
    }
    inverte[tam]=0;
}
int main(){
    char nome[50], x[50];
    int numchar;
    printf("Digite um texto\n");
    fgets(nome,50,stdin);

    numchar=numcarac(nome);
    reverso(nome, x);
    printf("Texto ao contrario eh: %s\n", x);

    return 0;
}
