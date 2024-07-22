//q-5. Check Number Is Positive or Negative 

#include<stdio.h>
main(){
	int a;
	
	printf("Enter number : ");
	scanf("%d",&a);
	
	if(a>0){
		printf("Positive");
	}
	else if(a==0){
		printf("Zero");
	}
	else{
		printf("Negative");
	}
}
