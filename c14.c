#include <stdio.h>

int main() {
    int sum = 0;

    // Calculate the sum of the first ten natural numbers
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    // Print the result
    printf("Sum of the first ten natural numbers: %d\n", sum);

    return 0;
}
