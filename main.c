#include <stdio.h>

void addition(void);
int factorial(int n);

int main() {
    // 1. Run addition
    addition();

    // 2. Run factorial with user input
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
