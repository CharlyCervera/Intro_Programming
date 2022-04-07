#include <stdio.h>

int main(){
    float TempF[] = {63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 82, 64, 75 , 90, 64, -999, 99, 82, 95, 82};
    float TempC[] = {};
    float max = 0;
    float sum;
    printf("The temperatures in Farenheit are: ");
     for(int a = 0; a <= 29; a++){
         printf(" %f, ", TempF[a]);
     }
    printf("\n");
    printf("The temperatures in Celsius are: ");
    for(int i = 0; i <= 29; i++){
    TempC[i] = (TempF[i] - 32)*.5555;
    printf(" %f, ", TempC[i]);
        if (TempC[i] >= max){
        max = TempC[i];
        }
        sum = sum + TempC[i];
    }
    float average = sum/30;
    printf("\n");
    printf("The highest value in Celsius is %f \n", max);
    printf("The mean value in Celsius is %f \n", average);
    return 0;
}