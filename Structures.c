#include <stdio.h>

struct alumno {
    char nombre[40];
    char direccion[50];
    char carrera[30];
    int edad;
    float promedio;
};

int main() {
    struct alumno alumnos[5] = {};

    for (int i = 0; i < 5; i++) {
        puts("Ingrese su nombre: \n");
        scanf("%s", alumnos[i].nombre);
        fflush(stdin);

        puts("Ingrese su direccion: \n");
        scanf("%s", alumnos[i].direccion);
        fflush(stdin);

        puts("Ingrese carrera: \n");
        scanf("%s", alumnos[i].carrera);
        fflush(stdin);

        puts("Ingrese tu edad: \n");
        scanf("%d", &alumnos[i].edad);
        fflush(stdin);

        puts("Ingrese su promedio: \n");
        scanf("%f", &alumnos[i].promedio);
        fflush(stdin);
    }

    for (int i = 0; i < 5; i++) {
        printf("El nombre %d es: %s\n\n", i + 1, alumnos[i].nombre);
        printf("La direccion %d es: %s\n\n", i + 1, alumnos[i].direccion);
        printf("La carrera %d es: %s\n\n", i + 1, alumnos[i].carrera);
        printf("La edad %d es: %d\n\n", i + 1, alumnos[i].edad);
        printf("El promedio %d es: %.2f\n\n", i + 1, alumnos[i].promedio);
    }

    return 0;
}
