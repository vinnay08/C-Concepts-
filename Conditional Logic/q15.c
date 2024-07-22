/*q-15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria 
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 -------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>
main(){
	int phy,chem,math,totalmarks,math_phy_marks;
	
	printf("Enter Physics marks : ");
	scanf("%d",&phy);
	
	printf("Enter Chemistry marks : ");
	scanf("%d",&chem);
	
	printf("Enter Mathematics marks : ");
	scanf("%d",&math);
	
	printf("Enter total marks of Physics,Chemistry and Mathematics : ");
	scanf("%d",&totalmarks);
	
	printf("Enter total marks of Mathematic and Physics : ");
	scanf("%d",&math_phy_marks);
	
	if(phy>=55 && chem>=50 && math>=65 && totalmarks>=190){
		printf("Candidate Eligible for this course");
	}
	else if(math_phy_marks>=140){
		printf("Candidate Eligible for this course");
	}
	else{
		printf("Candidate isn't Eligible for this course");
	}
}
