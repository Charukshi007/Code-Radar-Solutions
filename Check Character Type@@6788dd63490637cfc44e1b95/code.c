#include <stdio.h>
int main() 
{
    char x;
    scanf("%c",&x);
    if(x=='a' || x=='A'|| x=='e' || x=='E' || x=='i' || x=='I' || x=='o' || x=='O' || x=='u' || x=='U')
    printf("Vowel");
    else if(x=='!' || x=='@' || x=='#' || x=='$' x=='%' || x=='^' || x=='&' || x=='*' || x=='(' || x==')') 
    printf("Special Character");
    else if(x>='0' && x<='9')
    printf("Digit");
    else
    printf("Consonant");
    return 0;
}