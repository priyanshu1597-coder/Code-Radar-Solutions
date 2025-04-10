#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n, searchRoll;
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    scanf("%d", &searchRoll);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].roll == searchRoll) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}