#include<stdio.h>
// checking thew condition of dates

int main(){
    int d,m,y;
    printf("enter the date\n");
    scanf("%d",&d);
    printf("enter the month\n");
    scanf("%d",&m);
    printf("enter the year\n");
    scanf("%d",&y);
    if (d>1 || d>31 || y<=999 || y>9999 || m<1 || m>12 )
    {
        printf("invalid info\n");
     }else {
        printf("the date is %d%d%d",d,m,y);
    }
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 8:
    case 10:
    case 12:
    if (!(d>31))
    {
        printf("invalid info!");
    }else {
        printf("valid info");
    }
    }
  
    return 0;
}