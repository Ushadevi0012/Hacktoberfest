// READING A FILE 
#include <stdio.h>
int main()
{
    FILE *ptr;
    int  num;
    int  num2;
    ptr = fopen("Sample.txt", "r");    // file read from Sample. txt
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);  // closing a file
    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);
    return 0;
}