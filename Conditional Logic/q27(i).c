//q-27.(i) Monday to Sunday using switch case


#include<stdio.h>
main(){
	int a;
	
	printf("Enter week number : ");
	scanf("%d",&a);

	switch(a){
		case 1: 
			printf("Monday");
			break;
		case 2: 
			printf("Tuesday");
			break;
		case 3: 
			printf("Wednesday");
			break;
		case 4:
			printf("Thurday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Invalid number!");
	}
}
