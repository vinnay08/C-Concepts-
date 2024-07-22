//Q-19 Pattern 6

#include <stdio.h>
main() {
	int i,j;
  for (i = 1; i <= 5 ;i++) {
    for (j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }
  
  for (i = 1; i <= 5-1; i++) {
    for (j = 0; j < 5-i; j++) {
      printf("*");
    }
    printf("\n");
  }
  
}
