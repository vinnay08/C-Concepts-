//Q-7. Write a program in C to copy one string to another string.

#include<stdio.h>
main(){
	char a[25],b[26];
	
	printf("\nEnter String: "); 
	scanf("%s",&a);
	
	strcpy(b,a);
	printf("\nstring is: %s",b);    
}
