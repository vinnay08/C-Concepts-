//q-11. WAP to find number is even or odd using ternary operator 

#include<stdio.h>
main(){
	int a; 
	
	printf("Enter Number :");
	scanf("%d",&a);
	
	(a%2==0)?printf("%d number is even",a):printf("%d number is odd",a);
}
