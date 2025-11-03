#include <stdio.h>
#include <string.h>

int main() {
    char password[20];          // Para almacenar la contraseña ingresada
    const char correctPass[] = "1234"; // Contraseña correcta
    int intentos = 0;           // Contador de intentos
    int opcion;                 // Para el menú

    // Ciclo para pedir contraseña hasta 3 intentos
    do {
        printf("Ingrese la contraseña: ");
        scanf("%s", password);
        intentos++;

        if (strcmp(password, correctPass) == 0) { // Contraseña correcta
            printf("Acceso concedido.\n");

            // Menú de opciones
            do {
                printf("\n--- MENU ---\n");
                printf("1. Consultar\n");
                printf("2. Depositar\n");
                printf("3. Salir\n");
                printf("Ingrese una opcion: ");
                scanf("%d", &opcion);

                switch(opcion) {
                    case 1:
                        printf("Consulta realizada.\n");
                        break;
                    case 2:
                        printf("Deposito realizado.\n");
                        break;
                    case 3:
                        printf("Saliendo del sistema...\n");
                        break;
                    default:
                        printf("Opcion invalida.\n");
                        break;
                }
            } while(opcion != 3); // Repetir menú hasta salir

            return 0; // Termina el programa si la contraseña es correcta
        } else {
            printf("Contraseña incorrecta. Intento %d de 3\n", intentos);
        }

    } while(intentos < 3);

    printf("Acceso bloqueado.\n");
    return 0;
}