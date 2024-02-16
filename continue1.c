#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a Range of two number ( - ) :\n");
    scanf("%d %d", &a, &b);
    printf("Odd Number of Given Range Are: \n");
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }

        printf("%d ", i);
    }
    printf("\nEven Number of Given Range Are: \n");
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}