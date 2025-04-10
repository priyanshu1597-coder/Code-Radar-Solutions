#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    // Read student data
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }

    // Initialize with the first student
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks < students[minIndex].marks) {
            minIndex = i;
        }
    }

    // Output result
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",
           students[minIndex].roll, students[minIndex].name, students[minIndex].marks);

    return 0;
}
