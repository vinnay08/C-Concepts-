//q-1. Write a C program to accept two integers and check whether they are equal or not 

#include<stdio.h>
main(){
	int a,b;
	
	printf("Enter number 1 : ");
	scanf("%d",&a);
	
	printf("Enter number 2 : ");
	scanf("%d",&b);
	
	if(a==b){
		printf("num1 and num2 Equal");
	}
	else{
		printf("num1 and num2 not equal");
	}
} 
