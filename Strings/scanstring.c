#include <stdio.h>
#include <string.h>

int main()
{
    char mystring[80];
    printf("Enter a message: ");
    //when entering string with %s the code will terminate after a space, tab or return key (null)
    //scanf("%s", mystring);

    //an alternative to %s
    //scanf("%[ABCDEFGH]", mystring); //this will allow the user to enter capital A through H

    //a more robust option
    //scanf("%[A-Za-z ]", mystring);
    /*this accepts both capital and lowercase from a to z. 
    Add space inside square brackets to include space*/

    //another alternative
    scanf("%[^\n]", mystring); //will acceepts EVERYTHING accept new line character
    //scanf("%[^A]", mystring); //will accept everything BUT capital A
    printf("Your message is: %s\n", mystring);
    return 0;
}
