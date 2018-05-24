#include <stdio.h>
#include <stdlib.h>

int main()
{

    float k[20];
    float m[20];

    int z;
    for (z = 0; z < 20; z++)
    {
        printf("Enter a number ", z);
        scanf("%f", &k[z]);
    }
    int b;
    for (b = 0; b < 20; b++)
    {
        printf("Enter a number ", b);
        scanf("%f", &m[b]);
    }
    return 0;
}
