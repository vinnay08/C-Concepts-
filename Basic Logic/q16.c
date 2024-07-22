//q-16 .Convert country’s name in abbreviate form

#include<stdio.h>
main(){
	char a[6],b[15];
	
	printf("Enter Country first Name : ");
	gets(a);
	
	printf("Enter Country Second Name : ");
	gets(b);
	
	printf("Abbreviated form : %c.%c. ",a[0],b[0]);
}
