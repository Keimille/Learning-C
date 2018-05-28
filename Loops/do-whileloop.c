#include <stdio.h>

int main(void)
{
    char response1;
    int response2;
    do
    {
        printf("Do you like Spam? ");
        getchar();
        response1 = ("%c", getchar());
        if (response1 == 'Y' || response1 == 'y')
        {
            printf("I like SPAM!!! \n"
                   "We'll have spam spam spam beak beans spam spam spam...\n");
        }

        else if (response1 == 'N' || response1 == 'n')
        {
            printf("Who doesn't like SPAM!!!? \n");
        }
        printf("Would you like to try again?\n Enter 1 for yes or 0 for no.");
        scanf("%d", &response2);
    } while (response2 == 1);
    return 0;
}
