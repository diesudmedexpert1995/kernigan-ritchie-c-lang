#include <stdio.h>


int main()
{
    int c;
    // copy input to output; 1st version
    /*c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar(); 
    }*/
    // copy input to output; second version
    while((c = getchar())!= EOF){
        putchar(c);
        /* Ex 1.6 Print 0 if EOF(Ctrl+D in terminal for Unix/Linux, Ctrl+Z for  Windows) else 1*/
        printf("\n%d\n",getchar()!=EOF); 
    }
    printf("\n%d\n", EOF); 
    return 0;
}