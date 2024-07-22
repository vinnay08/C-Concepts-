//q-14.Find ascii value of given number

#include<stdio.h>
main(){
	int n;
	
	printf("Enter numbers : ");
	scanf("%d",&n);
	
	char ch = (char) n;
	
	printf("ASCII value of number %d : %c",n,ch);
}
