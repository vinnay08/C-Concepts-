//q-8. Write a program to find out the max from given number

#include<stdio.h>
main(){
	int n,max=0;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	while(n>0){
		int digit = n%10;
		if(digit>max){
			max = digit;
		}
		n/=10;
	}
	printf("Max: %d",max);
}
