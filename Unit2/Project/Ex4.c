#include <stdio.h>

int main(){
    int range;
    printf("Choose a range \n");
    printf("From 0 to: ");
    scanf("%d", &range);
    printf("This are the numbers divisible by 3 and 5: \n");
    for(int i = 1; i <= range; i++){
        if (i%3 == 0 && i%5 == 0){
            printf("%d \n", i);
        }

    }

    return 0;
}