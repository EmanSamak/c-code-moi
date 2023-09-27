#include <stdio.h>

double calulateTaxes_SkatPr(double salary, double taxesPr)
{
     if (salary < 0 || taxesPr < 0)
    {
        printf("\n The condition to calulate the salary is not correct!!! \n");
        printf("\n Please enter a correct salary or a taxes \n");

        return 0.0;
    }

    double salaryPaid = salary - (salary * taxesPr)/100;

    printf("\n => The amount of your salary is : %.3lf kr \n", salaryPaid);
    
    return salaryPaid;
    
}