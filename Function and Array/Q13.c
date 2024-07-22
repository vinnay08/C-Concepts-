//Q-13. WAP to accept 5 numbers from user and check entered number is even or oddusing of array 

#include<stdio.h>
main(){
	int i,a[5];
	
	for(i=0;i<5;i++){
		printf("\nEnter Your Number: ");   
		scanf("%d",&a[i]);
		
		if(a[i]%2==0) printf("%d is a Even number",a[i]);  
		else printf("%d is a Odd Number\n\n",a[i]);
		
	}
}
