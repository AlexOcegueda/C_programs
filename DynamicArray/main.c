#include <stdio.h>

struct DynamicArray {
    int* array;
    size_t size;
};

int main(int argc, char* argv[]) {

    // checking for correct amt of arguments
    if (argc != 2) {
        printf("Usage: %s <initial_size>\n", argv[0]);
        return 1;
    }

    for (int i = 0; i < argc; i++){
        printf("Var: %s\n", argv[i]);
    }

    return 0;
}