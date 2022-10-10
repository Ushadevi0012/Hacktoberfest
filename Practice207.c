// Write a programm to generate multiplication tabele og a given number in text format. make 
// sure that given number in text format . Make sure that the file is readable and well formatted 
#include <stdio.h>
int main()
{
    FILE *ptr;
    int n;
    ptr = fopen("Sample7.txt", "w");
    printf("Enter the integer you need the table of:- ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d X %d = %d\n",n, i + 1, n*(i+1));
    }
    fclose(ptr);
    printf("Successfully generated table of %d to Sample7.txt\n", n);
    return 0;
}