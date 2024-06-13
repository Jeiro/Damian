// ONOSAKPONOME DAMIAN EJIRO
// D CODE: D1009158
// Print positive integers from 1 to 10 using for loop
#include <stdio.h>

int main() {
    printf("Printing positive integers from 1 to 10 using for loop:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Print positive integers from 1 to 10 using while loop
    printf("Printing positive integers from 1 to 10 using while loop:\n");
    int j = 1;
    while (j <= 10) {
        printf("%d ", j);
        j++;
    }
    printf("\n\n");

    // Print positive integers from 1 to 10 using do-while loop
    printf("Printing positive integers from 1 to 10 using do-while loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 10);
    printf("\n");

    return 0;
}
