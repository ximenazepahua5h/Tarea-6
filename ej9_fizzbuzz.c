#include <stdio.h>

int main() {
    int N;

    // Pedimos al usuario el número límite
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    // Recorrer del 1 al N
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            // Múltiplo de 3 y 5
            printf("FizzBuzz");
        } else if (i % 3 == 0) {
            // Múltiplo solo de 3
            printf("Fizz");
        } else if (i % 5 == 0) {
            // Múltiplo solo de 5
            printf("Buzz");
        } else {
            // No múltiplo de 3 ni 5
            printf("%d", i);
        }

        // Coma y espacio excepto después del último número
        if (i != N) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}