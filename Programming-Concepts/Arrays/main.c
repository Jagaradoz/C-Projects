#include <stdio.h>

int i;

int main() {	
    // 1. Full initialization
    int arr1[5] = {1, 2, 3, 4, 5};

    // 2. Partial initialization (rest will be 0)
    int arr2[5] = {10, 20};

    // 3. Implicit size
    int arr3[] = {7, 14, 21, 28};

    // 4. All elements initialized to 0
    int arr4[5] = {0};

    // 5. Designated initializers (C99+)
    int arr5[5] = {[1] = 100, [3] = 200};

    // 6. User input using scanf
    int arr6[5];
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr6[i]);
    }

    // Matrix Array (2D array)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Cube Array (3D array)
    int cube[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // Accessing elements
    printf("1D Array Element: %d\n", arr1[0]);
    printf("2D Array Element: %d\n", matrix[0][1]);
    printf("3D Array Element: %d\n", cube[1][1][2]);

    return 0;
}