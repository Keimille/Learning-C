#include <stdio.h>

int main() {
    int n;    
    int i, j; 

    printf("Enter how many lines: ");
    scanf("%d", &n);

/* for loop syntax
for (init; condition; increment) {
    statement(s);
} */
    for(i = 1; i <= n; ++i) {
            printf("*");

        for(j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
