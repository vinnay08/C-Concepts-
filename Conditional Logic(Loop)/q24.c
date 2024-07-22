//Q-24. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) 

#include <stdio.h>
main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum += i * i;
    }
    
    printf("The sum of the squares of the first %d numbers is: %d\n", n, sum);
}
