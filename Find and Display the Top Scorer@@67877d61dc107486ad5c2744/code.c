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

    // Find the top scorer
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    // Output the top scorer details
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",
           students[topIndex].roll, students[topIndex].name, students[topIndex].marks);

    return 0;
}
