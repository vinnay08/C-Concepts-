//q-13. calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main(){
	int i,n,fac=1;
	
	printf("Enter number : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		fac*=i;
		i++;
	}
	printf("Factorial number is : %d",fac);
}
