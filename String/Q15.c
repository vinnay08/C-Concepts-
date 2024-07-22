//Q-15. Write a program in C to find the largest and smallest words in a string.

#include<stdio.h>
void findLargestAndSmallestWords(char *str) {
    char largest[50], smallest[50];
    int largest_len = 0, smallest_len = 50;
    
    char word[50];
    int word_len = 0;
    
    int i = 0;
    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            word[word_len++] = str[i];
        } else if (word_len > 0) {
            word[word_len] = '\0'; 
           
            if (word_len > largest_len) {
                strcpy(largest, word);
                largest_len = word_len;
            }
            if (word_len < smallest_len) {
                strcpy(smallest, word);
                smallest_len = word_len;
            }
        
            word_len = 0;
        }
        i++;
    }
    

    if (word_len > 0) {
        word[word_len] = '\0';
        if (word_len > largest_len) {
            strcpy(largest, word);
            largest_len = word_len;
        }
        if (word_len < smallest_len) {
            strcpy(smallest, word);
            smallest_len = word_len;
        }
    }
    
    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);
}

int main() {
    char str[100]; 
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    
    findLargestAndSmallestWords(str);
    
    return 0;
}
