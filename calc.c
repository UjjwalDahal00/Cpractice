#include <stdio.h>
int main()
{
    int num1, num2, result;
    char op;
loop:
    printf("Peform calculation here : ");
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

            result = 0;
        }
        break;

    default:
        printf("Error operator\n");
        break;
    }

    printf("\nThe Result of calculation is : %d\n", result);

    goto loop;

    return 0;
}