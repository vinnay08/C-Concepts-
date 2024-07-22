//q-3. 3. WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers

#include<stdio.h>
main(){
	int n,i,ev=0,odd=0,evsum=0,oddsum=0;
	
	for(i=0;i<10;i++){
		printf("\nEnter number : ");
		scanf("%d",&n);
		
		if(n%2==0){
			printf("%d is even",n);
			ev++;
			evsum+=n;
		}
		else{
			printf("%d is odd",n);
			odd++;
			oddsum+=n;
		}
	}
	printf("\nEven numbers are : %d ",ev);
	printf("\nOdd numbers are : %d ",odd);
	printf("\nEven numbers sum are : %d",evsum);
	printf("\nOdd numbers sum are : %d",oddsum);
}
