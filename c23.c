#include <stdio.h>
int main() {
    int sum = 0;
    float average;
    int i;

    // Calculate the sum of numbers between 1 to 100
    for (i = 1; i <= 100; i++) {
        sum += i;
    }

    // Calculate the average
    average = (float)sum / 100;

    // Display the sum and average
    printf("Sum of numbers between 1 to 100: %d\n", sum);
    printf("Average of numbers between 1 to 100: %.2f\n", average);

    return 0;
}


