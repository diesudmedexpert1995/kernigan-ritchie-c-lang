#include<stdio.h>

int main()
{
    /* 
        // characters count; first version
        long nc;
        nc = 0;

        while (getchar() != EOF) ++nc;
        printf("Characters numbers: %ld\n",nc); 
    */
    // characters count; second version
    long nc;
    for (nc = 0; getchar() != EOF; nc++);
    printf("Characters numbers: %ld\n",nc);

    return 0;
}