#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int tall = 0;
    do
    {
        // Enter the pyramid's tall 
        tall  = get_int("what's the pyramid's tall you want ?\n");
        
    }
    while (tall < 1 | tall > 8);
    
    
    // draw the pyramid
    
    for (int i = 1; i <= tall ; i += 1)
    {
        // draw the space
        for (int j = tall ; j > i ; j -= 1)
        {
            printf(" ");
        }
        
        // draw the hash
        for (int k = 1 ; k <= i ; k += 1)
        {
            printf("#");
        }
        printf("\n");
    }
}