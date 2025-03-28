#include <stdio.h>

int main(){
    // MEMORY LAYOUT

    // 1. Text Segment (Code Segment)
    // The actual read-only executable code (instructions) of the program resides.
    // It contains all the machine code for the program.
    
    // 2. Data Segment (Initialized Data)
    // Global and static variables that have been initialized are stored.
    // The memory for these variables is allocated when the program starts.
    int initialized_var = 10;  // Stored in the data segment.
    
    // 3. BSS Segment (Uninitialized Data or Block Started by Symbol)
    // The segment holds global and static variables that have not been initialized or 0.
    // It reserves memory for these variables before they are used.
    int uninitialized_var;  // Stored in the BSS segment.
    
    // 4. Heap Segment
    // This segment is used for dynamic memory allocation.
    // When you use functions like `malloc()`, `calloc()`, or `realloc()` to allocate memory during the execution of the program, it is stored here.
    // Memory in the heap grows upward (towards higher memory addresses).
    int* ptr = malloc(sizeof(int));  // Allocated on the heap.
    
    // 5. Stack Segment
    // The stack is of limited size and grows downward.
    // When a function is called "stack frame" or "activation record" to store:
    //      Return Address	        Go back where cpu pause when the function finishes
    //      Function Parameters	    Arguments passed into the function (e.g., int a, int b)
    //      Local Variables	        Declared inside the function (int x = 10;)
    // Static scoping: the function is looking for variables in global.
    // Dynamic scoping: the function is looking for variables the caller's space.
    int local_var = 5;  // Stored in function call main (inside the stack).
    
    return 0;
}
