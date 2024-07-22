//Q-19. Pattern 5

#include <stdio.h> 

main() 
{ 
	int i,j;
	for (i=0;i<5;i++) {  
		for (j = 0; j <= i; j++) { 
			printf("%c ", 'A' + j); 
		} 
		printf("\n"); 
	} 
}

