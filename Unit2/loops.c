#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// #include <stdio.h>

int main(int argc, char** argv){
    
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");

    for (int numero = 1; numero <= 5; numero = numero + 1){
        printf("mi numero es : %d\n", numero);
    }
printf("Last count: %d\n", numero);
int sensorPin = 0;
for ( ; ; ){
sensorPin = rand()%200;
printf("Sensor read: %d...\n", sensorPin);
sleep(2000);
bool isTempMax = (sensorPin >= 149);

if (isTempMax){
    break;
};
system("clear");
}
 printf("Program donde ...");
 
 bool isTemperatureLow = true;
 while (isTemperatureLow) {
    sensorPin = rand()%200;
    printf("MySensorPin: %d ", sensorPin);
    isTemperatureLow = (sensorPin = 190);
}
while (true){
    sensorPin = rand()%200
    printf("sensor read: %d ...\n")
}


return 0;

}