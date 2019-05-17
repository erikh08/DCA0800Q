#include <stdio.h>
#include <string.h>

int numcarac(char n[]){
    int contador=0, i=0;
    while (n[i]!=0) {
        if(n[i]!=32){
        contador++;
        }
        i++;
    }

    return contador;
    }

int main(){
    char nome[50];
    int j, numchar, numpalavras, contador2=0;
    printf("Digite um texto\n");
    fgets(nome,50,stdin);

    numchar=numcarac(nome);

    j=0;
    do{
        if((nome[j]==32) && (nome[j+1]!=32) && (nome[j+1]!=10)){
            contador2=contador2+1;
        }
        j++;

    }while(nome[j]!=0);
    numpalavras=contador2+1;
    printf("Numero de palavras eh: %d\n", numpalavras);
    printf("Numero de caracteres eh: %d\n", numchar-1);

    return 0;
}
