#include <stdio.h>

int main() {
    char response1, response2;  
    
do {
printf("Do you like Spam? ");
scanf("%c", &response1);
    if (response1 == 'Y' || response1 == 'y') { 
        printf("I like SPAM!!! \n" "We'll have spam spam spam beak beans spam spam spam...\n" ); }
        
    else if (response1 == 'N' || response1 == 'n' ) 
        printf("Who doesn't like SPAM!!!? \n"); 
    
printf("Would you like to try again? ");
scanf("%c", &response2);
}
while (response2 == 'Y' || response2 == 'y');
return 0;
}
    
