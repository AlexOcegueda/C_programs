#include <stdio.h>
#include <limits.h>

// Structure to store pairs of integers
struct Pair {
    int num1;
    int num2;
};

// Enumeration of mathematical operations
enum Operations {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int divide(int num1, int num2) {
    if (num2 == 0) {
        printf("ERROR: Division by zero\n");
        return INT_MIN;
    }
    return num1 / num2;
}

/**
 * Takes in two ints from user and 
 * stores into Pair to be used in operations
*/
struct Pair getIntegers(){
    struct Pair result;

    printf("Please enter your first integer: ");
    scanf("%d", &result.num1);
    
    printf("Please enter a second integer: ");
    scanf("%d", &result.num2);

    return result;
}

int main() {
    int keepLooping = 1;

    while(keepLooping){
        struct Pair numbers = getIntegers();

        int operation;
        printf("\nPick an Operation(0=add, 1=subtract, 2=multiply, 3=divide): ");
        scanf("%d", &operation);
        
        switch(operation){
            case ADD:
                printf("Your answer is: %d\n", add(numbers.num1, numbers.num2));
                break;
            case SUBTRACT:
                printf("Your answer is: %d\n", subtract(numbers.num1, numbers.num2));
                break;
            case MULTIPLY:
                printf("Your answer is: %d\n", multiply(numbers.num1, numbers.num2));
                break;
            case DIVIDE:
                printf("Your answer is: %d\n", divide(numbers.num1, numbers.num2));
                break;
            default:
                printf("Not an option");
        }

        printf("\nWant to exit? (0=yes, 1=no): ");
        scanf("%d", &keepLooping);
    }

    return 0;
}
