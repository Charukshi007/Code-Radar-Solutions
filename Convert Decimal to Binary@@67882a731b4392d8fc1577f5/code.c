// Your code here...
#include<stdio.h>
void printBinary(unsigned int num){
    int i;

    for(i = 31 ; i >= 0 ; i++){
        int bit = (num >> i)&1;
        printf("%d",bit);

        if(i % 4 == 0)
        printf("");
    }
    printf("\n");
}
int main()
{
    unsigned int num ;

    scanf("%u",&num);

    printBinary(num);

    return 0;
}