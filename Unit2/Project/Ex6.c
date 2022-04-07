#include <stdio.h>

int main(){
    for(int mes = 1; mes <= 12; mes++){
        printf("Month   %d \n", mes);
        if(mes <= 7 && mes%2 == 0){
             if(mes == 2){
            for(int i = 1; i <= 29; i++){
                if(i == 29){
                    printf("        Day %d (Only every 4 years) \n", i);
                }
                else{
                printf("        Day %d \n", i);
                }
            }
        }
        
        else{
            for(int i = 1; i <= 30; i++){
                printf("        Day %d \n", i); 
            }
         } 
        }
       
        if(mes >= 8 && mes%2 == 0){
            for(int i = 1; i <= 31; i++){
                printf("        Day %d \n", i); 
            }
        }
        if(mes <= 7 && mes%2 != 0){
            for(int i = 1; i <= 31; i++){
                printf("        Day %d \n", i); 
            }
         }
        
         if(mes >= 8 && mes%2 != 0){
            for(int i = 1; i <= 30; i++){
                printf("        Day %d \n", i); 
            }
         }
        
    }
    return 0;
}