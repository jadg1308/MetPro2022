#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num, div;
    printf("Digite el primer valor: ");
    scanf("%i", &num);
    printf("Digite otro numero: ");
    scanf("%i", &div);
    if(num%div == 0) printf("%i es divisible por %i\n", num, div);
    else printf("%i no es divisible por %i \n", num, div);
    return 0;
}
