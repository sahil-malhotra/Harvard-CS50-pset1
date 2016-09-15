#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    
    int min, bot;
 
    printf("minutes: ");
    min = GetInt();
   
   
    
    
    bot = min * 12;
    printf("bottles: %d\n", bot);
}   