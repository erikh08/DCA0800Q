#include <stdio.h>

float conversao(float x){
    float cel;
    cel=((10*x)-320)/18;
    return cel;
}

int main(){
    float temp, cel;
    printf("Digite uma temperatura em Farenheit: ");
    scanf("%f", &temp);
    cel=conversao(temp);

    printf("A temperatura em Farenheit equivale a %.2f Celsius\n", cel);

    return 0;
}
