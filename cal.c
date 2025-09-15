#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        printf("%d",d=a+b);
        break;
    case 2:
        printf("%d",d=a-b);
        break;
    case 3:
        printf("%d",d=a*b);
        break;
    case 4:
        printf("%d",d=a/b);
        break;
    default:
        printf("invalid");
        break;
    }
    return 0;
}