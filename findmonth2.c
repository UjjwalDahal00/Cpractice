#include <stdio.h>
 int main() {
    int month;

    printf("Enter number between (1-12) representing months :\n");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        printf("This Month have 31 Days.\n");
        break;
    case 4:
    case 6:
    case 9:
        printf("This month have 30 Days.\n");
        break;
    case 2:
        printf("This month have 28 Days.\n");
        break;
    default:
        printf("Enter valid number between 1-12.\n");
        break;
    }


    return 0;
 }