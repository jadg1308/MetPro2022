#include<stdio.h>
#include"Funciones.c"

void evaluarDivisibilidad(int num, int div);
int main(int argc, char const *argv[])
{
    int num, div;
    printf("Digite el primer valor: ");
    scanf("%i", &num);
    printf("Digite otro numero: ");
    scanf("%i", &div);
    evaluarDivisibilidad(num, div);
    return 0;
}
