#include <stdio.h>

int main() {
    int n;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    printf("Numbers from %d to 1 are: \n", n);

    // Using a while loop to print numbers from n to 1
    while (n >= 1) {
        printf("%d ", n);
        n--; // Decrementing n in each iteration
    }

    return 0;
}

