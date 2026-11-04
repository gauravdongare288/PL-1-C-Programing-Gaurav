#include <stdio.h)
int main()
{
  int a[3][3], b[3][3], [3][3];
  int i, j;
   printf("Enter elements of Matrix A:In");i=0;
   while(i< 3)
   {
     j=0;
     while(j < 3)
     {
      scanf("%d", &a[i][j]);
      j++;
     }
      i++;
    }
     printf("Enter elements of Matrix B:\n");
     i= 0;
     while(i< 3)
    {
     j=0;
     while(j < 3)
     {
      scanf("%d", &b[i][j]);
      j++;
     }
      i++;
   }
    i=0;
    while(i< 3)
    {
      j=0;
      while(j< 3)
      {
       c[iLi]= a[i]Li]+ b[i][j];
       j++;
      }
      i++;
    }

     printf("\nResultant Matrix:\n");
     i=0;
     while(i< 3)
     {
      j = 0;
      while(j < 3)
      {
       printf("%4d", c[i][j]);
       j++;
      }
      printf("\n");
      i++;
    }

    return 0;
}
