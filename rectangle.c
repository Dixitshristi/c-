#include <stdio.h>

int main() {
    // Declare variables for length and width
    float length, width;

    // Prompt user to enter length and width
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    
    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    // Calculate area
    float area = length * width;

return 0;
}
