#include <stdio.h>
int main()
{
    FILE *ptr1;
    int n;
    ptr1 = fopen("Sample11.txt", "r");
    ptr1 = fopen("Sample11.txt", "w");
    int n = fgetc(ptr1);
    n = 2;
    while (n!=EOF)
    {
        fputc(n, ptr2);
        fputc(n, ptr2);
        c = fgetc(ptr1);
    }

    return 0;
}