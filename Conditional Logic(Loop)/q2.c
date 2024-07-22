//q-2. WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>
main(){
	int i,n;
	
	for(i=0;i<=5;i++){
		printf("Enter number : ");
		scanf("%d",&n);
	}
	
	for(i=0;i<5;i++){
		printf("\nNumbers are : %d",n);
	}
}
