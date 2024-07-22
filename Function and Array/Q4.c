//Q-4. WAP to find factorial using recursion 

#include <stdio.h>

int factorial(int n)   {
    if(n == 0 || n == 1)
	{
        return 1;
    } else
	{
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) printf("Error: Factorial is not defined for negative numbers.\n");
    else 
	{
        int result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);  
    }
}
