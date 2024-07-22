//q-14.WAP to find the largest of three numbers.

#include<stdio.h>
main(){
	int a,b,c;
	
	printf("Enter number 1 :");
	scanf("%d",&a);
	
	printf("Enter number 2 :");
	scanf("%d",&b);
	
	printf("Enter number 3 :");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("%d is Largest",a);
	}
	else if(b>a && b>c){
		printf("%d is Largest",b);
	}
	else{
		printf("%d is Largest",c);
	}
}
