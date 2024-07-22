//Q-8. Write a program in C to count the total number of vowels or consonants in astring

#include<stdio.h>
main(){
	char str[26];
    int i, vowel = 0, consonant = 0;

    printf("Enter String: "); 
    gets(str);

    for (i = 0; str[i]!= '\0'; i++)
	{
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
            vowel++;
        } 
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
            consonant++;
        }
    }

    printf("Total number of vowels: %d\n", vowel);
    printf("Total number of consonants: %d\n", consonant);  
}
