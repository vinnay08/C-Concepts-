//q-18.Write a C program to calculate profit and loss on a transaction.

#include <stdio.h> 

main() {
    int cost_price, sell_price; // Declare variables to store the cost price and selling price
    
    // Prompt the user to enter the cost price
    printf("Enter Cost Price: ");
    scanf("%d", &cost_price); // Read the cost price and store it in 'cost_price'
    
    // Prompt the user to enter the selling price
    printf("Enter Sell Price: ");
    scanf("%d", &sell_price); // Read the selling price and store it in 'sell_price'
    
    // Check if the selling price is greater than the cost price
    if (sell_price > cost_price) {
        // If selling price is greater, calculate profit
        printf("%d is profit", (sell_price - cost_price)); // Print the profit
    } else {
        // If selling price is less than or equal to cost price, calculate loss
        printf("%d is loss", (cost_price - sell_price)); // Print the loss
    }
}

