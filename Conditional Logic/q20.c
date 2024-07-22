//q-20. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the 
//minimum bill should be of Rs. 256/-

#include<stdio.h>
main(){
	float firstbill,finalbill;
	
	printf("Enter firstbill : ");
	scanf("%f",&firstbill);
	
	if(firstbill>800){
		finalbill = firstbill + (0.18 * firstbill);
		printf("\nFinal bill : %.2f",finalbill);
	}
	else if(firstbill<256){
		printf("Please buy above 256/- rupees");
	}
	else{
		firstbill = finalbill;
		printf("Thank you!");
	}
}
