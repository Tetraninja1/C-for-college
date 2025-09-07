#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d%d\n",a,b);
    // arithmatic operators
    c=a+b/b*a-b;
    printf("%d\n",c);
    // rational operators
    printf("%d%d\n",c==b);
    printf("%d%d\n",c<b);
    printf("%d%d\n",c>b);
    printf("%d%d\n",c<=b);
    printf("%d%d\n",c>=b);
    // increment decrement operators
    printf("%d\n",++b);
    printf("%d\n",--b);
    printf("%d\n",b++);
    printf("%d\n",b--);
    // bitwise operators
   
    printf("%d%d\n",c&b);
    printf("%d%d\n",c|b);
    printf("%d%d\n",c^b);
    printf("%d%d\n",c>>b);
    printf("%d%d\n",c<<b);
    // logical operators
    printf("%d%d\n",c&&b);
    printf("%d%d\n",c||b);
    printf("%d%d\n",c%b);
    // ternary operators
    if (c>=3)
    {
        printf("the value of c is greater than 3");
    }else if (c<3)
    {
        printf("the value of c is less than 3");
    }
    
    



    return 0;
}