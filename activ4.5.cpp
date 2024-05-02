#include <stdio.h>

int main() {
    char letra;
    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    switch(letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf(" %c es una vocal  ", letra);
            break;
        default:
            printf(" %c no es una vocal  ", letra);
    }

}

