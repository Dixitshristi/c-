#include <stdio.h>
#include <string.h>

void bruteForcePatternSearch(char *text, char *pattern) {
    int textLength = strlen(text);
    int patternLength = strlen(pattern);

    // Loop through the text
    for (int i = 0; i <= textLength - patternLength; i++) {
        int j;
        // Check for the pattern
        for (j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                break; // Mismatch found, break the inner loop
            }
        }
        // If the pattern is found
        if (j == patternLength) {
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main() {
    char text[100], pattern[100];

    // Input text and pattern
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; // Remove newline character

    printf("Enter the pattern to search: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = 0; // Remove newline character

    // Call the brute force pattern search function
    bruteForcePatternSearch(text, pattern);

    return 0;
}
