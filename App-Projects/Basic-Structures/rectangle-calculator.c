#include <stdio.h>

// struct Point represents a 2D point. 
struct Point {
    int x;
    int y;
};

// struct Rectangle represents a rectangle which contain two struct Points.
struct Rectangle {
    struct Point p1;
    struct Point p2;
};

// Function prototype
int calculateArea(struct Rectangle rect);

int main() {
    struct Rectangle rect;

    // Get input for Point 1.
    printf("Enter x and y for Point 1: ");
    scanf("%d %d", &rect.p1.x, &rect.p1.y);

    // Get input for Point 2.
    printf("Enter x and y for Point 2: ");
    scanf("%d %d", &rect.p2.x, &rect.p2.y);

    // Calculate and print the area of the rectangle.
    printf("Area: %d\n", calculateArea(rect));

    return 0;
}

// Function to calculate the area of a rectangle.
int calculateArea(struct Rectangle rect) {
    int length = abs(rect.p2.x - rect.p1.x);
    int width  = abs(rect.p2.y - rect.p1.y);
    return length * width;
}