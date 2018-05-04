#include <stdio.h>
#include <math.h>

 
int
main ()
{
  
int quit = 0;
  
int n;			// n is the number for which you will find factorial
  int p;			// you are going to keep the factorial of n in p
  
 
int a;
  
int b;
  
int result;
  
 
 
int option;		// for keeping the menu option
  while (!quit)
    {
      
	// print the menu here
	printf ("----Menu----");
      
printf (" ");
      
printf (" 1. Find factorial ");
      
printf (" ");
      
printf (" 2. Find a^b ");
      
printf (" ");
      
printf (" 3. Quit ");
      
	// get the response into option variable.
	
scanf ("%d", &option);
      
 
if (option == 2)
	{
	  
printf (" enter a ");
	  
scanf ("%d", &a);
	  
printf (" enter b ");
	  
scanf ("%d", &b);
	  
result = pow (a, b);
	  
printf ("%d", result);
	  
printf (" ");
	
}
      
 
      else if (option == 1)
	{
	  
printf (" Which number would you like? ");
	  
scanf ("%d", &n);
	  
 
 
 
if (n < 0)
	    {
	      
printf (" invalid number ");
	    
 
}
	  
	  else if (n > 10)
	    {
	      
printf
		(" This program can find factorials only in the range 0 - 10 ");
	    
}
	  
	  else if (n >= 0 && n <= 10)
	    {
	      
int fact = 1;
	      
for (p = 1; p <= n; p++)
		
fact = fact * p;
	      
printf ("Factorial of %d = %d\n", n, fact);
	    
}
	
}
      
      else if (option == 3)
	{
	  
printf (" YOU QUITTER!!!");
	  
quit++;
	
}
      
 
 
return 0;
    
 
}

}
