#include <stdio.h>
 int main(){
 int matrixf[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
 int matrixs[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 int result[3][3];
 for (int i = 0; i < 3; i++)
 {
   for (int j = 0; j < 3; j++)
   {
    result[i][j]=matrixf[i][j]+matrixs[i][j];
    printf("%d ",result[i][j]);
   }
   printf("\n");
 }
    return 0;
 }