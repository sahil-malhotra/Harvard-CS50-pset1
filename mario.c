#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int ht, i, j, k, temp;
    
    do
    {
        printf("Height: ");
        ht = GetInt();
    }while(ht<0 || ht>23);
    
    temp = ht;
    
    for(i=0; i<ht; i++)
    {
        for(k=0; k<temp-1;k++)
        {
            printf(" ");
        }
        temp--;
        for(j=0;j<i+2;j++ )
        {
            printf("#");
        }
        printf("\n");
    
    }
}