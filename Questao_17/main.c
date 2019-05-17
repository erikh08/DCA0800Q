#include <stdio.h>

float conversao(float x){
    float far;
    far=(x*18/10)+32;
    return far;
}

int main(){
    float temp, far;
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &temp);
    far= conversao(temp);

    printf("A temperatura em Celsius equivale a %.2f Farenheit\n", far);

    return 0;
}
