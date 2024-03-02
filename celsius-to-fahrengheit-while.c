#include <stdio.h>

/*
    exercise 1.4
    prints Celsius-to-Fahrengheit conversion table by while loop
    for celsius = 140, 120, ... -20 
*/
#define LOWER -20
#define UPPER 140
#define STEP 20 

int main(){
    float celsius, fahrengheit;
    int upper, lower, step;
    celsius = UPPER;
    printf("--------- Celsius to Fahrengheit ----------\n\n");
    while (celsius >= LOWER){
        fahrengheit = (9.0 / 5.0) * celsius + 32;
        printf("|\t%6.0f\t\t%3.1f\t\t|\n",  celsius, fahrengheit);
        celsius = celsius - STEP;
    }
    return 0;
}