#include <stdio.h>

int main() {
    int n, divisor = 2, num;

    printf("Ingrese un número entero mayor que 1: ");
    scanf("%d", &n); //NUM QUE DA EL usario

    num = n; // Guardamos el valor original pq el valor n se ira diviendo y lo quiero conservar para mostrarlo al final

    // Mostrar la lista final de factores primos
    printf("Los factores primos de %d son: ", num);
    while (n > 1) { // se detine hasta n sea igual a 1 
        if (n % divisor == 0) {
            printf("%d ", divisor); //imprime el que si fue divisor 
            n = n / divisor;
        } else {
            divisor++; // si divisor no divide se le suma 1 
        }
    }

    return 0;
}