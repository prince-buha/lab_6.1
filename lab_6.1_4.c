/* 
*/
#include <stdio.h>

int main() {
    int N, i, num1 = 0, num2 = 1, nextTerm;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &N);

    printf("Fibonacci Series up to %d terms: ", N);

    i = 1;
    while (i <= N) {
        printf("%d, ", num1);
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
        i++;
    }

    
}


