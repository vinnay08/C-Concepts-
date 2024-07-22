//Q-10. Write a program in C to extract a substring from a given string

#include<stdio.h>
extract(char str[], int start, int end)
{
    int i;
    for (i = start; i <= end && str[i] != '\0'; i++)
	{
        printf("%c", str[i]);
    }
}

int main()
{
    char str[256];
    int start, end;

    printf("Enter a string: "); 
    gets(str);
    str[strlen(str)] = '\0'; 

    printf("Enter the starting index: ");
    scanf("%d", &start);

    printf("Enter the ending index: ");
    scanf("%d", &end);

    printf("The substring is: ");
    extract(str, start-1, end-1); 
}
