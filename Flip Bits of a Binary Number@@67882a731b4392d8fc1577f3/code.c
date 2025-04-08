#include<stdio.h>
int main()
{
    unsigned int num,result;

    scanf("%u",&num);

    result = ~num;

    printf("%u\n",num);
    printf("%u\n",result);
    return 0;
}