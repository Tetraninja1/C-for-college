#include<stdio.h>
// checking thew condition of dates

int main(){
    int d,m,y,maxdays;
    printf("enter the date in the format of dd/mm/yyyy\n");
    scanf("%d%d%d",&d,&m,&y);
    if (d>1 && d<31 || y>999 && y<=9999 || m>1 && m<12 )
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
        maxdays=31;
    break;
    case 4:
    case 6:
    case 9:
    case 11:
        maxdays=30;
        break;
    if (!(d>31))
    {
        printf("invalid info!");
    }else {
        printf("valid info");
    }
    }
  
    return 0;
}