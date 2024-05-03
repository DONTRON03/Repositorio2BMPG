#include <stdio.h>
int main(){
    int term;
    printf("Ingrese la cantidad de terminos quieres que se muestren: ");
    scanf("%d",&term);

   for (int i = 0; i<term*5; i+=5){
    printf("%d,",i);
   }
}