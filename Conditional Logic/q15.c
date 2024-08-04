/*q-15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria 
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 -------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include <stdio.h> 

main() { 
    int phy, chem, math, totalmarks, math_phy_marks; // Declare variables for marks and total marks
    
    // Prompt the user to enter Physics marks
    printf("Enter Physics marks: ");
    scanf("%d", &phy); // Read the Physics marks and store them in 'phy'
    
    // Prompt the user to enter Chemistry marks
    printf("Enter Chemistry marks: ");
    scanf("%d", &chem); // Read the Chemistry marks and store them in 'chem'
    
    // Prompt the user to enter Mathematics marks
    printf("Enter Mathematics marks: ");
    scanf("%d", &math); // Read the Mathematics marks and store them in 'math'
    
    // Prompt the user to enter total marks of Physics, Chemistry, and Mathematics
    printf("Enter total marks of Physics, Chemistry and Mathematics: ");
    scanf("%d", &totalmarks); // Read the total marks and store them in 'totalmarks'
    
    // Prompt the user to enter total marks of Mathematics and Physics
    printf("Enter total marks of Mathematics and Physics: ");
    scanf("%d", &math_phy_marks); // Read the combined marks and store them in 'math_phy_marks'
    
    // Check if the candidate meets the eligibility criteria
    if (phy >= 55 && chem >= 50 && math >= 65 && totalmarks >= 190) {
        // If the candidate's Physics marks are at least 55, Chemistry marks are at least 50,
        // Mathematics marks are at least 65, and total marks are at least 190, print this message
        printf("Candidate Eligible for this course");
    }
    // Check if the candidate meets the alternative eligibility criteria
    else if (math_phy_marks >= 140) {
        // If the total marks of Mathematics and Physics are at least 140, print this message
        printf("Candidate Eligible for this course");
    }
    else {
        // If neither of the above conditions is met, print this message
        printf("Candidate isn't Eligible for this course");
    }
}

