// version2_examen_practico_13_05_24
#include <stdio.h>
#include <string.h>
int main(){
	char nombre[20];
	char contrasena[20];
	int intentos=3;
	while (intentos > 0){
        printf("ingrese el usuario: ");
        scanf("%s",nombre);
        printf("ingrese la contrasena: ");
        scanf("%s",contrasena);

             if (strcmp(nombre,"Abril LC") == 0 && strcmp(contrasena, "2b18") == 0) {
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
