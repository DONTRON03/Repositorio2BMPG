#include <stdio.h>
int main(){
	int num,num2,num3,suma;
	 printf("Ingrese el primer n�mero: ");
    scanf("%d", &num);
    printf("Ingrese el segundo n�mero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer n�mero: ");
    scanf("%d", &num3);
    
    if (num>num2){
    	if (num2>num3){
			printf("menor y el mayor: %d %d \n",num3,num);
				suma=num+num2+num3;
				printf("El resultado de la suma es: %d",suma);
		}
	}if (num2>num3){
    	if (num3>num){
			printf("menor y el mayor: %d %d \n",num,num2);
				suma=num+num2+num3;
            	printf("El resultado de la suma es: %d",suma);
		}
	}
	if (num3>num2){
    	if (num2>num){
			printf("menor y el mayor: %d %d \n",num,num3);
				suma=num+num2+num3;
				printf("El resultado de la suma es: %d",suma);
		}
	}
}
