#include <stdio.h>
int main()
{
    int min,h,minute;
    printf("\n Enter the minutes:");
    scanf("\n %d",&min);
    h=min/60;
    minute=min-h*60;
    printf("\n Hours=%d and Minutes=%d \n",h,minute);
}


