#include <stdio.h>
int main(){
    int a, b;
    int c = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    while(a>0){
        b = a % 10;
        a = a - b;
        a = a / 10;

        c = c*10 + b;
    }
    printf("%d", c);
    // if(a == c){
    //     printf("Given number is a palindrome.");
    // }
    // else{
    //     printf("Given number is not a palindrome.");
    // }

    return 0;
}