//q-33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3) 

#include<stdio.h>
main(){
	int a;
	
	printf("Enter number : ");
	scanf("%d",&a);
	
	printf("\nFirst three power of %d is : %d, %d, %d ",a,a,a*a,a*a*a);
}
