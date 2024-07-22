//Q-12. Write a program in C to find the number of times a given word 'is' appears inthe given string. 

#include<stdio.h>
main(){
	char c[100];
    int count = 0;
    
    printf("Enter a sentence: ");
    fgets(c, sizeof(c), stdin);
    
    if (c[strlen(c) - 1] == '\n') {
        c[strlen(c) - 1] = '\0';
    }
    
    char *ptr = c;
    while ((ptr = strstr(ptr, "is")) != NULL) {
        count++;
        ptr++;
    }
    
    printf("Number of 'is' occurrences: %d\n", count);
	
	
}
