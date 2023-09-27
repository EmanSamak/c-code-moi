#include <stdio.h>

double calculate_factorial(int n){

if (n < 0)
{
    /* code */
    printf("Factorial is negative number derfor error!! \n");

    return 0.0;
}

double factorial = 1.0;

for (int i = 1; i <= n; i++)
{
    /* code */
    factorial *= (double)i;
}


    return factorial;
}
