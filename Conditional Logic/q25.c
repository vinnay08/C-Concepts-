//q-25. Accept the input month number and print number of days in that month

#include<stdio.h>
main(){
	int mn;
	
	printf("Enter month number : ");
	scanf("%d",&mn);
	
	switch(mn){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			printf("Number of days in month %d: 31",mn);
			break;
		case 4:case 6:case 9:case 11:
			printf("Number of days in month %d: 30",mn);
			break;
		case 2:
			printf("Number of days in month %d: 28 or 29",mn);
			break;
		default:
			printf("Invalid month number!");
	}
}
