//q-15.Convert school’s name in abbreviated form

#include<stdio.h>
main(){
	char a[6],b[15];
	
	printf("Enter School Name : ");
	gets(a);
	
	printf("Enter School Name : ");
	gets(b);
	
	printf("Abbreviated form : %c.%c %s ",a[0],a[4],b);
} 
