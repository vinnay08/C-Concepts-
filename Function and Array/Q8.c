//8. WAP to reverse a string and check that the string is palindrome 
//or notWrite a program of structure employee that provides the 
//following 
//a. information -print and display empno, empname, 
//addressandage 
//b. Write a program of structure for five employee 
//that provides the following information -print and 
//displayempno, empname, address andage 

#include<stdio.h>

isPalindrome(char str[])  
{
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end)
	{
        if (str[start]!= str[end])
		{
            return 0;
        }
        start++;
        end--;
    }
}

main()
{   int i;
	char str[256];
    printf("Enter a string: ");
    scanf("%s",&str);
    
    int lenth = strlen(str)-1; 
	
	int start=0,temp;
	for(i=0;i<256;i++)
	{
	if(start<=lenth)
	{
		temp=str[start];
		str[start]=str[lenth];  
		str[lenth]=temp;
		start++;
		lenth--;
	}
    }
	
	printf("Reversed String: %s",str);  
	
    if (isPalindrome(str)) printf("\n\n%s is a palindrome.\n", str);
    else printf("\n\n%s is not a palindrome.\n", str);
}
