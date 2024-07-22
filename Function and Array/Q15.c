//Q-15. Store 5 numbers in array and sort it in ascending order

#include<stdio.h>
main(){
	int a[5],i,j,temp;
	for(i=0;i<5;i++)
	{
	printf("Enter number : ");   
	scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)    
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
	printf("\nnumber in acending order is %d",a[i]);	
	}
}
