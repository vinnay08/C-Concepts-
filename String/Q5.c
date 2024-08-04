//Q-5. Write a program in C to compare two strings without using string library functions.

#include <stdio.h>

// Function to compare two strings
compare_strings(char str1[], char str2[]) {
    int i = 0;

    // Loop through both strings until the end of either string
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;  // Strings are not equal
        }
        i++;
    }

    // If either string has not reached its end, the strings are not equal
    if (str1[i] != '\0' || str2[i] != '\0') {
        return 0;
    }
}

 main() {
    char str1[] = "hello";
    char str2[] = "hello";
    char str3[] = "goodbye";

    // Compare str1 and str2
    if (compare_strings(str1, str2)) {
        printf("Strings '%s' and '%s' are equal.\n", str1, str2);
    } else {
        printf("Strings '%s' and '%s' are not equal.\n", str1, str2);
    }

    // Compare str1 and str3
    if (compare_strings(str1, str3)) {
        printf("Strings '%s' and '%s' are equal.\n", str1, str3);
    } else {
        printf("Strings '%s' and '%s' are not equal.\n", str1, str3);
    }
}
