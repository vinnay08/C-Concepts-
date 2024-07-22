//Q-20

#include <stdio.h>
main() {
    int i, j;
    int n= 1;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            printf("%02d ", n);
            n++; 
        }
        printf("\n");
    }
}

