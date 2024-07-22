//q-9. C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>
main(){
	char ch;
	
	printf("Enter character : ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z'){
		printf("This is lower case character");
	}
	else if(ch>='A' && ch<='Z'){
		printf("This is Upper case character");
	}
	else if(ch>='0' && ch<='9'){
		printf("This is digit number");
	}
	else{
		printf("This is special character");
	}
}
