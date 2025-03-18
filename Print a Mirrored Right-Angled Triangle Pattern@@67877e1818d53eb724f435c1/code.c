// c program to print left half pyramid pattern of star
#include <stdio.h>

int main()
{
    int rows ;
    scanf("%d",&rows);

    // first loop is for printing the rows
    for (int i = 0; i < rows; i++) {

        // loop for printing leading whitespaces
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }

        // loop for printing * character
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
