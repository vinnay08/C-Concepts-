//Q-2. Write a program in C to separate individual characters from a string. 


#include<stdio.h>
main(){

int i;
	char a[256];
	
	printf("Enter String: ");  //user defined value stored
	gets(a);
	
	printf("\nIndividual characters of the string are:\n");

    for (i = 0; a[i] != '\0'; i++)
	{
        printf("Character %d: %c\n", i + 1, a[i]);   //result print
    }
}
