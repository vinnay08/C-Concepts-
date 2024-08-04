//q-15.Convert school�s name in abbreviated form

#include <stdio.h> 

main() { 
    char a[6], b[15]; // Declare character arrays to store school names
    
    // Prompt the user to enter the first part of the school name
    printf("Enter School Name (max 5 characters): ");
    gets(a); // Read the input into array 'a' (unsafe function, use fgets instead)
    
    // Prompt the user to enter the second part of the school name
    printf("Enter School Name (max 14 characters): ");
    gets(b); // Read the input into array 'b' (unsafe function, use fgets instead)
    
    // Print the abbreviated form of the school name
    printf("Abbreviated form: %c.%c %s\n", a[0], a[4], b);

}

