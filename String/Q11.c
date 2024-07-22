//Q-11. Write a program in C to read a sentence and replace lowercase characters withuppercase and vice versa. 

#include<stdio.h>
main(){
	char sentence[100];

    printf("Enter a sentence: ");  
    gets(sentence);
    
    sentence[strlen(sentence)] = '\0';

    int i;
    for (i = 0; sentence[i]!= '\0'; i++) {
        if (islower(sentence[i]))
		{
            sentence[i] = toupper(sentence[i]); 
        }
		else if (isupper(sentence[i]))
		{
            sentence[i] = tolower(sentence[i]);
        }
    }

    printf("Modified sentence: %s\n", sentence);
}
