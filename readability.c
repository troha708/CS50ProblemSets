#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    float l = 0;
    float e = 0;
    float w = 0 + 1;
    int n = strlen(s);
    if (e <= 1)
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
        if (s[i] == '.')
        {
            e++;
        }
        
        
        if (s[i] == '?')
        {
            e++;
        }
        
        if (s[i] == '!')
        {
            e++;
        }
        
        if (s[i] == ' ')
        {
            w++;
        }
    }
    if (l < 1)
    {
        e = 0;
    }
    
    
    
    printf("\n");
    printf("Number of letters = %f\n", l);
    printf("Number of sentences = %f\n", e);
     printf("Number of words = %f\n", w);
    
    float a = (l/w *100);
    float b = (e/w * 100);
    
    printf("Number of letters per 100 words = %f\n", a);
    printf("Number of sentences per 100 words = %f\n", b);
    
    int g = (0.0588 * a - 0.296 * b - 15.8);
    
    
    printf ("Grade = %i\n", g);

}