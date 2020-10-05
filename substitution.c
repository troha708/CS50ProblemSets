#include <stdio.h>
#include <cs50.h> 
#include <string.h> 

int main(int argc, string argv[]) 
{
    if (argc != 2) 
    {
        printf("Usage: ./substitution key\n"); 
        return 1; 
    } 
    int n = strlen(argv[1]);
    if (n != 26)  
    {
        printf ("Key must contain exactly 26 characters.\n./s");
        return 1; 
    }
    
 
    string p = get_string("plaintext: ");
    printf ("\nOutput: ");
    for (int b = 0, a = strlen(p); b < a; b++)
    {
        if (p[b] >= ' ' && p[b] <= '@')
        {
        printf ("%c",p[b]);
        }
        
        if (p[b] >= 'A' && p[b] <= 'Z')
        {
        printf ("%c", argv[1][p[b] - 65]);
        }
        
        if (p[b] >= 'a' && p[b] <= 'z')
        {
        printf ("%c", argv[1][p[b] - 97] + 32);
        }
    }
    printf ("\n");
}
    
    
        

        
 
    