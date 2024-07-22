//q-23. WAP to calculate swap 2 numbers with using of multiplication and division

#include<stdio.h>
main(){
	int a,b;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	a = a*b ;
	b = a/b;
	a = a/b;
	
	printf("\nAfter Swapping A : %d",a);
	printf("\nAfter Swapping B : %d",b);
}
