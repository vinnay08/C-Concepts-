//q-6. Find the Character Is Vowel or Not 

#include<stdio.h>
main(){
	char ch;
	
	printf("Enter charcter : ");
	scanf("%c",&ch);
	
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		    printf("Vowel");
		    break;
		default:
			printf("Not Vowel");
	}
	
}
