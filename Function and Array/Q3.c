//Q-3. WAP to find reverse of string using recursion 

#include<stdio.h>

reverse(){   
	int i,lenth=-1;
	char str[256];
    printf("Enter a string: ");
    scanf("%s",&str);
    
    for(i=0;str[i]!='\0';i++)
    {
    	lenth++; 
	}
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
}
main(){
	reverse();
}
