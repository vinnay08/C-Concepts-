//Q-14.Write a program in C to combine two strings manually 

#include<stdio.h>
main()
{
	int i,j;
	char a[25],b[25],c[25];
	
	printf("Enter String 1: ");
	gets(a);
	
	printf("Enter String 2: ");  
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	
	for(j=0;b[j]!='\0';j++) 
	{
		c[i]=b[j];
		i++;
	}
	
	printf("\nMerge string is: %s",c);  
}
