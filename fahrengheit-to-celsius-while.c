#include<stdio.h>

/*
    prints Fahrengheit-to-Celsius conversion table by while loop
    for fahr = 0, 20, ... 300 
*/

#define LOWER 0
#define UPPER 300
#define STEP 20 
int main(){
    float fahr, celsius;
    
    fahr = LOWER;
    printf("--------- Fahrengheit to Celsius ----------\n\n"); // exercise 1.3
    while(fahr <= UPPER){
        celsius = 5.0/9.0 * (fahr - 32.0);
        printf("|\t\t%3.1f\t%6.0f\t\t  |\n", fahr, celsius);
        fahr = fahr+STEP;
    }
    return 0;
}