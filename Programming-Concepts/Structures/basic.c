#include <stdio.h>
#include <string.h>

// A structure:
// The variables inside shouldn't be initialized.
// Using (. for variables) or (-> for pointers) to access the members.
struct Person {
    char name[50];
    int age;
}p1, p2;

int main() {
    // It can be used either from p1, p2 above or explicitly created like below:
    struct Person p1 = {"John Doe", 30};
    struct Person p2 = {"John Doe", 30};

    struct Person *p1_ptr = &p1;
    struct Person *p2_ptr = &p2;

    // Accessing members
    printf("Name: %s | Name: %s\n", p1.name, p2.name);
    printf("Age: %d | Age: %d\n", p1.age, p2.age);
    
    printf("Name: %s | Name: %s\n", p1_ptr->name, p2_ptr->name);
    printf("Age: %d | Age: %d\n", p1_ptr->age, p2_ptr->age);

    return 0;
}
