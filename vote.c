#include<stdio.h>
int main (){
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if (age > 17)
    {
        printf("you are eligible to vote");
    }else{
        printf("you are a kiddo");
    }
    return 0;
}