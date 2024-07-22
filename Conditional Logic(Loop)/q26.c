//Q-26. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n 


#include <stdio.h>

int main() {
    int n,i;
    double sum = 0.0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= (double)i / (i + 1);
        } else {
            sum += (double)i / (i + 1);
        }
    }
    
    printf("The sum of the series is: %lf\n", sum);

    return 0;
}

