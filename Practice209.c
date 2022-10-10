// Take a name and salary of two employees as input from the user and write them to 
// a text file in the following format
//            name1, n3300
//            name2, 7700
#include <stdio.h>
int main()
{
    FILE *fptr;
    char e1n, e2n;
    int  e1s, e2s;
    fptr = fopen("Sample12.txt", "w");
    printf("Enter the name of employee 1 :- \n");
    scanf("%c", &e1n);
    printf("Enter the salary of employee 1 :-\n ");
    scanf("%f", &e1s);
    printf("Enter the name of employee 2 :- \n");
    scanf("%c", &e2n);
    printf("Enter the salary of employee 2 :- ");
    scanf("%f", &e2s);

    fprintf(fptr, "The Name and salary of Employee 1 is %d %d\n", e1s);
    fprintf(fptr, "The Name and salary of Employee 2 is %d %d\n", e2s);
    fclose(fptr);
    return 0;
}