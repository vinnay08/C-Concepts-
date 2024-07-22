//q-5. WAP to print factorial of given number

#include<stdio.h>
main(){
	int n,i,fac=1;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		fac*=i;
	}
	printf("\nFactorial is : %d",fac);
}
