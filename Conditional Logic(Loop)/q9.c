//q-9. Write a program make a summation of given number

#include<stdio.h>
main(){
	int n,sum=0,i; 
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	while(n>0){
		i=n%10;
		sum+=i;
		n/=10;
	}
	
	printf("Sum of digits : %d",sum);
}
