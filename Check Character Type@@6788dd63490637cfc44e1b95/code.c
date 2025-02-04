#include <stdio.h>
int main() 
{
    char x;
    scanf("%c",&x);
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
    printf("Vowel");
    else if(x=='!' || x=='@' || x=='#' || x=='$' x=='%' || x=='^' || x=='&' || x=='*' || x=='(' || x==')') 
    printf("Special Character");
    else if(a>='0' && a<='9')
    printf("Digit");
    else
    printf("Consonant");
    return 0;
}