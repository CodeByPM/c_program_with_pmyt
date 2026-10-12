#include <stdio.h>

int main()
{
    // pattern print
    for(int row = 1; row <= 5; row++)
    {
        for(int coln = 1; coln <= 5; coln++)
        {
            if(row == 1 || row == 5)
            {
                printf("*");
            }
            else if((row == 2 && coln == 3) ||
                    (row == 3 && coln == 2) ||
                    (row == 3 && coln == 4) ||
                    (row == 4 && coln == 3))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        
    }

    return 0;
}