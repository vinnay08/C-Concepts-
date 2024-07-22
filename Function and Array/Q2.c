//Q-2. WAP of Addition, Subtraction, Multiplication and Division using Switchcase.(Must Be Menu Driven)

#include<stdio.h>
menu()
{
    int choice;
    float num1, num2, result;

    printf("Simple Calculator\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n\n");
    printf("Enter your choice (1-5): ");   
    scanf("%d", &choice);

    printf("\nEnter Number 1: ");
    scanf("%f",&num1);
    
    printf("Enter Number 2: ");   
    scanf("%f",&num2);

    switch (choice)  
	{
        case 1:
            result = num1 + num2;
            printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0)
			{
                result = num1 / num2;
                printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            if (num2 != 0)
			{
                result = (int)num1 % (int)num2;
                printf("\nResult: %.2f %% %.2f = %d\n", num1, num2, (int)result);
            } else {
                printf("\nError: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("\nInvalid choice. Please choose a valid option (1-5).\n");
    }

}

main(){
	menu();
}
