#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, count = 0;

    do {
        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Number of digits: 1\n");
            break; // If the input is zero, it has only one digit
        }

        if (num < 0) {
            num = abs(num); // Convert negative number to positive
        }

        do {
            num /= 10;
            count++;
        } while (num != 0);

        printf("Number of digits: %d\n", count);
    } while (0); // Loop runs only once

    return 0;
}
