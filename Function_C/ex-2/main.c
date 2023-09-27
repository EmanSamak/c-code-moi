#include <stdio.h>
#include "taxes.c"



int main(){

 double salary, taxes;

     printf("\n # Enter your salary: ");
    scanf("%lf", &salary);

     printf("\n # Enter your taxes: ");
    scanf("%lf", &taxes);
    

     double salaryPaidIs = calulateTaxes_SkatPr(salary,taxes); //calculate_factorial(n);

    if (salaryPaidIs < 0.0) {
        printf("\n This amount %lf can not be a real salary \n", salaryPaidIs);
    }

    return 0;

}