#include <stdio.h>
#include "calculate.c"

int main(){

    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    double result = calculate_factorial(n);

    if (result != 0.0) {
        printf("The factorial of %d is %lf\n", n, result);
    }

    return 0;
}