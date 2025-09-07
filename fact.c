#include<stdio.h>

int fact(int n)
{if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main(){
int n;
    printf("enter the number \n");
    scanf("%d",&n);
    if (n<0){
        printf("number can't be negative");
    }else{
        printf("%d",fact(n));
    }
    return 0;
}