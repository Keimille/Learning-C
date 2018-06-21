#include <stdio.h>

double getSimpleInterest(double principal, double rate, double time)
{
    double interest;
    interest = (principal * rate * time) / 100.0;
}

int main()
{
    double i;
    double z;

    //by calling getSimpleInterest there is no need to declare a new double for pricipal, rate or time for each example
    i = getSimpleInterest(1000.0, 5.0, 2);
    printf("Total Interest: $%0.2lf\n", i);

    z = getSimpleInterest(2050, 5.0, 2);
    printf("Total Interest: $%0.2lf\n", z);

    return 0;
}
