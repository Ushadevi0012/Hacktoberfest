// READING A FILE 
#include <stdio.h>
int main()
{
    FILE *ptr;
    int  num;
    int  num3;
    ptr = fopen("Sample.txt", "r");    // file read from Sample. txt
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num3);
    fclose(ptr);  // closing a file
    printf("The value of num is %d\n", num);
    printf("The value of num3 is %d\n", num3);
    return 0;
}
