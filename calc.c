#include <stdio.h>
int main()
{
    int num1, num2, result;
    char op;
loop:
    printf("Peform calculation here :\n");
    scanf("%d %c %d", &num1, &op, &num2);
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("Error Math\n");
            break;
        }
        break;

    default:
        printf("Error operator");
        break;
    }

    printf("The Result of calculation is : %d\n", result);
    result=0;
    goto loop;

    return 0;
}