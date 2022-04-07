#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char ** argv){
    float num[100];
    float suma = 0;
    bool resp = false;
    int i = 1;
    int temp;
    while (resp == false){
    printf("Ingrese un numero: ");
    // scanf("%f", &num);
    num[i] = atoi(argv[i]);
    suma = suma + num[i];
    i++;
    printf("¿Desea ingresar otro numero? (Máximo 100) 1(no) / 0(sí) ");
    scanf("%d", &temp);
    resp = temp;
    }
    float i2 = i;
    float mean = suma/i2;

    printf("Le media de sus numeros es: %f \n", mean);
    //printf("%f \n", i);
    //printf(" %f \n", suma);
    
    return 0;


}