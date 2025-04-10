#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n, allPassed = 1;
    scanf("%d", &n);

    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
        if (students[i].marks <= 50.0) {
            allPassed = 0;
        }
    }

    // Output result
    if (allPassed) {
        printf("All Passed\n");
    } else {
        printf("Not All Passed\n");
    }

    return 0;
}
