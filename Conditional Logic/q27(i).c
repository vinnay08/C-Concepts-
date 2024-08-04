//q-27.(i) Monday to Sunday using switch case


#include<stdio.h> // Include the standard input-output header file

main() {
    int a;
    
    // Prompt the user to enter the week number
    printf("Enter week number : ");
    scanf("%d", &a); // Read the week number and store it in variable 'a'

    // Switch statement to determine the day of the week
    switch(a) {
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
            printf("Thursday"); 
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
            printf("Invalid number!"); // Message for invalid input
    }
}
