#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char** argv) {
printf("El número que ingresó fue: %s %s\n", argv[0], argv[1]);
int numero = atoi(argv[1]);
bool isDivided = numero%2 == 0;
if (isDivided) {
    printf("Su número es par");
}
else {
    printf("Su número es impar \n");
}
return 0;
}