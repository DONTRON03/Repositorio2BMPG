#include <stdio.h>
int main(){
	int num[10];
	int i;
	int suma=0;
	int menor, mayor;
	
	i=0;
	while(i<10){
		printf("Ingrese el numero: ",i+1);
		scanf("%d",&num[i]);
		suma+=num[i];
		i++;
	}
		menor=num[0];
		 for (i = 1; i < 10; i++) {
        	if (num[i] < menor) {
            menor = num[i];
				}
		}	
		mayor=num[0];
		 for (i = 1; i < 10; i++) {
        	if (num[i] > mayor) {
            mayor = num[i];
			}
		}
		printf("El numero mas grande es: %d \n",mayor);
		printf("El numero menor es: %d \n",menor);
		printf("La suma de todos los numeros es %d",suma);
}
