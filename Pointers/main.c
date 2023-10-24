#include <stdio.h>

void callByValue(int x) 
{
    x = 100;
    printf("This change in x is only for the scope of this function: %d\n", x);
}

void callByReference(int *ptr)
{
    *ptr = 102;
    printf("This will modify x since it is directly changing the value through its address, %d\n", *ptr);
}

int main() {
    int x = 42, *ptr = &x; // creates int var with a ptr pointing to it

    printf("Before modification: %d\n", x);

    callByValue(x);

    printf("After call by value: %d. Notice the lack of change\n", x);

    callByReference(ptr);

    printf("After call by reference: %d\n", x);
    

    return 0;
}
