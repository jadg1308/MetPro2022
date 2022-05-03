#include <stdio.h>
#include "Funciones.c"
#include "Menu.c"
#include "EvaluarNota.c"

void evaluarDivisibilidad(int num, int div);
void superacionExamen(int nota);
void imprimirMenu();

int main(int argc, char const *argv[])
{
    int num, div, nota;
    int op;
    do
    {
        imprimirMenu();
        scanf("%i", &op);
        switch (op)
        {
        case 1:
            printf("Digite el primer valor: ");
            scanf("%i", &num);
            printf("Digite otro numero: ");
            scanf("%i", &div);
            evaluarDivisibilidad(num, div);
            break;
        case 2:
            printf("Introduzca la nota obtenida entre [0-10]: ");
            scanf("%i", &nota);
            superacionExamen(nota);
            break;
        case 3:
            break;
        default:
            break;
        }
    } while (op != 3);

    return 0;
}
