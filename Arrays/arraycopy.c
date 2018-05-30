#include <stdio.h>

int main()
{

    int x[5], z[5], y;

    printf("Enter an intergers for elements\n");
    for (y = 0; y < 5; y++)
    
        scanf("%d", &x[y]);
    
    for (y=0; y < 5; y++)
    printf("%d\n", x[y]);

    /*copying data from first aray to the second*/
    for (y = 0; y < 5; y++)
    
        x[5] = z[5];
    
    for (y = 0; y < 5; y++)
        printf("x[%d] = %d\n", y, x[y]);

    return 0;
}
