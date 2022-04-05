#include <stdio.h>
#include <stdlib.h>



int main(){

int width;
int length;

printf("Introduce the width of the rectangle: ");
scanf("%d", &width);
printf("Introduce the length of the rectangle: ");
scanf("%d", &length);
int area = width*length;
printf("The area of the figure is: %d \n", area);
if (width == length) {
        printf("The figure given is a square \n");
    }
printf("¡Thanks for using this program! \n");
return 0;
}