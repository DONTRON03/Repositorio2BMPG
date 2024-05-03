#include <stdio.h>
int main(){
    int num;
    int cont=0;
    int tot=0;
    do{
        printf("Ingresa un numero: ");
        scanf("%d",&num);
        if (num!=0){
        cont ++;
        tot+=num;
        printf("El numero es: %d \n",num);
    
    }
    }while(num != 0);{
    printf("cantidad de numeros ingresados: %d",num);
    printf("Suma total: %d",tot);}

}
