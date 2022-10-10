// Write a C program to print all natural numbers from 1 to n. - using while loop
#include <stdio.h>
int main()
{
    int a, end;
    printf("Print all natural numbers 1 to : ");
    scanf("%d", &end);

    a = 1;
    while (a <= end)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}
