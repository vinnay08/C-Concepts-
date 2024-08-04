//Q-11. Write a program in C to read a sentence and replace lowercase characters withuppercase and vice versa. 

#include<stdio.h>
main(){
	char sentence[100];// Array to hold the input sentence

    // Prompt the user to enter a sentence
    printf("Enter a sentence: ");  
    gets(sentence);
    
    sentence[strlen(sentence)] = '\0';

    int i;
    // Loop through each character in the sentence
    for (i = 0; sentence[i]!= '\0'; i++) {
        if (islower(sentence[i]))
		{
             // Convert lowercase to uppercase
            sentence[i] = toupper(sentence[i]); 
        }
		else if (isupper(sentence[i]))
		{
            // Convert uppercase to lowercase
            sentence[i] = tolower(sentence[i]);
        }
    }

     // Print the modified sentence
    printf("Modified sentence: %s\n", sentence);
}
