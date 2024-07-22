//q-4. WAP to print table up to given numbers

#include<stdio.h>
main(){
	int n,i;
	
	printf("Enter number of table : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printf("\n%d * %d = %d",n,i,n*i);
	}
}
