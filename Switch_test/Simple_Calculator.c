#include <stdio.h>

int main()
{
   char operator;
   double num1;
   double num2;
   double result;

   printf("\n Enter an operator sign( + - * /) : ");
   scanf("%c", &operator);


   printf("Enter number1 : ");
   scanf("%lf", &num1);

   printf("Enter number2 : ");
   scanf("%lf", &num2);


   switch (operator)
   {
   case '+':
   result = num1 + num2;
   printf("\n The result is : %.2lf", result);
    break;
   
   case '-':
   result = num1 - num2;
   printf("\n The result is : %.2lf", result);
    break;

    case '*':
   result = num1 * num2;
   printf("\n The result is : %.2lf", result);
    break;

    case '/':
   result = num1 / num2;
   printf("\n The result is : %.2lf", result);
    break;
    
   default:
   printf("%c is not valid operator \n", operator);
    break;
   }


   return 0;
   
}