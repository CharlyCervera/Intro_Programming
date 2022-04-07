#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[50];
    int age;
    printf("Good day, I´m Charly, please answer the next questions honestly \n");
    printf("What is your name? \n Answer: ");
    scanf("%s", name);
    printf("How old are you? \n Answer: ");
    scanf("%d", &age);
    if (age < 18){
        int dif = 18 - age;
        printf("Sorry %s, but you are not old enough to be part of our site, see you in %d years \n", name,  dif);
        return 0;
    }
    printf("Welcome to our site %s, hope you enjoy it ;) \n", name);

    return 0;
}
