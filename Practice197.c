// Solve problem 9 for time using tpedef keyword
#include <stdio.h>
typedef struct date
{
    int date1;
    int month;
    int year;
}date;

void display(date1 d)
{
    printf("The date is : %d/%d/%d\n", d.date1, d.month, d.year);
}

int dateCmp(date1 d1, date1 d2)
{
    //Make desigion on the basics of Year comparision
    if (d1.year>d2.year)
    {
        return 1;
    }
    if (d1.year<d2.year)
    {
        return -1;
    }


    //Make desigion on the basics of Month comparision
    if (d1.month>d2.month)
    {
        return 1;
    }
    if (d1.month<d2.month)
    {
        return -1;
    }


    //Make desigion on the basics of Date comparision
    if (d1.date>d2.date)
    {
        return 1;
    }
    if (d1.date1<d2.date1)
    {
        return -1;
    }
    return 0;

}
int main()
{
    date1 d1 ={ 2, 11, 26 };
    date1 d2 ={ 2, 10, 28 };

    display(d1);
    display(d2);
    int a = dateCmp(d1, d2);
    printf("Date Comparision function returns : %d", a);
    return 0;
}
