#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    //  ask for number of cedit 
    long Credit_num = get_long("Enter your credit numbers ,please : ");
    
    int i = 0;
    long num1 = Credit_num ;
    // length of number 
    while (num1 > 0)
    {
        num1 = num1 / 10;
        i++;
    }
    
    // check length of number 
    if (i != 13 && i != 15 && i != 16)
    {
        printf("INVALID\n");
    }
    else
    {
        long num2 = Credit_num ;
        int sum1 = 0, sum2 = 0;
        int mod1 = 0, mod2 = 0 ;
        int mod3 = 0, mod4 = 0; 
        int total = 0;
        do 
        {
            //  Remove the last digit and add it to sum1
            mod1 = num2 % 10;
            sum1 += mod1;
            num2 = num2 / 10 ;
            
            // Remove the second last digit and add digits to sum2
            mod2 = num2 % 10;
            mod2 = mod2 * 2;
            mod3 = mod2 % 10;
            mod4 = mod2 / 10;
            sum2 += mod3 + mod4 ; 
            num2 = num2 / 10 ;
            
        }
        while (num2 > 0);
        
        total = sum1 + sum2 ;
       
        // Get starting digits
        long start = Credit_num;
        do
        {
            start = start / 10;
        }
        while (start > 100);
          
        if (total % 10 != 0)
        {
            printf("INVALID\n");
        }
        // Next check starting digits for card 
        // Master Card
        else if ((start / 10 == 5) && (0 < start % 10 && start % 10 < 6))
        {
            printf("MASTERCARD\n");
        }
        //Next check for Amex (34 or 37)
        else if ((start / 10 == 3) && (start % 10 == 4 || start % 10 == 7))
        {
            printf("AMEX\n");
        }
        // And finally check if it is Visa (first digit must be 4)
        else if (start / 10 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
        
    }
    
}