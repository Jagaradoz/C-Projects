#include <stdio.h>

int add(int a, int b);
int* getPointerToNum();

int main() {
    int num = 25;

    int arr[5] = {10, 20, 30, 40, 50};

    int *num_ptr;                   // Pointer to an integer
    int (*arr_ptr)[5];              // Pointer to the entire array of 5 integers
    int (*func_ptr)(int, int);      // Pointer to a function that takes two integers and returns an integer
    int *static_num_ptr;            // Pointer to a static integer
    

    num_ptr = &num;
    arr_ptr = &arr;
    func_ptr = &add;
    static_num_ptr = getPointerToNum();

    printf("The output: %d (Address :%p)\n", *num_ptr, num_ptr);
    printf("The output: %d (Address :%p)\n", **arr_ptr, arr_ptr);
    printf("The output: %d (Address :%p)\n", (*func_ptr)(20, 30), func_ptr);
    printf("The output: %d (Address :%p)\n", *static_num_ptr, static_num_ptr);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int* getPointerToNum() {
    static int static_num = 50;
    return &static_num;       
}