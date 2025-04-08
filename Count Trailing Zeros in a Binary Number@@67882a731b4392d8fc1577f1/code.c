#include<stdio.h>
int countTrailingZeroes(unsigned int num)
{
    int count = 0;
    if(num == 0)
    return 32;

    while ((num & 1)==0){
        count++;
        num >> 1;
    }

    return count;
}
int main()
{
    unsigned int num;
    scanf("%u",&num);

    int TrailingZeroes = countTrailingZeroes(num);
    printf("%d",TrailingZeroes);

    return 0;
}