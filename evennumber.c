#include <stdio.h>

int main() {
    int min, max, i;
    printf("Enter the minimum and maximum values : ");
    scanf("%d %d", &min, &max);

    if (min>=max){

        printf("Invalid Input.\n");
        
    } else {
        printf("Even number between %d and %d :\n", min, max);
        for (i = min; i<=max; i++){
            if (i%2==0)
            {
                 printf("%d\n",i);
            }
            
          
        }

    }

    return 0;
}
  