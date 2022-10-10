// Dynamic memory allocation                 
// Malloc.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    // size of operator in C

    // printf("The size of int on my PC is %d\n", sizeof(int));
    // printf("The size of float on my PC is %d\n", sizeof(float));
    // printf("The size of char on my PC is %d\n", sizeof(char));

    // ptr = malloc(6 * 4); // 4 byte int size depends on architecture

    ptr = (int *)malloc(6 * sizeof(int));    // malloc returns void pointer, so we have to
                                             // typecast it (int *), (char *)...


    for (int i = 0; i <6;i++)
    {
        printf("Enter the  value of %d element : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i <6;i++)
    {
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }
    return 0;
}