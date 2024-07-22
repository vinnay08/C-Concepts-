//Q- 16.Accept 5 numbers from user and perform sum of array 

#include<stdio.h>
main(){
	int a[5],i,sum=0;
	for(i=0;i<5;i++)
	{
	printf("Enter number : ");  
	scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
	sum=sum+a[i];  
	}
	
	printf("\nSum of number is: %d",sum);	
}
