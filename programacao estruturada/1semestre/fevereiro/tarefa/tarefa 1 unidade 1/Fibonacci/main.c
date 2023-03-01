#include <stdio.h>
#include <stdio.h>

void fib(int n){
    int f1=0,f2=1,f3;

    if(n < 0){
        printf("Erro \n, numero inválido");
    }else{
        printf("0 - 1");

        while (f2 < n){
            f3 = f2 + f1;
            printf("-%d", f3);
            f1=f2;
            f2=f3;
        }
        printf("\n");
    }
};

int main()
{
    int num;
    printf("informe um numero interio: ");
    scanf("%d",&num);
    fib(num);
    return 0;
}
