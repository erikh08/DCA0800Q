#include <stdio.h>

int main(){
    int x=1, L, acheimenori=0;
    printf("Digite L: ");
    scanf("%d", &L);

    do{
        if((x*x)<=L){
            x=x+1;
        }else {
            acheimenori=1;
        }

    }while(acheimenori==0);
    printf("Menor x = %d\n" , x);
    return 0;
}
