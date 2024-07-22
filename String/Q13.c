//Q-13. Write a program in C to remove characters from a string except alphabets

#include<stdio.h>
removeNonAlphabets(char str[])
{
    int i,j,lenth;
    lenth=strlen(str);     
    
    for (i = 0; i<lenth; i++)
	{
		
			for(j=i;j<lenth-1;j++)
			{
				if(isalpha(str[i]))
				{
					str[j]=str[j+1];
				}
				
			}
			lenth--;
			i--;
    }
    
    printf("%s",str);
}

main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    str[strlen(str)] = '\0'; 
   
    
    printf("Original string: %s\n", str); 

    removeNonAlphabets(str);
}
