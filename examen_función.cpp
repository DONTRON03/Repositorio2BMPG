//con funcion potanceia
#include <stdio.h>
#include <math.h>

int main(){
	int num, potencia,fin;
	printf("Ingresa un numero :");
	scanf("%d",&num);
	printf("ingresa la potencia: ");
	scanf("%d",&potencia);
	
	fin=pow(num,potencia);
	printf("El resultado de %d ^ %d es %d: ",num, potencia, fin);
	
}
