#include <stdio.h>
#include <stdlib.h>

int edad = 25;
int* ptr = &edad;
int mes;
int main(int argc, char** argv){

    printf("La variable edad = %d\n", edad);
    printf("La dirección de la variable edad = %p\n", &edad);
    printf("La dirección de la variable edad = %p\n", &edad);
    //Creación de pointer
    int* maipitiar = NULL;
    maipitiar = &edad;
    printf("La variable pointer maipitiarp es igual a: Spin %p\n", maipitiar);
     printf("La dirección de la variable  es igual a: Spin %p\n", maipitiar);

 //     ptr = Null oxf6
    maipitiar = &mes;
    maipitiar = &edad;


    //edad = edad*2;
    printf("El valor de lo que apunta maipitiar = %d\n", *maipitiar);
    printf("El valor de la variable edad = %d\n", edad);
    *maipitiar = *maipitiar*2;
    printf("--.After the modifier \n");
    printf("El valor de lo que apunta maipitiar = %d\n", *maipitiar);
    printf("el valor de variable edad = %d\n", edad);

    int* secondo = NULL;
    secondo = maipitiar;


return 0;

}
