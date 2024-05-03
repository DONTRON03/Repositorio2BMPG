#include <stdio.h>
//numeros del 1 al 100 de 2 en 2; version 2
int main(){
    int i;
    for (int i = 1;i <= 100; i++){
        i=i+2-1;
        printf("%d,",i);
    }
}