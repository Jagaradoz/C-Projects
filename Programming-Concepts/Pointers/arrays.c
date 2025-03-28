#include <stdio.h>

int main() {
    int arr_1[5] = {10, 20, 30, 40, 50};
    int arr_2[2][2] = { {11, 22}, {33, 44} };
    int arr_3[3][3][3] = {
        { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} },
        { {10, 11, 12}, {13, 14, 15}, {16, 17, 18} },
        { {19, 20, 21}, {22, 23, 24}, {25, 26, 27} }
    };

    // Flat pointers
    int *arr_1_ptr_1 = &arr_1[0];
    int *arr_2_ptr_1 = &arr_2[0][0];
    int *arr_3_ptr_1 = &arr_3[0][0][0];

    // Structured pointers
    int (*arr_1_ptr_2)[5] = &arr_1;
    int (*arr_2_ptr_2)[2][2] = &arr_2;
	int (*arr_3_ptr_2)[3][3][3] = &arr_3; 

    printf("========== 1D Array ==========\n");
    printf("arr_1[1]                  = %d\n", arr_1[1]);
    printf("*(arr_1 + 1)              = %d\n", *(arr_1 + 1));
    printf("*(arr_1_ptr_1 + 1)        = %d\n", *(arr_1_ptr_1 + 1));
    printf("(*arr_1_ptr_2)[1]         = %d\n", (*arr_1_ptr_2)[1]);

    printf("\n========== 2D Array ==========\n");
    printf("arr_2[1][1]               = %d\n", arr_2[1][1]);
    printf("*(*(arr_2 + 1) + 1)       = %d\n", *(*(arr_2 + 1) + 1));
    printf("*(arr_2_ptr_1 + 3)        = %d\n", *(arr_2_ptr_1 + 3));
    printf("(*arr_2_ptr_2)[1][1]      = %d\n", (*arr_2_ptr_2)[1][1]);

    printf("\n========== 3D Array ==========\n");
    printf("arr_3[1][1][1]            = %d\n", arr_3[1][1][1]);
    printf("*(*(*(arr_3 + 1) + 1) + 1)= %d\n", *(*(*(arr_3 + 1) + 1) + 1));
    printf("*(arr_3_ptr_1 + 13)       = %d\n", *(arr_3_ptr_1 + 13));
    printf("(*arr_3_ptr_2)[1][1][1]   = %d\n", (*arr_3_ptr_2)[1][1][1]);

    return 0;
}
