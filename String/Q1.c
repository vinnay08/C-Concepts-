//Q-1. Write a program in C to find the length of a string without using libraryfunctions. 

#include<stdio.h>
main(){
	char str[100]; 

   
    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);

    printf("Length of '%s' is: %d\n", str, length);
}
