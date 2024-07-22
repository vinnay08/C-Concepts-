//q-12. Accept number of students from user. I need to give 5 apples to each 
//student. How many apples are required?

#include<stdio.h>
main(){
	int n;
	
	printf("Enter students numbers : ");
	scanf("%d",&n);
	
	int requireddapple = n*5;
	
	printf("\nRequired Apple : %d",requireddapple);
}
