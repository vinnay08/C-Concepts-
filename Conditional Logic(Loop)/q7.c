//q-7. WAP to print number in reverse order

#include<stdio.h>
main(){
	int n,reverse;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	while(n>0){
		reverse = n%10;
		printf("%d",reverse);
		n=n/10;
	}
}
