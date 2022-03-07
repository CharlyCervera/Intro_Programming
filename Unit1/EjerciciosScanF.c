#include <stdio.h>

char nombre[255];
char apellido[255];
char estado[255];
float edad;

int main(){

printf ("Ingrese su nombre: \n");
scanf ("%s", nombre);
printf("Ingrese su apellido \n");
scanf ("%s", apellido);
printf ("Ingrese su estado: \n");
scanf ("%s", apellido);
printf ("Ingrese su edad: \n");
scanf ("%f", &edad);

printf (nombre," ", apellido, " de ", estado, " tienes ", edad, " años." );
 return 0;

}