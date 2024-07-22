//q-6. WAP to print Fibonacci series up to given numbers

#include<stdio.h>
main(){
	int n,n1=0,n2=1,n3,i;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	printf("%d,",n1);
	printf("%d,",n2);
	
	for(i=3;i<=n;i++){
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%d,",n3);
	}
}
