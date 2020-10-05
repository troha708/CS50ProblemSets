#include <stdio.h> 
#include <cs50.h> 
#include <string.h> 

int main(void)
{
    string s = get_string("Input: "); 
    int l = 0;
    int w = 1;
    int n = strlen(s);
    if (w <= 1)
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            l++;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            l++;
        }
        if (s[i] == ' ')
        {
            w++;
        }
    }
    if (l < 1)
    {
        w = 0;
    }
    printf("\n");
    printf("Number of letters = %i\n", l);
    printf("Number of words = %i\n", w);
    
}