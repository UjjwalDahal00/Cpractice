#include <stdio.h>
 int main(){
    int n, sum=0, i=2;

    printf("Enter a positive integer :");
    scanf("%d", &n);

    while( i<=n ) {
        sum +=i;
        i +=2;
    }

    printf("sum of even number between 1 and %d is : %d\n", n,sum);


    return 0;
 }