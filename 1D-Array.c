#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    //declare the array
    int x[n];
    int i;
    for (i=0;i <= n;i++) {
        x[i] = rand() % 100;
    }
    return 0;
}
