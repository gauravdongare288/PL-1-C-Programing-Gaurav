#include <stdio.h>
int main()
{
  int a[3][3], 6[3][3], с[3][3];
  int i, j;
 
  printf("Enter elements of Matrix A:In");
  i=0;
  do
  {
    j= 0;
    do
    {
     scanf("%d", &a[i][j]);
     j++;
    } while(j< 3);
      i++;
    } while(i< 3);

    printf("Enter elements of Matrix B:\n");
    i=0;
    do
    {
     scanf("%d", &b[i][j]);
     j++;
    } while(j < 3);
      i++;
    }while(i< 3);

    i=0;
    do
    {
     j = 0;
     do
     {
      c[i][i]=a[i][j]+b[i][j];
      j++;
     }while(j < 3);
      i++;
     } while(i< 3);

      printf("\nResultant Matrix:\n");
      i=0;
      do
      {
       printf("%4d", c[i][j]);
       j++;
      } while(j< 3);
       printf("\n");
       i++;
      } while(i< 3);

      return 0;
}
