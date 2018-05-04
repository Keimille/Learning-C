#include <stdio.h>
#include <math.h>
/**

When the program executes it will work in the following way:
You must accomplish all the menu options and validation checkings exactly as asked.

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit

What you want to do? 1
Enter number: -1
Invalid number for factorial

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 1
Enter number: 5
Factorial of 5 is 120

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit

What you want to do? 20
This program can find factorials only in the range 0 - 10

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 2
Enter a: 2
Enter b: 5
2^5 = 32.0

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 5
Invalid menu option

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 3

*** Thank you ***

NOTE: You should use library function pow to find a^b, no need to write code 
for finding a^b.

*/

#include <stdio.h>
#include <math.h>


int main() {
	int quit = 0;
	int n;  // n is the number for which you will find factorial
	int p;  // you are going to keep the factorial of n in p
	

	int a;
	int b;
	int result;


	int option; // for keeping the menu option
	while(!quit){
		// print the menu here
printf("----Menu----");
printf(" ");
printf(" 1. Find factorial ");
printf(" ");
printf(" 2. Find a^b ");
printf(" ");
printf(" 3. Quit ");
		// get the response into option variable.

scanf("%d", &option);
	 
	 if (option == 2) {
        printf(" enter a ");
        scanf("%d", &a);
        printf(" enter b ");
        scanf("%d", &b);
        result = pow(a, b);
        printf("%d", result);
        printf(" ");
    } 
    
    else if (option == 1) {
		printf(" Which number would you like? ");
scanf("%d", &n);
   
    
	
	if (n < 0) {
		printf(" invalid number ");
	    
	}
		else if (n > 10) {
			printf( " This program can find factorials only in the range 0 - 10 ");
		}
		else if (n >= 0 && n <= 10) {
int fact = 1;
for (p =1; p <= n; p++)
	fact = fact * p;
printf("Factorial of %d = %d\n", n, fact);
	} 
	    }
	else if (option == 3) {
		printf(" YOU QUITTER!!!" );
		quit++;
	}
	    

return 0;	
	    
	}
}

		// Now. you can use if-else to check the option and do needful
		// When option == 3, you need to do something with the variable quit, think
		// about that.  	
		// When option == 1, you should read n and first check the validity,
		// if n < 0, a particular message has to be printed, when n > 10, another 
		// message has to be printed (see the expected output above), if n is valid
		// write a while loop to calculate the factorial and print it, becareful about
		// the initial value of p.
		// for option == 2, read base and exponant then make a call to the pow function
		// print the return value using printf. You may declare a variable to hold the 
		// result.

	}


}