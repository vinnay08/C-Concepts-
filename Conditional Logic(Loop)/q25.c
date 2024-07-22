//Q-25. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) 

#include <stdio.h>
main() {
    int n, i, j, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
       for (j = 1; j <= i; j++) {
            sum += j;
        }
    }
    
    printf("The sum of the series is: %d\n", sum);
}
