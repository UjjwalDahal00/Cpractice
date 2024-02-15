#include <stdio.h>
 int main(){
    int i;
    printf("break statement :\n");
    for ( i = 0; i < 10; i++)
    {
       if (i==5)
       {
        break;
       }
       printf("Print=%d\n",i);
    }
        printf("\nContinue statement :\n");
        for ( i = 1; i <=10; i++)
        {
          if(i%2==0)
          {
            continue;
          }
          printf("%d ",i);
        }
        printf("\n Goto statement  :\n");
        i=1;
        loop:
        if ( i<=10)
        {
            printf("%d ",i);
            i++;
            goto loop;
        }
        printf("\n");
    return 0;
 }