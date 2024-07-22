//q-27.(ii) Vowel or Consonant using switch case

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
			printf("Consonant");
	}
}
