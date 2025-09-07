#include <stdio.h>

// fibonacci sequence the golden ratio

int main(){
    int n;
    printf("enter the nth term of fibonacci \n");
    if (n<2)
    {
        return 1;
    }
    
    scanf("%d",&n);
    printf("%d",(n-1)+(n-2));


    return 0;
}