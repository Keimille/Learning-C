#include <stdio.h>
#include <string.h>

int main (void){
char mystring[80]; //= "Hello Peeps"; 

//this array has 80 elements but the code will stop at null ( 1 after "s")
strcpy(mystring, "Hello Peeps"); //strcpy is part of the string library

printf("Message is: %s\n", mystring);

char mystring1[] = "What's Crack-A-Lackin!!";
strcpy (mystring, mystring1); //copies one string array to another
printf("Message is: %s\n", mystring);
return 0;
}
