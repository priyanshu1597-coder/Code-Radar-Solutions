#include <stdio.h>

// Define the Student structure
struct Student {
    int roll_number;
    char name[100];
    float marks;
};

// Function to determine the grade based on marks
char get_grade(float marks) {
    if (marks >= 85.0) return 'A';
    else if (marks >= 70.0) return 'B';
    else return 'C';
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    // Display each student's details with grade
    for (int i = 0; i < n; i++) {
        char grade = get_grade(students[i].marks);
        printf("Roll Number: %d, Name: %s, Grade: %c\n",
               students[i].roll_number, students[i].name, grade);
    }

    return 0;
}
