//Q-4. Write a program in C to count the total number of words in a string.

#include <stdio.h>

int main()
{
    char str[256];
    
    printf("Enter string: ");  
    gets(str);
    
    int i, word_count = 0;
    
    str[strlen(str)]='0';

    for (i = 0; str[i]!= '\0'; i++) 
	{
        if (str[i] ==' ' && str[i + 1]!= ' ' && str[i + 1]!= '\0')   
		{
            word_count++;
        }
    }

   if (str[i - 1]!= ' ')
    {
        word_count++;
    }

    printf("Total number of words: %d\n", word_count);  

}
