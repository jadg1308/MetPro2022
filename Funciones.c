#include <stdio.h>
void evaluarDivisibilidad(int num, int div){
    if(num%div==0){
        printf("%i es divisible por %i\n", num, div);
    }else{
        printf("%i no es divisible por %i\n", num, div);
    }
}

void superacionExamen(int nota){
    if (nota >=0 && nota <=10){
        if(nota >=5){
            printf("Aprobado");
        }else{
            printf("Reprobado");
        }
    }
}

void imprimirMenu(){
    printf("1. Divisibilidad \n");
    printf("2. Evaluar Nota \n");
    printf("3. Salir \n");
    printf("Digite la opcion que desea: ");
}