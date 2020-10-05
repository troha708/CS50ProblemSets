#include <stdio.h>
#include <cs50.h>

// A program that asks user to enter a height between 1-8 then prints a left aligned pyramid of #'s  1-8 as required by assignment.

int main(void)
{

    // prompting user to input a height between 1-8 and to reprompt if invalid height given.
    int n;
    do
    {
        n = get_int("ENTER AN INTEGER FROM 1-8 - Height: ");
    }
    while (n < 1 || n > 8);



// Loop to print spaces and #'s until height n inputed by user is reached. 
        for (int s = n; s > 0; s--)
        {
              // Printing spaces which will shunt #'s to right in order to make left aligned triangle  
              for (int d = 0; d < s - 1; d++)
            {
                 printf(" ");

            }

            // printing #'s to complete triangle. 
             for (int i = s; i < n + 1; i++)
            {
                printf("#");
            }


            printf("\n");
        }


}

