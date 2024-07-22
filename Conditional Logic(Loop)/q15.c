//Q-15.Calculate sum of 10 numbers using of while loop

#include<stdio.h>
main(){
	int i=1,sum=0,n;
	while(i<=10){
		printf("Enter number : ");
		scanf("%d",&n);
		sum+=n;
		i++;
	}
	printf("Sum of 10 number are : %d",sum);
}
