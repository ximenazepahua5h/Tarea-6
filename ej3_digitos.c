#include <stdio.h>

int main() {
    int n, original;
    int digito;
    int pares = 0, impares = 0; //contadores 

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);// guardamos el num ingresado en n

    original = n;  // Guardamos el número original para mostrarlo le asignamos el mismo valor de n pq vamos a recorrer n

    printf("Digitos pares: ");
    while (n != 0) {
        digito = n % 10;  // Tomamos el último dígito
        if (digito % 2 == 0) { // Es par
            printf("%d ", digito);
            pares++; // aumentamos contador pares
        }
        n /= 10;  // Eliminamos el último dígito y cambiar el num ir recorriendolo en si sino seria el mismo num
    }

    // Para contar los impares, necesitamos recorrer otra vez el número
    n = original;  // Restauramos el número original
    printf("\nDigitos impares: ");
    while (n != 0) {
        digito = n % 10;
        if (digito % 2 != 0) { // Es impar
            printf("%d ", digito);
            impares++;
        }
        n /= 10;
    }

    printf("\nCantidad de digitos pares: %d\n", pares);
    printf("Cantidad de digitos impares: %d\n", impares);

    return 0;
}