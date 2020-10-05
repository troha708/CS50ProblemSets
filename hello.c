
#include <stdio.h>
#include <cs50.h> 

int main(void)
{
    string s = get_string("what is your name? ");
    printf ("Hello, %s\n", s);
}