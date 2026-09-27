#include <stdio.h>
int main()
{
  int choice;
  float numl, num2, result;

  do
{
  printf("In===== MENU DRIVEN CALCULATOR ===== \n");
  printf(“1. Addition\n”);
  printf(“2. Subtraction\n");
  printf(“3. Multiplication\n");
  printf(“4. Division\n")
  printf(“5.Exit\n”);
  printf("Enter your choice: ")
  scanf(“%d", &choice);
  switch (choice)
 {
    case 1:
       printf("Enter two numbers: ”).
       scanf(%f %f", &num1, &num2);
       result = numl + num2;
       printf("Result=%.2f\n", result);
       break:

     case 2
        printf("Enter two numberg: “):
        scanf(u%f %fI. &numl. &num2);
        result = num1 - num2;
        printf("Result = %.2f(n", result)
        break:

      case 3:
         printf("Enter two numbers: ");
         scanf("%f %f', &num1, &num2);
         result = num1 * num2;
         printf(“Result=%.2f\n", result); 
         break;
       case 4.
          printf("Enter two numbers: ")
          scanf(1%f %f"l &num1.&num2)

          if (num2 l= 0)
             printf(“Result = %.2f\n', num1 / num2):
          else
             printf("'Error! Division by zero is not allowed \n”):
           break.

         case 5:
              printf("Exiting Calculator...\n");
              break;

         default:
              printf(“Invalid choice! Please try again. \n");
          }

   } while (choice !=5);
   
     return 0;
}
