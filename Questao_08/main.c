#include <stdio.h>

int main(){
    int i, tab, n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Tabuada do %d\n", n);

    for (i=1;i<=10;i++) {
        tab=i*n;
        printf("%d * %d = %d\n", i, n, tab);
    }

    return 0;
}
