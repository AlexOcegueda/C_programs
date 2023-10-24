#include <stdio.h>
#include <stdlib.h>

struct DynamicArray 
{
    int* array;
    size_t size;
    int capacity;
};

void initializeDynamicArray(struct DynamicArray* arr, size_t initialSize) 
{
    arr->array = (int*)malloc(initialSize * sizeof(int));
    arr->size = 0;
    arr->capacity = initialSize;
}

void freeDynamicArray(struct DynamicArray* arr)
{
    free(arr->array);
    arr->array = NULL;
}


int main(int argc, char* argv[]) 
{

    int initalSize;

    // checking for correct amt of arguments
    if (argc != 2) {
        printf("Usage: %s <initial_size>\n", argv[0]);
        return 1;

    // checks if conversion to int is valid
    } else if (sscanf(argv[1], "%d", &initalSize) == 0) {
        printf("Invalid Number: %s is not a valid integer\n", argv[1]);
        return 2;
    }

    initalSize = atoi(argv[1]);

    struct DynamicArray dynamicArray, *arrPtr = &dynamicArray;

    initializeDynamicArray(arrPtr, initalSize);
    
    int keepLooping = 1;

    while(keepLooping)
    {
        int choice;
        printf("(0=add data, 1=delete data, 2=modify data, 3=create new array, 4=end program: ");
        scanf("%d\n", choice);

        switch(choice)
        {
            case 0:
                printf("Added Data");
                break;
            case 1:
                printf("Deleted Data");
                break;
            case 2:
                printf("Modify Data");
                break;
            case 3:
                printf("Create new Array");
                break;
            case 4:
                printf("End program");
                break;
        }
    }

    return 0;
}