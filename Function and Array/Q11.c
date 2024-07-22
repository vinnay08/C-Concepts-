//Q-11. WAP to accept 5 numbers from user and display in reverse order using forloop and array 

#include<stdio.h>
main(){
	int i,a[256];
	
	for(i=0;i<5;i++) 
	{
		printf("Enter Your Number: ");  
		scanf("%d",&a[i]);
		
		int reversed=0,digit;
		for(;a[i]!=0;a[i]/=10)  
		{
	     	digit=a[i]%10;
		    reversed=reversed*10+digit;
		}
		printf("Reversed Numnber: %d\n\n",reversed);  
		
	}
}
