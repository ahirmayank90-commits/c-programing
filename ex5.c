#include <stdio.h>

int main() {
    int n, N;
    while (1) {
        printf("\nEnter your choice:\n");
        printf("1. Sum of first N natural numbers\n");
        printf("2. Factorial of N\n");
        printf("3. Exit\n");
        scanf("%d", &n);

        switch (n) {
            case 1: {
                int sum = 0;
                printf("Enter the value of N: ");
                scanf("%d", &N);
                for (int a = 1; a <= N; a++) {
                    sum += a;
                }
                printf("Sum of first %d natural numbers is %d\n", N, sum);
                break;
            }

            case 2: {
                int fact = 1;
                printf("Enter the value of N: ");
                scanf("%d", &N);
                for (int b = 1; b <= N; b++) {
                    fact *= b;
                }
                printf("Factorial of %d is %d\n", N, fact);
                break;
            }

            case 3:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
