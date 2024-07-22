//q-7. Accept marks from user and check pass or fail 

#include<stdio.h>
main(){
	int a;
	
	printf("Enter your marks out of 100 :");
	scanf("%d",&a);
	
	if(a>33){
		printf("You are pass");
	}
	else{
		printf("You are fail");
	}
}
