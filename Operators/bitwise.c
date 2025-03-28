#include <stdio.h>

int main() {
    // BITWISE OPERATIONS
    // Performs bitwise operations on two integers 'a' and 'b'

    int a = 10, b = 5;

    int bitwise_and = a & b;         // Bitwise AND (&)
    int bitwise_or = a | b;          // Bitwise OR (|)
    int bitwise_xor = a ^ b;         // Bitwise XOR (^)
    int bitwise_not = ~a;            // Bitwise NOT (~)
    int left_shift = a << 1;         // Left Shift (<<)
    int right_shift = a >> 1;        // Right Shift (>>)

    printf("Bitwise AND: %d & %d = %d\n", a, b, bitwise_and);
    printf("Bitwise OR: %d | %d = %d\n", a, b, bitwise_or);
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, bitwise_xor);
    printf("Bitwise NOT: ~%d = %d\n", a, bitwise_not);
    printf("Left Shift: %d << 1 = %d\n", a, left_shift);
    printf("Right Shift: %d >> 1 = %d\n", a, right_shift);

    return 0;
}
