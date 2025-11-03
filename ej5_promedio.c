#include <stdio.h>

int main() {
    int N;
    float calificacion, suma = 0;
    float max = -1;   // Inicializamos máximo en un valor menor que cualquier calificación posible
    float min = 101;  // Inicializamos mínimo en un valor mayor que cualquier calificación posible

    printf("Ingrese el numero de calificaciones: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        do {
            printf("Ingrese la calificacion %d (0-100): ", i);
            scanf("%f", &calificacion); // ingresa las calificaciones que pidio
            if (calificacion < 0 || calificacion > 100) { // si calificacion es menor de 0 o mayr de 100
                printf("Calificacion invalida. Intente de nuevo.\n"); //vuelva a ingresar
            }
        } while (calificacion < 0 || calificacion > 100); // va a preguntar hasta que no sea menor que 0 o mayor que 100

        // Sumamos la calificación para calcular el promedio
        suma += calificacion; // se van sumando las calificaciones 

        // Verificamos si es la nueva máxima
        if (calificacion > max) { // la compara con max y si es mayor la guarda en max 
            max = calificacion;
        }

        // Verificamos si es la nueva mínima
        if (calificacion < min) { // la compara con min y si es menor actualiza min con esta calificacion 
            min = calificacion;
        }
    }

    printf("\nPromedio = %.2f\n", suma / N); // saca el promedio mostrando solo 2 decimales
    printf("Calificacion maxima = %.2f\n", max); //muestra la maxima 
    printf("Calificacion minima = %.2f\n", min);//muestra la minima 

    return 0;
}