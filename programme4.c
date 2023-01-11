// 4. C program to convert days in to years, weeks and days.
#include <stdio.h>
int main()
{
    int days, years, weeks;
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    printf("Years: %d\nWeeks: %d", years, weeks);
    return 0;
}
