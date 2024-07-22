//Q-9. Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>
main()
{
    char str[20][20];
    int i, max_len = 0, n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);   
    for (i = 0; i < n; i++)
	{
        scanf("%s", str[i]);
    }

    for (i = 0; i < n; i++)
	{
        int len = strlen(str[i]);  
        if (len > max_len)
		{
            max_len = len;  
        }
    }

    printf("Maximum number of characters in a string: %d\n", max_len);  
}
