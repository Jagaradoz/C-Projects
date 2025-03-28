#include <stdio.h>

// Normal struct (unordered)
struct NormalStruct {
    char a;    // 1 byte
    int b;     // 4 bytes (likely padded)
    char c;    // 1 byte (likely padded)
};

// Packed struct (no padding at all)
#pragma pack(1)
struct PackedStruct {
    char a;    // 1 byte
    int b;     // 4 bytes
    char c;    // 1 byte
};
#pragma pack()  // Reset to default alignment

// Ordered struct (minimizing padding manually)
struct OrderedStruct {
    int b;     // 4 bytes
    char a;    // 1 byte
    char c;    // 1 byte
    // likely 2 bytes padding at end to align total size
};

int main() {
    struct NormalStruct ns;
    struct PackedStruct ps;
    struct OrderedStruct os;

    printf("Size of NormalStruct : %lu bytes\n", sizeof(ns));
    printf("Size of PackedStruct : %lu bytes\n", sizeof(ps));
    printf("Size of OrderedStruct: %lu bytes\n", sizeof(os));

    return 0;
}
