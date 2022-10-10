// Write a C program to check whether a number is positive, negative or zero using switch case.
#include <stdio.h>
int main()
{
    int num1;
    printf("Enter a number to check it is Positive, Negative or Zero\n");
    scanf("%d", &num1);

    switch (num1 > 0)
    {
    case 1:
        printf("%d is Positive", num1);
        break;

    case 0:
        switch (num1 < 0)
        {
        case 1:
            printf("%d is Negative", num1);
            break;

        case 0:
            printf("%d is Zero", num1);
            break;
        }
        break;
    }
    return 0;
}
