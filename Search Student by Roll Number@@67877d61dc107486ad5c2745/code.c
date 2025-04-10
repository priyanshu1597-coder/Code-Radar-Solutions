#include <stdio.h>
#include <string.h>

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

    int searchRoll;
    scanf("%d", &searchRoll);

    // Search for the student by roll number
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].roll == searchRoll) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", 
                   students[i].roll, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}
