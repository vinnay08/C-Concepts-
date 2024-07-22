//q-18.Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
main(){
	int cost_price,sell_price;
	
	printf("Enter Cost Price : ");
	scanf("%d",&cost_price);
	
	printf("Enter Sell Price :");
	scanf("%d",&sell_price);
	
	if(sell_price>cost_price){
		printf("%d is profit",(sell_price-cost_price));
	}
	else{
		printf("%d is loss",(cost_price-sell_price));
	}
}
