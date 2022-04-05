#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../Libraries/myFunctions.h"

bool isEvenFunct(int numberToTest);

int main(int argc, char** argv){

    //par o impar
    bool isEven = isEvenFunct(2);
    if (isEven){

        printf("Is Even \n");
    }
    else {
          printf("Is not Even \n");
    }
    int varA = 5;
    int varB = 7;
printf("      ------ Before SWAP ------ \n\n varA: %d ..... varB: %d\n", varA, varB );
    swap(varA, varB);
printf("      ------ After SWAP ------ \n\n varA: %d ..... varB: %d\n", varA, varB );
    return 0;
}

// bool isEvenFunct(int numberToTest){

//     bool isEven = (numberToTest % 2 == 0);

//   if (isEven){

//         return true;
//     }


//     return false;
// }
