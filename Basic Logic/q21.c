//q-21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
//and without using 3rd variable

#include<stdio.h>
main(){
	int a,b;
	
	printf("Enter Number A : ");
	scanf("%d",&a);
	
	printf("Enter Number B : ");
	scanf("%d",&b);
	
	int temp = a;
	a = b;
	b = temp;
	
	
	printf("\nAfter Swaping A : %d",a);
	printf("\nAfter Swaping B : %d",b);
}
