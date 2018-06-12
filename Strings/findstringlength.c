#include <stdio.h>
#include <string.h>

int main(void){
    char mystring[90];
    printf("Enter a string: ");
    scanf("%[^\n]", mystring);

    int i;
   // for(i=0;mystring[i]!='\0';i++); //this loop is set to continue unless mystring[i] is not null
    
    i = strlen(mystring); //strlen is provided by string header. Alternative to the for loop for string length 
    printf("The string length is: %d\n", i);
return 0;    
}
