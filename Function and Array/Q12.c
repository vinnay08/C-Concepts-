//Q-12. WAP to accept 5 students name and store it in array

#include<stdio.h>
main(){
	char a[5][50];
	int i;
	
	for(i=0;i<5;i++){
		printf("Enter name of student %d: ",i+1); 
		scanf("%s",&a[i]);
		
	}
	
	
	printf("\n\n");
	for(i=0;i<5;i++)  
	{
		printf("\nName of student %d: %s",i+1,a[i]);
	}
}
