//Q-23. Series Program : 1 + 2 + 3 + 4 + 5 + ... + n 

#include <stdio.h>

main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    
    printf("The sum of the first %d numbers is: %d\n", n, sum);
}

