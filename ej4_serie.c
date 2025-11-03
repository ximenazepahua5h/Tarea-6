#include <stdio.h>

int main() {
    int N;

    // Pedimos al usuario el valor de N
    printf("Ingrese un numero N: ");
    scanf("%d", &N); //guarda el num ingresado en N 

    printf("Serie alternante: ");

    // Ciclo para generar la serie del 1 hasta N
    for (int i = 1; i <= N; i++) { //inicia desde 1 hasta N 
        if (i % 2 == 0) {
            // Si el número es par, se imprime con signo negativo
            printf("%d", -i);
        } else {
            // Si el número es impar, se imprime con signo positivo
            printf("%d", i);
        }

        // Para separar los números con comas excepto el último
        if (i != N) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}