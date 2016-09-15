#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float chg;
    int counter=0;
    do
    {
    printf("Change: ");
    chg = GetFloat();
    }while(chg<0.00);
    
    chg=roundf(chg*100.00);
    
    while(chg!=0)
    {
        if(chg>=25.00)
        {
            counter=counter + (int)chg/25;
            chg= (int)chg % 25;
        }
        else if(chg>=10.00)
        {
            counter=counter + (int)chg/10;
            chg= (int)chg % 10;
            
        }
         else if(chg>=5.00)
        {
            counter=counter + (int)chg/5;
            chg= (int)chg % 5;
            
        }
         else if(chg>=1.00)
        {
            counter=counter + (int)chg/1;
            chg= (int)chg % 1;
            
        }
        
        
    }
    printf("%d\n", counter);
    
}
