//q-13.WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>
main(){
	int a,b,c;
	
	printf("Enter number 1 :");
	scanf("%d",&a);
	
	printf("Enter number 2 :");
	scanf("%d",&b);
	
	printf("Enter number 3 :");
	scanf("%d",&c);
	
	(a<b)?(a<c)?printf("%d is minimum",a):printf("%d is minimum",c):(b<c)?printf("%d is minimum",b):printf("%d is minimum",c);
}
