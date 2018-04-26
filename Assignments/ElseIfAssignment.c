#include <stdio.h>

int main(){
	int units;    // you need to input this	
	double bill_amount;  // you need to calculate this

	// prompt user to input unit consumed using printf and then
	printf("Enter the amount of units you have consumed");
	
	// using scanf read the value into the unit variable.
	scanf("%d", &units);

	// Now, use if-elseif to decide about rate
	if (units < 0){
		printf("Unit consumed cannot be negative\n");
	}
	else if(units >= 0 && units <= 100){
		bill_amount = units * 0.2;     // for this range 0.2 is the rate
	}
	else if(units >= 100 && units <= 250){
		bill_amount = units - 100 * 0.5;
		// please note that the bill must be calculated on slabs (see instructions)	
	}
	else if(units >250 && units <=500){  // >250 and  <=500
		// please note that the bill must be calculated on slabs (see instructions)
		bill_amount = units - 250 * 0.75;
	}
	else{	(units > 500);	// for anything >500
		// please note that the bill must be calculated on slabs (see instructions)
		bill_amount = units - 500 * 1;
	}
	
	// ** finally print the bill amount here, please note that if the unit consumed is 
	printf("Total bill: %lf for %d units", bill_amount, units);
	// invalid that is negative then no bill should be printed. **

	return 0;
}
