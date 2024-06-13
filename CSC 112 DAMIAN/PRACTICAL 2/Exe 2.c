// JESSE OBINOBI OGHENERUTEMI
// D CODE: D1012640
// Check if a number is Odd or Even
#include <stdio.h>

int main() {
    // Declare a variable to store the user input
    int user_input;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // Check if the number is even or odd
    if (user_input % 2 == 0) {
        // If the number is divisible by 2 with no remainder, it is even
        printf("%d is an even number.\n", user_input);
    } else {
        // If the number is not divisible by 2 with no remainder, it is odd
        printf("%d is an odd number.\n", user_input);
    }

    return 0;
}
