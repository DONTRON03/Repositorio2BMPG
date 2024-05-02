#include <stdio.h>
#define horassem 40
int main(){
	float paga,horas,total,porcentaje;
	printf("Ingrese la paga por hora: ");
	scanf("%f",&paga);
	printf("Ingrese las horas trabajadas en la semana: ");
	scanf("%f",&horas);
	
	if(horas==horassem){
		total=horassem*paga;
		printf("Su paga total es de: %f",total);
	} else if (horas>horassem && horas<50){
		porcentaje=(horas*paga);
		total=porcentaje+(horas*0.5);
		printf("Su paga total es de: %f",total);
	} else if (horas>=50){
		total=(horassem*paga)*2;
		printf("Su paga total es de: %f",total);
	}
}
