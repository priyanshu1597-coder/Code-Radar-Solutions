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

    float threshold;
    scanf("%f", &threshold);

    // Count students scoring above the threshold
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].marks > threshold) {
            count++;
        }
    }

    printf("Count of students scoring above %.2f: %d\n", threshold, count);

    return 0;
}
