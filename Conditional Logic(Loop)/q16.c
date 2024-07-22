//Q-16. Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
main(){
	int i=1,sum=0;
	while(i<=10){
		sum+=i;
		i++;
	}
	printf("Sum of 10 number are : %d",sum);
}
