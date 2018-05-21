#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int k, i;
    /*
//print 12 random numbers
//a differnt int is needed for iteration
for (i= 1; i<=12; i++) {
k = rand();
printf("%d\n", k);}
//srand allows for true random numbers. with 's' meening seed.
//srand will base the random number on the number provided in parenthesis i.e srand(100)
*/
    long w;
    w = time(NULL); //use the time function because time is the only thing that is constatntly changing
    //a seed number will continue to generate the same "random" numbers
    srand(w);
    for (i = 1; i <= 12; i++)
    {
        k = rand();
        printf("%d\n", k);
    }
    return 0;
}
