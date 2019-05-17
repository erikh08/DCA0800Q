#include <stdio.h>
#include <string.h>

int numcarac(char n[]){
    int contador=0, i=0;
    while (n[i]!=0) {
        if(n[i]==97){
        contador=contador+1;
        }
        i++;
    }

    return contador;
    }

int main(){
    char nome[101];
    int numchara;
    printf("Digite um texto com no maximo 100 caracteres\n");
    fgets(nome,101,stdin);

    numchara=numcarac(nome);
    printf("Numero de caracteres 'a' eh: %d\n", numchara);

    return 0;
}
