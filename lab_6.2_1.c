  /* 
Enter a number (n): 5
Numbers from 1 to 5 are:
1 2 3 4 5
    */
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    i = 1; 

    printf("Numbers from 1 to %d are: \n", n);

    
    while (i <= n) {
        printf("%d ", i);
        i++; 
    }

    return 0;
}

