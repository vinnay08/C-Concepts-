//q-32. Accept 2 numbers and find out its sum check it size

#include<stdio.h>
main(){
	double a,b,c;
	
	printf("Enter First number : ");
	scanf("%d",&a);
	
	printf("Enter First number : ");
	scanf("%d",&b);
	
	c= a+b;
	
	printf("\nThe sum of %d and %d is: %d\n", a, b, c);
	
	printf("Size of sum: %lu bytes\n", sizeof(c));
	
}
