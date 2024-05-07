//con funcion repetitiva
#include <stdio.h>

int main(){
	int num, potencia,i;
	printf("Ingrese su numero: ");
	scanf("%d",&num);
	printf("ingresa la potencia: ");
	scanf("%d",&potencia);
	
	for (int i = 0; i<=num*num; i+=potencia){
		printf("El resultado de %d^%d es %d :",num,potencia,i);
	}
}

