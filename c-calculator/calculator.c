#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }

int main() {
    int choice;
    float a, b;

    do {
        printf("\n--- Simple Calculator ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (choice) {
            case 1: printf("Result = %.2f\n", add(a, b)); break;
            case 2: printf("Result = %.2f\n", subtract(a, b)); break;
            case 3: printf("Result = %.2f\n", multiply(a, b)); break;
            case 4:
                if (b == 0)
                    printf("Error: Cannot divide by zero\n");
                else
                    printf("Result = %.2f\n", divide(a, b));
                break;
            case 5: printf("Thank you!\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}
