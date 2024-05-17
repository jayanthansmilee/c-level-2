#include <stdio.h>

int main() {
    int limit, sum = 0, num = 2; // Start from 2 since we're summing cubes of even numbers
    printf("Enter the limit: ");
    scanf("%d", &limit);

    if (limit <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    printf("Sum of cubes of even numbers up to %d: ", limit);

    do {
        sum += num * num * num;
        num += 2; // Move to the next even number
    } while (num <= limit);

    printf("%d\n", sum);

    return 0;
}
