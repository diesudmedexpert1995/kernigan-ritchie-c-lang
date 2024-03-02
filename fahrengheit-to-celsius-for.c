#include <stdio.h>

/*
    prints Fahrengheit-to-Celsius conversion table by for loop (from upper-to-lower)
    for fahr = 0, 20, ... 300 
*/

#define LOWER 0
#define UPPER 300
#define STEP 20 

int main(){
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        printf("|\t\t%3d\t%6.2f\t\t  |\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }

    //exercise 1.5
    fahr = UPPER;
    for(int fahr; fahr > 0; fahr = fahr - STEP){
        printf("|\t\t%3d\t%6.2f\t\t  |\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
    return 0;
}