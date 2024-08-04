//q-16 .Convert country�s name in abbreviate form

#include <stdio.h> 

main() {
    char a[6], b[15]; // Declare character arrays to store the names of the countries
    
    // Prompt the user to enter the first name of the country
    printf("Enter Country First Name: ");
    gets(a); // Read the input into array 'a' (unsafe function, use fgets instead)
    
    // Prompt the user to enter the second name of the country
    printf("Enter Country Second Name: ");
    gets(b); // Read the input into array 'b' (unsafe function, use fgets instead)
    
    // Print the abbreviated form of the country names using the first letters of each name
    printf("Abbreviated form: %c.%c.\n", a[0], b[0]);
}

