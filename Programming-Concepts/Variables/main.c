#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h> 

int main() {
    // DATA TYPES
    char var1 = 0;                          // Size: 1 Byte : -128 to 127
    short var2 = 0;                         // Size: 2 Bytes : -32,768 to 32,767
    int var3 = 0;                           // Size: 4 Bytes : -2,147,483,648 to 2,147,483,647
    long var4 = 0;                          // Size: 4 or 8 Bytes : -2,147,483,648 to 2,147,483,647 (32-bit) or larger on 64-bit
    long long var5 = 0;                     // Size: 8 Bytes: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

    float var6 = 0.0f;                      // Size: 4 Bytes: ~1.2E-38 to ~3.4E+38
    double var7 = 0.0;                      // Size: 8 Bytes: ~2.2E-308 to ~1.7E+308
    long double var8 = 0.0L;                // Size: 8, 12, or 16 Bytes: System-dependent, but larger than double

    bool var9 = true;                       // Size: 1 Byte: 0 (false) or 1 (true)

    unsigned short var10 = 0;               // Size: 2 Bytes : 0 to 2^16 - 1 = 65,535
    unsigned int var11 = 0;                 // Size: 4 Bytes : 0 to 2^32 - 1 = 4,294,967,295 (on 32-bit)
    unsigned long var12 = 0;                // Size: 4 or 8 Bytes : 0 to 2^32 - 1 (on 32-bit) or 2^64 - 1 (on 64-bit)
    unsigned long long var13 = 0;           // Size: 8 Bytes : 0 to 2^64 - 1 = 18,446,744,073,709,551,615

    // EXCEEDING DATA TYPE RANGE
    signed char var14 = CHAR_MAX + 1;       // Output: -128 ; (CHAR_MAX + 1) MOD 2^8 = 128, interpreted as -128 in two's complement
    unsigned char var15 = UCHAR_MAX + 1;    // Output: 0 ; (UCHAR_MAX + 1) MOD 2^8 = 0

    return 0;
}
