// Write a programm to read three integers from a file 
#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Sample6.txt", "r");
    int num1, num2, num3;
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    fclose(ptr);
    printf("The value of num1 is %d\n", num1);
    printf("The value of num2 is %d\n", num2);
    printf("The value of num3 is %d\n", num3);
    return 0;
}