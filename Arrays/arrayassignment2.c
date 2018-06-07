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
    if (n = 1)
    {
        for (i = 9; i < 10; i++)
            scanf("%d", &myarray[i]);
    }
    else if (n = 2)
    {
        for (i = 8; i < 10; i++)
            scanf("%d", &myarray[i]);
    }
    else if (n = 3)
    {
        for (i = 7; i < 10; i++)
            scanf("%d", &myarray[i]);
    }
    else if (n = 4)
    {
        for (i = 6; i < 10; i++)
            scanf("%d", &myarray[i]);
    }
    else if (n = 5)
    {
        for (i = 5; i < 10; i++)
            scanf("%d", &myarray[i]);
    }
    else if (n = 6)
    {
        for (i = 4; i < 10; i++)
            scanf("%d", &myarray[i]);
    }
    else if (n = 7)
    {
        for (i = 3; i < 10; i++)
            scanf("%d", &myarray[i]);
    }
    else if (n = 8)
    {
        for (i = 2; i < 10; i++)
            scanf("%d", &myarray[i]);
    }
    else if (n = 9)
    {
        for (i = 1; i < 10; i++)
            scanf("%d", &myarray[i]);
    }
    else if (n = 10)
    {
        for (i = 0; i < 10; i++)
            scanf("%d", &myarray[i]);
    }
    for (i=0;i<10;i++)
    printf("The number you entered is: %d", myarray[i]);
    do {
        printf("Error: That is more than one integer");
        break;   
    } 
    while (myarray[i] == 10); 
    return 0;
    }
   
