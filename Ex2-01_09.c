#include<stdio.h>
int main (){

    int valor, count, par = 0, impar = 0;

    valor = 1;

    while(valor != 0)
    {
        scanf("%d", &valor);

        if (valor == 0)
        {
            printf("Pares: %d\n", par);
            printf("Impares: %d\n", impar);
            return 0;
        }
        else if (valor % 2 == 0)
        {
            par++;
        }
        else if (valor % 2 != 0)
        {
            impar++;
        }
    }
}