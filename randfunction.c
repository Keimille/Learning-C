#include <stdio.h>
#include <stdlib.h>

int main (void) {

int k, i;
//print 12 random numbers
//a differnt int is needed for iteration
for (i= 1; i<=12; i++) {
k = rand();
printf("%d\n", k);}
return 0;
}
