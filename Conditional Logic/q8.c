//q-8. WAP to accept the height of a person in centimeters and categorize the 
//person according to their height.

#include<stdio.h>
main(){
	int height;
	
	printf("Enter your height in cm : ");\
	scanf("%d",&height);
	
	if(height < 150){
		printf("Your height is short");
	}
	else if(height>=150 && height<160){
		printf("Your height is average");
	}
	else if(height>= 160 && height<180){
		printf("Your height is tall");
	}
	else{
		printf("Your height is very tall");
	}
} 
