//Q-6. WAP to make addition, Subtraction and multiplication of two matrix using2-D Array 

#include<stdio.h>

main() {
    int a[2][3], i, j, b[2][3];
    
    // Input elements for Matrix 1
    printf("Enter Matrix 1:\n");   
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Input elements for Matrix 2
    printf("\nEnter Matrix 2:\n");  
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Matrix addition
    printf("\nAddition:\n");     
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", a[i][j] + b[i][j]);
        }
        printf("\n");  // New line after each row
    }
    
    // Matrix subtraction
    printf("\nSubtraction:\n");      
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", a[i][j] - b[i][j]);
        }
        printf("\n");  // New line after each row
    }
    
    // Element-wise matrix multiplication
    printf("\nMultiplication:\n");      
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", a[i][j] * b[i][j]);
        }
        printf("\n");  // New line after each row
    }
}

