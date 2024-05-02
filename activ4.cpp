#include <stdio.h>
int main (){
	char letra;
	printf("Ingrese una letra:  ");
	scanf("%c",&letra);
	
	if(letra=='a'|| letra=='e'|| letra=='i'|| letra=='o'|| letra=='u'){
		printf("%c Es una vocal",letra);
	}else {
		printf("%c No es una vocal",letra);
	}
}
