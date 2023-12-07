/* 
Enter a number (n): 5
Numbers from 5 to 1 are:
5

    */

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    printf("Numbers from %d to 1 are: \n", n);

   
    while (n >= 1) {
        printf("%d ", n);
        n--; 

    }

