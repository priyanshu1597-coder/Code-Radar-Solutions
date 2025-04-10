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
    float total = 0;

    // Read student data and compute total marks
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
        total += students[i].marks;
    }

    // Calculate and print average marks
    float average = total / n;
    printf("Average Marks: %.2f\n", average);

    return 0;
}
