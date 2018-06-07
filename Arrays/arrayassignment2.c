#include <stdio.h>

int main(void)
{
    /* represent a positive integer of maximum 10 digits in an one dimensional array */
    //Declare an integer array with 10 elements, initialize each element with 0
    int n;
    int myarray[n];
    int i;

    printf("Enter the amount of digits you would like to input.\t Enter 10 digits at most");
    scanf("%d", &n);

    //set the array to record the correct amount of digits

    for (i = 0; i < n; i++)
    {
        scanf("%d", &myarray[i]);
        if (myarray[i] == 10)
            printf("Error: That is more than one integer");
        break;
    }
    for (i = 0; i < n; i++)
        printf("%d", myarray[i]);
    return 0;
}
