#include <stdio.h>

int main(){
    int i, cont=0, cr, x=0, primo[12];
    primo[11]=0;
    int dif;

    do{
        x=x+1;
        cr=0;
        for (i=1;i<=x;i++) {
            if(x%i==0){
                cr=cr+1;
            }
            }
            if(cr<=2){
                primo[cont]=x;
                cont=cont+1;
            }

    }while (primo[11]==0);

    dif=primo[11]-primo[5];
    printf("Diferenca entre dec segundo primo e sexto primo: %d\n", dif);


    return 0;
}
