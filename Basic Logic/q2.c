//q-2. Write a program to make Simple calculator (to make addition, 
//subtraction, multiplication, division and modulo)

#include<stdio.h>
main(){
	int a,b;
	printf("Enter num 1:");
	scanf("%d",&a);
	printf("\nEnter num 2:");
	scanf("%d",&b);
	printf("1. Sum : %d",a+b);
	printf("\n2. Sub : %d",a-b);
	printf("\n3. Mul : %d",a*b);
	printf("\n4. div : %d",a/b);
	printf("\n5. Modulo :%d",a%b);	
}
