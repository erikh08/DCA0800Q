#include <stdio.h>

int main(){
    int i, n;
    long long int mult=1;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("%d!= ", n);

    for (i=n;i>1;i--) {
      mult=mult*i;
    }
    printf("%lld\n", mult);
    return 0;
}
