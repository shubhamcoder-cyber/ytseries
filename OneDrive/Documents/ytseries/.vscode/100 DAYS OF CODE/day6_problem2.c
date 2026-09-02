#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        if (num == 0)
        {
            printf("%d is Zero", num);
        }
        else
        {
            printf("%d is Positive", num);
        }
    }
    else
    {
        printf("%d is Negative", num);
    }

    return 0;
}