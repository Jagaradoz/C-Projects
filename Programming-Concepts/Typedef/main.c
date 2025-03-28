#include <stdio.h>

// Creating aliases using typedef
typedef unsigned int uint;
typedef char byte;
typedef float real;

typedef struct {
    uint id;
    byte grade;
    real score;
} Student;

int main() {
    // Using aliases to declare variables
    uint age = 20;
    byte initial = 'A';
    real height = 5.9;

    Student s1;
    s1.id = 101;
    s1.grade = 'B';
    s1.score = 88.5;

    return 0;
}
