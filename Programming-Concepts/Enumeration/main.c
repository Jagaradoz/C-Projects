#include <stdio.h>

// A enumeration:
// It's a collection of constant values.
enum Day {
    SUNDAY,     // 0
    MONDAY,     // 1
    TUESDAY,    // 2
    WEDNESDAY,  // 3
    THURSDAY,   // 4
    FRIDAY,     // 5
    SATURDAY    // 6
};

int main() {
    enum Day today = WEDNESDAY;
    return 0;
}
