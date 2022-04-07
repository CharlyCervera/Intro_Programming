#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv){
    float numero = atoi(argv[1]);
    float numero2 = atoi(argv[2]);
    int mult = numero2 * numero;
    int sum = numero2 + numero;
    int resta = numero - numero2;
    int div = numero/numero2;
    printf ("The addition of your numbers is: %d \n", sum);
    printf ("The multiplication of your numbers is: %d \n", mult);
    printf ("The substraction of your numbers is: %d \n", resta);
    printf ("The division of your numbers is: %d \n", div);
    printf ("Thanks!\n");

    return 0;
}