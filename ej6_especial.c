#include <stdio.h>

// Función para calcular el factorial de un número
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i; //fact = fact * i
    } // multiplica los numeros del 1 al n
    return fact;
}

int main() {
    int num, temp, digit, suma = 0;

    // Pedimos al usuario el número
    printf("Ingrese un numero: ");
    scanf("%d", &num); //pide y se guarda en num

    temp = num;  // Guardamos el número original para comparación final pq usaremos temp

    // Mientras haya dígitos
    while (temp > 0) {
        digit = temp % 10;       // Obtenemos el último dígito calculamos el factorial de cda ultimo digito 
        suma += factorial(digit); // Sumamos sus factoriales 
        temp /= 10;               // Eliminamos el último dígito nos permite pasar al suguiente digito
    }

    // Verificamos si la suma de los factoriales es igual al número original
    if (suma == num) {
        printf("%d es un numero especial.\n", num);
    } else {
        printf("%d no es un numero especial.\n", num);
    }

    return 0;
}
