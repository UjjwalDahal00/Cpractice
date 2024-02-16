#include <stdio.h>
 int main(){
    int matrixa[3][3];
    int matrixb[3][3];
    int result[3][3];

    printf("Enter First matrix value\n");
    for ( int i = 0; i <3; i++)
    {
      for ( int j = 0; j <3; j++)
      {
        scanf("%d",&matrixa[i][j]);
      }
      
    }
    printf("Enter second matrix value\n");
    for ( int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
         scanf("%d",&matrixb[i][j]);
      }
      
    }
    printf("Result of Product\n");
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
         result[i][j]=0;
         for (int k = 0; k < 3; k++)
          {
            result[i][j]+=matrixa[i][k]*matrixb[k][j];
         }
         
      }
      
    }
      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
         printf("%4d",result[i][j]);
        }
        printf("\n");
      }

    return 0;
 }