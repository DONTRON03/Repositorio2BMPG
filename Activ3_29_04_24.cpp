#include <stdio.h>
#include <math.h>

int main(){
	int h,b,b2,t,a,raiz,opc;
	printf("Escoja una figura para sacar su area: \n 1)Triangulo  2)Trapecio  3)Rectangulo \n");
	scanf("%d",&opc);
	
	switch(opc)
	{
		case 1: 
			printf("Introduce la base y altura respectivamente:  \n");
			scanf("%d",&b);
			scanf("%d",&h);
			a=(b*h)/2;
				printf("El area es de: %d",a);	
			break;
		case 2:
			printf("Introduzca las bases y altura respectivamente: \n");
			scanf("%d",&b);
			scanf("%d",&b2);
			scanf("%d",&h);
			a=(b+b2)*h;
			t=a/2;
				printf("El area es de: %d",a);	
			break;
		case 3:
			printf("Introduzca base y altura respectivamente: \n");
			scanf("%d",&b);
			scanf("%d",&h);
			a=b*h;
				printf("El area es de: %d",a);	
			break;
		default:
				printf("El area es de: %d",a);	
	}
}

