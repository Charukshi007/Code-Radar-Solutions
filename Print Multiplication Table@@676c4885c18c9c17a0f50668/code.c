#include<stdio.h>
int main()
{
    int n , mul;
    scanf("%d",&n);
    for(int i = 1 ; i <= 10; i++)
    mul = n * i ;
    printf("%d x %d = %d",n,i,mul);
    return 0;
}