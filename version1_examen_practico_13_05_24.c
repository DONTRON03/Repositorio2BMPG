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
        
             if (strcmp(nombre,"ROOT") == 0 && strcmp(contrasena, "1234") == 0) {
            printf("Bienvenido al sistema %c \n",nombre);
            break;
        } else {
            printf("Datos incorrectos. Intentos restantes: %d\n", intentos - 1);
            intentos--;
        }
    }

    if (intentos == 0) {
        printf("Has agotado tus intentos. Acceso denegado.\n");}


    return 0;
} 
