//q-10. WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
main(){
	int a;
	
	printf("Enter number : ");
	scanf("%d",&a);
	
	if(a==0){
		printf("This number is  Zero");
	}
	else if(a>0){
		printf("This number is Positive");
	}
	else{
		printf("This number is negative");
	}
}
