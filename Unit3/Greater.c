#include <stdio.h>
#include <stdlib.h>

int main(){

int n1;
int n2;
int n3; 
int greater;

printf("Introduce number: ");
scanf("%d", &n1);
printf("Introduce number: ");
scanf("%d", &n2);
printf("Introduce number: ");
scanf("%d", &n3);

if (n1 > n2){
greater = n1;
}
else {
    greater = n2;
}
if (greater < n3){
greater = n3;
}
printf("The greatest number is: %d \n", greater);

return 0;
}
