// Fputc
#include <stdio.h>
int main()
{
    // Writing a txt.file using putc 
    FILE *ptr;
    ptr = fopen("Sample4.txt", "w");
    putc('c',ptr);
    putc('c',ptr);
    putc('c',ptr);
    putc('c',ptr);
    fclose(ptr);
    return 0;
}