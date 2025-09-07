#include<stdio.h>

// a simple calculator

int main(){
    int a,b;
    char op;
    printf("enter the value of a \n");    
    scanf("%d",&a);
    printf("select the operator(+,-,*,/)\n ");
    scanf(" %c", &op);
    printf("enter the value of b \n");    
    scanf("%d",&b);
    // selection of output

    switch (op)
    {
    case '+':
        printf("result %d",a+b);
        break;
    case '-':
        printf("result %d",a-b);
        break;
    case '*':
        printf("result %d",a*b);
        break;
    case '/':
        if (b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Cannot divide by zero\n");
            
        break;
    default:
        printf("invalid operator");
        break;
    }

    return 0;
}