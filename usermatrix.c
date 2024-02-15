#include <stdio.h>
 int main(){
 int matrixf[3][3];
 int matrixs[3][3];
 int result[3][3];
 printf("Enter The value of first matrix :\n ");
 for (int i = 0; i < 3; i++)
 {
   for (int j = 0; j < 3; j++)
   {
   scanf("%d",&matrixf[i][j]);
   }
   
 }
 printf("Enter The value of second matrix :\n ");
 for (int i = 0; i < 3; i++)
 {
   for (int j = 0; j < 3; j++)
   {
   scanf("%d",&matrixs[i][j]);
   }
   
 }
 printf("Addition of two matrix is :\n");
 for (int i = 0; i < 3; i++)
 {
   for (int j = 0; j < 3; j++)
   {
   result[i][j]=matrixf[i][j]+matrixs[i][j];
   printf("%3d ",result[i][j]);
   }
   printf("\n");
 }
    return 0;
 }