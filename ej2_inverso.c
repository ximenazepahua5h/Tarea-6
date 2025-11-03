#include <stdio.h> //libreriaaa

int main() {
    int n, digito, invertido = 0; //n almacena el num ingresado, digito extrae digitos uno por uno, invertido almacea el num al reves
    
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n); //lee el numero y guarda en n 
    
    // Eliminar ceros al final del número original
    while (n % 10 == 0 && n != 0) { // si el num es divisible entre 10 le quita el ultimo 0 y esto ocurre hasta que el ultimo digito no sea 0 
        n /= 10;
    }

    // Invertir el número usando do...while
    do {
        digito = n % 10;           // obtener el último dígito
        invertido = invertido * 10 + digito;  // construir el número invertido =0*10+residuo(digito)
        n /= 10;                   // eliminar el último dígito
    } while (n > 0); // termina cuando no hay mas digitos
    
    printf("Número invertido: %d\n", invertido);
    
    return 0;
}