#include <stdio.h>
int main(){
	int carta;
	printf("Ingresa el numero de la carta: \n");
	scanf("%d",&carta);
	
	if(carta==1){
		printf("AS");
	}else if (carta==10){
		printf("SOTA");
	}else if (carta==11){
		printf("CABALLO");
	}else if (carta==12){
		printf("REY");
	}else if (carta==2||carta==3||carta==4||carta==5||carta==6||carta==7||carta==8||carta==9){
		printf("No es ninguna figuira ni tampoco AS");
	}else if(carta>12){
		printf("Este no es numero de una carta de la baraja española");
	}
}
