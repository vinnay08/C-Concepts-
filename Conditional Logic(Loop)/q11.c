//q-11.Accept 5 names from user at run time

#include <stdio.h>

main() 
{
    char students[5][50];  // 2D array to store names of 5 students, each up to 49 characters + null terminator
    int i;  // Loop counter

    // Loop to input names of 5 students
    for (i = 0; i < 5; i++)
    {
        // Prompt user to enter the name of each student
        printf("Enter name of student %d: ", i + 1);
        
        // Read a single word (name) from the user
        scanf("%s", students[i]);
    }

    // Print the list of student names
    printf("\nHere are the names of the students:\n");
    for (i = 0; i < 5; i++)
    {
        // Print each student's name
        printf("%s\n", students[i]);
    }
}

