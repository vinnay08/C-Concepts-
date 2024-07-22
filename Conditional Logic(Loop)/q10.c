//q-10. Write a program you have to make a summation of first and last Digit.

#include<stdio.h>
main(){
	int n,last,first;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	last = n%10;
	
	while(n>0){
		first = n;
		n/=10;
	}
	
	int sum = last + first;
	
	printf("Sum of first and last digit : %d",sum);
}
