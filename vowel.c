#include <stdio.h>
int main (){
    char al;
    printf("enter the character\n");
    scanf("%c",&al);
   switch (al)
   {
   case 'a' :
    printf("its a vowel");
    break;
    case 'e' :
    printf("its a vowel");
    break;
    case 'i' :
    printf("its a vowel");
    break;
    case 'o' :
    printf("its a vowel");
    break;
    case 'u' :
    printf("its a vowel");
    break;

   default:
   printf("its a cosonent");
    break;
   }

    return 0;
}