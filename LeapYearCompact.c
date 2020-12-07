/* লিপ ইয়ার বের করার কোড (Compact) */

#include<stdio.h>
void main()
{
    int y;

    printf("Enter Year: ");
    scanf("%d",&y);

    if((y%400==0) || ((y%100!=0) && (y%4==0)))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}

