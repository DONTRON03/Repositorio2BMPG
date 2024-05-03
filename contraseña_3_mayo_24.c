#include <stdio.h>
#include <string.h>
int main(){
	char nombre[20];
	char contrasena[20];
	int intentos=3;
	while (intentos > 0){
        printf("ingrese el usuario: ");
        scanf("%s",nombre);
        printf("ingrese la contraseña: ");
        scanf("%s",contrasena);

            if (strcmp(nombre,"ROOT")==0 && strcmp(contrasena,"1234")==0){
                printf("Bienvenido %s \n",nombre);
            }else{
                printf("Datos incorrectos \n");
                intentos--;
            }if (intentos > 0){
                printf("Intentos restantes %d \n",intentos);
            }
    }
    printf("Has superado el número de intentos \n");

    
} 