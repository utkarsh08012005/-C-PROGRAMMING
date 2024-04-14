#include <stdio.h>

// Function to find the largest among three numbers
int largest(int num1, int num2, int num3) {
    if(num1 >= num2 && num1 >= num3)
        return num1;
    else if(num2 >= num1 && num2 >= num3)
        return num2;
    else
        return num3;
}

int main() {
    int num1, num2, num3, max;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Call the function and store the result in max
    max = largest(num1, num2, num3);

    printf("The largest number is %d\n", max);

    return 0;
}
