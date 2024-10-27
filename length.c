//using for loop in c
// C program to search a character in a string

#include <stdio.h>
#include <string.h>

// function to find the first occurrence of ch in s
int findChar(char *s, char ch) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
      
        // If the current character is equal to ch, 
        // return the current index
        if (s[i] == ch)
            return i;
    }

    // If we did not find any occurrence of ch,
    // return -1
    return -1;
}

int main() {
    char s[] = "geeksforgeeks";
    char ch = 'k';
  
    printf("%d\n", findChar(s, ch));
    return 0;
}
