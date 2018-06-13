#include <string.h>

int main(void)
{

    char mystring[70];
    printf("Enter a string: ");
    scanf("%[^\n]", mystring);

    int i, countAlpha = 0, countSpace = 0;

    for (i = 0; mystring[i] != '\0'; i++)
    {
        if ((mystring[i] >= 'A' && mystring[i] <= 'Z') || (mystring[i] >= 'a' && mystring[i] <= 'z'))
            countAlpha++;
        else if (mystring[i] == ' ')
            countSpace++;
    }
    printf("Total amount of alphabets: %d\n", countAlpha);
    printf("Total amount of spaces: %d\n", countSpace);
    return 0;
}
