// Quick quiz // file does not exist
#include <stdio.h>
int main()
{
    FILE *ptr;
    int  num;
    int  num2;
    ptr = fopen("Samdle.txt", "r");    // file read from Sample. txt
    if (ptr == NULL)
    {
        printf("The file doesn't exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);  // closing a file
        printf("The value of num is %d\n", num);
        printf("The value of num2 is %d\n", num2);
    }
    return 0;
}