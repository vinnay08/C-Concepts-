//q-14.Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
main(){
	int n,i,fac,j;
	
	for(i=1;i<=5;i++){
		printf("Enter number : ");
		scanf("%d",&n);	
		fac=1;
		for(j=1;j<=n;j++){
		fac*=j;
		}
		printf("Factorial is : %d\n",fac);
	}
}
