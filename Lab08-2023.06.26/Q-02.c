#include <stdio.h>
int main()
{
    int mark=0, total=0, avg, counter;
    for (counter = 1; counter <= 10; counter++)
    {

        printf("Enter the %d Paper Marks :", counter);
        scanf("%d", &mark);
        mark  += 0;
        total += mark;
        avg = total/10;
    }
    printf("Average of Marks is %d \n", avg);
    if(avg>=50)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }

}
