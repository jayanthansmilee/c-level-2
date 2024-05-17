#include <stdio.h>

void generateFibonacci(int n) {
    if (n <= 0 || n > 20) {
        printf("Invalid Input\n");
        return;
    }

    int a = 0, b = 1, c;
    printf("Here is the Fibonacci series up to %d terms:\n", n);
    printf("%d ", a);
    if (n > 1) {
        printf("%d ", b);
        int i = 2;
        do {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
            i++;
        } while (i < n);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms to display: ");
    scanf("%d", &n);
    generateFibonacci(n);
    return 0;
}
