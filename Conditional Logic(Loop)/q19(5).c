//Q-19. Pattern 5

#include <stdio.h> 

main() 
{ 
    int i, j;

    // Loop through each row
    for (i = 0; i < 5; i++) {  
        // Loop through each column in the current row
        for (j = 0; j <= i; j++) { 
            // Print characters starting from 'A' and incrementing with each column
            printf("%c ", 'A' + j); 
        } 
        // Move to the next line after completing the current row
        printf("\n"); 
    }
}


