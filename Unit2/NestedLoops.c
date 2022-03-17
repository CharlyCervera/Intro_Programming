#include <stdio.h>
#include "../Libraries/utils.h"

int main(){
    int sueño[5] = {22,45,76,89,53};
    for (int i = 10; i <= 50; i = i + 10){
        printf("Iterador_i: %d\n", i);
        sleep(1000);

        int counter = 1;
        while (counter <= 3){
            printf("\t Counter: %d\n", counter);
            // counter++;
            counter = counter + 1;
            sleep(1000);
            for (int j = 0; j < 2; j++){
                printf("\t\t...\n");
            };
        
        for (int index = 0; index <= 5; index++){
            printf("Index: %d\t\n", sueño[index]);
        }
        }
    }
    return 0;
}