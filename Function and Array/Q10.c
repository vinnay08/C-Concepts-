//Q-10. WAP to perform Palindrome number using for loop and function 

#include <stdio.h>


int isPalindrome(int num)
{
    int reversedNum = 0;
    int originalNum = num;

    for (num=num; num != 0; num /= 10)
	{
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
    }
    
    printf("Reversed Number: %d",reversedNum);
    
    return originalNum==reversedNum;

}

main()
{
    int num;
    printf("Enter a number: "); 
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("\n\n%d is a palindrome number.\n", num);  
    } else {
        printf("\n\n%d is not a palindrome number.\n", num);
    }
} 
