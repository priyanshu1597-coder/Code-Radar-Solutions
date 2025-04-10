#include <stdio.h>

// Define the structure
struct Rectangle {
    int length;
    int breadth;
};

int main() {
    int n;
    scanf("%d", &n);  // Read the number of rectangles

    struct Rectangle rect[n];

    // Input length and breadth for each rectangle
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &rect[i].length, &rect[i].breadth);
    }

    // Calculate and display area and perimeter for each rectangle
    for (int i = 0; i < n; i++) {
        int area = rect[i].length * rect[i].breadth;
        int perimeter = 2 * (rect[i].length + rect[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i + 1, (float)area, (float)perimeter);
    }

    return 0;
}
