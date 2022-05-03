#include<stdio.h>
void superacionExamen(int nota){
    if (nota >=0 && nota <=10){
        if(nota >=5){
            printf("Aprobado");
        }else{
            printf("Reprobado");
        }
    }
}