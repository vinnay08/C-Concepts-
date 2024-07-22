//q-4. WAP to make simple calculator (operation include Addition, 
//Subtraction, Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
main(){
	char op;
	float a,b,c;
	
	printf("Enter +,-,*,/,% : ");
	scanf("%c",&op);
	
	printf("Enter A : ");
	scanf("%f",&a);
	
	printf("Enter B : ");
	scanf("%f",&b);
	
	switch (op){
		case '+':
			c = a+b;
			break;
		case '-':
			c =a-b;
			break;
		case '*':
			c=a*b;
			break;
		case '/':
			if (b!=0){
				c = a/b;
			}
			else{
				printf("b can't be zero");
			}
			break;
		case '%':
			if (b != 0) {
                c = (int)a % (int)b;
            } else {
                printf("Error: Modulo by zero!\n");
            }
			break;
		default:
			printf("Invalid input");
	}
	
	printf("\nResult : %.2f",c);
}
