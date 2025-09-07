#include<stdio.h>


// operators of c

int main(){
    float a,b;
    a=34;
    b=45;
    // arithmatic operators
    printf("a - b = %f\n",a-b);
    printf("a + b = %f\n",a+b);
    printf("a / b = %f\n",a/b);
    printf("a * b = %f\n",a*b);
    printf("\n");

    int c,d;
    d=1;
    c=0;
    // logical operators
    printf("c && d  = %d\n",c&&d);
    printf("c || d  = %d\n",c||d);
    printf("!d = %d\n",!d);
    printf("\n");

    int e,f;
    e=5;
    f=6;
    // bitwise operators
    printf("f & e = %d\n",f&e);
    printf("f ^ e = %d\n",f^e);
    printf("f | e = %d\n",f|e);
    printf("\n");

    int g,h;
    g=5;
    h=8;
    // rational operators
    printf("g == h = %d\n",g==h);
    printf("g < h = %d\n",g<h);
    printf("g > h = %d\n",g>h);
    printf("g >= h = %d\n",g>=h);
    printf("g <= h = %d\n",g<=h);
    printf("g != h = %d\n",g!=h);
    printf("\n");

    int i;
    i=45;
    // increment and decrement operators
    printf("i++ = %d\n",i++);
    printf("i-- = %d\n",i--);
    printf("--i = %d\n",--i);
    printf("++i = %d\n",++i);
    printf("\n");


    int r;
    // ternary operators
    scanf("%d",&r);
    if (r>=2)
    {
        printf("r is greater than or equal to 2\n");
    }
    else if(r<2)
    {
        printf("r is smaller than 2");
    }
    

    return 0;
}