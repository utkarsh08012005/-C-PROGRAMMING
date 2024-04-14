#include <stdio.h>
int main() {
    int numIterations;
    printf("Enter the number of iterations: ");
    scanf("%d", &numIterations);
    for (int i = 0; i < numIterations; i++) {
        if (i % 4 == 0)
            printf("chitkara ");
        else if (i % 4 == 1)
            printf("chitkar ");
        else if (i % 4 == 2)
            printf("chitka ");
        else
            printf("chitk ");
    }
    return 0;
}
