//q-2.  Write a C program to read the value of an integer m and display the value of 
//n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0 

#include<stdio.h>
main(){
	int m;
	
	printf("Enter m : ");
	scanf("%d",&m);
	
	if(m>0){
		int n = 1;
		printf("\nN is : %d",n);
	}
	else if(m==0){
		int n=0;
		printf("\nN is : %d",n);
	}
	else{
		int n= -1;
		printf("\nN is : %d",n);
	}
}
