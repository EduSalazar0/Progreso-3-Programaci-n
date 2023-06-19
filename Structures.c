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
}
