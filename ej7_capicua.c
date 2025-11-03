#include <stdio.h>

int main() {
    int inicio, fin;

    // Pedimos el rango al usuario
    printf("Ingrese el numero de inicio: ");
    scanf("%d", &inicio);
    printf("Ingrese el numero final: ");
    scanf("%d", &fin);

    printf("Numeros capicua entre %d y %d:\n", inicio, fin);

    // Recorremos todos los números en el rango
    for (int num = inicio; num <= fin; num++) {
        int temp = num;
        int reverso = 0;

        // Invertimos el número usando while
        while (temp > 0) {
            int digito = temp % 10;          // Último dígito
            reverso = reverso * 10 + digito; // Lo añadimos al reverso
            temp /= 10;                      // Eliminamos el último dígito
        }

        // Comparamos si el número es igual a su reverso
        if (num == reverso) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}